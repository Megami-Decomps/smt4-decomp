/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0c04` (_code @ 0x1b0c04, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001b0d64; /* 0x1b0d64 */
extern unsigned char LAB_001b0d74; /* 0x1b0d74 */
extern unsigned char LAB_001b0d80; /* 0x1b0d80 */
extern unsigned char LAB_001b0d90; /* 0x1b0d90 */
extern unsigned char LAB_001b4fe8; /* 0x1b4fe8 */
extern unsigned char LAB_001e470c; /* 0x1e470c */
extern unsigned char LAB_0020ece4; /* 0x20ece4 */
extern unsigned char LAB_0020ed2c; /* 0x20ed2c */
extern unsigned int *DAT_00433048; /* 0x433048 */

/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_001b0c04(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x20,1);
  DAT_00433048 = puVar1;
  *(unsigned char *)(puVar1 + 6) = 0;
  *(unsigned char *)((int)puVar1 + 0x19) = 0;
  puVar1[7] = 0;
  *(unsigned char *)((int)puVar1 + 0x1a) = 0;
  if (param_1 == 0) {
    *(unsigned char *)((int)puVar1 + 0x19) = 1;
    FUN_00282bfc(0,0xff);
    FUN_00282bfc(1,0xff);
  }
  puVar2 = &LAB_001b0d64;
  FUN_002c5788(&LAB_001b0d64,2,0,0,&LAB_001b4fe8,&LAB_0020ece4,DAT_00433048);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_001b0d74,0x7d,1,0,&LAB_001e470c,0,DAT_00433048,puVar2);
  FUN_002c4a08(&LAB_001b0d80,0xdb,1,0,&LAB_001e470c,0,DAT_00433048,*puVar1);
  puVar2 = &LAB_001b0d90;
  FUN_002c4a08(&LAB_001b0d90,0xe7,1,0,&LAB_0020ed2c,0,DAT_00433048,*puVar1);
  puVar1[3] = (unsigned int)puVar2;
  return;
}
