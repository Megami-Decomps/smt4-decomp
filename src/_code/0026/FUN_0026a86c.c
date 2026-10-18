/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a86c` (_code @ 0x26a86c, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0026a86c(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  temp_v1 = 5;
  temp_v2 = (temp_v0 & 0xfffff) >> 0x10 != 5;
  if (temp_v2) {
    temp_v1 = 6;
  }
  if (!temp_v2 || temp_v1 == (temp_v0 & 0xfffff) >> 0x10) {
    if (*(unsigned char *)(param_2 + 0x23) >= 2) {
      if ((*(unsigned char *)(param_2 + 0x23) == 3) && ((temp_v0 & 0xf800) == 0xa000)) {
        if ((*(unsigned short *)(param_2 + 0x36) & 0xfff) != 0) {
          if ((*(unsigned short *)(param_2 + 0x36) & 0xfff) != 4000) {
            return 1;
          }
        }
        else if (*(char *)(param_2 + 0x43) != '\0') {
          return 1;
        }
      }
    }
    else if ((*(unsigned int *)(param_2 + 0x28) & 0x1ffff) >> 0xc == (temp_v0 & 0xffff) >> 0xb) {
      return 1;
    }
  }
  return 0;
}
