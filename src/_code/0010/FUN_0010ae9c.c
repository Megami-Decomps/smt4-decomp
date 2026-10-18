/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ae9c` (_code @ 0x10ae9c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00465058; /* 0x465058 */
extern unsigned int DAT_00465064; /* 0x465064 */

/* Supplied declaration required: FUN_002bf148. */
/* Supplied declaration required: FUN_002c25f4. */


void FUN_0010ae9c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002bf148((&DAT_00465064)[DAT_00465058 ^ 1]);
  FUN_002c25f4();
  return;
}
