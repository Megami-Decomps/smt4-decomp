/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002027dc` (_code @ 0x2027dc, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_0018f178(); /* 0x18f178 */
extern unsigned char LAB_0018f4ac; /* 0x18f4ac */
extern unsigned char LAB_00202928; /* 0x202928 */
extern unsigned char LAB_00202938; /* 0x202938 */
extern unsigned char DAT_00403b6c; /* 0x403b6c */
extern unsigned char DAT_00403b90; /* 0x403b90 */
extern unsigned char DAT_00403bb4; /* 0x403bb4 */
extern unsigned int *DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002027dc(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e158 == (unsigned int *)0x0) {
    DAT_0043e158 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xe4,1);
  }
  puVar1 = DAT_0043e158;
  FUN_002c4b30(DAT_0043e158,0xe4);
  puVar2 = &LAB_00202928;
  FUN_002c5978(&LAB_00202928,1,0,0,&LAB_0018f4ac,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_00202938,0xe9,0,0,FUN_0018f178,0,0,puVar2);
  FUN_002c3344(puVar1 + 6);
  FUN_002c32f8(puVar1 + 6,&DAT_00403b6c,0x24,&DAT_00403b90,0x24,0,0,0,0,&DAT_00403bb4,0x70);
  FUN_002bdb2c(puVar1 + 0xe,0xe,0x87,puVar1 + 6,1);
  FUN_002bf030(puVar1 + 0xe,0);
  return;
}
