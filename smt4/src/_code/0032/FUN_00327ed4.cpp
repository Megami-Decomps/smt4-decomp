/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327ed4` (_code @ 0x327ed4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002570a8(unsigned int);
int FUN_002c415c(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002570a8. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00327ed4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int **pp;
  
  temp_v0 = 0;
  pp = (unsigned int **)(param_1 + 0x30);
  puVar4 = pp[0];
  puVar1 = (unsigned int *)*puVar4;
  temp_v1 = *(unsigned int *)((int)pp[1] + 0x38);
  for (temp_v0 = 0; temp_v0 < temp_v1; temp_v0++) {
    FUN_002570a8(*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_002c415c(puVar4);
  return;
}

} /* extern "C" */
