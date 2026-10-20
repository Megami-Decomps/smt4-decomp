#include "romwright_types.h"

extern "C" {

int FUN_0050d2cc(int);

extern int FUN_004acb54(int);
/* Supplied declaration required: FUN_0050d2cc. */


unsigned int FUN_00513f90(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int unaff_r6;
  
  temp_v0 = FUN_0050d2cc(*(int *)(param_1 + 4));
  if (temp_v0 != 0) {
    unaff_r6 = *(int *)(temp_v0 + 0x10);
  }
  if (!(temp_v0 != 0 && unaff_r6 != 0)) {
    temp_v1 = 0xe;
  }
  else {
    temp_v3 = *(int *)(unaff_r6 + 0x38);
    temp_v0 = 0;
    if (temp_v0 < temp_v3) {
      do {
        temp_v2 = FUN_004acb54(unaff_r6);
        if (temp_v2 == 0) {
          return 0x14;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v3);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
