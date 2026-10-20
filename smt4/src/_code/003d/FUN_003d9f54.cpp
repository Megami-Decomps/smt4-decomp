#include "romwright_types.h"

extern "C" {

int memClear(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: memClear. */


void FUN_003d9f54(int param_1)

{
/* irregular: 1 native warning(s); review required */
  memClear(param_1,200);
  memClear(param_1 + 200,200);
  return;
}

} /* extern "C" */
