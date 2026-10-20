/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004af258` (_code @ 0x4af258, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004af308(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_004af308. */


unsigned int FUN_004af258(unsigned int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_2 != (int *)0x0) {
    FUN_004af308();
    param_1[0x51e] = (unsigned int)param_2;
    temp_v1 = (**(romwright_code **)(*param_2 + 0xc))(param_2);
    if (temp_v1 == 0) {
      temp_v2 = 0x41;
    }
    else {
      temp_v0 = (**(romwright_code **)(*(int *)param_1[0x51e] + 4))();
      *(unsigned char *)(param_1 + 0x524) = temp_v0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0x520] = 0x40;
      param_1[0x521] = 0x10000;
      *(unsigned char *)((int)param_1 + 0x148f) = 0;
      *(unsigned char *)((int)param_1 + 0x1491) = 0;
      temp_v2 = 0;
    }
    return temp_v2;
  }
  return 0x40;
}

} /* extern "C" */
