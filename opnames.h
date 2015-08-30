/* ex: set ro ft=c: -*- buffer-read-only: t -*-
 *
 *    opnames.h
 *
 *    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
 *    2008 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/opcode.pl from its data.
 * Any changes made here will be lost!
 */

typedef enum opcode {
	OP_NULL		 = 0,
	OP_STUB		 = 1,
	OP_SCALAR	 = 2,
	OP_PUSHMARK	 = 3,
	OP_WANTARRAY	 = 4,
	OP_CONST	 = 5,
	OP_GVSV		 = 6,
	OP_GV		 = 7,
	OP_GELEM	 = 8,
	OP_PADSV	 = 9,
	OP_PADAV	 = 10,
	OP_PADHV	 = 11,
	OP_PADANY	 = 12,
	OP_PUSHRE	 = 13,
	OP_SASSIGN	 = 14,
	OP_AASSIGN	 = 15,
	OP_CHOP		 = 16,
	OP_SCHOP	 = 17,
	OP_CHOMP	 = 18,
	OP_SCHOMP	 = 19,
	OP_DEFINED	 = 20,
	OP_UNDEF	 = 21,
	OP_STUDY	 = 22,
	OP_POS		 = 23,
	OP_PREINC	 = 24,
	OP_I_PREINC	 = 25,
	OP_PREDEC	 = 26,
	OP_I_PREDEC	 = 27,
	OP_POSTINC	 = 28,
	OP_I_POSTINC	 = 29,
	OP_POSTDEC	 = 30,
	OP_I_POSTDEC	 = 31,
	OP_POW		 = 32,
	OP_MULTIPLY	 = 33,
	OP_I_MULTIPLY	 = 34,
	OP_U_MULTIPLY	 = 35,
	OP_DIVIDE	 = 36,
	OP_I_DIVIDE	 = 37,
	OP_MODULO	 = 38,
	OP_I_MODULO	 = 39,
	OP_REPEAT	 = 40,
	OP_ADD		 = 41,
	OP_I_ADD	 = 42,
	OP_U_ADD	 = 43,
	OP_SUBTRACT	 = 44,
	OP_I_SUBTRACT	 = 45,
	OP_CONCAT	 = 46,
	OP_STRINGIFY	 = 47,
	OP_LEFT_SHIFT	 = 48,
	OP_RIGHT_SHIFT	 = 49,
	OP_LT		 = 50,
	OP_I_LT		 = 51,
	OP_GT		 = 52,
	OP_I_GT		 = 53,
	OP_LE		 = 54,
	OP_I_LE		 = 55,
	OP_GE		 = 56,
	OP_I_GE		 = 57,
	OP_EQ		 = 58,
	OP_I_EQ		 = 59,
	OP_NE		 = 60,
	OP_I_NE		 = 61,
	OP_CMP		 = 62,
	OP_I_CMP	 = 63,
	OP_S_LT		 = 64,
	OP_S_GT		 = 65,
	OP_S_LE		 = 66,
	OP_S_GE		 = 67,
	OP_S_EQ		 = 68,
	OP_S_NE		 = 69,
	OP_S_CMP	 = 70,
	OP_BIT_AND	 = 71,
	OP_BIT_XOR	 = 72,
	OP_BIT_OR	 = 73,
	OP_I_BIT_AND	 = 74,
	OP_I_BIT_XOR	 = 75,
	OP_I_BIT_OR	 = 76,
	OP_S_BIT_AND	 = 77,
	OP_S_BIT_XOR	 = 78,
	OP_S_BIT_OR	 = 79,
	OP_NEGATE	 = 80,
	OP_I_NEGATE	 = 81,
	OP_NOT		 = 82,
	OP_COMPLEMENT	 = 83,
	OP_I_COMPLEMENT	 = 84,
	OP_S_COMPLEMENT	 = 85,
	OP_SMARTMATCH	 = 86,
	OP_ATAN2	 = 87,
	OP_SIN		 = 88,
	OP_COS		 = 89,
	OP_RAND		 = 90,
	OP_SRAND	 = 91,
	OP_EXP		 = 92,
	OP_LOG		 = 93,
	OP_SQRT		 = 94,
	OP_INT		 = 95,
	OP_HEX		 = 96,
	OP_OCT		 = 97,
	OP_ABS		 = 98,
	OP_RV2GV	 = 99,
	OP_RV2SV	 = 100,
	OP_AV2ARYLEN	 = 101,
	OP_RV2CV	 = 102,
	OP_ANONCODE	 = 103,
	OP_PROTOTYPE	 = 104,
	OP_REFGEN	 = 105,
	OP_SREFGEN	 = 106,
	OP_REF		 = 107,
	OP_BLESS	 = 108,
	OP_BACKTICK	 = 109,
	OP_GLOB		 = 110,
	OP_READLINE	 = 111,
	OP_RCATLINE	 = 112,
	OP_REGCMAYBE	 = 113,
	OP_REGCRESET	 = 114,
	OP_REGCOMP	 = 115,
	OP_MATCH	 = 116,
	OP_QR		 = 117,
	OP_SUBST	 = 118,
	OP_SUBSTCONT	 = 119,
	OP_TRANS	 = 120,
	OP_TRANSR	 = 121,
	OP_LENGTH	 = 122,
	OP_SUBSTR	 = 123,
	OP_VEC		 = 124,
	OP_INDEX	 = 125,
	OP_RINDEX	 = 126,
	OP_SPRINTF	 = 127,
	OP_FORMLINE	 = 128,
	OP_ORD		 = 129,
	OP_CHR		 = 130,
	OP_CRYPT	 = 131,
	OP_UCFIRST	 = 132,
	OP_LCFIRST	 = 133,
	OP_UC		 = 134,
	OP_LC		 = 135,
	OP_QUOTEMETA	 = 136,
	OP_RV2AV	 = 137,
	OP_AELEMFAST	 = 138,
	OP_AELEMFAST_LEX = 139,
	OP_AELEM	 = 140,
	OP_I_AELEM	 = 141,
	OP_N_AELEM	 = 142,
	OP_S_AELEM	 = 143,
	OP_AELEMFAST_LEX_U = 144,
	OP_AELEM_U	 = 145,
	OP_I_AELEM_U	 = 146,
	OP_N_AELEM_U	 = 147,
	OP_S_AELEM_U	 = 148,
	OP_ASLICE	 = 149,
	OP_KVASLICE	 = 150,
	OP_AEACH	 = 151,
	OP_AKEYS	 = 152,
	OP_AVALUES	 = 153,
	OP_EACH		 = 154,
	OP_VALUES	 = 155,
	OP_KEYS		 = 156,
	OP_DELETE	 = 157,
	OP_EXISTS	 = 158,
	OP_RV2HV	 = 159,
	OP_HELEM	 = 160,
	OP_HSLICE	 = 161,
	OP_KVHSLICE	 = 162,
	OP_MULTIDEREF	 = 163,
	OP_UNPACK	 = 164,
	OP_PACK		 = 165,
	OP_SPLIT	 = 166,
	OP_JOIN		 = 167,
	OP_LIST		 = 168,
	OP_LSLICE	 = 169,
	OP_ANONLIST	 = 170,
	OP_ANONHASH	 = 171,
	OP_SPLICE	 = 172,
	OP_PUSH		 = 173,
	OP_POP		 = 174,
	OP_SHIFT	 = 175,
	OP_UNSHIFT	 = 176,
	OP_SORT		 = 177,
	OP_REVERSE	 = 178,
	OP_GREPSTART	 = 179,
	OP_GREPWHILE	 = 180,
	OP_MAPSTART	 = 181,
	OP_MAPWHILE	 = 182,
	OP_RANGE	 = 183,
	OP_FLIP		 = 184,
	OP_FLOP		 = 185,
	OP_AND		 = 186,
	OP_OR		 = 187,
	OP_XOR		 = 188,
	OP_DOR		 = 189,
	OP_COND_EXPR	 = 190,
	OP_ANDASSIGN	 = 191,
	OP_ORASSIGN	 = 192,
	OP_DORASSIGN	 = 193,
	OP_METHOD	 = 194,
	OP_ENTERSUB	 = 195,
	OP_ENTERXSSUB	 = 196,
	OP_LEAVESUB	 = 197,
	OP_LEAVESUBLV	 = 198,
	OP_CALLER	 = 199,
	OP_WARN		 = 200,
	OP_DIE		 = 201,
	OP_RESET	 = 202,
	OP_LINESEQ	 = 203,
	OP_NEXTSTATE	 = 204,
	OP_DBSTATE	 = 205,
	OP_UNSTACK	 = 206,
	OP_ENTER	 = 207,
	OP_LEAVE	 = 208,
	OP_SCOPE	 = 209,
	OP_ENTERITER	 = 210,
	OP_ITER		 = 211,
	OP_ENTERLOOP	 = 212,
	OP_LEAVELOOP	 = 213,
	OP_RETURN	 = 214,
	OP_LAST		 = 215,
	OP_NEXT		 = 216,
	OP_REDO		 = 217,
	OP_DUMP		 = 218,
	OP_GOTO		 = 219,
	OP_EXIT		 = 220,
	OP_METHOD_NAMED	 = 221,
	OP_METHOD_SUPER	 = 222,
	OP_METHOD_REDIR	 = 223,
	OP_METHOD_REDIR_SUPER = 224,
	OP_ENTERGIVEN	 = 225,
	OP_LEAVEGIVEN	 = 226,
	OP_ENTERWHEN	 = 227,
	OP_LEAVEWHEN	 = 228,
	OP_BREAK	 = 229,
	OP_CONTINUE	 = 230,
	OP_OPEN		 = 231,
	OP_CLOSE	 = 232,
	OP_PIPE_OP	 = 233,
	OP_FILENO	 = 234,
	OP_UMASK	 = 235,
	OP_BINMODE	 = 236,
	OP_TIE		 = 237,
	OP_UNTIE	 = 238,
	OP_TIED		 = 239,
	OP_DBMOPEN	 = 240,
	OP_DBMCLOSE	 = 241,
	OP_SSELECT	 = 242,
	OP_SELECT	 = 243,
	OP_GETC		 = 244,
	OP_READ		 = 245,
	OP_ENTERWRITE	 = 246,
	OP_LEAVEWRITE	 = 247,
	OP_PRTF		 = 248,
	OP_PRINT	 = 249,
	OP_SAY		 = 250,
	OP_SYSOPEN	 = 251,
	OP_SYSSEEK	 = 252,
	OP_SYSREAD	 = 253,
	OP_SYSWRITE	 = 254,
	OP_EOF		 = 255,
	OP_TELL		 = 256,
	OP_SEEK		 = 257,
	OP_TRUNCATE	 = 258,
	OP_FCNTL	 = 259,
	OP_IOCTL	 = 260,
	OP_FLOCK	 = 261,
	OP_SEND		 = 262,
	OP_RECV		 = 263,
	OP_SOCKET	 = 264,
	OP_SOCKPAIR	 = 265,
	OP_BIND		 = 266,
	OP_CONNECT	 = 267,
	OP_LISTEN	 = 268,
	OP_ACCEPT	 = 269,
	OP_SHUTDOWN	 = 270,
	OP_GSOCKOPT	 = 271,
	OP_SSOCKOPT	 = 272,
	OP_GETSOCKNAME	 = 273,
	OP_GETPEERNAME	 = 274,
	OP_LSTAT	 = 275,
	OP_STAT		 = 276,
	OP_FTRREAD	 = 277,
	OP_FTRWRITE	 = 278,
	OP_FTREXEC	 = 279,
	OP_FTEREAD	 = 280,
	OP_FTEWRITE	 = 281,
	OP_FTEEXEC	 = 282,
	OP_FTIS		 = 283,
	OP_FTSIZE	 = 284,
	OP_FTMTIME	 = 285,
	OP_FTATIME	 = 286,
	OP_FTCTIME	 = 287,
	OP_FTROWNED	 = 288,
	OP_FTEOWNED	 = 289,
	OP_FTZERO	 = 290,
	OP_FTSOCK	 = 291,
	OP_FTCHR	 = 292,
	OP_FTBLK	 = 293,
	OP_FTFILE	 = 294,
	OP_FTDIR	 = 295,
	OP_FTPIPE	 = 296,
	OP_FTSUID	 = 297,
	OP_FTSGID	 = 298,
	OP_FTSVTX	 = 299,
	OP_FTLINK	 = 300,
	OP_FTTTY	 = 301,
	OP_FTTEXT	 = 302,
	OP_FTBINARY	 = 303,
	OP_CHDIR	 = 304,
	OP_CHOWN	 = 305,
	OP_CHROOT	 = 306,
	OP_UNLINK	 = 307,
	OP_CHMOD	 = 308,
	OP_UTIME	 = 309,
	OP_RENAME	 = 310,
	OP_LINK		 = 311,
	OP_SYMLINK	 = 312,
	OP_READLINK	 = 313,
	OP_MKDIR	 = 314,
	OP_RMDIR	 = 315,
	OP_OPEN_DIR	 = 316,
	OP_READDIR	 = 317,
	OP_TELLDIR	 = 318,
	OP_SEEKDIR	 = 319,
	OP_REWINDDIR	 = 320,
	OP_CLOSEDIR	 = 321,
	OP_FORK		 = 322,
	OP_WAIT		 = 323,
	OP_WAITPID	 = 324,
	OP_SYSTEM	 = 325,
	OP_EXEC		 = 326,
	OP_KILL		 = 327,
	OP_GETPPID	 = 328,
	OP_GETPGRP	 = 329,
	OP_SETPGRP	 = 330,
	OP_GETPRIORITY	 = 331,
	OP_SETPRIORITY	 = 332,
	OP_TIME		 = 333,
	OP_TMS		 = 334,
	OP_LOCALTIME	 = 335,
	OP_GMTIME	 = 336,
	OP_ALARM	 = 337,
	OP_SLEEP	 = 338,
	OP_SHMGET	 = 339,
	OP_SHMCTL	 = 340,
	OP_SHMREAD	 = 341,
	OP_SHMWRITE	 = 342,
	OP_MSGGET	 = 343,
	OP_MSGCTL	 = 344,
	OP_MSGSND	 = 345,
	OP_MSGRCV	 = 346,
	OP_SEMOP	 = 347,
	OP_SEMGET	 = 348,
	OP_SEMCTL	 = 349,
	OP_REQUIRE	 = 350,
	OP_DOFILE	 = 351,
	OP_HINTSEVAL	 = 352,
	OP_ENTEREVAL	 = 353,
	OP_LEAVEEVAL	 = 354,
	OP_ENTERTRY	 = 355,
	OP_LEAVETRY	 = 356,
	OP_GHBYNAME	 = 357,
	OP_GHBYADDR	 = 358,
	OP_GHOSTENT	 = 359,
	OP_GNBYNAME	 = 360,
	OP_GNBYADDR	 = 361,
	OP_GNETENT	 = 362,
	OP_GPBYNAME	 = 363,
	OP_GPBYNUMBER	 = 364,
	OP_GPROTOENT	 = 365,
	OP_GSBYNAME	 = 366,
	OP_GSBYPORT	 = 367,
	OP_GSERVENT	 = 368,
	OP_SHOSTENT	 = 369,
	OP_SNETENT	 = 370,
	OP_SPROTOENT	 = 371,
	OP_SSERVENT	 = 372,
	OP_EHOSTENT	 = 373,
	OP_ENETENT	 = 374,
	OP_EPROTOENT	 = 375,
	OP_ESERVENT	 = 376,
	OP_GPWNAM	 = 377,
	OP_GPWUID	 = 378,
	OP_GPWENT	 = 379,
	OP_SPWENT	 = 380,
	OP_EPWENT	 = 381,
	OP_GGRNAM	 = 382,
	OP_GGRGID	 = 383,
	OP_GGRENT	 = 384,
	OP_SGRENT	 = 385,
	OP_EGRENT	 = 386,
	OP_GETLOGIN	 = 387,
	OP_SYSCALL	 = 388,
	OP_LOCK		 = 389,
	OP_ONCE		 = 390,
	OP_CUSTOM	 = 391,
	OP_COREARGS	 = 392,
	OP_RUNCV	 = 393,
	OP_FC		 = 394,
	OP_PADCV	 = 395,
	OP_INTROCV	 = 396,
	OP_CLONECV	 = 397,
	OP_PADRANGE	 = 398,
	OP_REFASSIGN	 = 399,
	OP_LVREF	 = 400,
	OP_LVREFSLICE	 = 401,
	OP_LVAVREF	 = 402,
	OP_ANONCONST	 = 403,
	OP_max		
} opcode;

