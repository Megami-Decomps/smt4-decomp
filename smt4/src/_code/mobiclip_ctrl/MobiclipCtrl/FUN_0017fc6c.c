/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fc6c` (_code @ 0x17fc6c, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0018c034; /* 0x18c034 */
extern unsigned char LAB_001a0f60; /* 0x1a0f60 */
extern int FUN_001a0f80(); /* 0x1a0f80 */
extern int FUN_001c2b14(); /* 0x1c2b14 */
extern unsigned char LAB_001dbc3c; /* 0x1dbc3c */
extern unsigned char LAB_001df8b4; /* 0x1df8b4 */
extern int FUN_001ffc10(); /* 0x1ffc10 */
extern int FUN_00203cc8(); /* 0x203cc8 */
extern unsigned char LAB_00240000; /* 0x240000 */
extern unsigned char DAT_0044d020; /* 0x44d020 */
extern unsigned int DAT_004c3828; /* 0x4c3828 */
extern unsigned int DAT_004c3880; /* 0x4c3880 */
extern unsigned int DAT_004c38d8; /* 0x4c38d8 */
extern unsigned int DAT_004c3930; /* 0x4c3930 */
extern unsigned int DAT_004c3988; /* 0x4c3988 */
extern unsigned int DAT_004c39e0; /* 0x4c39e0 */
extern unsigned int DAT_004c3a38; /* 0x4c3a38 */

/* Supplied declaration required: FUN_002c3918. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_0034e43c. */
/* Supplied declaration required: FUN_0035196c. */
/* Supplied declaration required: FUN_003f5810. */
/* Supplied declaration required: FUN_003f5bdc. */
/* Supplied declaration required: FUN_003f5fc4. */
/* Supplied declaration required: FUN_003f60ec. */
/* Supplied declaration required: FUN_003f6520. */
/* Supplied declaration required: FUN_003f6a14. */


void FUN_0017fc6c(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,&LAB_00240000,1);
  FUN_002c3918(&DAT_004c3828,temp_v0,&LAB_00240000,0x100);
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x80000,1);
  FUN_002c3918(&DAT_004c3880,temp_v0,0x80000,0x100);
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x400000,1);
  FUN_002c3918(&DAT_004c39e0,temp_v0,0x400000,0x100);
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x100000,1);
  FUN_002c3918(&DAT_004c38d8,temp_v0,0x100000,0);
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x8000,1);
  FUN_002c3918(&DAT_004c3930,temp_v0,0x8000,0);
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x90000,1);
  FUN_002c3918(&DAT_004c3988,temp_v0,0x90000,0);
  DAT_0044d020 = 0;
  FUN_003f5fc4(FUN_001c2b14,&LAB_001a0f60);
  FUN_003f6520(FUN_00203cc8,&LAB_001df8b4);
  FUN_003f60ec(FUN_001ffc10,&LAB_001dbc3c);
  FUN_003f5810(FUN_001ffc10,&LAB_001dbc3c);
  FUN_003f5bdc(FUN_001ffc10,&LAB_001dbc3c);
  FUN_003f6a14(FUN_001a0f80,&LAB_0018c034);
  FUN_0035196c();
  FUN_0034e43c(&DAT_004c3a38,1,0);
  return;
}
