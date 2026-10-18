/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db898` (_code @ 0x2db898, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001ab894. */
extern unsigned int *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002db898(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c0ac8();
  FUN_001ab894(*puVar1);
  if (puVar1 != (unsigned int *)0x0) {
    FUN_002c4360(puVar1);
    return;
  }
  return;
}
