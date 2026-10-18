/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0052170c` (_code @ 0x52170c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_0052170c(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  piVar6 = (int *)*param_1;
  temp_v6 = 0;
  if ((param_3 != 0) && (temp_v5 = (**(romwright_code **)*piVar6)(piVar6,param_3), temp_v6 = param_3, temp_v5 == 0))
  {
    (**(romwright_code **)(*piVar6 + 8))
              (piVar6,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",param_3);
    if (param_2 != param_3) {
      temp_v6 = 0;
      if ((param_2 != 0) &&
         (temp_v5 = (**(romwright_code **)*piVar6)(piVar6,param_2), temp_v6 = param_2, temp_v5 == 0)) {
        (**(romwright_code **)(*piVar6 + 8))
                  (piVar6,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",param_2)
        ;
        (**(romwright_code **)(*piVar6 + 4))(piVar6,0);
        return 0;
      }
    }
    else {
      (**(romwright_code **)(*piVar6 + 4))(piVar6,0);
      return 0;
    }
  }
  temp_v3 = param_1[3];
  if (temp_v3 != 0) {
    temp_v4 = param_1[4];
    temp_v0 = param_1[2];
    temp_v2 = param_1[1] + temp_v4;
    if (temp_v0 >= (unsigned int)(temp_v4 + temp_v3)) {
      if (temp_v2 != temp_v3 + temp_v2) {
        rt_memcpy(temp_v5 + param_4,temp_v2,(temp_v3 + temp_v2) - temp_v2);
      }
    }
    else {
      temp_v1 = temp_v0 + param_1[1];
      if (temp_v2 != temp_v1) {
        rt_memcpy(temp_v5 + param_4,temp_v2,temp_v1 - temp_v2);
      }
      temp_v2 = param_1[1];
      temp_v3 = temp_v2 + (temp_v3 - (temp_v0 - temp_v4));
      if (temp_v2 != temp_v3) {
        rt_memcpy(temp_v5 + param_4 + (temp_v0 - temp_v4),temp_v2,temp_v3 - temp_v2);
      }
    }
  }
  temp_v3 = param_1[1];
  param_1[1] = temp_v5;
  param_1[2] = temp_v6;
  (**(romwright_code **)(*piVar6 + 4))(piVar6,temp_v3);
  return 1;
}
