/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fddc` (_code @ 0x37fddc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00379bdc. */
/* Supplied declaration required: FUN_0037bff0. */
/* Supplied declaration required: FUN_0037c0c4. */
/* Supplied declaration required: FUN_0037c0e4. */
/* Supplied declaration required: FUN_0037c1b0. */
/* Supplied declaration required: FUN_0037c25c. */
/* Supplied declaration required: FUN_0037fb84. */
/* Supplied declaration required: FUN_00380210. */


void FUN_0037fddc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x120) = param_3;
  FUN_00380210(param_1 + 0xac);
  FUN_00379bdc(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0xf8) = 0;
  FUN_0037bff0(*(unsigned int *)(param_1 + 0x134),param_2,param_4);
  FUN_0037fb84(param_1,param_2,param_4);
  FUN_0037c0c4(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x124));
  FUN_0037c0e4(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x125));
  FUN_0037c1b0(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x129));
  FUN_0037c25c(*(unsigned int *)(param_1 + 0x134));
  *(unsigned char *)(param_1 + 0xc6) = 1;
  return;
}
