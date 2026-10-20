#include "romwright_types.h"

extern "C" {

int FUN_002a5ed0(int, int);
int FUN_002c4c2c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c4c2c. */


void FUN_003bb760(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c4c2c(0x2a);
  FUN_002a5ed0(0x2a,0);
  return;
}

} /* extern "C" */
