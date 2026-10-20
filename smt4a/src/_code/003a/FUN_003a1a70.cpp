#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int asdMemFree(int);
int FUN_00222104(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00222104. */


void FUN_003a1a70(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_001800b8();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00222104();
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
