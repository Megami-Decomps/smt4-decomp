/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310d5e` (_code @ 0x310d5e, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7674(unsigned int, int, int);
int FUN_002eea5c(unsigned int);
int FUN_002f4c9c(...);

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7674. */
/* Supplied declaration required: FUN_002eea5c. */
/* Supplied declaration required: FUN_002f4c9c. */


void FUN_00310d5e(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002f4c9c(param_2);
  FUN_002f4c9c();
  FUN_002eea5c(param_1);
  temp_v0 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x14) != temp_v0) {
    FUN_002f4c9c(param_2);
    FUN_002e7674(param_1,temp_v0,param_2);
  }
  return;
}

} /* extern "C" */
