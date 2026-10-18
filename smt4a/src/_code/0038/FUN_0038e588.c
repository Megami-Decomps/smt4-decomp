/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e588` (_code @ 0x38e588, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned long long FUN_002e5ac0(unsigned int, unsigned int, int);


void FUN_0038e588(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned long long temp_v7;
  
  puVar8 = (unsigned int *)(param_1 + 0x4850);
  temp_v3 = *puVar8;
  if (0 < (int)temp_v3) {
    temp_v0 = temp_v3 & 1;
    if (temp_v0 == 1) {
      *(unsigned char *)(param_1 + 0x4894) = 0;
    }
    temp_v2 = (unsigned int)(temp_v0 == 1);
    if ((int)temp_v0 < (int)temp_v3) {
      do {
        *(unsigned char *)(param_1 + temp_v2 * 0x40 + 0x4894) = 0;
        *(unsigned char *)(param_1 + (temp_v2 + 1) * 0x40 + 0x4894) = 0;
        temp_v0 = temp_v0 + 2;
        temp_v2 = temp_v2 + 2;
      } while ((int)temp_v0 < (int)*puVar8);
    }
  }
  temp_v6 = 0;
  temp_v5 = 0;
  if (0 < (int)*puVar8) {
    do {
      temp_v7 = FUN_002e5ac0(1,0,temp_v5);
      if (((unsigned int)((unsigned long long)temp_v7 >> 0x20) & param_4) != 0 || ((unsigned int)temp_v7 & param_3) != 0) {
        temp_v3 = *puVar8;
        temp_v1 = 0;
        do {
          temp_v4 = param_1 + temp_v1 * 0x40;
          if (*(int *)(temp_v4 + 0x4888) == temp_v5) {
            temp_v6 = temp_v6 + 1;
            *(unsigned char *)(temp_v4 + 0x4894) = 1;
          }
          temp_v3 = temp_v3 - 1;
          temp_v1 = temp_v1 + 1;
        } while (0 < (int)temp_v3);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < (int)*puVar8);
    if (temp_v6 >= 2) {
      *(unsigned char *)(param_1 + 0x4854) = 1;
      return;
    }
  }
  *(unsigned char *)(param_1 + 0x4854) = 0;
  return;
}
