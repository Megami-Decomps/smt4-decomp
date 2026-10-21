/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f50c` (_code @ 0x35f50c, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int systemApplyConfigurationByte(void);
int FUN_0035a0b4(void);

/* Supplied declaration required: systemApplyConfigurationByte. */
/* Supplied declaration required: FUN_0035a0b4. */


void FUN_0035f50c(int param_1,unsigned char *param_2,int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  *param_3 = 1;
  FUN_0035a0b4();
  switch(param_1) {
  case 0:
    systemApplyConfigurationByte();
    if (param_1 == 0) {
      *param_2 = 0;
      return;
    }
    break;
  case 1:
    systemApplyConfigurationByte();
    if (param_1 == 1) {
      *param_2 = 1;
    }
    else {
      if (param_1 != 2) {
        if (param_1 == 5) {
          *param_2 = 3;
          param_2[1] = 1;
          *param_3 = *param_3 + 1;
          return;
        }
        if (param_1 == 9) {
          *param_2 = 0xe;
          param_2[1] = 1;
          *param_3 = *param_3 + 1;
          return;
        }
        break;
      }
      *param_2 = 2;
      param_2[1] = 1;
      *param_3 = *param_3 + 1;
    }
    return;
  case 2:
    systemApplyConfigurationByte();
    switch(param_1) {
    case 1:
      *param_2 = 4;
      return;
    case 2:
      *param_2 = 5;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 3:
      *param_2 = 6;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 4:
      *param_2 = 7;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 5:
      *param_2 = 8;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 8:
      *param_2 = 9;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 9:
      *param_2 = 0xc;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 10:
      *param_2 = 0xd;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    }
    break;
  case 4:
    systemApplyConfigurationByte();
    if (param_1 == 6) {
      temp_v0 = 0xb;
      *param_2 = temp_v0;
      return;
    }
    break;
  case 5:
    systemApplyConfigurationByte();
    if (param_1 == 7) {
      temp_v0 = 10;
      *param_2 = temp_v0;
      return;
    }
    break;
  case 6:
    systemApplyConfigurationByte();
    if (param_1 == 1) {
      temp_v0 = 0x10;
    }
    else {
      if (param_1 != 0xb) break;
      temp_v0 = 0xf;
    }
    *param_2 = temp_v0;
    return;
  }
  *param_3 = 0;
  return;
}

} /* extern "C" */
