#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: sysMemClear. */


void FUN_004f63bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  sysMemClear(param_1,200);
  sysMemClear(param_1 + 200,200);
  return;
}

} /* extern "C" */
