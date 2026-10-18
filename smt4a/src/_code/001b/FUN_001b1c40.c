/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1c40` (_code @ 0x1b1c40, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_001b1784. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_001b1c40(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                int param_6)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  nn_os_CriticalSection_Enter(*(int *)(param_1 + 4) + 0x110);
  piVar1 = *(int **)(param_1 + 4);
  FUN_001b1784(piVar1,param_2,param_1 + 8,0x200,0,0,0,1);
  if (piVar1 != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(*piVar1 + 0x4c))();
    if ((temp_v0 != 0) && (temp_v0 = (**(romwright_code **)(*piVar1 + 0xc))(piVar1), temp_v0 != 0)) {
      (**(romwright_code **)(*piVar1 + 0x40))(piVar1,param_5,0);
      temp_v0 = param_4;
      if (param_6 != 0) {
        for (; 0 < temp_v0; temp_v0 = temp_v0 - temp_v1) {
          if (*(char *)(param_1 + 0x20a) != '\0') {
            nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
            goto joined_r0x001b1d14;
          }
          temp_v1 = temp_v0;
          if (param_6 <= temp_v0) {
            temp_v1 = param_6;
          }
          temp_v1 = (**(romwright_code **)(*piVar1 + 0x24))(piVar1,param_3,(temp_v1 + 0x1fU) & 0xffffffe0);
          if (temp_v1 < 0) {
            nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
            goto joined_r0x001b1d14;
          }
          if (temp_v0 <= temp_v1) break;
          param_3 = param_3 + temp_v1;
        }
        nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
        if (piVar1 != (int *)0x0) {
          (**(romwright_code **)(*piVar1 + 0x38))();
        }
        return param_4;
      }
      temp_v0 = (**(romwright_code **)(*piVar1 + 0x24))(piVar1,param_3,(param_4 + 0x1fU) & 0xffffffe0);
      if (-1 < temp_v0) {
        nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
        if (piVar1 != (int *)0x0) {
          (**(romwright_code **)(*piVar1 + 0x38))();
        }
        return param_4;
      }
      nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
    }
    else {
      nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
    }
joined_r0x001b1d14:
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 0x38))();
    }
  }
  else {
    nn_os_CriticalSection_Leave(*(int *)(param_1 + 4) + 0x110);
  }
  return -1;
}
