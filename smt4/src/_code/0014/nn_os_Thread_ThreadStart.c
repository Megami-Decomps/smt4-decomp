/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_Thread_ThreadStart` (_code @ 0x144f44, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00128110. */
/* Supplied declaration required: FUN_00138364. */
extern unsigned int FUN_00138370(void);
/* Supplied declaration required: nn_os_ThreadLocalStorage_ClearAllSlots. */


unsigned int nn_os_Thread_ThreadStart(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  nn_os_ThreadLocalStorage_ClearAllSlots();
  FUN_00128110();
  FUN_00138364();
  (*(romwright_code *)param_1[1])(param_1[2],param_1[3]);
  (*(romwright_code *)*param_1)(param_1[3]);
  temp_v0 = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    temp_v0 = FUN_00138370();
  }
  software_interrupt(9);
  return temp_v0;
}
