/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5ba0` (_code @ 0x2c5ba0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_0046505c; /* 0x46505c */

/* Supplied declaration required: FUN_002c498c. */


void FUN_002c5ba0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x310,1);
  *puVar1 = DAT_0046505c;
  return;
}

} /* extern "C" */
