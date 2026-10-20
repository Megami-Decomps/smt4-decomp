/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2978` (_code @ 0x1d2978, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 8 byte(s) */
typedef struct {
    unsigned long long sp8; /* 0x8: local_8 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


double FUN_001d2978(int param_1,unsigned int param_2,int *param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  double temp_v2;
  
  temp_v2 = (double)romwright_piece_4_4(param_2,param_1);
  *param_3 = 0;
  temp_v0 = param_2 & 0x7fffffff;
  if ((temp_v0 < 0x7ff00000) && (param_1 != 0 || temp_v0 != 0)) {
    if (temp_v0 >= 0x100000) {
      temp_v1 = *param_3;
    }
    else {
      temp_v1 = -0x36;
      temp_v2 = temp_v2 * 18014398509481984.0;
      param_2 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
      *param_3 = -0x36;
      temp_v0 = param_2 & 0x7fffffff;
    }
    *param_3 = (((int)temp_v0 >> 0x14) - 0x3fe) + temp_v1;
    temp_v2 = (double)((romwright_piece_4_4(param_2,(*(unsigned int *)((unsigned char *)&temp_v2 + 0))) & 0x800fffffffffffff) | 0x3fe0000000000000);
  }
  return temp_v2;
}

} /* extern "C" */
