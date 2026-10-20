#include "romwright_types.h"

extern "C" {

int FUN_0025715c(void);
int FUN_002c0894(void);
int asdMemFree(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: asdMemFree. */


void FUN_00247240(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_002c0894();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0025715c();
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
