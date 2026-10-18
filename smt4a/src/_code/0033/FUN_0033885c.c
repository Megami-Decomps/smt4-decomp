/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033885c` (_code @ 0x33885c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0019be8c(unsigned int);
/* Supplied declaration required: FUN_0019dc70. */


int FUN_0033885c(int *param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  temp_v4 = 0;
  if (param_1[5] == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v2 = param_1[3];
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(*param_1 + temp_v2 * 0x20);
      if (temp_v3 == 0xffff) break;
      if (temp_v3 != 0xf813) {
        if (temp_v4 == param_2) break;
        temp_v1 = FUN_0019be8c(temp_v3);
        if (temp_v1 != 0) {
          if (temp_v3 != 0xf801) {
            if (temp_v3 != 0xf802) goto LAB_003388d8;
            break;
          }
          temp_v4 = temp_v4 + 1;
        }
      }
      else {
LAB_003388d8:
        FUN_0019dc70();
        temp_v2 = temp_v2 + temp_v3;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_1[3] + 999);
    temp_v4 = 0;
    while (temp_v0 = *(short *)(*param_1 + temp_v2 * 0x20), temp_v0 != 0 && temp_v0 != -0x7ff) {
      temp_v1 = temp_v2 * 0x20;
      temp_v2 = temp_v2 + 1;
      temp_v6 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + *param_1 + 10),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (int)((float)param_1[6] + temp_v5 + temp_v6);
    }
  }
  return temp_v4;
}
