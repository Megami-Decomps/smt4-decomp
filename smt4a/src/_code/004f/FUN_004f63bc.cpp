#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6354. */


void FUN_004f63bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e6354(param_1,200);
  FUN_002e6354(param_1 + 200,200);
  return;
}

} /* extern "C" */
