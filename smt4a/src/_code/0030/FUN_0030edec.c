/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030edec` (_code @ 0x30edec, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e9598. */
/* Supplied declaration required: FUN_003079ae. */


unsigned long long FUN_0030edec(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1[1];
  temp_v0 = param_2;
  temp_v1 = param_3;
  if (*param_1 != temp_v2) {
    for (; temp_v1 != temp_v2; temp_v1 = temp_v1 + 8) {
      FUN_002e9598(temp_v0,temp_v1);
      temp_v0 = temp_v0 + 8;
    }
    FUN_003079ae(param_1,temp_v0,param_1[1]);
    param_1[1] = param_1[1] - ((param_3 - param_2) & 0xfffffff8U);
  }
  return romwright_piece_4_4(param_1,param_2);
}
