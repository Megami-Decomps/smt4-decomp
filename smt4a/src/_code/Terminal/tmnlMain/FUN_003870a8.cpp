/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003870a8` (_code @ 0x3870a8, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0040a3f0(unsigned int);


void FUN_003870a8(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x600);
  temp_v2 = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x600) = 0;
  do {
    temp_v3 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned int *)(param_1 + temp_v2 * 4 + 0x5a8) = 0;
    temp_v2 = temp_v2 + 2;
    *(unsigned int *)(param_1 + temp_v3 * 4 + 0x5a8) = 0;
  } while (temp_v1 < 0x16);
  if (*(char *)(param_1 + 5) == '\0') {
    temp_v0 = 0;
    do {
      if (((*(unsigned char *)(param_1 + 9) != temp_v0) &&
          (*(char *)((unsigned int)*(unsigned char *)(param_1 + 9) * 0x3c + 0x56fd3c) ==
           *(char *)(temp_v0 * 0x3c + 0x56fd3c))) && (temp_v1 = FUN_0040a3f0(temp_v0), temp_v1 != 0)) {
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x600) * 4 + 0x5a8) = temp_v0 * 0x3c + 0x56fd38;
        *piVar5 = *piVar5 + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x16);
    return;
  }
  temp_v0 = 0;
  do {
    if ((*(unsigned char *)(param_1 + 9) != temp_v0) &&
       (*(char *)((unsigned int)*(unsigned char *)(param_1 + 9) * 0x3c + 0x56fd3c) ==
        *(char *)(temp_v0 * 0x3c + 0x56fd3c))) {
      *(unsigned int *)(param_1 + *(int *)(param_1 + 0x600) * 4 + 0x5a8) = temp_v0 * 0x3c + 0x56fd38;
      *piVar5 = *piVar5 + 1;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0x16);
  return;
}

} /* extern "C" */
