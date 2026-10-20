/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00261840` (_code @ 0x261840, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrollListSetSelection(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: scrollListSetSelection. */
extern unsigned long long __aeabi_idivmod(int, int);


void FUN_00261840(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned long long temp_v5;
  
  if ((0 < *(int *)(param_1 + 0x50)) &&
     (temp_v0 = *(int *)(param_1 + 0x24), temp_v1 = *(int *)(param_1 + 0x20),
     temp_v2 = *(int *)(param_1 + 0x38), temp_v3 = *(int *)(param_1 + 0x48),
     temp_v4 = *(int *)(param_1 + 0x50), temp_v5 = __aeabi_idivmod(temp_v4 - 1,temp_v2),
     temp_v4 <= (temp_v0 + temp_v1) * temp_v2 + temp_v3)) {
    scrollListSetSelection(param_1,(int)temp_v5);
    scrollListSetSelection(param_1 + 0x28,(int)((unsigned long long)temp_v5 >> 0x20));
    return;
  }
  return;
}

} /* extern "C" */
