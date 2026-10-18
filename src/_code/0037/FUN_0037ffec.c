/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ffec` (_code @ 0x37ffec, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00379dec. */
/* Supplied declaration required: FUN_0037c200. */
/* Supplied declaration required: FUN_0037c2d4. */
/* Supplied declaration required: FUN_0037c2f4. */
/* Supplied declaration required: FUN_0037c3c0. */
/* Supplied declaration required: FUN_0037c46c. */
/* Supplied declaration required: FUN_0037fd94. */
/* Supplied declaration required: FUN_00380420. */


void FUN_0037ffec(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x120) = param_3;
  FUN_00380420(param_1 + 0xac);
  FUN_00379dec(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0xf8) = 0;
  FUN_0037c200(*(unsigned int *)(param_1 + 0x134),param_2,param_4);
  FUN_0037fd94(param_1,param_2,param_4);
  FUN_0037c2d4(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x124));
  FUN_0037c2f4(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x125));
  FUN_0037c3c0(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0x129));
  FUN_0037c46c(*(unsigned int *)(param_1 + 0x134));
  *(unsigned char *)(param_1 + 0xc6) = 1;
  return;
}
