#include "romwright_types.h"

extern "C" {

int FUN_00164a9c(void);
int FUN_0040de54(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0040de54. */


void FUN_00369258(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00164a9c();
  if (DAT_005712f0 != 0) {
    FUN_0040de54();
    return;
  }
  return;
}

} /* extern "C" */
