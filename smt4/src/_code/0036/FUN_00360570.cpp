/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360570` (_code @ 0x360570, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdFatalError. */
extern int FUN_003609bc(int *);


void FUN_00360570(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_003609bc(&temp_v1);
  if (temp_v0 < 0) {
    asdFatalError();
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  *param_1 = temp_v1;
  return;
}

} /* extern "C" */
