#include "romwright_types.h"

extern "C" {

int FUN_002570a8(unsigned int);
int FUN_00257108(void);
int FUN_0025715c(void);
int FUN_002c415c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002570a8. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002f3468(int param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_00257108();
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_0025715c();
  }
  FUN_002570a8(*(unsigned int *)(param_1 + 0x13c));
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
