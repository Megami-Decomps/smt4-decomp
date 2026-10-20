/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300904` (_code @ 0x300904, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00300904(int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (*(char *)(param_1 + 0x575d) != '\0') {
    temp_v2 = *(unsigned int *)(param_1 + 0x5758);
    if ((int)temp_v2 < 1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v2 & 1;
      temp_v1 = 0;
      if (temp_v0 != 0) {
        do {
          if (*(char *)(param_1 + temp_v1 * 0x2c + 0x5788) != '\0') {
            return *(unsigned int *)(param_1 + temp_v1 * 0x2c + 0x577c);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (int)temp_v0);
      }
    }
    for (; (int)temp_v0 < (int)temp_v2; temp_v0 = temp_v0 + 2) {
      temp_v1 = param_1 + temp_v0 * 0x2c;
      if (*(char *)(temp_v1 + 0x5788) != '\0') {
        puVar1 = (unsigned int *)(param_1 + temp_v0 * 0x2c + 0x577c);
        return *puVar1;
      }
      if (*(char *)(temp_v1 + 0x57b4) != '\0') {
        puVar1 = (unsigned int *)(param_1 + temp_v0 * 0x2c + 0x57a8);
        return *puVar1;
      }
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
