/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a140` (_code @ 0x35a140, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: while (INT_ADD). */


unsigned int FUN_0035a140(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  *param_2 = (param_1[1] - *param_1) >> 1;
  param_2[1] = *param_1;
  temp_v3 = param_1[2];
  temp_v2 = 0;
  *param_1 = temp_v3;
  do {
    temp_v0 = *(short *)(temp_v3 + temp_v2 * 2);
    if (temp_v0 == 0x2f) {
      if (temp_v2 >= 0x100) {
        temp_v1 = 0xe0e046c8;
      }
      else {
        temp_v3 = temp_v3 + temp_v2 * 2;
        param_1[1] = temp_v3;
        param_1[2] = temp_v3 + 2;
        temp_v0 = *(short *)(temp_v3 + 2);
        while (temp_v0 == 0x2f) {
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 2;
          temp_v0 = *(short *)(temp_v3 + 2);
        }
        if (*(short *)param_1[2] == 0) {
          *(unsigned char *)(param_1 + 3) = 1;
        }
        temp_v1 = 0;
      }
      return temp_v1;
    }
    if (temp_v0 == 0) {
      temp_v3 = temp_v3 + temp_v2 * 2;
      param_1[1] = temp_v3;
      *(unsigned char *)(param_1 + 3) = 1;
      param_1[2] = temp_v3;
      temp_v1 = 0;
      return temp_v1;
    }
    temp_v2 = temp_v2 + 1;
  } while( 1 );
}
