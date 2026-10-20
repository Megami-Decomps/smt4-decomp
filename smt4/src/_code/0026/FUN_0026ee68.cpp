/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ee68` (_code @ 0x26ee68, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043da2c; /* 0x43da2c */


unsigned int FUN_0026ee68(unsigned int param_1)

{
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0043da2c != 0) {
    temp_v1 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned char *)(DAT_0043da2c + temp_v1 * 4 + 0x494);
      if ((temp_v2 == param_1) && (*(char *)(DAT_0043da2c + temp_v1 + 0x4be) != '\0')) {
        return 1;
      }
      if (temp_v2 != 8) {
        if ((temp_v2 == 9) && (param_1 == 3)) {
          temp_v0 = *(char *)(DAT_0043da2c + temp_v1 + 0x4be);
          if (temp_v0 != '\0') {
            return 1;
          }
        }
      }
      else if (param_1 == 4) {
        temp_v0 = *(char *)(DAT_0043da2c + temp_v1 + 0x4be);
        if (temp_v0 != '\0') {
          return 1;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
  }
  return 0;
}

} /* extern "C" */
