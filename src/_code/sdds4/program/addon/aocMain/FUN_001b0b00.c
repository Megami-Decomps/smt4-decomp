/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0b00` (_code @ 0x1b0b00, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001b0c60; /* 0x1b0c60 */
extern unsigned char LAB_001b0c70; /* 0x1b0c70 */
extern unsigned char LAB_001b0c7c; /* 0x1b0c7c */
extern unsigned char LAB_001b0c8c; /* 0x1b0c8c */
extern unsigned char LAB_001b4ee8; /* 0x1b4ee8 */
extern unsigned char LAB_001e4618; /* 0x1e4618 */
extern unsigned char LAB_0020eb80; /* 0x20eb80 */
extern unsigned char LAB_0020ebc8; /* 0x20ebc8 */
extern unsigned int *DAT_00433048; /* 0x433048 */

/* Supplied declaration required: FUN_00282e6c. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001b0b00(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x20,1);
  DAT_00433048 = puVar1;
  *(unsigned char *)(puVar1 + 6) = 0;
  *(unsigned char *)((int)puVar1 + 0x19) = 0;
  puVar1[7] = 0;
  *(unsigned char *)((int)puVar1 + 0x1a) = 0;
  if (param_1 == 0) {
    *(unsigned char *)((int)puVar1 + 0x19) = 1;
    FUN_00282e6c(0,0xff);
    FUN_00282e6c(1,0xff);
  }
  puVar2 = &LAB_001b0c60;
  FUN_002c5978(&LAB_001b0c60,2,0,0,&LAB_001b4ee8,&LAB_0020eb80,DAT_00433048);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001b0c70,0x7d,1,0,&LAB_001e4618,0,DAT_00433048,puVar2);
  FUN_002c4c00(&LAB_001b0c7c,0xdb,1,0,&LAB_001e4618,0,DAT_00433048,*puVar1);
  puVar2 = &LAB_001b0c8c;
  FUN_002c4c00(&LAB_001b0c8c,0xe7,1,0,&LAB_0020ebc8,0,DAT_00433048,*puVar1);
  puVar1[3] = (unsigned int)puVar2;
  return;
}
