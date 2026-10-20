#include "romwright_types.h"

extern "C" {

int FUN_002886e0(void);
int FUN_0029b97c(int);
int FUN_002a72c0(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002886e0. */
/* Supplied declaration required: FUN_0029b97c. */
extern int FUN_002a0b34(void);
/* Supplied declaration required: FUN_002a72c0. */


void FUN_00220f5c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_002886e0();
  temp_v0 = FUN_002a0b34();
  if (temp_v0 != 0) {
    FUN_0029b97c(1);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_002a72c0(0);
  }
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00220fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x1c) + 4))(*(int **)(param_1 + 0x1c));
  return;
}

} /* extern "C" */
