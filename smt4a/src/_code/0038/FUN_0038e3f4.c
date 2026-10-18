/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e3f4` (_code @ 0x38e3f4, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0038e3f4(int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (*(char *)(param_1 + 0x4855) != '\0') {
    temp_v2 = *(unsigned int *)(param_1 + 0x4850);
    if ((int)temp_v2 < 1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v2 & 1;
      temp_v1 = 0;
      if (temp_v0 != 0) {
        do {
          if (*(char *)(param_1 + temp_v1 * 0x40 + 0x4894) != '\0') {
            return *(unsigned int *)(param_1 + temp_v1 * 0x40 + 0x4888);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (int)temp_v0);
      }
    }
    for (; (int)temp_v0 < (int)temp_v2; temp_v0 = temp_v0 + 2) {
      temp_v1 = param_1 + temp_v0 * 0x40;
      if (*(char *)(temp_v1 + 0x4894) != '\0') {
        puVar1 = (unsigned int *)(param_1 + temp_v0 * 0x40 + 0x4888);
        return *puVar1;
      }
      if (*(char *)(temp_v1 + 0x48d4) != '\0') {
        puVar1 = (unsigned int *)(param_1 + temp_v0 * 0x40 + 0x48c8);
        return *puVar1;
      }
    }
  }
  return 0xffffffff;
}
