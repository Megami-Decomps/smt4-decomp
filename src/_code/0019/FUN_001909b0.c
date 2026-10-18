/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001909b0` (_code @ 0x1909b0, 0x390 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c2c(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00297f40. */
/* Supplied declaration required: FUN_002983dc. */
extern int FUN_0029f0f4(void);
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002af854. */


unsigned int FUN_001909b0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
  *(unsigned int *)(param_1 + 0x3504) = 0;
  if (*(int *)(param_1 + 0x305c) == 0) {
    FUN_00297f40(param_1,1);
  }
  temp_v0 = FUN_00297f40(param_1,1);
  piVar2 = (int *)(param_1 + 0x340c);
  if (temp_v0 != 1) {
    temp_v0 = FUN_00297f40(param_1,1);
    if (temp_v0 != 2) {
      temp_v0 = FUN_00297f40(param_1,1);
      if (temp_v0 != 7) {
        temp_v0 = FUN_00297f40(param_1,1);
        if (temp_v0 != 3) {
          temp_v0 = FUN_00297f40(param_1,1);
          if ((temp_v0 == 6) || (temp_v0 = FUN_00297f40(param_1,1), temp_v0 == 8)) {
            return 0;
          }
          temp_v0 = FUN_00297f40(param_1,1);
          if (temp_v0 != 5) {
            temp_v0 = FUN_00297f40(param_1,1);
            if (temp_v0 != 10) {
              temp_v0 = FUN_00297f40(param_1,1);
              if (temp_v0 != 4) {
                temp_v0 = FUN_00297f40(param_1,1);
                if (temp_v0 != 9) {
                  FUN_002983dc(param_1,0,1);
                }
                else {
                  FUN_002983dc(param_1,0x19,1);
                }
              }
              else {
                FUN_002983dc(param_1,0x1b,1);
              }
            }
            else {
              FUN_002983dc(param_1,0x1a,1);
            }
          }
          else {
            FUN_002983dc(param_1,0x17,1);
          }
        }
        else {
          temp_v0 = FUN_0029f0f4();
          if (temp_v0 < 1) {
            return 0;
          }
          *piVar2 = param_1 + 0x3344;
          FUN_002983dc(param_1,0xd,1);
          temp_v0 = 0;
          do {
            FUN_002af854(param_1 + temp_v0 * 0x8c + 0xe58,0);
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 6);
        }
      }
      else {
        temp_v0 = FUN_0029f0f4();
        if (temp_v0 < 1) {
          return 0;
        }
        *piVar2 = param_1 + 0x32e0;
        FUN_002983dc(param_1,0xb,1);
        temp_v0 = 0;
        do {
          FUN_002af854(param_1 + temp_v0 * 0x8c + 0xe58,0);
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 6);
      }
    }
    else {
      temp_v0 = FUN_00293c98();
      if ((*(unsigned int *)(temp_v0 + 0x44a8) & 0x40) == 0) {
        FUN_00293c98();
        temp_v0 = FUN_00293c2c();
        if (temp_v0 == 0) {
          return 0;
        }
      }
      *piVar2 = param_1 + 0x327c;
      FUN_002983dc(param_1,9,1);
      temp_v0 = 0;
      do {
        FUN_002af854(param_1 + temp_v0 * 0x8c + 0xe58,0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
    }
  }
  else {
    *piVar2 = param_1 + 0x3218;
    FUN_002983dc(param_1,9,1);
    temp_v0 = 0;
    do {
      FUN_002af854(param_1 + temp_v0 * 0x8c + 0xe58,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
  }
  FUN_0029f10c(0,0x323232ff);
  return 1;
}
