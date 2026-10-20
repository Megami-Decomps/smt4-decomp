/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023fae0` (_code @ 0x23fae0, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int FUN_0023fae0(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = 0;
  if (param_2 == 0) {
    temp_v2 = 4;
  }
  else if (param_2 == 1) {
    temp_v1 = 4;
    temp_v2 = 0x32;
  }
  else if (param_2 == 2) {
    temp_v1 = 0x36;
    temp_v2 = 1;
  }
  else if (param_2 == 3) {
    temp_v1 = 0x43;
    temp_v2 = 0x2a;
  }
  temp_v2 = temp_v2 + temp_v1;
  if (temp_v2 > (int)temp_v1) {
    do {
      temp_v3 = *(int *)(param_1 + 0x1e98) + temp_v1 * 0x114;
      temp_v0 = *(unsigned int *)(temp_v3 + 0x50);
      if ((((temp_v0 & 1) != 0 && (temp_v0 & 0x80) != 0) && ((temp_v0 & 2) == 0)) &&
         ((*(unsigned int *)(temp_v3 + 0x54) & 4) == 0)) {
        return 0;
      }
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < temp_v2);
  }
  return 1;
}

} /* extern "C" */
