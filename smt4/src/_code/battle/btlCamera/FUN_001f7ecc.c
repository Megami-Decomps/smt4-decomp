/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7ecc` (_code @ 0x1f7ecc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001e4a1c(); /* 0x1e4a1c */
extern unsigned char LAB_001f7f60; /* 0x1f7f60 */
extern int FUN_002c9e40(); /* 0x2c9e40 */
extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_003d5830. */


void FUN_001f7ecc(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  puVar1 = &LAB_001f7f60;
  FUN_002c4a08(&LAB_001f7f60,2,0,0,FUN_001e4a1c,FUN_002c9e40,param_1,*param_1);
  param_1[0x11] = (unsigned int)puVar1;
  if (DAT_004342c8 == 0) {
    temp_v0 = 0x100;
    FUN_002c498c(0x100,0x100,0,0x848,1);
    DAT_004342c8 = temp_v0;
  }
  FUN_003d5830();
  return;
}
