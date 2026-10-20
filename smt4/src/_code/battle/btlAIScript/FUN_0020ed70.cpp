#include "romwright_types.h"

extern "C" {

int FUN_002c08f0(void);
int FUN_003356c0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002c08f0. */
/* Supplied declaration required: FUN_003356c0. */


void FUN_0020ed70(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c08f0();
  if (DAT_00434260 != 0) {
    FUN_003356c0();
    return;
  }
  return;
}

} /* extern "C" */
