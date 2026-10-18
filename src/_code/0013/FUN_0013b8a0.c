/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b8a0` (_code @ 0x13b8a0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00148438(void);
/* Supplied declaration required: FUN_002bb100. */
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


void FUN_0013b8a0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002bb378();
  FUN_002bb100();
  temp_v0 = FUN_00148438();
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x13b8b8);
  }
  FUN_002bb308();
  return;
}
