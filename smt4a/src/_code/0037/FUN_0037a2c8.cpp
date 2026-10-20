#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_001acf98(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_0037a2c8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0014384c(0x24);
  FUN_001acf98(0x24,0);
  return;
}

} /* extern "C" */
