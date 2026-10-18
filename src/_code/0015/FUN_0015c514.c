/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c514` (_code @ 0x15c514, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int FUN_0015c514(int *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  if (param_1[4] < param_1[3]) {
    temp_v3 = param_1[3] + 7;
    temp_v5 = 0;
    temp_v0 = (int)((temp_v3 & 0xfffffff8) + ((unsigned int)((int)temp_v3 >> 0x1f) >> 0x1d)) >> 3;
    if (0 < temp_v0) {
      do {
        temp_v1 = *(unsigned char *)((int)param_1 + temp_v5 + 0x14);
        if (temp_v1 != 0xff) {
          temp_v2 = 1;
          temp_v4 = 0;
          do {
            if ((temp_v1 & temp_v2) == 0) {
              *(unsigned char *)((int)param_1 + temp_v5 + 0x14) =
                   temp_v2 | *(unsigned char *)((int)param_1 + temp_v5 + 0x14);
              param_1[4] = param_1[4] + 1;
              return param_1[2] * (temp_v4 + temp_v5 * 8) + *param_1;
            }
            temp_v4 = temp_v4 + 1;
            temp_v2 = temp_v2 << 1;
          } while (temp_v4 < 8);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v0);
    }
  }
  return 0;
}
