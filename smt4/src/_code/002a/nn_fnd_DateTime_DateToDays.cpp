/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_DateTime_DateToDays` (_code @ 0x2a83ec, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


int nn_fnd_DateTime_DateToDays(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = param_1 - 2000;
  if (param_2 < 3) {
    param_2 = param_2 + 9;
    temp_v0 = param_1 - 0x7d1;
  }
  else {
    param_2 = param_2 - 3;
  }
  temp_v2 = 1;
  if (-1 < (int)temp_v0) {
    temp_v3 = ((int)temp_v0 / 100) * 0x23ab1;
    temp_v1 = ((int)temp_v0 % 100) * 0x5b5;
    return ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) +
           ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + (param_2 * 0x99 + 2) / 5 +
           param_3 + temp_v2 + 0x3a;
  }
  if ((int)temp_v0 % 400 != 0) {
    temp_v2 = 0;
    if ((int)temp_v0 % 100 == 0) {
      temp_v3 = ((int)temp_v0 / 100) * 0x23ab1;
      temp_v1 = ((int)temp_v0 % 100) * 0x5b5;
      return ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) +
             ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + (param_2 * 0x99 + 2) / 5 +
             param_3 + temp_v2 + 0x3a;
    }
    if ((temp_v0 & 3) != 0) {
      temp_v2 = 0;
      temp_v3 = ((int)temp_v0 / 100) * 0x23ab1;
      temp_v1 = ((int)temp_v0 % 100) * 0x5b5;
      return ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) +
             ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + (param_2 * 0x99 + 2) / 5 +
             param_3 + temp_v2 + 0x3a;
    }
  }
  temp_v2 = 1;
  temp_v3 = ((int)temp_v0 / 100) * 0x23ab1;
  temp_v1 = ((int)temp_v0 % 100) * 0x5b5;
  return ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) +
         ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + (param_2 * 0x99 + 2) / 5 + param_3
         + temp_v2 + 0x3a;
}

} /* extern "C" */
