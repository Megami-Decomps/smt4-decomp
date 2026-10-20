#include "romwright_types.h"

extern "C" {

int FUN_002c415c(int);

typedef int romwright_code(...);
extern unsigned char DAT_00472718;
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c415c. */


void FUN_002c7bd8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  (**(romwright_code **)(&DAT_00472718 + *(int *)(param_1 + 0x38) * 0x18 + 8))(*(unsigned int *)(param_1 + 0x3c));
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
