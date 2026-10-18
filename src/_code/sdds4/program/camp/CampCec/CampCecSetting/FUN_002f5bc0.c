/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5bc0` (_code @ 0x2f5bc0, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_001fff48; /* 0x1fff48 */
extern unsigned char LAB_001fff64; /* 0x1fff64 */
extern unsigned char LAB_002f5d40; /* 0x2f5d40 */
extern unsigned char LAB_002f5d58; /* 0x2f5d58 */
extern unsigned char LAB_002f5d74; /* 0x2f5d74 */
extern unsigned char LAB_002f5d90; /* 0x2f5d90 */
extern unsigned char LAB_002f5da8; /* 0x2f5da8 */
extern unsigned int *DAT_0043daf8; /* 0x43daf8 */

/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002f5bc0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043daf8 == (unsigned int *)0x0) {
    DAT_0043daf8 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x44,1);
  }
  puVar1 = DAT_0043daf8;
  FUN_002c4b30(DAT_0043daf8,0x44);
  puVar2 = &LAB_002f5d40;
  FUN_002c5978(&LAB_002f5d40,1,0,0,&LAB_001fff64,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_002f5d58,0x81,0,0,&LAB_001fff48,0,0,puVar2);
  FUN_002c4c00(&LAB_002f5d74,0xdf,0,0,&LAB_001fff48,0,0,*puVar1);
  FUN_00297704(&LAB_002f5d90,puVar1 + 2,0);
  FUN_00297704(&LAB_002f5da8,puVar1 + 3,0);
  puVar1[0xe] = 0;
  *(unsigned char *)(puVar1 + 0xf) = 2;
  puVar1[6] = 2;
  puVar1[7] = 3;
  puVar1[8] = 4;
  puVar1[9] = 5;
  puVar1[10] = 6;
  puVar1[4] = 0;
  puVar1[5] = 1;
  puVar1[0xb] = 10;
  puVar1[0xc] = 7;
  puVar1[0xd] = 0xb;
  FUN_002b8b78(0xe2);
  return;
}
