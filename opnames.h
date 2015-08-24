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
	OP_BOX_INT	 = 99,
	OP_BOX_UINT	 = 100,
	OP_BOX_STR	 = 101,
	OP_BOX_NUM	 = 102,
	OP_UNBOX_INT	 = 103,
	OP_UNBOX_UINT	 = 104,
	OP_UNBOX_STR	 = 105,
	OP_UNBOX_NUM	 = 106,
	OP_UINT_LEFT_SHIFT = 107,
	OP_UINT_RIGHT_SHIFT = 108,
	OP_UINT_POW	 = 109,
	OP_UINT_COMPLEMENT = 110,
	OP_INT_PREINC	 = 111,
	OP_INT_PREDEC	 = 112,
	OP_INT_POSTINC	 = 113,
	OP_INT_POSTDEC	 = 114,
	OP_INT_ADD	 = 115,
	OP_INT_SUBTRACT	 = 116,
	OP_INT_MULTIPLY	 = 117,
	OP_INT_DIVIDE	 = 118,
	OP_INT_MODULO	 = 119,
	OP_INT_NEGATE	 = 120,
	OP_INT_NOT	 = 121,
	OP_INT_ABS	 = 122,
	OP_INT_LT	 = 123,
	OP_INT_GT	 = 124,
	OP_INT_LE	 = 125,
	OP_INT_GE	 = 126,
	OP_INT_EQ	 = 127,
	OP_INT_NE	 = 128,
	OP_NUM_ADD	 = 129,
	OP_NUM_SUBTRACT	 = 130,
	OP_NUM_MULTIPLY	 = 131,
	OP_NUM_DIVIDE	 = 132,
	OP_NUM_ATAN2	 = 133,
	OP_NUM_POW	 = 134,
	OP_NUM_SIN	 = 135,
	OP_NUM_COS	 = 136,
	OP_NUM_EXP	 = 137,
	OP_NUM_LOG	 = 138,
	OP_NUM_SQRT	 = 139,
	OP_RV2GV	 = 140,
	OP_RV2SV	 = 141,
	OP_AV2ARYLEN	 = 142,
	OP_RV2CV	 = 143,
	OP_ANONCODE	 = 144,
	OP_PROTOTYPE	 = 145,
	OP_REFGEN	 = 146,
	OP_SREFGEN	 = 147,
	OP_REF		 = 148,
	OP_BLESS	 = 149,
	OP_BACKTICK	 = 150,
	OP_GLOB		 = 151,
	OP_READLINE	 = 152,
	OP_RCATLINE	 = 153,
	OP_REGCMAYBE	 = 154,
	OP_REGCRESET	 = 155,
	OP_REGCOMP	 = 156,
	OP_MATCH	 = 157,
	OP_QR		 = 158,
	OP_SUBST	 = 159,
	OP_SUBSTCONT	 = 160,
	OP_TRANS	 = 161,
	OP_TRANSR	 = 162,
	OP_LENGTH	 = 163,
	OP_SUBSTR	 = 164,
	OP_VEC		 = 165,
	OP_INDEX	 = 166,
	OP_RINDEX	 = 167,
	OP_SPRINTF	 = 168,
	OP_FORMLINE	 = 169,
	OP_ORD		 = 170,
	OP_CHR		 = 171,
	OP_CRYPT	 = 172,
	OP_UCFIRST	 = 173,
	OP_LCFIRST	 = 174,
	OP_UC		 = 175,
	OP_LC		 = 176,
	OP_QUOTEMETA	 = 177,
	OP_RV2AV	 = 178,
	OP_AELEMFAST	 = 179,
	OP_AELEMFAST_LEX = 180,
	OP_AELEM	 = 181,
	OP_I_AELEM	 = 182,
	OP_N_AELEM	 = 183,
	OP_S_AELEM	 = 184,
	OP_INT_AELEM	 = 185,
	OP_NUM_AELEM	 = 186,
	OP_STR_AELEM	 = 187,
	OP_AELEMFAST_LEX_U = 188,
	OP_AELEM_U	 = 189,
	OP_I_AELEM_U	 = 190,
	OP_N_AELEM_U	 = 191,
	OP_S_AELEM_U	 = 192,
	OP_INT_AELEM_U	 = 193,
	OP_NUM_AELEM_U	 = 194,
	OP_STR_AELEM_U	 = 195,
	OP_ASLICE	 = 196,
	OP_KVASLICE	 = 197,
	OP_AEACH	 = 198,
	OP_AKEYS	 = 199,
	OP_AVALUES	 = 200,
	OP_EACH		 = 201,
	OP_VALUES	 = 202,
	OP_KEYS		 = 203,
	OP_DELETE	 = 204,
	OP_EXISTS	 = 205,
	OP_RV2HV	 = 206,
	OP_HELEM	 = 207,
	OP_HSLICE	 = 208,
	OP_KVHSLICE	 = 209,
	OP_MULTIDEREF	 = 210,
	OP_UNPACK	 = 211,
	OP_PACK		 = 212,
	OP_SPLIT	 = 213,
	OP_JOIN		 = 214,
	OP_LIST		 = 215,
	OP_LSLICE	 = 216,
	OP_ANONLIST	 = 217,
	OP_ANONHASH	 = 218,
	OP_SPLICE	 = 219,
	OP_PUSH		 = 220,
	OP_POP		 = 221,
	OP_SHIFT	 = 222,
	OP_UNSHIFT	 = 223,
	OP_SORT		 = 224,
	OP_REVERSE	 = 225,
	OP_GREPSTART	 = 226,
	OP_GREPWHILE	 = 227,
	OP_MAPSTART	 = 228,
	OP_MAPWHILE	 = 229,
	OP_RANGE	 = 230,
	OP_FLIP		 = 231,
	OP_FLOP		 = 232,
	OP_AND		 = 233,
	OP_OR		 = 234,
	OP_XOR		 = 235,
	OP_DOR		 = 236,
	OP_COND_EXPR	 = 237,
	OP_ANDASSIGN	 = 238,
	OP_ORASSIGN	 = 239,
	OP_DORASSIGN	 = 240,
	OP_METHOD	 = 241,
	OP_ENTERSUB	 = 242,
	OP_ENTERXSSUB	 = 243,
	OP_LEAVESUB	 = 244,
	OP_LEAVESUBLV	 = 245,
	OP_CALLER	 = 246,
	OP_WARN		 = 247,
	OP_DIE		 = 248,
	OP_RESET	 = 249,
	OP_LINESEQ	 = 250,
	OP_NEXTSTATE	 = 251,
	OP_DBSTATE	 = 252,
	OP_UNSTACK	 = 253,
	OP_ENTER	 = 254,
	OP_LEAVE	 = 255,
	OP_SCOPE	 = 256,
	OP_ENTERITER	 = 257,
	OP_ITER		 = 258,
	OP_ENTERLOOP	 = 259,
	OP_LEAVELOOP	 = 260,
	OP_RETURN	 = 261,
	OP_LAST		 = 262,
	OP_NEXT		 = 263,
	OP_REDO		 = 264,
	OP_DUMP		 = 265,
	OP_GOTO		 = 266,
	OP_EXIT		 = 267,
	OP_METHOD_NAMED	 = 268,
	OP_METHOD_SUPER	 = 269,
	OP_METHOD_REDIR	 = 270,
	OP_METHOD_REDIR_SUPER = 271,
	OP_ENTERGIVEN	 = 272,
	OP_LEAVEGIVEN	 = 273,
	OP_ENTERWHEN	 = 274,
	OP_LEAVEWHEN	 = 275,
	OP_BREAK	 = 276,
	OP_CONTINUE	 = 277,
	OP_OPEN		 = 278,
	OP_CLOSE	 = 279,
	OP_PIPE_OP	 = 280,
	OP_FILENO	 = 281,
	OP_UMASK	 = 282,
	OP_BINMODE	 = 283,
	OP_TIE		 = 284,
	OP_UNTIE	 = 285,
	OP_TIED		 = 286,
	OP_DBMOPEN	 = 287,
	OP_DBMCLOSE	 = 288,
	OP_SSELECT	 = 289,
	OP_SELECT	 = 290,
	OP_GETC		 = 291,
	OP_READ		 = 292,
	OP_ENTERWRITE	 = 293,
	OP_LEAVEWRITE	 = 294,
	OP_PRTF		 = 295,
	OP_PRINT	 = 296,
	OP_SAY		 = 297,
	OP_SYSOPEN	 = 298,
	OP_SYSSEEK	 = 299,
	OP_SYSREAD	 = 300,
	OP_SYSWRITE	 = 301,
	OP_EOF		 = 302,
	OP_TELL		 = 303,
	OP_SEEK		 = 304,
	OP_TRUNCATE	 = 305,
	OP_FCNTL	 = 306,
	OP_IOCTL	 = 307,
	OP_FLOCK	 = 308,
	OP_SEND		 = 309,
	OP_RECV		 = 310,
	OP_SOCKET	 = 311,
	OP_SOCKPAIR	 = 312,
	OP_BIND		 = 313,
	OP_CONNECT	 = 314,
	OP_LISTEN	 = 315,
	OP_ACCEPT	 = 316,
	OP_SHUTDOWN	 = 317,
	OP_GSOCKOPT	 = 318,
	OP_SSOCKOPT	 = 319,
	OP_GETSOCKNAME	 = 320,
	OP_GETPEERNAME	 = 321,
	OP_LSTAT	 = 322,
	OP_STAT		 = 323,
	OP_FTRREAD	 = 324,
	OP_FTRWRITE	 = 325,
	OP_FTREXEC	 = 326,
	OP_FTEREAD	 = 327,
	OP_FTEWRITE	 = 328,
	OP_FTEEXEC	 = 329,
	OP_FTIS		 = 330,
	OP_FTSIZE	 = 331,
	OP_FTMTIME	 = 332,
	OP_FTATIME	 = 333,
	OP_FTCTIME	 = 334,
	OP_FTROWNED	 = 335,
	OP_FTEOWNED	 = 336,
	OP_FTZERO	 = 337,
	OP_FTSOCK	 = 338,
	OP_FTCHR	 = 339,
	OP_FTBLK	 = 340,
	OP_FTFILE	 = 341,
	OP_FTDIR	 = 342,
	OP_FTPIPE	 = 343,
	OP_FTSUID	 = 344,
	OP_FTSGID	 = 345,
	OP_FTSVTX	 = 346,
	OP_FTLINK	 = 347,
	OP_FTTTY	 = 348,
	OP_FTTEXT	 = 349,
	OP_FTBINARY	 = 350,
	OP_CHDIR	 = 351,
	OP_CHOWN	 = 352,
	OP_CHROOT	 = 353,
	OP_UNLINK	 = 354,
	OP_CHMOD	 = 355,
	OP_UTIME	 = 356,
	OP_RENAME	 = 357,
	OP_LINK		 = 358,
	OP_SYMLINK	 = 359,
	OP_READLINK	 = 360,
	OP_MKDIR	 = 361,
	OP_RMDIR	 = 362,
	OP_OPEN_DIR	 = 363,
	OP_READDIR	 = 364,
	OP_TELLDIR	 = 365,
	OP_SEEKDIR	 = 366,
	OP_REWINDDIR	 = 367,
	OP_CLOSEDIR	 = 368,
	OP_FORK		 = 369,
	OP_WAIT		 = 370,
	OP_WAITPID	 = 371,
	OP_SYSTEM	 = 372,
	OP_EXEC		 = 373,
	OP_KILL		 = 374,
	OP_GETPPID	 = 375,
	OP_GETPGRP	 = 376,
	OP_SETPGRP	 = 377,
	OP_GETPRIORITY	 = 378,
	OP_SETPRIORITY	 = 379,
	OP_TIME		 = 380,
	OP_TMS		 = 381,
	OP_LOCALTIME	 = 382,
	OP_GMTIME	 = 383,
	OP_ALARM	 = 384,
	OP_SLEEP	 = 385,
	OP_SHMGET	 = 386,
	OP_SHMCTL	 = 387,
	OP_SHMREAD	 = 388,
	OP_SHMWRITE	 = 389,
	OP_MSGGET	 = 390,
	OP_MSGCTL	 = 391,
	OP_MSGSND	 = 392,
	OP_MSGRCV	 = 393,
	OP_SEMOP	 = 394,
	OP_SEMGET	 = 395,
	OP_SEMCTL	 = 396,
	OP_REQUIRE	 = 397,
	OP_DOFILE	 = 398,
	OP_HINTSEVAL	 = 399,
	OP_ENTEREVAL	 = 400,
	OP_LEAVEEVAL	 = 401,
	OP_ENTERTRY	 = 402,
	OP_LEAVETRY	 = 403,
	OP_GHBYNAME	 = 404,
	OP_GHBYADDR	 = 405,
	OP_GHOSTENT	 = 406,
	OP_GNBYNAME	 = 407,
	OP_GNBYADDR	 = 408,
	OP_GNETENT	 = 409,
	OP_GPBYNAME	 = 410,
	OP_GPBYNUMBER	 = 411,
	OP_GPROTOENT	 = 412,
	OP_GSBYNAME	 = 413,
	OP_GSBYPORT	 = 414,
	OP_GSERVENT	 = 415,
	OP_SHOSTENT	 = 416,
	OP_SNETENT	 = 417,
	OP_SPROTOENT	 = 418,
	OP_SSERVENT	 = 419,
	OP_EHOSTENT	 = 420,
	OP_ENETENT	 = 421,
	OP_EPROTOENT	 = 422,
	OP_ESERVENT	 = 423,
	OP_GPWNAM	 = 424,
	OP_GPWUID	 = 425,
	OP_GPWENT	 = 426,
	OP_SPWENT	 = 427,
	OP_EPWENT	 = 428,
	OP_GGRNAM	 = 429,
	OP_GGRGID	 = 430,
	OP_GGRENT	 = 431,
	OP_SGRENT	 = 432,
	OP_EGRENT	 = 433,
	OP_GETLOGIN	 = 434,
	OP_SYSCALL	 = 435,
	OP_LOCK		 = 436,
	OP_ONCE		 = 437,
	OP_CUSTOM	 = 438,
	OP_COREARGS	 = 439,
	OP_RUNCV	 = 440,
	OP_FC		 = 441,
	OP_PADCV	 = 442,
	OP_INTROCV	 = 443,
	OP_CLONECV	 = 444,
	OP_PADRANGE	 = 445,
	OP_REFASSIGN	 = 446,
	OP_LVREF	 = 447,
	OP_LVREFSLICE	 = 448,
	OP_LVAVREF	 = 449,
	OP_ANONCONST	 = 450,
	OP_max		
} opcode;

#define MAXO 451
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
	 (oc) == OP_MSGRCV || \
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
	 (oc) == OP_SOCKPAIR || \
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
