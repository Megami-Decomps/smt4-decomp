#include "romwright_types.h"

extern "C" {

int FUN_002ae7e8(int);
int FUN_002ae898(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */


void FUN_003bb9b8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002ae898(0x2a,0);
  FUN_002ae7e8(0x2a);
  return;
}

} /* extern "C" */
