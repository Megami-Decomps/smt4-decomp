#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */


void FUN_0038b7d8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00187180(5,4);
  FUN_00192748();
  return;
}

} /* extern "C" */
