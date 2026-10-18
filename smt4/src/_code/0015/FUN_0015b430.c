/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015b430` (_code @ 0x15b430, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;


void FUN_0015b430(int *param_1,int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int *piVar5;
  
  temp_v1 = *(int *)(param_1[0x24] + param_2 * 4);
  if (temp_v1 != 0) {
    param_4 = param_1[0x27];
  }
  if (temp_v1 == 0 || param_4 == param_2) {
    return;
  }
  param_1[0x27] = param_2;
  temp_v2 = *(int *)(temp_v1 + 0xc);
  if (*param_1 != temp_v2) {
    *(unsigned char *)((int)param_1 + 0xa9) = 1;
    if ((temp_v2 == 0) || (*(char *)(*(int *)(temp_v2 + 8) + 0xb4) == '\0')) {
      temp_v2 = 0;
    }
    *param_1 = temp_v2;
  }
  temp_v2 = *(int *)(temp_v1 + 0x10);
  if (param_1[1] != temp_v2) {
    *(unsigned char *)((int)param_1 + 0xab) = 1;
    if ((temp_v2 == 0) || (*(char *)(*(int *)(temp_v2 + 8) + 0xb4) == '\0')) {
      temp_v2 = 0;
    }
    param_1[1] = temp_v2;
  }
  param_1[0x28] = 0;
  piVar5 = *(int **)(temp_v1 + 0x1c);
  temp_v0 = param_1[5];
  for (piVar4 = *(int **)(temp_v1 + 0x18); piVar4 != piVar5; piVar4 = piVar4 + 1) {
    *(unsigned char *)((int)param_1 + 0xaa) = 1;
    if (param_1[0x28] == (temp_v0 & 0x3fffffff)) break;
    if (*(char *)(*(int *)(*piVar4 + 8) + 0xb4) != '\0') {
      *(int *)(param_1[3] + param_1[0x28] * 4) = *piVar4;
      param_1[0x28] = param_1[0x28] + 1;
    }
  }
  param_1[0x29] = 0;
  piVar4 = *(int **)(temp_v1 + 0x44);
  piVar5 = *(int **)(temp_v1 + 0x48);
  while( 1 ) {
    if (piVar4 == piVar5) {
      return;
    }
    *(unsigned char *)(param_1 + 0x2a) = 1;
    if (param_1[0x29] == 8) break;
    if (*(char *)(*(int *)(*piVar4 + 8) + 0xb4) != '\0') {
      *(int *)(param_1[9] + param_1[0x29] * 4) = *piVar4;
      param_1[0x29] = param_1[0x29] + 1;
    }
    piVar4 = piVar4 + 1;
  }
  return;
}
