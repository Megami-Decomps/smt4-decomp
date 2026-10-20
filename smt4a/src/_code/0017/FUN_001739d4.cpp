/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001739d4` (_code @ 0x1739d4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00188b60. */
extern unsigned int FUN_001948f4(unsigned int);


void FUN_001739d4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned int *)(param_1 + 4) = param_2;
  temp_v0 = FUN_001948f4(param_2);
  *(unsigned int *)(param_1 + 0x10c) = temp_v0;
  FUN_00188b60(param_1 + 0x110);
  return;
}

} /* extern "C" */
