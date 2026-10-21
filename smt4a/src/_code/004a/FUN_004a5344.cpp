/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a5344` (_code @ 0x4a5344, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_0031d174(...);
int FUN_00493518(int, int, int);
int words2Copy(int, float [2]);
int FUN_004935c8(int, int, int);
int pairAt8Get(int, float [5]);
int FUN_004a5ea0(...);
int owner4ASetSizeAndCall(int, double);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: efctSetSpeed. */
extern int FUN_002a482c(int);
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_00493518. */
/* Supplied declaration required: words2Copy. */
/* Supplied declaration required: FUN_004935c8. */
/* Supplied declaration required: pairAt8Get. */
/* Supplied declaration required: FUN_004a5ea0. */
/* Supplied declaration required: owner4ASetSizeAndCall. */
extern int flaggedValueHolderGetTotal(int);
extern int rangeGetMinimumLimit(int);


void FUN_004a5344(int param_1)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7 [2];
  float temp_v8 [5];
  
  words2Copy(param_1 + 200,temp_v7);
  pairAt8Get(param_1 + 200,temp_v8);
  if (((int)(temp_v7[0] + temp_v8[0]) < 0x43a00000) &&
     ((unsigned int)(temp_v7[0] + temp_v8[0]) < 0xc3a00000)) {
    temp_v6 = *(float *)(param_1 + 0x850);
    temp_v7[0] = temp_v6;
    FUN_004935c8(param_1 + 200,1,0);
    temp_v7[0] = temp_v6;
    FUN_00493518(param_1 + 200,0x47c,0);
    temp_v7[0] = temp_v6;
    FUN_00493518(param_1 + 200,0x47d,0);
    temp_v7[0] = temp_v6;
    FUN_00493518(param_1 + 200,0x47e,0);
    temp_v7[0] = temp_v6;
    FUN_00493518(param_1 + 200,0x47f,0);
    temp_v7[0] = temp_v6;
    FUN_00493518(param_1 + 200,0x480,0);
    temp_v7[0] = temp_v6;
    FUN_00493518(param_1 + 200,0x481,0);
    if (*(int *)(param_1 + 0x28) != 0) {
      efctSetSpeed();
      temp_v1 = FUN_002a482c(param_1 + 0x20);
      temp_v2 = rangeGetMinimumLimit(param_1 + 0x20);
      temp_v5 = 0;
      if (temp_v5 < temp_v2) {
        do {
          if ((*(int *)(param_1 + 0x14) != 2) ||
             (temp_v3 = FUN_0031d174(param_1 + 0x20), temp_v3 != temp_v5)) {
            FUN_004a5ea0(param_1,temp_v5,0,
                         (int)*(short *)(param_1 + 0x864 + (temp_v1 + temp_v5) * 0x20 + 4));
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v2);
      }
      if ((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x14) == 2)) {
        temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
        temp_v0 = *(short *)(param_1 + 0x864 + temp_v1 * 0x20 + 4);
        temp_v4 = FUN_0031d174(param_1 + 0x20);
        FUN_004a5ea0(param_1,temp_v4,1,(int)temp_v0);
      }
      owner4ASetSizeAndCall(param_1,temp_v6);
      efctSetSpeed();
      return;
    }
  }
  return;
}

} /* extern "C" */
