/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004736c4` (_code @ 0x4736c4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_001b3428. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_004736c4(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = param_2;
  FUN_001b3428(DAT_00570260 + 0x88);
  FUN_002e3328(param_1);
  return;
}
