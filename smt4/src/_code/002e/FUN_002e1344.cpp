/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1344` (_code @ 0x2e1344, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0894(int);
int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002e1344(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int *)(temp_v0 + 0x20) != 0) {
    FUN_002c415c();
  }
  FUN_002c415c(*(unsigned int *)(temp_v0 + 8));
  FUN_002c415c(*param_1);
  FUN_002c0894(param_1[3]);
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
