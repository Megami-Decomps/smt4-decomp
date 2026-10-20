#include "romwright_types.h"

extern "C" {

int FUN_00164a9c(void);
int FUN_003e688c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00571130; /* 0x571130 */

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_003e688c. */


void FUN_002dec4c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00164a9c();
  if (DAT_00571130 != 0) {
    FUN_003e688c();
    return;
  }
  return;
}

} /* extern "C" */
