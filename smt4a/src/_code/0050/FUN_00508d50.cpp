/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508d50` (_code @ 0x508d50, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(unsigned int, unsigned char [272], int);

typedef int romwright_code(...);
/* Supplied declaration required: rt_memcpy_w. */


unsigned char FUN_00508d50(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [272];
  
  (**(romwright_code **)(*(int *)*param_1 + 0x40))
            ((int *)*param_1,(unsigned int)*(unsigned short *)(param_1 + 3) * param_3 + param_1[2],0);
  temp_v0 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,temp_v1,0x100);
  if (temp_v0 == 0x100) {
    rt_memcpy_w(param_2,temp_v1,0x100);
  }
  return temp_v0 == 0x100;
}

} /* extern "C" */