#define MAXO 404
#define OP_FREED MAXO

/* PL_opargs encoding */

/* Lowest 10 bits of PL_opargs */
#define OA_MARK	1
#define OA_FOLDCONST	2
#define OA_RETSCALAR	4
#define OA_TARGET	8
#define OA_TARGLEX	24
#define OA_OTHERINT	32
#define OA_DANGEROUS	64
#define OA_DEFGV	128
#define OA_PURE	256
#define OA_BOXRET	512

/* The next 4 bits (10..13) encode op class information */
#define OCSHIFT 10

/* Each remaining 4bit nybbles of PL_opargs (i.e. bits 14..17, 18..21 etc)
 * encode the type for each arg */
#define OASHIFT 14

/* arg types */
#define OA_SCALAR  1
#define OA_LIST    2
#define OA_AVREF   3
#define OA_HVREF   4
#define OA_CVREF   5
#define OA_FILEREF 6
#define OA_SCALARREF 7
#define OA_OPTIONAL 8

/* 0b0011_1100_0000_0000 / 0xf000 */
#define OA_CLASS_MASK (0xf << OCSHIFT)

#define OA_BASEOP 	(0 << OCSHIFT)
#define OA_UNOP 	(1 << OCSHIFT)
#define OA_BINOP 	(2 << OCSHIFT)
#define OA_LOGOP 	(3 << OCSHIFT)
#define OA_LISTOP 	(4 << OCSHIFT)
#define OA_PMOP 	(5 << OCSHIFT)
#define OA_SVOP 	(6 << OCSHIFT)
#define OA_PADOP 	(7 << OCSHIFT)
#define OA_PVOP_OR_SVOP (8 << OCSHIFT)
#define OA_LOOP 	(9 << OCSHIFT)
#define OA_COP 		(10 << OCSHIFT)
#define OA_BASEOP_OR_UNOP (11 << OCSHIFT)
#define OA_FILESTATOP 	(12 << OCSHIFT)
#define OA_LOOPEXOP 	(13 << OCSHIFT)
#define OA_METHOP 	(14 << OCSHIFT)
#define OA_UNOP_AUX 	(15 << OCSHIFT)


