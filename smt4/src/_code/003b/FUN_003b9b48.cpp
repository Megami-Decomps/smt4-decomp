#include "romwright_types.h"

extern "C" {

int FUN_0022af9c(int);
int FUN_0022b064(int);
int FUN_0027341c(int, int);
int FUN_0027348c(int);
int FUN_00289508(void);

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_0022af9c. */
/* Supplied declaration required: FUN_0022b064. */
/* Supplied declaration required: FUN_0027341c. */
/* Supplied declaration required: FUN_0027348c. */
extern int FUN_002734f0(int);
/* Supplied declaration required: FUN_00289508. */
extern int FUN_002903c8(void);


void FUN_003b9b48(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0022af9c(0);
    FUN_0027341c(DAT_00432fc8 + 0xa8,1);
    *(unsigned int *)(param_1 + 0x2c) = 1;
    return;
  }
  if ((*(int *)(param_1 + 0x2c) == 1) && (temp_v0 = FUN_002734f0(DAT_00432fc8 + 0xa8), temp_v0 != 0)) {
    FUN_0027348c(DAT_00432fc8 + 0xa8);
    temp_v0 = FUN_002903c8();
    if (temp_v0 == 0) {
      FUN_00289508();
      FUN_0022af9c(1);
      FUN_0022b064(param_1);
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    *(unsigned int *)(param_1 + 0x28) = 0xd;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
