/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d931c` (_code @ 0x2d931c, 0x28c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_001ca648(); /* 0x1ca648 */
extern int FUN_001cc914(); /* 0x1cc914 */
extern unsigned char LAB_002d95ec; /* 0x2d95ec */
extern unsigned char LAB_002d95fc; /* 0x2d95fc */
extern unsigned char DAT_00407cb0; /* 0x407cb0 */
extern unsigned char DAT_00407cf8; /* 0x407cf8 */
extern unsigned char DAT_00407d40; /* 0x407d40 */
extern unsigned char DAT_00407d58; /* 0x407d58 */
extern unsigned int *DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf0a8. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002d931c(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  
  if (DAT_0044e190 == (unsigned int *)0x0) {
    DAT_0044e190 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x2394,1);
  }
  puVar1 = DAT_0044e190;
  FUN_002c4b30(DAT_0044e190,0x2394);
  puVar2 = &LAB_002d95ec;
  FUN_002c5978(&LAB_002d95ec,2,0,0,FUN_001ca648,0,0);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_002d95fc;
  FUN_002c4c00(&LAB_002d95fc,0xe7,0,0,FUN_001cc914,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  puVar1 = DAT_0044e190;
  FUN_002c3344(DAT_0044e190 + 2);
  FUN_002c32f8(puVar1 + 2,&DAT_00407cb0,0x48,&DAT_00407cf8,0x48,&DAT_00407d40,0x18,0,0,&DAT_00407d58
               ,0x134);
  FUN_002bdb2c(puVar1 + 10,0x1a,1000,puVar1 + 2,1);
  FUN_002bdac0(puVar1 + 10,0);
  FUN_002bdb2c(puVar1 + 0x2d,0x1a,1000,puVar1 + 2,1);
  FUN_002bf030(puVar1 + 0x2d,0);
  FUN_002bdb2c(puVar1 + 0x50,0x1a,1000,puVar1 + 2,1);
  FUN_002bf030(puVar1 + 0x50,1);
  FUN_002bdb2c(puVar1 + 0x73,0x1a,1000,puVar1 + 2,1);
  FUN_002bdac0(puVar1 + 0x73,4,0);
  FUN_002bdb2c(puVar1 + 0x96,0x1a,1000,puVar1 + 2,1);
  FUN_002bdac0(puVar1 + 0x96,5,0);
  FUN_002bdb2c(puVar1 + 0xb9,0x1a,1000,puVar1 + 2,1);
  FUN_002bdac0(puVar1 + 0xb9,0);
  FUN_002bf0a8(puVar1 + 0xdc,0x1a,0xffffffff,0x1c,puVar1 + 2,0xc9);
  FUN_002bf030(puVar1 + 0xdc,2);
  *(unsigned short *)((int)puVar1 + 0x3aa) = 2;
  temp_v0 = FUN_002bda1c(0);
  puVar1[0x8a8] = temp_v0;
  FUN_002bda10(temp_v0,0xff);
  FUN_002bda00(puVar1[0x8a8],0,0x646464ff);
  FUN_002c4450(puVar1 + 0x10b,0x29,0xffffffff);
  *(unsigned char *)((int)puVar1 + 0x2392) = 1;
  return;
}
