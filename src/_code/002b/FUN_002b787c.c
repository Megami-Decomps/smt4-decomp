/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b787c` (_code @ 0x2b787c, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ae664. */
extern int FUN_002ae6b0(unsigned int);


unsigned int FUN_002b787c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  if (param_1[5] != 0) {
    temp_v1 = param_1[3];
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*param_1 + temp_v1 * 0x20);
      if (temp_v2 == 0xffff) {
        return temp_v3;
      }
      temp_v0 = FUN_002ae6b0(temp_v2);
      if (temp_v0 != 0) {
        if (temp_v2 == 0xf801) {
          temp_v3 = temp_v3 + 1;
        }
        else {
          if (temp_v2 == 0xf802) {
            return temp_v3;
          }
          if (temp_v2 != 0xf81a) {
            FUN_002ae664();
            temp_v1 = temp_v1 + temp_v2;
          }
          else {
            temp_v1 = temp_v1 + 1;
            temp_v3 = (unsigned int)*(unsigned short *)(*param_1 + temp_v1 * 0x20);
          }
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1[3] + 999);
  }
  else {
    temp_v3 = 0;
  }
  return temp_v3;
}
