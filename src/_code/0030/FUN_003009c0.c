/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003009c0` (_code @ 0x3009c0, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned long long FUN_0024ddb0(unsigned int, unsigned int);


void FUN_003009c0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned long long temp_v7;
  
  puVar8 = (unsigned int *)(param_1 + 0x5758);
  temp_v2 = *puVar8;
  if (0 < (int)temp_v2) {
    temp_v4 = temp_v2 & 1;
    if (temp_v4 == 1) {
      *(unsigned char *)(param_1 + 0x5788) = 0;
    }
    temp_v0 = (unsigned int)(temp_v4 == 1);
    if ((int)temp_v4 < (int)temp_v2) {
      do {
        *(unsigned char *)(param_1 + temp_v0 * 0x2c + 0x5788) = 0;
        *(unsigned char *)(param_1 + (temp_v0 + 1) * 0x2c + 0x5788) = 0;
        temp_v0 = temp_v0 + 2;
        temp_v4 = temp_v4 + 2;
      } while ((int)temp_v4 < (int)*puVar8);
    }
  }
  temp_v6 = 0;
  temp_v5 = 0;
  if (0 < (int)*puVar8) {
    do {
      temp_v7 = FUN_0024ddb0(1,0);
      if (((unsigned int)temp_v7 & param_3) != 0 || ((unsigned int)((unsigned long long)temp_v7 >> 0x20) & param_4) != 0) {
        temp_v2 = *puVar8;
        temp_v1 = 0;
        do {
          temp_v3 = param_1 + temp_v1 * 0x2c;
          if (*(int *)(temp_v3 + 0x577c) == temp_v5) {
            temp_v6 = temp_v6 + 1;
            *(unsigned char *)(temp_v3 + 0x5788) = 1;
          }
          temp_v2 = temp_v2 - 1;
          temp_v1 = temp_v1 + 1;
        } while (0 < (int)temp_v2);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < (int)*puVar8);
    if (temp_v6 >= 2) {
      *(unsigned char *)(param_1 + 0x575c) = 1;
      return;
    }
  }
  *(unsigned char *)(param_1 + 0x575c) = 0;
  return;
}
