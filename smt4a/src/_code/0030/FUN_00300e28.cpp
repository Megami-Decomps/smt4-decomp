#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int FUN_00222104(void);
int FUN_00222434(void);
int FUN_002ce8d8(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00222104. */
/* Supplied declaration required: FUN_00222434. */
/* Supplied declaration required: FUN_002ce8d8. */


void FUN_00300e28(int param_1)

{
/* irregular: 4 native warning(s); review required */
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_00222434();
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_00222104();
  }
  FUN_002ce8d8(*(unsigned int *)(param_1 + 200));
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
