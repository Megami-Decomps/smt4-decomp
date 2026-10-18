/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa1e8` (_code @ 0x4aa1e8, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */


unsigned int FUN_004aa1e8(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if (DAT_0057a9c8 != 0) {
    if (*(char *)(DAT_0057a9c8 + param_2 * 0xa0 + 0xb64c) != '\0') {
      return 1;
    }
    temp_v3 = (unsigned int)*(char *)(DAT_0057a9c8 + param_2 + 0x11884);
    if ((int)temp_v3 < 1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v3 & 1;
      temp_v1 = 0;
      if (temp_v0 != 0) {
        do {
          if (*(char *)(DAT_0057a9c8 + param_2 * 0x280 + temp_v1 * 0x14 + 0xf080) != '\0') {
            return 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (int)temp_v0);
      }
    }
    if ((int)temp_v0 < (int)temp_v3) {
      do {
        temp_v1 = DAT_0057a9c8 + param_2 * 0x280 + temp_v0 * 0x14;
        temp_v2 = temp_v1 + 0xf000;
        temp_v4 = *(char *)(temp_v1 + 0xf080) == '\0';
        if (temp_v4) {
          temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xf094);
        }
        if (!temp_v4 || temp_v2 != 0) {
          return 1;
        }
        temp_v0 = temp_v0 + 2;
      } while ((int)temp_v0 < (int)temp_v3);
    }
  }
  return 0;
}
