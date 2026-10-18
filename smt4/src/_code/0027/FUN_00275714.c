/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275714` (_code @ 0x275714, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00448c20; /* 0x448c20 */

extern unsigned int FUN_00291e40(unsigned int);


void FUN_00275714(void)

{
  int *piVar1;
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v4 = *(char *)(DAT_00448c20 + 9) != '\0';
  temp_v0 = '\0';
  if (temp_v4) {
    temp_v0 = *(char *)(DAT_00448c20 + 8);
  }
  if (temp_v4 && temp_v0 != '\0') {
    piVar1 = (int *)(DAT_00448c20 + 4);
    temp_v2 = 0;
    *(unsigned char *)(DAT_00448c20 + 8) = 0;
    if (0 < *piVar1) {
      do {
        temp_v3 = DAT_00448c20 + temp_v2 * 0x20;
        if (((*(char *)(temp_v3 + 0xc) != '\0') && (*(short *)(temp_v3 + 0x1c) == 0)) &&
           (*(int *)(temp_v3 + 0x14) == 0)) {
          temp_v1 = FUN_00291e40(*(unsigned int *)(temp_v3 + 0x10));
          *(unsigned int *)(temp_v3 + 0x14) = temp_v1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(DAT_00448c20 + 4));
    }
  }
  return;
}
