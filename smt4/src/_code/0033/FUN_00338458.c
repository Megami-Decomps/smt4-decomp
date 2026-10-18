/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338458` (_code @ 0x338458, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;


void FUN_00338458(int param_1)

{
/* irregular: 1 goto(s) */
  short temp_v0;
  int temp_v1;
  short *psVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  if (*(int *)(param_1 + 0x1fbc) != 0) {
    temp_v4 = 4;
    do {
      temp_v5 = *(int *)(param_1 + 0x1e98) + temp_v4 * 0x114;
      if ((*(unsigned int *)(temp_v5 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v5 + 0x50) & 0x80) != 0) {
        temp_v6 = 0;
        temp_v2 = 0;
        do {
          temp_v1 = 0;
          do {
            temp_v0 = *(short *)(*(int *)(param_1 + 0x1fc0) + temp_v2 * 0x288 + temp_v1 * 2 + 8);
            if (temp_v0 < 0) break;
            if (temp_v0 == *(short *)(temp_v5 + 0x62)) {
              temp_v6 = *(int *)(param_1 + 0x1fc0) + temp_v2 * 0x288;
              goto LAB_00338504;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x32);
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x6d);
LAB_00338504:
        temp_v2 = 0;
        do {
          psVar3 = (short *)(*(int *)(param_1 + 0x1fbc) + temp_v2 * 0x18);
          temp_v0 = *psVar3;
          temp_v7 = temp_v0 == -1;
          if (temp_v7) {
            temp_v0 = psVar3[1];
          }
          if (temp_v7 && temp_v0 == -1) {
            temp_v3 = (unsigned int)(unsigned short)psVar3[2];
            temp_v7 = temp_v3 == 0;
            if (temp_v7) {
              temp_v3 = *(unsigned int *)(psVar3 + 4);
            }
            if (temp_v7 && temp_v3 == 0xffffffff) {
              *psVar3 = *(short *)(temp_v6 + 0x6e);
              psVar3[1] = *(short *)(temp_v5 + 0x62);
              psVar3[2] = *(short *)(temp_v6 + 0xce);
              *(unsigned int *)(psVar3 + 4) = *(unsigned int *)(temp_v6 + 0xd8);
              break;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x32);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x36);
  }
  return;
}
