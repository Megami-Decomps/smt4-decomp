#include "romwright_types.h"

extern "C" {

int FUN_004fe764(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_004fe764. */


void FUN_003f1114(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_004fe764(0,0,0,8,0xf);
  return;
}

} /* extern "C" */
