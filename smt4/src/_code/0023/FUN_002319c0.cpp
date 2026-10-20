#include "romwright_types.h"

extern "C" {

int FUN_002bff6c(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002bff6c. */


void FUN_002319c0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002bff6c(0,0,0x140,0xf0,0);
  return;
}

} /* extern "C" */
