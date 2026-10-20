/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126274` (_code @ 0x126274, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030de32(int);
int FUN_0030de7c(int *, int, int, int, unsigned int);
int FUN_0030e196(int *);

/* Supplied declaration required: FUN_0030de32. */
/* Supplied declaration required: FUN_0030de7c. */
/* Supplied declaration required: FUN_0030e196. */


unsigned int FUN_00126274(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  do {
    do {
      if ((param_1[0x1d] == 0) && (FUN_0030e196(param_1), param_1[0x1d] == 0)) {
        if (param_2 != 0) {
          temp_v2 = param_1[0x17];
          if (temp_v2 >= 0) {
            temp_v1 = param_1[0xe] + temp_v2;
          }
          else {
            temp_v1 = 0;
          }
          FUN_0030de7c(param_1,temp_v1,param_1[0x1b] - temp_v2,param_2 == 4,param_4);
          param_1[0x17] = param_1[0x1b];
          FUN_0030de32(*param_1);
          if (*(int *)(*param_1 + 0x10) != 0) {
            if (param_2 != 4) {
              return 1;
            }
            return 3;
          }
          if (param_2 == 4) {
            return 2;
          }
        }
        return 0;
      }
      param_1[0x18] = 0;
      temp_v0 = *(unsigned char *)(param_1[0xe] + param_1[0x1b]);
      *(unsigned short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      temp_v2 = param_1[0x5a8];
      param_1[0x5a8] = temp_v2 + 1;
      *(unsigned char *)(param_1[0x5a6] + temp_v2) = temp_v0;
      *(short *)(param_1 + temp_v0 + 0x25) = (short)param_1[temp_v0 + 0x25] + 1;
      temp_v2 = param_1[0x1b];
      param_1[0x1d] = param_1[0x1d] - 1;
      param_1[0x1b] = temp_v2 + 1;
    } while (param_1[0x5a8] != param_1[0x5a7] - 1);
    temp_v1 = param_1[0x17];
    if (temp_v1 >= 0) {
      temp_v3 = param_1[0xe] + temp_v1;
    }
    else {
      temp_v3 = 0;
    }
    FUN_0030de7c(param_1,temp_v3,(temp_v2 + 1) - temp_v1,0,param_4);
    param_1[0x17] = param_1[0x1b];
    FUN_0030de32(*param_1);
  } while (*(int *)(*param_1 + 0x10) != 0);
  return 0;
}

} /* extern "C" */
