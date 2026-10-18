/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238b30` (_code @ 0x238b30, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238be8. */


unsigned int FUN_00238b30(int *param_1,int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_3 + param_4;
  while( 1 ) {
    if (temp_v2 <= param_3) {
      return 1;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(*param_2 + 10);
    if ((*(unsigned short *)(*param_1 + param_3 * 2) != temp_v1) &&
       (((FUN_00238be8(), temp_v1 == 0 || (*(short *)(temp_v1 + 2) == 0)) ||
        ((temp_v0 = *(short *)(*param_1 + param_3 * 2), temp_v0 != *(short *)(temp_v1 + 2) &&
         ((*(short *)(temp_v1 + 4) == 0 ||
          ((temp_v0 != *(short *)(temp_v1 + 4) &&
           ((*(short *)(temp_v1 + 6) == 0 || (temp_v0 != *(short *)(temp_v1 + 6))))))))))))) break;
    param_3 = param_3 + 1;
    *param_2 = *(int *)(*param_2 + 4);
  }
  return 0;
}
