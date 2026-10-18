/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361444` (_code @ 0x361444, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;


unsigned int FUN_00361444(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 < 4) {
    temp_v0 = 3;
  }
  else {
    temp_v0 = param_1 | 1;
    if (param_1 >= 0x14) {
      temp_v2 = 0;
      do {
        temp_v1 = param_1 + temp_v2;
        if (((((temp_v1 & 1) != 0) && (temp_v1 % 3 != 0)) && (temp_v1 % 5 != 0)) &&
           ((((unsigned int)(((unsigned long long)temp_v1 * 0x49249249 + 0x49249249) >> 0x21) * -7 + temp_v1 != 0 &&
             (temp_v1 % 0xb != 0)) && ((temp_v1 % 0xd != 0 && (temp_v1 % 0x11 != 0)))))) {
          return temp_v1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 100);
    }
  }
  return temp_v0;
}
