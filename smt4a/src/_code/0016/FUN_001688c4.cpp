/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001688c4` (_code @ 0x1688c4, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sentinelLookupGetValue(void);

extern int FUN_0019be8c(unsigned int);
/* Supplied declaration required: sentinelLookupGetValue. */


unsigned int FUN_001688c4(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  if (param_1[5] == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v1 = param_1[3];
    if (temp_v1 < param_1[4] + temp_v1) {
      do {
        temp_v2 = (unsigned int)*(unsigned short *)(*param_1 + temp_v1 * 0x20);
        if (temp_v2 == 0xffff) {
          return temp_v3;
        }
        temp_v0 = FUN_0019be8c(temp_v2);
        if (temp_v0 != 0) {
          if (temp_v2 == 0xf801) {
            temp_v3 = temp_v3 + 1;
          }
          else {
            if (temp_v2 == 0xf802) {
              return temp_v3;
            }
            if (temp_v2 != 0xf81a) {
              sentinelLookupGetValue();
              temp_v1 = temp_v1 + temp_v2;
            }
            else {
              temp_v1 = temp_v1 + 1;
              temp_v3 = (unsigned int)*(unsigned short *)(*param_1 + temp_v1 * 0x20);
            }
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < param_1[3] + param_1[4]);
    }
  }
  return temp_v3;
}

} /* extern "C" */
