/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_Thread_ThreadStart` (_code @ 0x144f44, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128110(void);
int FUN_00138364(void);
int FUN_00138370(unsigned int);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00128110. */
/* Supplied declaration required: FUN_00138364. */
/* Supplied declaration required: FUN_00138370. */
extern void nn_os_ThreadLocalStorage_ClearAllSlots(void);


void nn_os_Thread_ThreadStart(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  nn_os_ThreadLocalStorage_ClearAllSlots();
  FUN_00128110();
  FUN_00138364();
  (**(romwright_code **)(param_1 + 4))(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
  (**(romwright_code **)param_1)(*(unsigned int *)(param_1 + 0xc));
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_00138370(*(unsigned int *)(param_1 + 0x10));
  }
  software_interrupt(9);
  return;
}

} /* extern "C" */
