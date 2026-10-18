/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004962e4` (_code @ 0x4962e4, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00163e40(unsigned int);
extern int FUN_0018206c(unsigned int, unsigned int);
extern int FUN_0031bc88(unsigned int);
/* Supplied declaration required: FUN_003fc0b8. */
extern int FUN_003fce08(unsigned int, unsigned int);
extern int FUN_003fcf5c(unsigned int);


unsigned int FUN_004962e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if ((*param_1 & 0x2000) != 0) {
    temp_v0 = param_1[0x5814];
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          return 0;
        }
      }
      else {
        temp_v1 = FUN_003fce08(param_1[0x5815],1);
        if (temp_v1 == 0) {
          return 0;
        }
        param_1[0x5814] = param_1[0x5814] + 1;
      }
    }
    else {
      temp_v1 = FUN_003fcf5c(param_1[0x5815]);
      if (temp_v1 == 0) {
        return 0;
      }
      FUN_003fc0b8(param_1[0x5815],7);
      param_1[0x5814] = param_1[0x5814] + 1;
      temp_v1 = FUN_003fce08(param_1[0x5815],1);
      if (temp_v1 == 0) {
        return 0;
      }
      param_1[0x5814] = param_1[0x5814] + 1;
    }
  }
  temp_v0 = 0;
  if (param_1[0x61] != 0) {
    temp_v0 = param_1[0x62];
  }
  if (param_1[0x61] != 0 && temp_v0 != 0) {
    temp_v1 = FUN_0018206c(0x20,0);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v1 = FUN_00163e40(param_1[0x5808]);
      if ((temp_v1 != 0) && (temp_v1 = FUN_0031bc88(param_1[0x5808]), temp_v1 == 0)) {
        return 0;
      }
      temp_v1 = FUN_00163e40(param_1[0x5809]);
      if ((temp_v1 != 0) && (temp_v1 = FUN_0031bc88(param_1[0x5809]), temp_v1 == 0)) {
        return 0;
      }
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
