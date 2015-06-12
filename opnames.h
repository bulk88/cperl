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
	OP_RV2GV	 = 14,
	OP_RV2SV	 = 15,
	OP_AV2ARYLEN	 = 16,
	OP_RV2CV	 = 17,
	OP_ANONCODE	 = 18,
	OP_PROTOTYPE	 = 19,
	OP_REFGEN	 = 20,
	OP_SREFGEN	 = 21,
	OP_REF		 = 22,
	OP_BLESS	 = 23,
	OP_BACKTICK	 = 24,
	OP_GLOB		 = 25,
	OP_READLINE	 = 26,
	OP_RCATLINE	 = 27,
	OP_REGCMAYBE	 = 28,
	OP_REGCRESET	 = 29,
	OP_REGCOMP	 = 30,
	OP_MATCH	 = 31,
	OP_QR		 = 32,
	OP_SUBST	 = 33,
	OP_SUBSTCONT	 = 34,
	OP_TRANS	 = 35,
	OP_TRANSR	 = 36,
	OP_SASSIGN	 = 37,
	OP_AASSIGN	 = 38,
	OP_CHOP		 = 39,
	OP_SCHOP	 = 40,
	OP_CHOMP	 = 41,
	OP_SCHOMP	 = 42,
	OP_DEFINED	 = 43,
	OP_UNDEF	 = 44,
	OP_STUDY	 = 45,
	OP_POS		 = 46,
	OP_PREINC	 = 47,
	OP_I_PREINC	 = 48,
	OP_PREDEC	 = 49,
	OP_I_PREDEC	 = 50,
	OP_POSTINC	 = 51,
	OP_I_POSTINC	 = 52,
	OP_POSTDEC	 = 53,
	OP_I_POSTDEC	 = 54,
	OP_POW		 = 55,
	OP_MULTIPLY	 = 56,
	OP_I_MULTIPLY	 = 57,
	OP_DIVIDE	 = 58,
	OP_I_DIVIDE	 = 59,
	OP_MODULO	 = 60,
	OP_I_MODULO	 = 61,
	OP_REPEAT	 = 62,
	OP_ADD		 = 63,
	OP_I_ADD	 = 64,
	OP_SUBTRACT	 = 65,
	OP_I_SUBTRACT	 = 66,
	OP_CONCAT	 = 67,
	OP_STRINGIFY	 = 68,
	OP_LEFT_SHIFT	 = 69,
	OP_RIGHT_SHIFT	 = 70,
	OP_LT		 = 71,
	OP_I_LT		 = 72,
	OP_GT		 = 73,
	OP_I_GT		 = 74,
	OP_LE		 = 75,
	OP_I_LE		 = 76,
	OP_GE		 = 77,
	OP_I_GE		 = 78,
	OP_EQ		 = 79,
	OP_I_EQ		 = 80,
	OP_NE		 = 81,
	OP_I_NE		 = 82,
	OP_NCMP		 = 83,
	OP_I_NCMP	 = 84,
	OP_SLT		 = 85,
	OP_SGT		 = 86,
	OP_SLE		 = 87,
	OP_SGE		 = 88,
	OP_SEQ		 = 89,
	OP_SNE		 = 90,
	OP_SCMP		 = 91,
	OP_BIT_AND	 = 92,
	OP_BIT_XOR	 = 93,
	OP_BIT_OR	 = 94,
	OP_NBIT_AND	 = 95,
	OP_NBIT_XOR	 = 96,
	OP_NBIT_OR	 = 97,
	OP_SBIT_AND	 = 98,
	OP_SBIT_XOR	 = 99,
	OP_SBIT_OR	 = 100,
	OP_NEGATE	 = 101,
	OP_I_NEGATE	 = 102,
	OP_NOT		 = 103,
	OP_COMPLEMENT	 = 104,
	OP_NCOMPLEMENT	 = 105,
	OP_SCOMPLEMENT	 = 106,
	OP_SMARTMATCH	 = 107,
	OP_ATAN2	 = 108,
	OP_SIN		 = 109,
	OP_COS		 = 110,
	OP_RAND		 = 111,
	OP_SRAND	 = 112,
	OP_EXP		 = 113,
	OP_LOG		 = 114,
	OP_SQRT		 = 115,
	OP_INT		 = 116,
	OP_HEX		 = 117,
	OP_OCT		 = 118,
	OP_ABS		 = 119,
	OP_BOX_INT	 = 120,
	OP_BOX_UINT	 = 121,
	OP_BOX_STR	 = 122,
	OP_BOX_NUM	 = 123,
	OP_UNBOX_INT	 = 124,
	OP_UNBOX_UINT	 = 125,
	OP_UNBOX_STR	 = 126,
	OP_UNBOX_NUM	 = 127,
	OP_UINT_LSHIFT	 = 128,
	OP_UINT_RSHIFT	 = 129,
	OP_INT_PREINC	 = 130,
	OP_INT_PREDEC	 = 131,
	OP_INT_POSTINC	 = 132,
	OP_INT_POSTDEC	 = 133,
	OP_INT_ADD	 = 134,
	OP_INT_SUBTRACT	 = 135,
	OP_INT_NEGATE	 = 136,
	OP_INT_NOT	 = 137,
	OP_INT_COMPLEMENT = 138,
	OP_STR_CONCAT	 = 139,
	OP_STR_LENGTH	 = 140,
	OP_LENGTH	 = 141,
	OP_SUBSTR	 = 142,
	OP_VEC		 = 143,
	OP_INDEX	 = 144,
	OP_RINDEX	 = 145,
	OP_SPRINTF	 = 146,
	OP_FORMLINE	 = 147,
	OP_ORD		 = 148,
	OP_CHR		 = 149,
	OP_CRYPT	 = 150,
	OP_UCFIRST	 = 151,
	OP_LCFIRST	 = 152,
	OP_UC		 = 153,
	OP_LC		 = 154,
	OP_QUOTEMETA	 = 155,
	OP_RV2AV	 = 156,
	OP_AELEMFAST	 = 157,
	OP_AELEMFAST_LEX = 158,
	OP_AELEM	 = 159,
	OP_I_AELEM	 = 160,
	OP_INT_AELEM	 = 161,
	OP_N_AELEM	 = 162,
	OP_NUM_AELEM	 = 163,
	OP_S_AELEM	 = 164,
	OP_STR_AELEM	 = 165,
	OP_ASLICE	 = 166,
	OP_KVASLICE	 = 167,
	OP_AEACH	 = 168,
	OP_AKEYS	 = 169,
	OP_AVALUES	 = 170,
	OP_EACH		 = 171,
	OP_VALUES	 = 172,
	OP_KEYS		 = 173,
	OP_DELETE	 = 174,
	OP_EXISTS	 = 175,
	OP_RV2HV	 = 176,
	OP_HELEM	 = 177,
	OP_STR_HELEM	 = 178,
	OP_STR_DELETE	 = 179,
	OP_STR_EXISTS	 = 180,
	OP_HSLICE	 = 181,
	OP_KVHSLICE	 = 182,
	OP_MULTIDEREF	 = 183,
	OP_UNPACK	 = 184,
	OP_PACK		 = 185,
	OP_SPLIT	 = 186,
	OP_JOIN		 = 187,
	OP_LIST		 = 188,
	OP_LSLICE	 = 189,
	OP_ANONLIST	 = 190,
	OP_ANONHASH	 = 191,
	OP_SPLICE	 = 192,
	OP_PUSH		 = 193,
	OP_POP		 = 194,
	OP_SHIFT	 = 195,
	OP_UNSHIFT	 = 196,
	OP_SORT		 = 197,
	OP_REVERSE	 = 198,
	OP_GREPSTART	 = 199,
	OP_GREPWHILE	 = 200,
	OP_MAPSTART	 = 201,
	OP_MAPWHILE	 = 202,
	OP_RANGE	 = 203,
	OP_FLIP		 = 204,
	OP_FLOP		 = 205,
	OP_AND		 = 206,
	OP_OR		 = 207,
	OP_XOR		 = 208,
	OP_DOR		 = 209,
	OP_COND_EXPR	 = 210,
	OP_ANDASSIGN	 = 211,
	OP_ORASSIGN	 = 212,
	OP_DORASSIGN	 = 213,
	OP_METHOD	 = 214,
	OP_ENTERSUB	 = 215,
	OP_ENTERXSSUB	 = 216,
	OP_LEAVESUB	 = 217,
	OP_LEAVESUBLV	 = 218,
	OP_CALLER	 = 219,
	OP_WARN		 = 220,
	OP_DIE		 = 221,
	OP_RESET	 = 222,
	OP_LINESEQ	 = 223,
	OP_NEXTSTATE	 = 224,
	OP_DBSTATE	 = 225,
	OP_UNSTACK	 = 226,
	OP_ENTER	 = 227,
	OP_LEAVE	 = 228,
	OP_SCOPE	 = 229,
	OP_ENTERITER	 = 230,
	OP_ITER		 = 231,
	OP_ENTERLOOP	 = 232,
	OP_LEAVELOOP	 = 233,
	OP_RETURN	 = 234,
	OP_LAST		 = 235,
	OP_NEXT		 = 236,
	OP_REDO		 = 237,
	OP_DUMP		 = 238,
	OP_GOTO		 = 239,
	OP_EXIT		 = 240,
	OP_METHOD_NAMED	 = 241,
	OP_METHOD_SUPER	 = 242,
	OP_METHOD_REDIR	 = 243,
	OP_METHOD_REDIR_SUPER = 244,
	OP_ENTERGIVEN	 = 245,
	OP_LEAVEGIVEN	 = 246,
	OP_ENTERWHEN	 = 247,
	OP_LEAVEWHEN	 = 248,
	OP_BREAK	 = 249,
	OP_CONTINUE	 = 250,
	OP_OPEN		 = 251,
	OP_CLOSE	 = 252,
	OP_PIPE_OP	 = 253,
	OP_FILENO	 = 254,
	OP_UMASK	 = 255,
	OP_BINMODE	 = 256,
	OP_TIE		 = 257,
	OP_UNTIE	 = 258,
	OP_TIED		 = 259,
	OP_DBMOPEN	 = 260,
	OP_DBMCLOSE	 = 261,
	OP_SSELECT	 = 262,
	OP_SELECT	 = 263,
	OP_GETC		 = 264,
	OP_READ		 = 265,
	OP_ENTERWRITE	 = 266,
	OP_LEAVEWRITE	 = 267,
	OP_PRTF		 = 268,
	OP_PRINT	 = 269,
	OP_SAY		 = 270,
	OP_SYSOPEN	 = 271,
	OP_SYSSEEK	 = 272,
	OP_SYSREAD	 = 273,
	OP_SYSWRITE	 = 274,
	OP_EOF		 = 275,
	OP_TELL		 = 276,
	OP_SEEK		 = 277,
	OP_TRUNCATE	 = 278,
	OP_FCNTL	 = 279,
	OP_IOCTL	 = 280,
	OP_FLOCK	 = 281,
	OP_SEND		 = 282,
	OP_RECV		 = 283,
	OP_SOCKET	 = 284,
	OP_SOCKPAIRL	 = 285,
	OP_BIND		 = 286,
	OP_CONNECT	 = 287,
	OP_LISTEN	 = 288,
	OP_ACCEPT	 = 289,
	OP_SHUTDOWN	 = 290,
	OP_GSOCKOPT	 = 291,
	OP_SSOCKOPT	 = 292,
	OP_GETSOCKNAME	 = 293,
	OP_GETPEERNAME	 = 294,
	OP_LSTAT	 = 295,
	OP_STAT		 = 296,
	OP_FTRREAD	 = 297,
	OP_FTRWRITE	 = 298,
	OP_FTREXEC	 = 299,
	OP_FTEREAD	 = 300,
	OP_FTEWRITE	 = 301,
	OP_FTEEXEC	 = 302,
	OP_FTIS		 = 303,
	OP_FTSIZE	 = 304,
	OP_FTMTIME	 = 305,
	OP_FTATIME	 = 306,
	OP_FTCTIME	 = 307,
	OP_FTROWNED	 = 308,
	OP_FTEOWNED	 = 309,
	OP_FTZERO	 = 310,
	OP_FTSOCK	 = 311,
	OP_FTCHR	 = 312,
	OP_FTBLK	 = 313,
	OP_FTFILE	 = 314,
	OP_FTDIR	 = 315,
	OP_FTPIPE	 = 316,
	OP_FTSUID	 = 317,
	OP_FTSGID	 = 318,
	OP_FTSVTX	 = 319,
	OP_FTLINK	 = 320,
	OP_FTTTY	 = 321,
	OP_FTTEXT	 = 322,
	OP_FTBINARY	 = 323,
	OP_CHDIR	 = 324,
	OP_CHOWN	 = 325,
	OP_CHROOT	 = 326,
	OP_UNLINK	 = 327,
	OP_CHMOD	 = 328,
	OP_UTIME	 = 329,
	OP_RENAME	 = 330,
	OP_LINK		 = 331,
	OP_SYMLINK	 = 332,
	OP_READLINK	 = 333,
	OP_MKDIR	 = 334,
	OP_RMDIR	 = 335,
	OP_OPEN_DIR	 = 336,
	OP_READDIR	 = 337,
	OP_TELLDIR	 = 338,
	OP_SEEKDIR	 = 339,
	OP_REWINDDIR	 = 340,
	OP_CLOSEDIR	 = 341,
	OP_FORK		 = 342,
	OP_WAIT		 = 343,
	OP_WAITPID	 = 344,
	OP_SYSTEM	 = 345,
	OP_EXEC		 = 346,
	OP_KILL		 = 347,
	OP_GETPPID	 = 348,
	OP_GETPGRP	 = 349,
	OP_SETPGRP	 = 350,
	OP_GETPRIORITY	 = 351,
	OP_SETPRIORITY	 = 352,
	OP_TIME		 = 353,
	OP_TMS		 = 354,
	OP_LOCALTIME	 = 355,
	OP_GMTIME	 = 356,
	OP_ALARM	 = 357,
	OP_SLEEP	 = 358,
	OP_SHMGET	 = 359,
	OP_SHMCTL	 = 360,
	OP_SHMREAD	 = 361,
	OP_SHMWRITE	 = 362,
	OP_MSGGET	 = 363,
	OP_MSGCTL	 = 364,
	OP_MSGSND	 = 365,
	OP_MSGRCVL	 = 366,
	OP_SEMOP	 = 367,
	OP_SEMGET	 = 368,
	OP_SEMCTL	 = 369,
	OP_REQUIRE	 = 370,
	OP_DOFILE	 = 371,
	OP_HINTSEVAL	 = 372,
	OP_ENTEREVAL	 = 373,
	OP_LEAVEEVAL	 = 374,
	OP_ENTERTRY	 = 375,
	OP_LEAVETRY	 = 376,
	OP_GHBYNAME	 = 377,
	OP_GHBYADDR	 = 378,
	OP_GHOSTENT	 = 379,
	OP_GNBYNAME	 = 380,
	OP_GNBYADDR	 = 381,
	OP_GNETENT	 = 382,
	OP_GPBYNAME	 = 383,
	OP_GPBYNUMBER	 = 384,
	OP_GPROTOENT	 = 385,
	OP_GSBYNAME	 = 386,
	OP_GSBYPORT	 = 387,
	OP_GSERVENT	 = 388,
	OP_SHOSTENT	 = 389,
	OP_SNETENT	 = 390,
	OP_SPROTOENT	 = 391,
	OP_SSERVENT	 = 392,
	OP_EHOSTENT	 = 393,
	OP_ENETENT	 = 394,
	OP_EPROTOENT	 = 395,
	OP_ESERVENT	 = 396,
	OP_GPWNAM	 = 397,
	OP_GPWUID	 = 398,
	OP_GPWENT	 = 399,
	OP_SPWENT	 = 400,
	OP_EPWENT	 = 401,
	OP_GGRNAM	 = 402,
	OP_GGRGID	 = 403,
	OP_GGRENT	 = 404,
	OP_SGRENT	 = 405,
	OP_EGRENT	 = 406,
	OP_GETLOGIN	 = 407,
	OP_SYSCALL	 = 408,
	OP_LOCK		 = 409,
	OP_ONCE		 = 410,
	OP_CUSTOM	 = 411,
	OP_COREARGS	 = 412,
	OP_RUNCV	 = 413,
	OP_FC		 = 414,
	OP_PADCV	 = 415,
	OP_INTROCV	 = 416,
	OP_CLONECV	 = 417,
	OP_PADRANGE	 = 418,
	OP_REFASSIGN	 = 419,
	OP_LVREF	 = 420,
	OP_LVREFSLICE	 = 421,
	OP_LVAVREF	 = 422,
	OP_ANONCONST	 = 423,
	OP_max		
} opcode;

#define MAXO 424
#define OP_FREED MAXO

/* the OP_IS_* macros are optimized to a simple range check because
    all the member OPs are contiguous in regen/opcodes table.
    opcode.pl verifies the range contiguity, or generates an OR-equals
    expression */

#define OP_IS_SOCKET(op)	\
	((op) >= OP_SEND && (op) <= OP_GETPEERNAME)

#define OP_IS_FILETEST(op)	\
	((op) >= OP_FTRREAD && (op) <= OP_FTBINARY)

#define OP_IS_FILETEST_ACCESS(op)	\
	((op) >= OP_FTRREAD && (op) <= OP_FTEEXEC)

#define OP_IS_NUMCOMPARE(op)	\
	((op) >= OP_LT && (op) <= OP_I_NCMP)

#define OP_IS_DIRHOP(op)	\
	((op) >= OP_READDIR && (op) <= OP_CLOSEDIR)

#define OP_IS_INFIX_BIT(op)	\
	((op) >= OP_BIT_AND && (op) <= OP_SBIT_OR)

/* ex: set ro: */
