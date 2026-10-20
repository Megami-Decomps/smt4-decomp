#include "romwright_types.h"

extern "C" {

int FUN_002c0c74(void);
int FUN_002c0cec(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002c0c74. */
/* Supplied declaration required: FUN_002c0cec. */


void FUN_0031d51c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c0cec(0x2c,3);
  FUN_002c0c74();
  return;
}

} /* extern "C" */
