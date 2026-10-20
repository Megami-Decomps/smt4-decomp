/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1a18` (_code @ 0x2e1a18, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f0c8; /* 0x57f0c8 */


unsigned int FUN_002e1a18(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0057f0c8 != 0) {
    temp_v1 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned char *)(DAT_0057f0c8 + temp_v1 * 4 + 0x5ac);
      if ((temp_v2 == param_1) && (*(char *)(DAT_0057f0c8 + temp_v1 + 0x5da) != '\0')) {
        return 1;
      }
      if (temp_v2 != 8) {
        if (temp_v2 != 9) {
          if (temp_v2 != 0x14) {
            if (temp_v2 == 0x15) {
              if (param_1 != 5) {
                if (param_1 == 6) {
                  temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5db);
                  if (temp_v0 != '\0') {
                    return 1;
                  }
                }
              }
              else {
                temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5da);
                if (temp_v0 != '\0') {
                  return 1;
                }
              }
            }
          }
          else if (param_1 != 5) {
            if (param_1 == 6) {
              temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5db);
              if (temp_v0 != '\0') {
                return 1;
              }
            }
          }
          else {
            temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5da);
            if (temp_v0 != '\0') {
              return 1;
            }
          }
        }
        else {
          if (param_1 != 3) goto LAB_002e1b24;
          temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5da);
          if (temp_v0 != '\0') {
            return 1;
          }
        }
      }
      else if (param_1 == 4) {
        temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5da);
        if (temp_v0 != '\0') {
          return 1;
        }
      }
LAB_002e1b24:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
  }
  return 0;
}

} /* extern "C" */
