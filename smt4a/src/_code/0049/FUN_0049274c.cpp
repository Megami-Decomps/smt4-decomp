#include "romwright_types.h"

extern "C" {

int FUN_0019a7f4(int, int);
int asdTMTexTableFreeEntry(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */


void FUN_0049274c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x1480) != 0) {
    FUN_0019a7f4(0x28, *(int *)(param_1 + 0x1480));
    *(int *)(param_1 + 0x1480) = 0;
  }
  asdTMTexTableFreeEntry(0x28);
  return;
}

} /* extern "C" */
