/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9b9c` (_code @ 0x4d9b9c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0061887c; /* 0x61887c */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_004d9b9c(void)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter(&DAT_0061887c);
  nn_os_CriticalSection_Leave(&DAT_0061887c);
  return;
}
