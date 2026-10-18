/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dab0` (_code @ 0x34dab0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0040a244. */


void FUN_0034dab0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_0040a244();
    *(unsigned int *)(temp_v0 + 0x34) = 0;
  }
  FUN_0019a5a0(temp_v0);
  return;
}
