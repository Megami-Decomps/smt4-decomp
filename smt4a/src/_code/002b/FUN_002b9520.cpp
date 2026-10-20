/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9520` (_code @ 0x2b9520, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005821a0; /* 0x5821a0 */

extern unsigned int FUN_003d4ed8(unsigned int);


void FUN_002b9520(void)

{
  int *piVar1;
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v4 = *(char *)(DAT_005821a0 + 9) != '\0';
  temp_v0 = '\0';
  if (temp_v4) {
    temp_v0 = *(char *)(DAT_005821a0 + 8);
  }
  if (temp_v4 && temp_v0 != '\0') {
    piVar1 = (int *)(DAT_005821a0 + 4);
    temp_v2 = 0;
    *(unsigned char *)(DAT_005821a0 + 8) = 0;
    if (0 < *piVar1) {
      do {
        temp_v3 = DAT_005821a0 + temp_v2 * 0x20;
        if (((*(char *)(temp_v3 + 0xc) != '\0') && (*(short *)(temp_v3 + 0x1c) == 0)) &&
           (*(int *)(temp_v3 + 0x14) == 0)) {
          temp_v1 = FUN_003d4ed8(*(unsigned int *)(temp_v3 + 0x10));
          *(unsigned int *)(temp_v3 + 0x14) = temp_v1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(DAT_005821a0 + 4));
    }
  }
  return;
}

} /* extern "C" */
