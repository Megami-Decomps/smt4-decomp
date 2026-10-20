/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451e34` (_code @ 0x451e34, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004504d8(unsigned int *, int, unsigned int);

/* Supplied declaration required: FUN_004504d8. */


void FUN_00451e34(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  if ((param_1 == (unsigned int *)0x0) || (puVar2 = param_1, (~*param_1 & 0x20000021) != 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  if (puVar2[0xb] == 0) {
    puVar2[0xb] = (unsigned int)param_1;
    if (puVar2[0xe] != 0) {
      temp_v0 = (int)puVar2 + puVar2[0xe] + 0x38;
    }
    else {
      temp_v0 = 0;
    }
    temp_v1 = puVar2[0xc];
    if (*(int *)(temp_v0 + 0x18) == 0) {
      if (temp_v1 == 0) {
        temp_v1 = 0x2010000;
      }
      FUN_004504d8(param_1,temp_v0,temp_v1);
      return;
    }
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  return;
}

} /* extern "C" */