#define OP_HAS_TARGLEX(oc) ((PL_opargs[oc] & OA_TARGLEX) == OA_TARGLEX)

#define OpCLASS(oc)      (PL_opargs[(oc)] & OA_CLASS_MASK)
#define OP_IS_BASEOP(oc) (OpCLASS(oc) == OA_BASEOP || OpCLASS(oc) == OA_BASEOP_OR_UNOP)
#define OP_IS_UNOP(oc)   (OpCLASS(oc) == OA_UNOP || OpCLASS(oc) == OA_BASEOP_OR_UNOP)
#define OP_IS_BINOP(oc)  OpCLASS(oc) == OA_BINOP
#define OP_IS_LOGOP(oc)  OpCLASS(oc) == OA_LOGOP
#define OP_IS_LISTOP(oc) OpCLASS(oc) == OA_LISTOP
#define OP_IS_PMOP(oc)   OpCLASS(oc) == OA_PMOP
#define OP_IS_SVOP(oc)   (OpCLASS(oc) == OA_SVOP || OpCLASS(oc) == OA_PVOP_OR_SVOP)
#define OP_IS_PADOP(oc)  OpCLASS(oc) == OA_PADOP
#define OP_IS_LOOP(oc)   OpCLASS(oc) == OA_LOOP
#define OP_IS_COP(oc)    OpCLASS(oc) == OA_COP
#define OP_IS_FILESTATOP(oc) OpCLASS(oc) == OA_FILESTATOP
#define OP_IS_METHOP(oc) OpCLASS(oc) == OA_METHOP

