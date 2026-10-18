/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a7e8` (_code @ 0x43a7e8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0043ac34(int *);


void FUN_0043a7e8(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_0043ac34(&temp_v1);
  if (temp_v0 < 0) {
    FUN_00195fc8();
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  *param_1 = temp_v1;
  return;
}
