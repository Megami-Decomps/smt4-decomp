#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);
int FUN_0041860c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_0041860c. */


void FUN_003defe0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001ad9b4();
  if (temp_v0 != 0) {
    FUN_0041860c(param_1);
    return;
  }
  return;
}

} /* extern "C" */
