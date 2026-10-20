/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043dd54` (_code @ 0x43dd54, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042cc10(int);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0042cc10. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0043dd54(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  nn_os_CriticalSection_Enter(param_1 + 0x10);
  *(unsigned char *)(param_1 + 0x42) = 1;
  FUN_0042cc10(param_1 + 0x1c);
  while (piVar1 = *(int **)(param_1 + 8), piVar1 != (int *)0x0) {
    if ((int *)*piVar1 == piVar1) {
      *(int *)(param_1 + 8) = 0;
    }
    else {
      *(int *)(param_1 + 8) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    piVar1[1] = 0;
    *piVar1 = 0;
    if (piVar1[2] != 0) {
      software_interrupt(0x23);
      piVar1[2] = 0;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - 1;
  }
  while (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - 1;
    if ((int *)*piVar1 == piVar1) {
      *(int *)(param_1 + 0xc) = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    piVar1[1] = 0;
    *piVar1 = 0;
    if (piVar1[2] != 0) {
      software_interrupt(0x23);
      piVar1[2] = 0;
    }
  }
  nn_os_CriticalSection_Leave(param_1 + 0x10);
  return;
}

} /* extern "C" */
