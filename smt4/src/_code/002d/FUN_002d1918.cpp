#include "romwright_types.h"

extern "C" {

int FUN_001f71b4(void);
int FUN_0024ad88(unsigned int);
int FUN_00269334(void);
int FUN_002c415c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001f71b4. */
/* Supplied declaration required: FUN_0024ad88. */
/* Supplied declaration required: FUN_00269334. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002d1918(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_001f71b4();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    temp_v0 = *(int *)(param_1 + 0x28);
    FUN_0024ad88(*(unsigned int *)(temp_v0 + 0x10));
    FUN_0024ad88(*(unsigned int *)(temp_v0 + 0x14));
    FUN_002c415c(temp_v0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00269334();
  }
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
