/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001550b8` (_code @ 0x1550b8, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern unsigned int DAT_0063ff80; /* 0x63ff80 */


void FUN_001550b8(unsigned int *param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  if (param_2 == 1) {
    temp_v2 = 2;
  }
  else {
    temp_v2 = 1;
  }
  temp_v1 = 1;
  temp_v5 = 1;
  if (param_3 == 0x501) {
    temp_v1 = 2;
  }
  else if (param_3 == 0x502) {
    temp_v1 = 2;
    temp_v5 = temp_v1;
  }
  if (param_2 == 1) {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 1;
  }
  temp_v0 = 1;
  temp_v3 = 1;
  if (param_3 == 0x501) {
    temp_v0 = 2;
  }
  else if (param_3 == 0x502) {
    temp_v0 = 2;
    temp_v3 = temp_v0;
  }
  *param_1 = DAT_0063ff80;
  param_1[1] = temp_v2 * temp_v1 * 0xf0;
  param_1[5] = param_3;
  param_1[6] = 0x88f0;
  param_1[0xb] = param_3;
  param_1[7] = temp_v4 * temp_v0 * 0xf0;
  param_1[8] = temp_v3 * 400;
  param_1[9] = 0x30000;
  param_1[10] = 0x821a;
  param_1[2] = temp_v5 * 400;
  param_1[3] = 0x20000;
  param_1[4] = 0x8ce0;
  return;
}
