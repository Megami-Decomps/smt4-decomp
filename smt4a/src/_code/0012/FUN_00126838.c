/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126838` (_code @ 0x126838, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030de32. */
/* Supplied declaration required: FUN_0030de7c. */
/* Supplied declaration required: FUN_0030e196. */


unsigned int FUN_00126838(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    temp_v4 = param_1[3] - 5;
  }
  do {
    if ((unsigned int)param_1[0x1d] < 2) {
      FUN_0030e196(param_1);
      if (param_1[0x1d] == 0 && param_2 == 0) {
        return 0;
      }
      if (param_1[0x1d] == 0) {
        temp_v4 = param_1[0x17];
        if (temp_v4 >= 0) {
          temp_v3 = param_1[0xe] + temp_v4;
        }
        else {
          temp_v3 = 0;
        }
        FUN_0030de7c(param_1,temp_v3,param_1[0x1b] - temp_v4,param_2 == 4);
        param_1[0x17] = param_1[0x1b];
        FUN_0030de32(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 != 4) {
            return 0;
          }
          return 2;
        }
        if (param_2 == 4) {
          return 3;
        }
        return 1;
      }
    }
    temp_v3 = param_1[0x17];
    temp_v1 = param_1[0x1b] + param_1[0x1d];
    temp_v0 = temp_v3 + temp_v4;
    param_1[0x1d] = 0;
    param_1[0x1b] = temp_v1;
    if ((temp_v1 == 0) || (temp_v0 <= temp_v1)) {
      param_1[0x1d] = temp_v1 - temp_v0;
      param_1[0x1b] = temp_v0;
      if (temp_v3 >= 0) {
        temp_v2 = param_1[0xe] + temp_v3;
      }
      else {
        temp_v2 = 0;
      }
      FUN_0030de7c(param_1,temp_v2,temp_v0 - temp_v3,0);
      param_1[0x17] = param_1[0x1b];
      FUN_0030de32(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    temp_v3 = param_1[0x17];
    if (param_1[0xb] - 0x106U <= (unsigned int)(param_1[0x1b] - temp_v3)) {
      if (temp_v3 >= 0) {
        temp_v2 = param_1[0xe] + temp_v3;
      }
      else {
        temp_v2 = 0;
      }
      FUN_0030de7c(param_1,temp_v2,param_1[0x1b] - temp_v3,0);
      param_1[0x17] = param_1[0x1b];
      FUN_0030de32(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( 1 );
}
