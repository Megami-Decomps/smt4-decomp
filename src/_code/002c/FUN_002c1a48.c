/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1a48` (_code @ 0x2c1a48, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002c1a48(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if ((((unsigned int)param_1 | (unsigned int)param_2) & 3) == 0) {
    while (param_3 >= 4) {
      temp_v1 = *param_1;
      param_1 = param_1 + 1;
      temp_v2 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
      if (temp_v1 != temp_v2) {
        temp_v0 = (temp_v1 & 0xff) - (temp_v2 & 0xff);
        if (((temp_v0 == 0) && (temp_v0 = (temp_v1 & 0xffff) - (temp_v2 & 0xffff), temp_v0 == 0)) &&
           (temp_v0 = (temp_v1 & 0xffffff) - (temp_v2 & 0xffffff), temp_v0 == 0)) {
          temp_v0 = (temp_v1 >> 0x18) - (temp_v2 >> 0x18);
        }
        return temp_v0;
      }
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) goto LAB_002c1a9c;
    param_3 = param_3 + 1;
    while( 1 ) {
      temp_v1 = *param_1;
      temp_v2 = *param_2;
      param_1 = (unsigned int *)((int)param_1 + 1);
      param_2 = (unsigned int *)((int)param_2 + 1);
      temp_v0 = (unsigned int)(unsigned char)temp_v1 - (unsigned int)(unsigned char)temp_v2;
      if (temp_v0 != 0) {
        return temp_v0;
      }
      param_3 = param_3 - 2;
      if (param_3 == 0) break;
LAB_002c1a9c:
      temp_v1 = *param_1;
      temp_v2 = *param_2;
      param_1 = (unsigned int *)((int)param_1 + 1);
      param_2 = (unsigned int *)((int)param_2 + 1);
      temp_v0 = (unsigned int)(unsigned char)temp_v1 - (unsigned int)(unsigned char)temp_v2;
      if (temp_v0 != 0) {
        return temp_v0;
      }
    }
    return 0;
  }
  return 0;
}
