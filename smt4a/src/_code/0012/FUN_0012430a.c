/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012430a` (_code @ 0x12430a, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eab08. */


long long FUN_0012430a(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v1 = *(int *)(param_1 + 0xc);
  temp_v0 = *(unsigned int *)(param_1 + 8);
  temp_v2 = param_3;
  temp_v3 = param_4;
  FUN_002eab08(&temp_v2);
  if ((int)((temp_v1 - temp_v3) - (unsigned int)(temp_v0 < temp_v2)) < 0 !=
      (SBORROW4(temp_v1,temp_v3) != SBORROW4(temp_v1 - temp_v3,(unsigned int)(temp_v0 < temp_v2)))) {
    return romwright_piece_4_4(temp_v0 - temp_v2,1);
  }
  return (unsigned long long)(temp_v0 - temp_v2) << 0x20;
}
