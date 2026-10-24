/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005136b0` (_code @ 0x5136b8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *g_mwmoimaadpcmDecoder; /* 0x589520 */
extern unsigned int *DAT_00589524; /* 0x589524 */


unsigned int FUN_005136b0(int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)&g_mwmoimaadpcmDecoder;
  if (g_mwmoimaadpcmDecoder != (romwright_code *)0x0) {
    puVar1 = DAT_00589524;
  }
  if (!(g_mwmoimaadpcmDecoder != (romwright_code *)0x0 && puVar1 != (unsigned int *)0x0)) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = (*g_mwmoimaadpcmDecoder)(0x28);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0;
      *(unsigned int *)(temp_v1 + 0x1c) = param_2;
      *(unsigned int *)(temp_v1 + 0x20) = param_3;
      *param_1 = temp_v1;
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
