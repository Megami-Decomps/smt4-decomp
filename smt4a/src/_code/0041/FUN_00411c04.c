/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00411c04` (_code @ 0x411c04, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_003e4a00(void);
/* Supplied declaration required: FUN_00411e8c. */


void FUN_00411c04(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = FUN_0014aa78();
  if (temp_v0 != 0) {
    temp_v6 = 0;
    temp_v5 = 0;
    do {
      temp_v1 = temp_v0 + temp_v5 * 0x10;
      if (*(int *)(temp_v1 + 0x4d78) != 0) {
        if (param_2 != 0) {
          *(unsigned int *)(temp_v1 + 0x4d7c) = 0;
          *(unsigned int *)(temp_v1 + 0x4d80) = 0;
        }
        temp_v1 = param_1 + temp_v6 * 0x1c;
        temp_v2 = FUN_003e4a00();
        if (*(int *)(param_1 + 0x184) != 0) {
          puVar4 = (unsigned int *)((temp_v6 * 0xc - 0x90) + *(int *)(param_1 + 0x188) + temp_v2 * 0x90);
          temp_v4 = *puVar4;
          temp_v3 = puVar4[2];
        }
        else {
          temp_v2 = temp_v2 * 0x90 + 0x5e156c + temp_v6 * 0xc;
          temp_v4 = *(unsigned int *)(temp_v2 - 0x90);
          temp_v3 = *(unsigned int *)(temp_v2 - 0x88);
        }
        *(unsigned int *)(temp_v1 + 0x4c) = temp_v3;
        *(unsigned int *)(temp_v1 + 0x48) = temp_v4;
        FUN_00411e8c(param_1,temp_v1 + 0x34);
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0xc);
  }
  return;
}
