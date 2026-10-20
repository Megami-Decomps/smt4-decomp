/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a0d8` (_code @ 0x10a0d8, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrSetHost(int, unsigned int);
int onlineSockAddrInit(void);

/* Supplied declaration required: onlineSockAddrSetHost. */
/* Supplied declaration required: onlineSockAddrInit. */


void FUN_0010a0d8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  param_1 = param_1 + 0x120;
  onlineSockAddrInit();
  *(unsigned short *)(param_1 + 6) = 0xed30;
  onlineSockAddrSetHost(param_1,param_2);
  return;
}

} /* extern "C" */
