/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db0c0` (_code @ 0x3db0c0, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, int);
int FUN_00340ad4(int, int, int, unsigned int);
int FUN_00340c90(int);

/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(int, int);
extern int btlGetMainState(void);
extern unsigned int FUN_00337ba0(int, int, unsigned short);
/* Supplied declaration required: FUN_00340ad4. */
/* Supplied declaration required: FUN_00340c90. */


unsigned int FUN_003db0c0(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  if ((*(unsigned int *)(param_2 + 0x50) & 0x20000) == 0) {
    temp_v1 = btlGetMainState();
    temp_v2 = FUN_0027dab0(temp_v1,param_2);
    if (temp_v2 < 0) {
      temp_v2 = 0;
    }
    temp_v4 = temp_v1;
    FUN_0027da30(temp_v1,(int)*(short *)(param_2 + 0x62));
    temp_v0 = *(unsigned short *)(temp_v4 + 2);
    temp_v4 = *(int *)(temp_v4 + temp_v2 * 4 + 0xc);
    temp_v2 = 0;
    while ((temp_v5 = param_1 + temp_v2 * 0x30, *(int *)(temp_v5 + 0x1398) != temp_v4 ||
           ((*(unsigned int *)(temp_v5 + 0x13c4) & 1) == 0))) {
      temp_v2 = temp_v2 + 1;
      if (temp_v2 >= 0x32) {
        temp_v2 = 0;
        do {
          if (*(int *)(param_1 + temp_v2 * 0x30 + 0x1398) == temp_v4) {
            param_1 = param_1 + temp_v2 * 0x30;
            if (*(int *)(param_1 + 0x139c) != 0) {
              *(int *)(param_1 + 0x13a4) = *(int *)(param_1 + 0x139c);
              temp_v3 = 0;
              if (-1 < *(int *)(temp_v1 + 0xc4)) {
                temp_v3 = FUN_00337ba0(temp_v1,(int)(short)*(int *)(temp_v1 + 0xc4),temp_v0);
              }
              FUN_00340ad4(param_1 + 0x13a0,0x20000,0x20000,temp_v3);
              FUN_00340c90(param_1 + 0x13a0);
            }
            *(unsigned int *)(param_1 + 0x13c4) = *(unsigned int *)(param_1 + 0x13c4) | 1;
            return 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x32);
        return 0;
      }
    }
  }
  return 1;
}

} /* extern "C" */
