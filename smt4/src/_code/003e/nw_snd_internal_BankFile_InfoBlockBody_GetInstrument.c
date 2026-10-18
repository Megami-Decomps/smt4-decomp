/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_BankFile_InfoBlockBody_GetInstrument` (_code @ 0x3e8248, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_internal_BankFile_InfoBlockBody_GetInstrument(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + param_1);
  if ((short)puVar1[param_2 * 2 + 1] != 0x5900) {
    if ((short)puVar1[param_2 * 2 + 1] == 0x5903) {
      return 0;
    }
  }
  else if (param_2 < *puVar1) {
    return puVar1[param_2 * 2 + 2] + (int)puVar1;
  }
  return 0;
}
