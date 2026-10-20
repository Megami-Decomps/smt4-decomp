/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125084` (_code @ 0x125084, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_buttonHelp; /* 0x43da28 */

extern int FUN_002af600(int);


unsigned int FUN_00125084(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  if ((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = temp_v0 + temp_v3 * 4;
      if (((*(unsigned char *)(temp_v4 + 0x494) == param_1) && (*(char *)(temp_v0 + temp_v3 + 0x4b8) != '\0')) &&
         (temp_v1 = FUN_002af600((int)*(short *)(temp_v0 + temp_v3 * 2 + 0x4ac)), temp_v1 != 0)) {
        return 1;
      }
      if (*(char *)(temp_v4 + 0x494) == '\b') {
        if ((param_1 == 4) && (*(char *)(temp_v0 + temp_v3 + 0x4b8) != '\0')) {
          temp_v1 = temp_v0 + temp_v3 * 2;
          temp_v2 = FUN_002af600((int)*(short *)(temp_v1 + 0x4ac));
          if (temp_v2 != 0) {
            return 1;
          }
          temp_v2 = FUN_002af600((int)*(short *)(temp_v1 + 0x4ae));
          if (temp_v2 != 0) {
            return 1;
          }
          temp_v1 = FUN_002af600((int)*(short *)(temp_v1 + 0x4b0));
          if (temp_v1 != 0) {
            return 1;
          }
          goto LAB_00125144;
        }
      }
      else {
LAB_00125144:
        if ((*(char *)(temp_v4 + 0x494) == '\t' && param_1 == 3) &&
           (*(char *)(temp_v0 + temp_v3 + 0x4b8) != '\0')) {
          temp_v4 = temp_v0 + temp_v3 * 2;
          temp_v1 = FUN_002af600((int)*(short *)(temp_v4 + 0x4ac));
          if ((temp_v1 != 0) ||
             ((temp_v1 = FUN_002af600((int)*(short *)(temp_v4 + 0x4ae)), temp_v1 != 0 ||
              (temp_v4 = FUN_002af600((int)*(short *)(temp_v4 + 0x4b0)), temp_v4 != 0)))) {
            return 1;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
  }
  return 0;
}

} /* extern "C" */
