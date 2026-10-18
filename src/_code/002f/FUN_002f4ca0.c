/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4ca0` (_code @ 0x2f4ca0, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_001ea928; /* 0x1ea928 */
extern int FUN_002caef0(); /* 0x2caef0 */
extern int FUN_002cafd0(); /* 0x2cafd0 */
extern unsigned char LAB_002f4e84; /* 0x2f4e84 */
extern unsigned char LAB_002f4e9c; /* 0x2f4e9c */
extern unsigned char LAB_002f4eb4; /* 0x2f4eb4 */
extern unsigned char LAB_002f4ec4; /* 0x2f4ec4 */
extern unsigned char DAT_00407ec6; /* 0x407ec6 */
extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */
extern unsigned int *DAT_0044e2d0; /* 0x44e2d0 */

extern unsigned int FUN_0021f39c(unsigned char);
/* Supplied declaration required: FUN_0027edf8. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002adb40. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
extern unsigned int FUN_002cab70(unsigned char);
extern unsigned int FUN_002e0af4(unsigned char);


void FUN_002f4ca0(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x158,1);
  puVar2 = &LAB_002f4e84;
  DAT_0044e2d0 = puVar1;
  FUN_002c5978(&LAB_002f4e84,2,0,0,&LAB_001ea928,FUN_002caef0,puVar1);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_002f4e9c,0xe6,0,0,FUN_002cafd0,0,0,puVar2);
  FUN_002c3344(puVar1 + 0xf);
  FUN_002c32f8(puVar1 + 0xf,&DAT_00407ec6,0x18,0,0,0,0,0,0,0,0);
  FUN_002bdb2c(puVar1 + 0x17,0x2f,0,puVar1 + 0xf,0xc9);
  FUN_002bdac0(puVar1 + 0x17,0);
  FUN_0029fae8(puVar1 + 0x3a,3,3,1,0,1);
  puVar1[2] = 0;
  *(unsigned short *)((int)puVar1 + 0x1a) = 0;
  FUN_0027edf8(puVar1 + 7,0xffffffff);
  *(unsigned short *)(puVar1 + 9) = 0;
  FUN_00297704(&LAB_002f4eb4,puVar1 + 0x53,0);
  FUN_00297704(&LAB_002f4ec4,puVar1 + 0x54,0);
  FUN_002b8b78(0x99);
  FUN_0029f10c(0,0x323232ff);
  temp_v0 = FUN_002cab70(DAT_0044e0f8);
  puVar1[10] = temp_v0;
  temp_v0 = FUN_0021f39c(DAT_0044e0f9);
  puVar1[0xb] = temp_v0;
  temp_v0 = FUN_002e0af4(DAT_0044e0fa);
  puVar1[0xc] = temp_v0;
  FUN_002adb40(puVar1 + 0xd,&DAT_0044e0f8);
  return;
}
