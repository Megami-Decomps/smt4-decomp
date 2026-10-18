/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170198` (_code @ 0x170198, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_001a2480(void);
/* Supplied declaration required: FUN_001a299c. */
/* Supplied declaration required: FUN_001a2a5c. */


void FUN_00170198(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001a2480();
  if (temp_v0 != 0) {
    FUN_001a2a5c(temp_v0);
    FUN_001a299c();
    return;
  }
  return;
}
