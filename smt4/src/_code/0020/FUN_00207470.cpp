#include "romwright_types.h"

extern "C" {

int FUN_002b2344(unsigned int);
int FUN_002c0894(void);
int asdMemFree(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002b2344. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: asdMemFree. */


void FUN_00207470(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_002c0894();
  }
  FUN_002b2344(*(unsigned int *)(param_1 + 0x18));
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
