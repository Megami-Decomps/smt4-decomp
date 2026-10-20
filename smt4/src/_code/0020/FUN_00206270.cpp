#include "romwright_types.h"

extern "C" {

int FUN_00292f4c(int);
int FUN_00297b94(int, unsigned int, unsigned int);
int FUN_0029ca58(void);
int FUN_002a0cc8(int);
int FUN_002bd8e8(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00292f4c. */
/* Supplied declaration required: FUN_00297b94. */
extern unsigned int FUN_00297ca4(int, unsigned int);
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002bd8e8. */


void FUN_00206270(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bd8e8(param_1 + 0x12b8,0,0);
  FUN_0029ca58();
  *(unsigned int *)(param_1 + 0x5918) = 4;
  FUN_002a0cc8(0);
  if (*(int *)(param_1 + 0x304c) - 8U <= 5) {
    FUN_00292f4c(param_1);
    return;
  }
  temp_v0 = FUN_00297ca4(param_1,0);
  FUN_00297b94(param_1,temp_v0,*(unsigned int *)(param_1 + 0x305c));
  return;
}

} /* extern "C" */
