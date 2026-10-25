/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001289f6` (_code @ 0x1289f6, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int crc32Dispatch(int, int, unsigned int);
int rt_memcpy(unsigned int, int, unsigned int);

extern int FUN_0030db5c(int, int, unsigned int);
/* Supplied declaration required: crc32Dispatch. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_001289f6(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = param_1[1];
  temp_v2 = temp_v0;
  if (param_3 < temp_v0) {
    temp_v2 = param_3;
  }
  if (temp_v2 == 0) {
    return 0;
  }
  param_1[1] = temp_v0 - temp_v2;
  if (*(int *)(param_1[7] + 0x18) != 1) {
    if (*(int *)(param_1[7] + 0x18) != 2) {
      rt_memcpy(param_2,*param_1,temp_v2);
      param_1[2] = param_1[2] + temp_v2;
      *param_1 = *param_1 + temp_v2;
      return temp_v2;
    }
    temp_v1 = param_1[0xc];
    crc32Dispatch(temp_v1,*param_1,temp_v2);
  }
  else {
    temp_v1 = FUN_0030db5c(param_1[0xc],*param_1,temp_v2);
  }
  param_1[0xc] = temp_v1;
  rt_memcpy(param_2,*param_1,temp_v2);
  param_1[2] = param_1[2] + temp_v2;
  *param_1 = *param_1 + temp_v2;
  return temp_v2;
}

} /* extern "C" */