/* The other OP_IS_* macros are optimized to a simple range check because
   all the member OPs are contiguous in regen/opcodes table.
   regen/opcode.pl verifies the range contiguity, or generates an OR-equals
   expression */

#define OP_HAS_LIST(oc)	\
	((oc) == OP_AASSIGN || \
	 (oc) == OP_ANONHASH || \
	 (oc) == OP_ANONLIST || \
	 (oc) == OP_ASLICE || \
	 (oc) == OP_CHMOD || \
	 (oc) == OP_CHOMP || \
	 (oc) == OP_CHOP || \
	 (oc) == OP_CHOWN || \
	 (oc) == OP_DIE || \
	 (oc) == OP_ENTERSUB || \
	 (oc) == OP_ENTERXSSUB || \
	 (oc) == OP_EXEC || \
	 (oc) == OP_FORMLINE || \
	 (oc) == OP_GREPSTART || \
	 (oc) == OP_HSLICE || \
	 (oc) == OP_JOIN || \
	 (oc) == OP_KILL || \
	 (oc) == OP_KVASLICE || \
	 (oc) == OP_KVHSLICE || \
	 (oc) == OP_LIST || \
	 (oc) == OP_LSLICE || \
	 (oc) == OP_MAPSTART || \
	 (oc) == OP_OPEN || \
	 (oc) == OP_PACK || \
	 (oc) == OP_PRINT || \
	 (oc) == OP_PRTF || \
	 (oc) == OP_PUSH || \
	 (oc) == OP_REFGEN || \
	 (oc) == OP_REPEAT || \
	 (oc) == OP_RETURN || \
	 (oc) == OP_REVERSE || \
	 (oc) == OP_SAY || \
	 (oc) == OP_SORT || \
	 (oc) == OP_SPLICE || \
	 (oc) == OP_SPRINTF || \
	 (oc) == OP_SYSCALL || \
	 (oc) == OP_SYSTEM || \
	 (oc) == OP_TIE || \
	 (oc) == OP_UNLINK || \
	 (oc) == OP_UNSHIFT || \
	 (oc) == OP_UTIME || \
	 (oc) == OP_WARN)

