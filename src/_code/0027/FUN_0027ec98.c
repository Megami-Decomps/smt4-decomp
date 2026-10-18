/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ec98` (_code @ 0x27ec98, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00234920. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_002a7b50. */
/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_0038adcc. */


void FUN_0027ec98(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  *param_1 = *param_1 | 0x40;
  puVar3 = param_1 + 0x107;
  if (param_1[0x107] != 0) {
    FUN_002a7b50();
    *puVar3 = 0;
  }
  temp_v0 = FUN_002bda1c(0);
  param_1[0x107] = temp_v0;
  FUN_002bda10(temp_v0,0x320202ff);
  FUN_002bda00(*puVar3,0,0x646464ff);
  temp_v1 = DAT_00432fc8;
  FUN_00234920(DAT_00432fc8,0xffffffff);
  FUN_00296d8c(*puVar3,3,0xffffffff,0,3,temp_v1,param_2);
  temp_v1 = DAT_00432fc8;
  FUN_00234920(DAT_00432fc8,param_2);
  FUN_0038adcc(param_1,temp_v1,param_3,param_4);
  return;
}
