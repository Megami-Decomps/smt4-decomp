/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afc10` (_code @ 0x1afc10, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int *FUN_001afa44(void);


void FUN_001afc10(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_001afa44();
  temp_v0 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = temp_v0;
  return;
}
