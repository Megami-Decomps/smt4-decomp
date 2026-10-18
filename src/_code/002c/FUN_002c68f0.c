/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c68f0` (_code @ 0x2c68f0, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_002c69cc. */
/* Supplied declaration required: FUN_002c69f8. */


unsigned int FUN_002c68f0(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if ((int)(*param_1 << 0x1a) < 0) {
    temp_v0 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    temp_v0 = 1;
  }
  if (param_2 < (int)temp_v0) {
    temp_v3 = temp_v0 - param_2;
  }
  else {
    temp_v3 = 0;
  }
  param_1[6] = param_1[6] - (temp_v3 + param_2 + param_4);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_002c69cc(param_1);
  }
  for (temp_v2 = 0; temp_v2 < param_4; temp_v2 = temp_v2 + 1) {
    (*(romwright_code *)param_1[1])(*(unsigned char *)(param_3 + temp_v2),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_002c69cc(param_1);
  }
  while (0 < temp_v3) {
    (*(romwright_code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    temp_v3 = temp_v3 - 1;
  }
  while (0 < param_2) {
    (*(romwright_code *)param_1[1])(*(unsigned char *)((int)param_1 + param_2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    param_2 = param_2 - 1;
  }
  FUN_002c69f8(param_1);
  if ((int)(*param_1 << 0x18) < 0) {
    temp_v1 = 2;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
