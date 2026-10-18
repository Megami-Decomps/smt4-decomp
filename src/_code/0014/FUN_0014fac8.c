/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014fac8` (_code @ 0x14fac8, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int *FUN_002ad630(void);


void FUN_0014fac8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002ad630();
  temp_v0 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = temp_v0;
  return;
}
