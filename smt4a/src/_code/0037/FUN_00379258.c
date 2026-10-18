/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379258` (_code @ 0x379258, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001cd3ec. */
extern unsigned int FUN_0040ac08(void);


void FUN_00379258(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00178b04();
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = FUN_0040ac08();
  }
  *(unsigned int *)(DAT_00581288 + 400) = temp_v0;
  FUN_001cd3ec();
  return;
}
