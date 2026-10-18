/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fb6c` (_code @ 0x17fb6c, 0x1cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0018bf34; /* 0x18bf34 */
extern unsigned char LAB_001a0e50; /* 0x1a0e50 */
extern int FUN_001a0e70(); /* 0x1a0e70 */
extern int FUN_001c2a14(); /* 0x1c2a14 */
extern unsigned char LAB_001dbb34; /* 0x1dbb34 */
extern unsigned char LAB_001df7b0; /* 0x1df7b0 */
extern int FUN_001ffaa8(); /* 0x1ffaa8 */
extern int FUN_00203b64(); /* 0x203b64 */
extern unsigned char LAB_00240000; /* 0x240000 */
extern unsigned char DAT_0044d020; /* 0x44d020 */
extern unsigned int DAT_004c3828; /* 0x4c3828 */
extern unsigned int DAT_004c3880; /* 0x4c3880 */
extern unsigned int DAT_004c38d8; /* 0x4c38d8 */
extern unsigned int DAT_004c3930; /* 0x4c3930 */
extern unsigned int DAT_004c3988; /* 0x4c3988 */
extern unsigned int DAT_004c39e0; /* 0x4c39e0 */
extern unsigned int DAT_004c3a38; /* 0x4c3a38 */

/* Supplied declaration required: FUN_002c3b1c. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_0034e64c. */
/* Supplied declaration required: FUN_00351b7c. */
/* Supplied declaration required: FUN_003f5a3c. */
/* Supplied declaration required: FUN_003f5e08. */
/* Supplied declaration required: FUN_003f61f0. */
/* Supplied declaration required: FUN_003f6318. */
/* Supplied declaration required: FUN_003f674c. */
/* Supplied declaration required: FUN_003f6c40. */


void FUN_0017fb6c(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,&LAB_00240000,1);
  FUN_002c3b1c(&DAT_004c3828,temp_v0,&LAB_00240000,0x100);
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,0x80000,1);
  FUN_002c3b1c(&DAT_004c3880,temp_v0,0x80000,0x100);
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,0x400000,1);
  FUN_002c3b1c(&DAT_004c39e0,temp_v0,0x400000,0x100);
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,0x100000,1);
  FUN_002c3b1c(&DAT_004c38d8,temp_v0,0x100000,0);
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,0x8000,1);
  FUN_002c3b1c(&DAT_004c3930,temp_v0,0x8000,0);
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,0x90000,1);
  FUN_002c3b1c(&DAT_004c3988,temp_v0,0x90000,0);
  DAT_0044d020 = 0;
  FUN_003f61f0(FUN_001c2a14,&LAB_001a0e50);
  FUN_003f674c(FUN_00203b64,&LAB_001df7b0);
  FUN_003f6318(FUN_001ffaa8,&LAB_001dbb34);
  FUN_003f5a3c(FUN_001ffaa8,&LAB_001dbb34);
  FUN_003f5e08(FUN_001ffaa8,&LAB_001dbb34);
  FUN_003f6c40(FUN_001a0e70,&LAB_0018bf34);
  FUN_00351b7c();
  FUN_0034e64c(&DAT_004c3a38,1,0);
  return;
}
