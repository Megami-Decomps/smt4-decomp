#include "romwright_types.h"

extern "C" {

int FUN_00152cf8(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00152cf8. */


void FUN_004d03ec(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00152cf8(0,0,0x140,0xf0,0);
  return;
}

} /* extern "C" */
