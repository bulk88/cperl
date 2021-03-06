# cperl status

[![Build Status](https://travis-ci.org/perl11/cperl.svg?branch=master)](https://travis-ci.org/perl11/cperl)

The name **cperl** stands for **a perl with classes, types, compiler
support, or just a company-friendly perl**, but currently it's only a
better 5.22 based variant without classes.

cperl started Feb. 2015 when `:const` was added, parrot was killed and
it became clear that optimizing for fun is better than waiting for
someone else to allow it.

Currently it is about 1.5x faster than perl5.22 overall, >2x faster
then 5.14 and uses the least amount of memory measured since 5.6,
i.e. less than 5.10 and 5.6.2, which were the previous leaders. While
perl5.22 uses the most memory yet measured.

But not all of the wanted features are merged.  The plan is to support
most perl5-compatible perl6 features (*"do not break CPAN"*), improve
performance and memory usage, re-establish compiler (`B::C`) support,
re-establish perl5 core development which essentially stopped 2002,
use perl6-like development policies, and better security fixes and
maintenance than the upstream p5p perl5. See [README.cperl](perlcperl.html).

Tested and developed on linux and darwin 64bit. darwin 32bit fails
on two unrelated core tests (issignaling setpayloadsig + chmod linked in).

The first release based on 5.22.1 is scheduled on Sep 14. 2015.

All tests pass, most of CPAN works, 3 fixes in the distroprefs repo
for `Variable::Magic` and `CPAN::Meta::Requirements` and `version` are needed.
This is much less than with a typical major perl5 release.

![Memory usage: perl -e0](cperl-m0.png)

![Memory usage: with Config_heavy](cperl-p0.png)

![Memory usage with unicode s///i](cperl-p1.png)

Issues will be copied over from our internal stash repo to the public
github repo soon.

# In the stable master branch are the following major features

* coretypes (Int, UInt, Num, Str. lowercase native types accepted)
* types in signatures as designed and also as attribute
* function return types declarations as attribute
* many more builtin function attributes
* shaped arrays with compile-time checks and optims
* static loop optims
* fast arithmetic overflow
* convert static method to subs
* Config as XS
* strict, attributes, DynaLoader, XSLoader as builtin packages, rewritten in C
* changed default hash function to the fastest FNV1A *(as in the stableperl fork)*
* seperate XS and PP XS calls dynamically with a new enterxssub op
* -DI and -Dk
* add some unicode ops
* improved build system (make -s, faster, CC vs LD confusion)
* hash keys keep the tainted info. see [perlsec](http://perldoc.perl.org/perlsec.html#Taint-mode)
* fix ops using lexical `$_`
* readonly packages can be cloned with threads

Most of them only would have a chance to be merged upstream if a
p5p committer would have written it.

But some features revert decisions p5p already made. See [README.cperl](perlcperl.html).
When in doubt I went with the decisions and policies perl5 made
before 2001. It is very unlikely that p5p will revert their own design
mistakes. It never happened so far.

# Known bugs

See the github issues: [github.com/perl11/cperl/issues](http://github.com/perl11/cperl/issues)

With 32bit fast-arithmetic optimizations are currently disabled.

# Branch overview

## Bugfixes for perl5 upstream

* [merge-upstream](http://github.com/perl11/cperl/commits/merge-upstream)

This can be easily taken up upstream, was already perlbug'ed and
published, and do not violate any of the p5p commit policies and
previous decisions.  From those 47 patches 2 were taken so far, some
were rejected and 2 were butchered, i.e. rewritten in a worse way.

## Almost ready branches, only minor tests are failing

Those branches could theoretically be merged upstream, but the chances
are limited. So they are based on master.

* [feature/CM-600-cperl-cowrefcnt](http://github.com/perl11/cperl/commits/feature/CM-600-cperl-cowrefcnt)

  works for the compiler, but does not do COW yet, i.e. slower for
  uncompiled perls, faster for compiled.

* [feature/CM-367-cperl-warnings-xs-carp](http://github.com/perl11/cperl/commits/feature/CM-367-cperl-warnings-xs-carp)
* [feature/CM-367-cperl-carp-builtin](http://github.com/perl11/cperl/commits/feature/CM-367-cperl-carp-builtin)
* [feature/CM-370-cperl-warnings-xs](http://github.com/perl11/cperl/commits/feature/CM-370-cperl-warnings-xs)

  much faster and much less memory, but 3 minor scope test fails.

* [feature/CM-317-cperl-signatures3](http://github.com/perl11/cperl/commits/feature/CM-317-cperl-signatures3)

  proper sigs on top of davem's OP_SIGNATURE, 2x faster

* [feature/CM-317-cperl-signatures3-CM-690-nl](http://github.com/perl11/cperl/commits/feature/CM-317-cperl-signatures3-CM-690-nl)

  newlines in sigs broken, adjusted the tests.

* [feature/CM-916-cperl-no-miniperl](http://github.com/perl11/cperl/commits/feature/CM-916-cperl-no-miniperl)

  Need to fix some Makefile deps and break cross-references

* [feature/CM-626-cperl-use-dots](http://github.com/perl11/cperl/commits/feature/CM-626-cperl-use-dots)

  works, but unsure if good enough. `.` instead of `->` works only for
  a few method calls and clashes with string concat. A disruptive
  design decision, which probably cannot be backported. Chip has a
  perl6-like patch which changes `.` to `~` for string concat also,
  but this doesn't accept valid perl5 syntax then. a blocker.

## A bit more work is needed for

These are major new features, and have no chance to be merged upstream.
They also revert some wrong decisions p5p already made.

* [feature/CM-713-cperl-native-types](http://github.com/perl11/cperl/commits/feature/CM-713-cperl-native-types)
  int, uint, num, str. unboxed data on the stack and pads. some minor compiler fixes needed

* [feature/CM-707-cperl-inline-subs](http://github.com/perl11/cperl/commits/feature/CM-707-cperl-inline-subs)

  some compiler fixes needed

* [feature/CM-712-cperl-types-proto](http://github.com/perl11/cperl/commits/feature/CM-712-cperl-types-proto)
  constant fold everything, not only with empty `()` protos

* [feature/CM-322-cperl-new-hash-table](http://github.com/perl11/cperl/commits/feature/CM-322-cperl-new-hash-table)

  lots of small attempts, but still too hairy. needs a complete hash rewrite probably.

* [feature/CM-910-cperl-multi](http://github.com/perl11/cperl/commits/feature/CM-910-cperl-multi)

  class, method and multi keywords but no dispatch, subtyping and type checks yet. in work.

## Soon

* user facing types and classes, multiple dispatch

* builtin macros

* builtin ffi

2015-09-09 rurban
