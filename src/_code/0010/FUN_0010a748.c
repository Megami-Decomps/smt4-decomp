/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a748` (_code @ 0x10a748, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_0010a900; /* 0x10a900 */
extern unsigned char LAB_0010a910; /* 0x10a910 */
extern unsigned char LAB_0010a924; /* 0x10a924 */
extern int FUN_0011a354(); /* 0x11a354 */
extern unsigned char LAB_0011b094; /* 0x11b094 */
extern unsigned char DAT_00403890; /* 0x403890 */
extern unsigned char DAT_004038c0; /* 0x4038c0 */
extern unsigned char DAT_004038f0; /* 0x4038f0 */
extern unsigned int *DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf0a8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0010a748(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e0f8 == (unsigned int *)0x0) {
    DAT_0043e0f8 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x188,1);
  }
  puVar1 = DAT_0043e0f8;
  FUN_002c4b30(DAT_0043e0f8,0x188);
  puVar2 = &LAB_0010a900;
  FUN_002c5978(&LAB_0010a900,1,0,0,&LAB_0011b094,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_0010a910,0x81,0,0,FUN_0011a354,0,0,puVar2);
  FUN_002c4c00(&LAB_0010a924,0xdf,0,0,FUN_0011a354,0,0,*puVar1);
  puVar1 = DAT_0043e0f8;
  FUN_002c3344(DAT_0043e0f8 + 7);
  FUN_002c32f8(puVar1 + 7,0,0,&DAT_00403890,0x30,&DAT_004038c0,0x30,0,0,&DAT_004038f0,0x118);
  FUN_002bf0a8(puVar1 + 0xf,0xe,0xffffffff,2,puVar1 + 7,1);
  FUN_002bf030(puVar1 + 0xf,0);
  FUN_002bf0a8(puVar1 + 0x32,0xe,0xffffffff,3,puVar1 + 7,1);
  FUN_002bf030(puVar1 + 0x32,2);
  return;
}
