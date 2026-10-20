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


void FUN_002e436c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  timerStart(param_1 + 0x96c,0xd,0);
  FUN_00298140(param_1,0xe,1);
  return;
}

} /* extern "C" */
