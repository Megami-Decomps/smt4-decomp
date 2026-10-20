#include "romwright_types.h"

extern "C" {

int FUN_002c0cc4(void);
int FUN_002c0cec(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002c0cc4. */
/* Supplied declaration required: FUN_002c0cec. */


void FUN_00229f18(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c0cec(5,0);
  FUN_002c0cc4();
  return;
}

} /* extern "C" */
