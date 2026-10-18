/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a378` (_code @ 0x33a378, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0033a378(int param_1)

{
/* irregular: 1 goto(s) */
  short temp_v0;
  int temp_v1;
  short *psVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  if (*(int *)(param_1 + 0x1fbc) != 0) {
    temp_v3 = 4;
    do {
      temp_v4 = *(int *)(param_1 + 0x1e98) + temp_v3 * 0x114;
      if ((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 0x80) != 0) {
        temp_v5 = 0;
        temp_v2 = 0;
        do {
          temp_v1 = 0;
          do {
            temp_v0 = *(short *)(*(int *)(param_1 + 0x1fc0) + temp_v2 * 0x288 + temp_v1 * 2 + 8);
            if (temp_v0 < 0) break;
            if (temp_v0 == *(short *)(temp_v4 + 0x62)) {
              temp_v5 = *(int *)(param_1 + 0x1fc0) + temp_v2 * 0x288;
              goto LAB_0033a424;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x32);
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x6d);
LAB_0033a424:
        temp_v2 = 0;
        do {
          psVar3 = (short *)(*(int *)(param_1 + 0x1fbc) + temp_v2 * 0x18);
          temp_v0 = *psVar3;
          temp_v6 = temp_v0 == *(short *)(temp_v5 + 0x6e);
          if (temp_v6) {
            temp_v0 = psVar3[1];
          }
          if (((temp_v6 && temp_v0 == *(short *)(temp_v4 + 0x62)) &&
              (psVar3[2] == *(short *)(temp_v5 + 0xce))) &&
             (*(int *)(psVar3 + 4) == *(int *)(temp_v5 + 0xd8))) {
            *(unsigned int *)(psVar3 + 6) = *(unsigned int *)(temp_v4 + 0xc);
            break;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x32);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x36);
  }
  return;
}
