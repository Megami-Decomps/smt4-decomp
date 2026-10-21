/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320b44` (_code @ 0x320b44, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001568f8(unsigned int, int);
int FUN_003ecab8(unsigned int, int, int);
int idSetFindSubjectIndex(unsigned int, int);

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: btlGetMainState. */
extern int FUN_00152f54(void);
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_003ecab8. */
/* Supplied declaration required: idSetFindSubjectIndex. */


unsigned char FUN_00320b44(float *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  float in_s0;
  float in_s1;
  float in_s2;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  if ((param_2 != 0) && ((param_3 < 0 || (param_3 == 1 || param_3 == 4)))) {
    temp_v1 = btlGetMainState();
    temp_v1 = *(int *)(temp_v1 + 0x1ed4) + param_2 * 0x1d0;
    if (temp_v1 != 0) {
      temp_v2 = btlGetMainState();
      idSetFindSubjectIndex(temp_v2,temp_v1);
      temp_v2 = btlGetMainState();
      FUN_001568f8(temp_v2,param_2);
      temp_v3 = *(unsigned int *)(temp_v1 + 0x50);
      temp_v4 = (temp_v3 & 0x10) != 0;
      temp_v5 = (temp_v3 & 0x8000) != 0;
      temp_v0 = temp_v5 || temp_v4;
      temp_v6 = (temp_v3 & 0x10) == 0;
      if (temp_v6) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x3c);
      }
      if ((temp_v6 && temp_v3 == 1) || (temp_v5 || temp_v4)) {
        temp_v1 = FUN_00152f54();
        temp_v9 = *(float *)(temp_v1 + 4);
        temp_v8 = *(float *)(temp_v1 + 8);
        temp_v7 = *(float *)(temp_v1 + 0xc);
        temp_v2 = btlGetMainState();
        FUN_003ecab8(temp_v2,param_2,0);
        temp_v0 = 1;
        *param_1 = (romwright_sqrt_4((temp_v9 - in_s0) * (temp_v9 - in_s0) + (temp_v8 - in_s1) * (temp_v8 - in_s1) +
                         (temp_v7 - in_s2) * (temp_v7 - in_s2)) /
                   romwright_sqrt_4(temp_v9 * temp_v9 + temp_v8 * temp_v8 + temp_v7 * temp_v7)) * 5.6f;
      }
      return temp_v0;
    }
  }
  return 0;
}

} /* extern "C" */
