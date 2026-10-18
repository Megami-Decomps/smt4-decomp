/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b104` (_code @ 0x23b104, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023b104. */
extern unsigned int FUN_0023b3dc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5df8. */


unsigned int FUN_0023b104(unsigned char *param_1,unsigned char *param_2,int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0023b3dc(*param_4,param_4[1]);
  if (param_3 != 1) {
    if (!(temp_v0 == 4 && param_3 == 2)) {
      param_3 = param_3 >> 1;
      if (param_4[8] != 0) {
        temp_v1 = param_3 * param_3 * temp_v0;
        FUN_0023b104(param_1,param_2 + ((temp_v1 & 0x7fffffff) >> 2),param_3,param_4);
        temp_v0 = param_3 * temp_v0;
        FUN_0023b104(param_1 + (temp_v0 >> 3),param_2 + (temp_v1 * 3 >> 3),param_3,param_4);
        FUN_0023b104(param_1 + (temp_v0 & 0x1fffffff),param_2,param_3,param_4);
        FUN_0023b104(param_1 + (temp_v0 * 9 >> 3),param_2 + (temp_v1 >> 3),param_3,param_4);
      }
      else {
        FUN_0023b104(param_1,param_2,param_3,param_4);
        temp_v1 = param_3 * param_3 * temp_v0;
        temp_v0 = param_3 * temp_v0;
        FUN_0023b104(param_1 + (temp_v0 >> 3),param_2 + (temp_v1 >> 3),param_3,param_4);
        FUN_0023b104(param_1 + (temp_v0 & 0x1fffffff),param_2 + ((temp_v1 & 0x7fffffff) >> 2),param_3,
                     param_4);
        FUN_0023b104(param_1 + (temp_v0 * 9 >> 3),param_2 + (temp_v1 * 3 >> 3),param_3,param_4);
      }
    }
    else if (param_4[8] == 0) {
      *param_2 = *param_1;
      param_2[1] = param_1[4];
    }
  }
  else {
    FUN_002c5df8(param_2,param_1,temp_v0 >> 3);
  }
  return 1;
}
