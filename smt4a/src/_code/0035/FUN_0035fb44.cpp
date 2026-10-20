#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_0020ad6c(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_0020ad6c. */


void FUN_0035fb44(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00184758(param_1 + 0x96c,0xd,0);
  FUN_0020ad6c(param_1,0xe,1);
  return;
}

} /* extern "C" */
