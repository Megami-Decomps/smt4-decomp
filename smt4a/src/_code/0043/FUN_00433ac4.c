/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00433ac4` (_code @ 0x433ac4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0059495a; /* 0x59495a */
extern unsigned char DAT_0062db8c; /* 0x62db8c */

/* Supplied declaration required: FUN_001223ac. */
/* Supplied declaration required: FUN_002f6650. */
/* Supplied declaration required: FUN_00432d44. */


void FUN_00433ac4(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0059495a == '\0') {
    FUN_002f6650();
    FUN_001223ac();
  }
  FUN_00432d44(&DAT_0062db8c);
  return;
}
