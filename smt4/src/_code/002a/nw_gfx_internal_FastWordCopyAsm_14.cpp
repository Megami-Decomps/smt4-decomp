/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_internal_FastWordCopyAsm_14` (_code @ 0x2a236c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long nw_gfx_internal_FastWordCopyAsm_14(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  HintPreloadData(param_2 + 0x14);
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  temp_v5 = param_2[6];
  temp_v6 = param_2[7];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = temp_v2;
  param_1[4] = temp_v3;
  param_1[5] = temp_v4;
  param_1[6] = temp_v5;
  param_1[7] = temp_v6;
  temp_v0 = param_2[9];
  temp_v1 = param_2[10];
  temp_v2 = param_2[0xb];
  temp_v3 = param_2[0xc];
  temp_v4 = param_2[0xd];
  param_1[8] = param_2[8];
  param_1[9] = temp_v0;
  param_1[10] = temp_v1;
  param_1[0xb] = temp_v2;
  param_1[0xc] = temp_v3;
  param_1[0xd] = temp_v4;
  return romwright_piece_4_4(param_2 + 0xe,param_1 + 0xe);
}

} /* extern "C" */
