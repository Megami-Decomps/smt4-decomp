#include "romwright_types.h"

extern "C" {

int FUN_002a780c(unsigned int);
int FUN_002c415c(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00309e9c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002a780c(*param_1);
  FUN_002a780c(param_1[1]);
  FUN_002a780c(param_1[2]);
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
