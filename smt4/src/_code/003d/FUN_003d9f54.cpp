#include "romwright_types.h"

extern "C" {

int FUN_002c4938(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c4938. */


void FUN_003d9f54(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4938(param_1,200);
  FUN_002c4938(param_1 + 200,200);
  return;
}

} /* extern "C" */
