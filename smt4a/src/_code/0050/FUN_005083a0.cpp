/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005083a0` (_code @ 0x5083a0, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


int FUN_005083a0(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x10);
  if (temp_v2 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v2 & 1;
    temp_v1 = 0;
    if ((*(unsigned short *)(param_1 + 0x10) & 1) != 0) {
      do {
        if (*(unsigned short *)(param_1 + temp_v1 * 0xc + 0x14) == param_2) {
          return param_1 + temp_v1 * 0xc + 0x14;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  if (temp_v0 < temp_v2) {
    do {
      temp_v1 = param_1 + temp_v0 * 0xc;
      if (*(unsigned short *)(temp_v1 + 0x14) == param_2) {
        return param_1 + temp_v0 * 0xc + 0x14;
      }
      if (*(unsigned short *)(temp_v1 + 0x20) == param_2) {
        return param_1 + temp_v0 * 0xc + 0x20;
      }
      temp_v0 = temp_v0 + 2;
    } while ((int)temp_v0 < (int)temp_v2);
  }
  return 0;
}

} /* extern "C" */
