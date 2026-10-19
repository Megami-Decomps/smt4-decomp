/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035efa0` (_code @ 0x35efa0, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

/* Supplied declaration required: FUN_0035ebc4. */
extern int FUN_0035f244(int, int, unsigned int);
/* Supplied declaration required: FUN_0035f290. */


unsigned int FUN_0035efa0(int param_1,int param_2,int *param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  short *psVar6;
  int aiStack_68 [17];
  
  temp_v0 = 0;
  temp_v2 = 0;
  do {
    temp_v2 = temp_v2 + 2;
    aiStack_68[temp_v0] = *(int *)(param_1 + 0x2c) + temp_v0 * 0x80;
    aiStack_68[temp_v0 + 1] = *(int *)(param_1 + 0x2c) + (temp_v0 + 1) * 0x80;
    temp_v0 = temp_v0 + 2;
  } while (temp_v2 < 0x10);
  temp_v3 = 0;
  if (temp_v3 < param_5) {
    do {
      if (*(int *)(param_4 + temp_v3 * 4) == 0) {
        return 0xe0e0ebf6;
      }
      FUN_0035f290(aiStack_68[temp_v3],0x40);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_5);
  }
  if ((*(char *)(param_1 + 0x1a) == '\0') && (temp_v3 = 0, param_5 != 0)) {
    do {
      temp_v0 = FUN_0035f244(param_1,aiStack_68[temp_v3],0x40);
      if (temp_v0 != 0) {
        *(unsigned int *)(param_2 + temp_v3 * 4) =
             *(unsigned int *)(param_2 + temp_v3 * 4) | (1 << *(signed char *)(param_1 + 0x1b));
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_5);
  }
  temp_v3 = (**(romwright_code **)(*param_3 + 0x24))(param_3);
  if (((temp_v3 < 2) || ((int)temp_v3 >= 0x4001)) ||
     (temp_v1 = (**(romwright_code **)(*param_3 + 0x2c))(param_3,*(unsigned int *)(param_1 + 0x24),temp_v3),
     temp_v1 != temp_v3)) {
    return 0xd820ebec;
  }
  psVar6 = *(short **)(param_1 + 0x24);
  if (*psVar6 != -0x101) {
    return 0xf820ebf0;
  }
  temp_v2 = 1;
  temp_v0 = 1;
  if (temp_v3 >= 3) {
    do {
      if (psVar6[temp_v2] == 10) {
        temp_v4 = temp_v2 + 1;
        FUN_0035ebc4(param_1,param_2,psVar6 + temp_v0,(temp_v4 - temp_v0) - 1,aiStack_68,param_5);
        temp_v0 = temp_v4;
      }
      else {
        temp_v4 = temp_v2;
        if (psVar6[temp_v2] == 0) {
          return 0xf820ebf0;
        }
      }
      temp_v2 = temp_v4 + 1;
    } while ((unsigned int)(temp_v2 * 2) < temp_v3);
    if (temp_v4 == temp_v0) {
      return 0;
    }
  }
  FUN_0035ebc4(param_1,param_2,psVar6 + temp_v0,temp_v2 - temp_v0,aiStack_68,param_5);
  return 0;
}
