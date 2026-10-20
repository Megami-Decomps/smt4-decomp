#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);
int FUN_002ce8d8(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_005c12a4;
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002ce8d8. */


void FUN_003a1e9c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002ce8d8(*(unsigned int *)(param_1 + 8));
  temp_v0 = *(int *)(param_1 + 4);
  (**(romwright_code **)(&DAT_005c12a4 + *(int *)(temp_v0 + 0x38) * 0x18 + 8))(*(unsigned int *)(temp_v0 + 0x3c));
  FUN_0019a5a0(temp_v0);
  FUN_0019a5a0(*(unsigned int *)(param_1 + 0xc));
  return;
}

} /* extern "C" */
