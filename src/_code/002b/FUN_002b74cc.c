/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b74cc` (_code @ 0x2b74cc, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;


int * FUN_002b74cc(int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  param_2 = param_2 - (int)param_1;
  if (0 < param_2 >> 2) {
    piVar2 = param_3;
    if (param_2 * 0x20000000 < 0) {
      temp_v0 = *param_1;
      param_1 = param_1 + 1;
      if (temp_v0 != *param_4) {
        piVar2 = param_3 + 1;
        *param_3 = temp_v0;
      }
    }
    param_3 = piVar2;
    for (param_2 = param_2 >> 3; param_2 != 0; param_2 = param_2 - 1) {
      piVar2 = param_3;
      if (*param_1 != *param_4) {
        piVar2 = param_3 + 1;
        *param_3 = *param_1;
      }
      piVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      param_3 = piVar2;
      if (*piVar1 != *param_4) {
        param_3 = piVar2 + 1;
        *piVar2 = *piVar1;
      }
    }
  }
  return param_3;
}
