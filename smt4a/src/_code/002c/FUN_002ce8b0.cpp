#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int FUN_0019a5a0(int);
int FUN_002e3304(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3304. */


void FUN_002ce8b0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_001800b8();
  }
  FUN_002e3304(*(unsigned int *)(param_1 + 0x18));
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
