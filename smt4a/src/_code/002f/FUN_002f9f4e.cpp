/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9f4e` (_code @ 0x2f9f4e, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f9f28(...);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002f9f28. */


unsigned short FUN_002f9f4e(int *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar4;
  
  (**(romwright_code **)(*param_1 + 0x1c))(param_1);
  temp_v0 = *(unsigned short *)(param_1 + 5);
  if (temp_v0 != 0x10) {
    if (0x10 >= temp_v0) {
      if (((temp_v0 == 1) || (temp_v0 == 2)) || (temp_v0 == 4)) goto LAB_002f9f8a;
      if (temp_v0 != 8) {
        return temp_v0;
      }
      temp_v2 = 0x20;
    }
    else {
      if (temp_v0 != 0x20) {
        if (temp_v0 == 0x40) {
          return 0x40;
        }
        if ((temp_v0 != 0x80) && (temp_v0 != 0x100)) {
          return temp_v0;
        }
LAB_002f9f8a:
        temp_v2 = 1;
      }
      else {
        if (param_1[6] != 0) {
          return *(unsigned short *)(param_1 + 5);
        }
        temp_v2 = 0;
      }
      FUN_002f9f28(param_1,0x10,temp_v2);
      pcVar4 = *(romwright_code **)(*param_1 + 0x28);
      temp_v1 = (*pcVar4)(param_1);
      if (temp_v1 == 0) {
        return *(unsigned short *)(param_1 + 5);
      }
      temp_v2 = 0x40;
    }
  }
  else {
    pcVar4 = *(romwright_code **)(*param_1 + 0x2c);
    temp_v1 = (*pcVar4)(param_1);
    if (temp_v1 == 0) {
      return *(unsigned short *)(param_1 + 5);
    }
    temp_v2 = 0x40;
  }
  FUN_002f9f28(param_1,temp_v2,0);
  return *(unsigned short *)(param_1 + 5);
}

} /* extern "C" */
