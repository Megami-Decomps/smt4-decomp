/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1a9c` (_code @ 0x2d1a9c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_00264670. */
/* Supplied declaration required: FUN_00266704. */
/* Supplied declaration required: FUN_002668cc. */
/* Supplied declaration required: FUN_00273ec4. */
/* Supplied declaration required: FUN_00273fa4. */


void FUN_002d1a9c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447060;
  if (DAT_00447060 != 0) {
    FUN_00273fa4();
    FUN_00273ec4();
    FUN_00264670(temp_v0 + 0xec);
    FUN_002668cc(temp_v0 + 0xec,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
    FUN_00266704(temp_v0 + 0xec);
    return;
  }
  return;
}
