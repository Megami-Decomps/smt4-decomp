/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e54b8` (_code @ 0x3e54b8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fe86c(int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_003fe86c. */
extern unsigned int FUN_004ffb58(void);


void FUN_003e54b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (temp_v0 != 0) {
    temp_v1 = FUN_004ffb58();
    FUN_003fe86c(temp_v0,temp_v1,0);
    return;
  }
  return;
}

} /* extern "C" */
