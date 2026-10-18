/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001190b0` (_code @ 0x1190b0, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_004e315c; /* 0x4e315c */

/* Supplied declaration required: FUN_001190b0. */
/* Supplied declaration required: FUN_001290cc. */
/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: FUN_001538b8. */
/* Supplied declaration required: FUN_0015a4e8. */
/* Supplied declaration required: FUN_002bd258. */
/* Supplied declaration required: FUN_002bd27c. */
extern unsigned int FUN_002bd29c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd430. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_001190b0(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x90) & 0x202) == 0) {
    FUN_002c38a4(&DAT_004e315c);
    *(unsigned int *)(param_1 + 0x78) = param_2;
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 0x94) = in_s0;
    FUN_00147370(*(unsigned int *)(param_1 + 0x38));
    FUN_0015a4e8(*(unsigned int *)(param_1 + 0x38),0);
    temp_v1 = *(unsigned int *)(param_1 + 0x90);
    *(unsigned int *)(param_1 + 0x90) = temp_v1 | 0x40;
    if (0 < *(int *)(param_1 + 0x78)) {
      *(unsigned int *)(param_1 + 0x90) = temp_v1 | 0x60;
    }
    FUN_002c3820(&DAT_004e315c);
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x90) & 0x200) == 0) {
    return;
  }
  FUN_002c38a4(&DAT_004e315c);
  FUN_002bd430(*(unsigned int *)(param_1 + 0x38));
  temp_v0 = FUN_002bd29c(0x7fff,0);
  *(unsigned int *)(param_1 + 0x38) = temp_v0;
  FUN_001538b8(temp_v0,param_1 + 0x3c);
  FUN_002bd27c(*(unsigned int *)(param_1 + 0x38));
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  do {
    FUN_002bd258(param_1 + temp_v2 * 0x18 + 8);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  FUN_001290cc(*(unsigned int *)(param_1 + 0x38),*(unsigned int *)(param_1 + 0x6c),param_1 + 8,
               param_1 + 0x20,0);
  FUN_001190b0(param_1,param_2);
  FUN_002c3820(&DAT_004e315c);
  return;
}