#define OP_IS_SOCKET(oc)	\
	((oc) >= OP_SEND && (oc) <= OP_GETPEERNAME)

#define OP_IS_FILETEST(oc)	\
	((oc) >= OP_FTRREAD && (oc) <= OP_FTBINARY)

#define OP_IS_FILETEST_ACCESS(oc)	\
	((oc) >= OP_FTRREAD && (oc) <= OP_FTEEXEC)

#define OP_IS_NUMCOMPARE(oc)	\
	((oc) >= OP_LT && (oc) <= OP_I_CMP)

#define OP_IS_DIRHOP(oc)	\
	((oc) >= OP_READDIR && (oc) <= OP_CLOSEDIR)

#define OP_IS_INFIX_BIT(oc)	\
	((oc) >= OP_BIT_AND && (oc) <= OP_S_BIT_OR)

/* backcompat old Perl 5 names: */
#if 1
#define OP_NCMP		 OP_CMP
#define OP_I_NCMP	 OP_I_CMP
#define OP_SLT		 OP_S_LT
#define OP_SGT		 OP_S_GT
#define OP_SLE		 OP_S_LE
#define OP_SGE		 OP_S_GE
#define OP_SEQ		 OP_S_EQ
#define OP_SNE		 OP_S_NE
#define OP_SCMP		 OP_S_CMP
#define OP_NBIT_AND	 OP_I_BIT_AND
#define OP_NBIT_XOR	 OP_I_BIT_XOR
#define OP_NBIT_OR	 OP_I_BIT_OR
#define OP_SBIT_AND	 OP_S_BIT_AND
#define OP_SBIT_XOR	 OP_S_BIT_XOR
#define OP_SBIT_OR	 OP_S_BIT_OR
#define OP_NCOMPLEMENT	 OP_I_COMPLEMENT
#define OP_SCOMPLEMENT	 OP_S_COMPLEMENT

#define Perl_pp_ncmp	 Perl_pp_cmp
#define Perl_pp_i_ncmp	 Perl_pp_i_cmp
#define Perl_pp_slt	 Perl_pp_s_lt
#define Perl_pp_sgt	 Perl_pp_s_gt
#define Perl_pp_sle	 Perl_pp_s_le
#define Perl_pp_sge	 Perl_pp_s_ge
#define Perl_pp_seq	 Perl_pp_s_eq
#define Perl_pp_sne	 Perl_pp_s_ne
#define Perl_pp_scmp	 Perl_pp_s_cmp
#define Perl_pp_nbit_and Perl_pp_i_bit_and
#define Perl_pp_nbit_xor Perl_pp_i_bit_xor
#define Perl_pp_nbit_or	 Perl_pp_i_bit_or
#define Perl_pp_sbit_and Perl_pp_s_bit_and
#define Perl_pp_sbit_xor Perl_pp_s_bit_xor
#define Perl_pp_sbit_or	 Perl_pp_s_bit_or
#define Perl_pp_ncomplement Perl_pp_i_complement
#define Perl_pp_scomplement Perl_pp_s_complement
#endif

/* ex: set ro: */
