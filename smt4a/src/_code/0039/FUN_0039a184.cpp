#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int FUN_00237210(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00237210. */


void FUN_0039a184(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00237210(*param_1);
  FUN_00237210(param_1[1]);
  FUN_00237210(param_1[2]);
  FUN_00237210(param_1[4]);
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
