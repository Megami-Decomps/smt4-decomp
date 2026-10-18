/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003965f0` (_code @ 0x3965f0, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003965f0(int param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int unaff_r7;
  unsigned char temp_v2;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    piVar1 = *(int **)(temp_v1 + 0x18);
    if (piVar1 != (int *)0x0) {
      temp_v2 = (*(unsigned char *)(piVar1 + 2) & 1) == 0;
      if (temp_v2) {
        unaff_r7 = piVar1[1];
      }
      if (!temp_v2) {
        (**(romwright_code **)(*piVar1 + 0xc))();
        piVar1 = *(int **)(temp_v1 + 0x18);
        if (((*(unsigned char *)(piVar1 + 2) & 1) != 0) || (piVar1 == (int *)0x0)) {
          temp_v0 = temp_v0 + 1;
          if (temp_v0 >= 0x20) {
            return;
          }
          continue;
        }
        unaff_r7 = piVar1[1];
        (**(romwright_code **)(*piVar1 + 4))();
        *(unsigned int *)(temp_v1 + 0x18) = 0;
      }
      else {
        (**(romwright_code **)(*piVar1 + 4))();
        *(unsigned int *)(temp_v1 + 0x18) = 0;
      }
      if (unaff_r7 == 0) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - 1;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1;
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x20) {
      return;
    }
  } while( 1 );
}
