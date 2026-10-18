/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227eac` (_code @ 0x227eac, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00337b34. */


void FUN_00227eac(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_00293c98();
  FUN_00282b94(puVar1,param_1);
  if ((*puVar1 & 0x2000) != 0) {
    temp_v0 = FUN_00293c98();
    FUN_00337b34(temp_v0,puVar1,1);
  }
  if ((*puVar1 & 0x4000) != 0) {
    temp_v0 = FUN_00293c98();
    FUN_00337b34(temp_v0,puVar1,2);
    return;
  }
  return;
}
