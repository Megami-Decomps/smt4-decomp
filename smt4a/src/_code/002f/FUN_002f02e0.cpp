/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f02e0` (_code @ 0x2f02e0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb108(int, int *, int, int, int, int);
int FUN_002ef584(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int _Znwj(unsigned int);
/* Supplied declaration required: FUN_002eb108. */
/* Supplied declaration required: FUN_002ef584. */


void FUN_002f02e0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1[0x2a] == 0) {
    temp_v0 = _Znwj(0x150);
    if (temp_v0 != 0) {
      FUN_002eb108(temp_v0,param_1,4,0x40,0,0);
    }
    param_1[0x2a] = temp_v0;
    *(char *)(temp_v0 + 0x24) = (char)param_1[0x53];
    temp_v0 = (**(romwright_code **)(*param_1 + 0x44))(param_1);
    if ((temp_v0 != 0) && (temp_v0 = (**(romwright_code **)(*param_1 + 0x44))(param_1), temp_v0 != -1)) {
      temp_v0 = *(int *)(param_1[0x2a] + 0x118);
      temp_v1 = (**(romwright_code **)(*param_1 + 0x44))(param_1);
      *(unsigned int *)(temp_v0 + 4) = temp_v1;
    }
    else {
      *(unsigned int *)(*(int *)(param_1[0x2a] + 0x118) + 4) = 1000;
    }
    FUN_002ef584(param_1[1] + 0x14,param_1[0x2a]);
  }
  return;
}

} /* extern "C" */
