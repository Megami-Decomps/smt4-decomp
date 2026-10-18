/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003100ae` (_code @ 0x3100ae, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;


char FUN_003100ae(int param_1,unsigned int param_2,char param_3)

{
  char *pcVar1;
  unsigned int temp_v0;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  
  piVar3 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18));
  temp_v2 = 0;
  for (temp_v0 = 0; temp_v0 < param_2 >> 2; temp_v0 = temp_v0 + 1) {
    temp_v1 = *piVar3;
    piVar3 = piVar3 + 1;
    temp_v2 = temp_v1 + temp_v2;
  }
  for (temp_v0 = 0; temp_v0 < (param_2 & 3); temp_v0 = temp_v0 + 1) {
    temp_v1 = *piVar3;
    piVar3 = (int *)((int)piVar3 + 1);
    param_3 = (char)temp_v1 + param_3;
  }
  temp_v0 = 0;
  do {
    pcVar1 = (char *)((int)&temp_v2 + temp_v0);
    temp_v0 = temp_v0 + 1;
    param_3 = *pcVar1 + param_3;
  } while (temp_v0 < 4);
  return param_3;
}
