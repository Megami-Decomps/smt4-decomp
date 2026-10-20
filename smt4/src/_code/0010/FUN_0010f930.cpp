/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f930` (_code @ 0x10f930, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001132cc(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00471b58; /* 0x471b58 */

/* Supplied declaration required: FUN_001132cc. */


void FUN_0010f930(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = &temp_v0;
  if (DAT_00471b58 == 0) {
    temp_v0 = 0;
    FUN_001132cc();
    if (((unsigned int)piVar1 & 0x80000000) == 0) {
      DAT_00471b58 = temp_v0;
    }
  }
  return;
}

} /* extern "C" */
