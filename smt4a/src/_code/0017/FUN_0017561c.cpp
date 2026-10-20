/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017561c` (_code @ 0x17561c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00197d68(int, int, int);

/* Supplied declaration required: FUN_00197d68. */


void FUN_0017561c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x16c) = 0;
  *(unsigned int *)(param_1 + 0x170) = 0;
  *(unsigned int *)(param_1 + 0x174) = 0;
  *(unsigned int *)(param_1 + 0x184) = 0;
  *(unsigned int *)(param_1 + 0x188) = 0;
  *(unsigned char *)(param_1 + 0x18c) = 0;
  *(unsigned int *)(param_1 + 0x17c) = param_2;
  *(unsigned int *)(param_1 + 0x180) = param_3 >> 2;
  FUN_00197d68(param_1,param_1 + 0x34,0x20);
  FUN_00197d68(param_1 + 0xb4,param_1 + 0xe8,0x21);
  *(unsigned char *)(param_1 + 0x18d) = 1;
  return;
}

} /* extern "C" */
