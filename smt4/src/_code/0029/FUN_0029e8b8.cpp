/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e8b8` (_code @ 0x29e8b8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289058(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00289058. */


void FUN_0029e8b8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x62) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) != param_2) {
    *(unsigned char *)(param_1 + 0x61) = 1;
  }
  FUN_00289058(param_1 + 0x28,param_2);
  return;
}

} /* extern "C" */
