/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003902b0` (_code @ 0x3902b0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002e342c. */


unsigned int * FUN_003902b0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x38,0x10,1);
  *puVar1 = 8;
  puVar1[1] = 8;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 9;
  puVar1[3] = 0;
  puVar1[6] = 0;
  FUN_002e342c(puVar1 + 7,param_1);
  return puVar1;
}
