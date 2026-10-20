#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);

typedef int romwright_code(...);
extern unsigned char DAT_005b3274;
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0013dd78(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    (**(romwright_code **)(&DAT_005b3274 + (unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x10))(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
