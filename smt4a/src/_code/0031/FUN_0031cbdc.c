/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cbdc` (_code @ 0x31cbdc, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: ll_sdiv. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_0031cbdc(int *param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_1[5] != param_1[7] || param_1[6] != param_1[4]) {
    temp_v3 = param_1[0xb];
    temp_v2 = param_1[4] - param_1[6];
    if (temp_v3 < temp_v2) {
      temp_v2 = temp_v3;
    }
    if (temp_v2 <= (unsigned int)(param_1[2] - *param_1)) {
      temp_v1 = 0x40000;
      ll_sdiv(*param_1,param_1[1],0x40000,0);
      if (temp_v1 + temp_v2 < 0x40001) {
        temp_v1 = param_1[8] + temp_v1;
      }
      else {
        if ((unsigned int)param_1[10] < temp_v3) {
          if (param_1[9] != 0) {
            (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
          }
          temp_v0 = (*(romwright_code *)**(unsigned int **)param_1[0xf])
                            ((unsigned int *)param_1[0xf],param_1[0xb],4);
          param_1[9] = temp_v0;
          if (temp_v0 == 0) {
            return 0;
          }
          param_1[10] = param_1[0xb];
        }
        temp_v0 = 0x40000 - temp_v1;
        rt_memcpy(param_1[9],param_1[8] + temp_v1,temp_v0);
        rt_memcpy(param_1[9] + temp_v0,param_1[8],temp_v2 - temp_v0);
        temp_v1 = param_1[9];
      }
      *param_2 = temp_v1;
      return 1;
    }
    software_interrupt(0x18);
    if (param_1[0x13] < 0) {
      FUN_002e3140();
    }
  }
  return 0;
}
