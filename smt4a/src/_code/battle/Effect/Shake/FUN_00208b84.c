/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208b84` (_code @ 0x208b84, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001630d4. */


void FUN_00208b84(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,0x14,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}
