/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eada0` (_code @ 0x3eada0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int nw_snd_internal_PoolImpl_AllocImpl(int);


void FUN_003eada0(int param_1)

{
/* irregular: irregular input(s): in_ZR; 1 native warning(s); review required */
  int temp_v0;
  unsigned char in_ZR;
  
  if ((in_ZR) && (temp_v0 = nw_snd_internal_PoolImpl_AllocImpl(param_1 + 8), temp_v0 != 0)) {
    *(unsigned int *)(temp_v0 + 0x18) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0x3f000000;
    *(unsigned char *)(temp_v0 + 0x28) = 1;
    *(unsigned char *)(temp_v0 + 0x29) = 0;
  }
  return;
}
