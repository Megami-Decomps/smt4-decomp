#include "romwright_types.h"

extern "C" {

int FUN_00298140(int, int, int);
int timerStart(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00298140. */
/* Supplied declaration required: timerStart. */


void FUN_0028bfe4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x3048) != 0) {
    FUN_00298140(param_1,0x27,1);
    timerStart(param_1 + 0x12b8,9,0);
    return;
  }
  return;
}

} /* extern "C" */
