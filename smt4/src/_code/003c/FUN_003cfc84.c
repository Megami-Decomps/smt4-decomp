/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cfc84` (_code @ 0x3cfc84, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_0023c368. */
/* Supplied declaration required: FUN_003ddd6c. */


unsigned int FUN_003cfc84(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_2 + 0x56c);
  temp_v2 = 4;
  if (param_3 != 0) {
    if (temp_v1 == 0x14) {
      do {
        temp_v1 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
        temp_v0 = *(unsigned int *)(temp_v1 + 0x50);
        if (((temp_v0 & 1) != 0 && (temp_v0 & 2) != 0) && (temp_v0 & 0x400) != 0) {
          FUN_0023c368(0,param_2,temp_v1,0,10,10,2,1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x36);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x29) {
      return 0;
    }
  }
  else {
    if (temp_v1 != 0x14) {
      if (temp_v1 == 0x1e) {
        do {
          temp_v1 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
          temp_v0 = *(unsigned int *)(temp_v1 + 0x50);
          if (((temp_v0 & 1) != 0 && (temp_v0 & 2) != 0) && (temp_v0 & 0x400) != 0) {
            FUN_003ddd6c(0,param_2,temp_v1,*(unsigned int *)(temp_v1 + 0x68),5,1);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x36);
      }
    }
    else {
      do {
        temp_v1 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
        temp_v0 = *(unsigned int *)(temp_v1 + 0x50);
        if (((temp_v0 & 1) != 0 && (temp_v0 & 2) != 0) && (temp_v0 & 0x400) != 0) {
          FUN_003ddd6c(0,param_2,temp_v1,0,10,1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x36);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x24) {
      return 0;
    }
  }
  return 1;
}
