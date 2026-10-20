/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004663a8` (_code @ 0x4663a8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int slistPushFront(int, unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: slistPushFront. */


void FUN_004663a8(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  param_2[0x4b] = 0;
  if (param_2 != (unsigned int *)0x0) {
    (**(romwright_code **)*param_2)(param_2);
    slistPushFront(param_1 + 8,param_2);
    return;
  }
  return;
}

} /* extern "C" */
