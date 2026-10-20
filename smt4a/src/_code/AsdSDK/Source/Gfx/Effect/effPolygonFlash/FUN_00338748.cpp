#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


extern unsigned char DAT_005c11a8;

void FUN_00338748(int param_1)

{
/* irregular: 1 native warning(s); review required */
  (**(romwright_code **)((unsigned char *)&DAT_005c11a8 + *(int *)(param_1 + 0x38) * 0x1c + 0x8))(*(unsigned int *)(param_1 + 0x3c));
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
