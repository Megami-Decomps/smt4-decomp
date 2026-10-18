/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0052285c` (_code @ 0x52285c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0052285c(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  if (*(char *)(param_1 + 4) != '\x02') {
    if (*(char *)(param_1 + 4) == '\x03') {
      for (temp_v0 = *(int *)(param_1 + 0xc); temp_v0 != param_1 + 8; temp_v0 = *(int *)(temp_v0 + 4)) {
        temp_v2 = param_2 <= *(unsigned short *)(temp_v0 + 8);
        temp_v1 = *(unsigned short *)(temp_v0 + 8) == param_2;
        if (!temp_v2 || temp_v1) {
          temp_v2 = *(unsigned short *)(temp_v0 + 10) <= param_2;
          temp_v1 = param_2 == *(unsigned short *)(temp_v0 + 10);
        }
        if (!temp_v2 || temp_v1) {
          return 1;
        }
      }
    }
  }
  else if (*(unsigned short *)(param_1 + 6) == param_2) {
    return 1;
  }
  return 0;
}
