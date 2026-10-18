/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148dd8` (_code @ 0x148dd8, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002acaac. */


int FUN_00148dd8(unsigned int *param_1,int *param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = *(int *)*param_1;
  if (temp_v0 != 0x1000000) {
    if (0x1000000 >= temp_v0) {
      if (temp_v0 == 0x100000) {
        temp_v1 = 0x24;
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
        if (temp_v0 != 0) {
          FUN_002acaac(temp_v0,*param_1,temp_v1);
        }
        return temp_v0;
      }
      if (temp_v0 < 0x100000) {
        if (temp_v0 == -0x80000000) {
          temp_v1 = 0x1c;
          temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
          if (temp_v0 != 0) {
            FUN_002acaac(temp_v0,*param_1,temp_v1);
          }
          return temp_v0;
        }
        if (temp_v0 == 0) {
          temp_v1 = 0xc;
          temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
          if (temp_v0 != 0) {
            FUN_002acaac(temp_v0,*param_1,temp_v1);
          }
          return temp_v0;
        }
        if (temp_v0 == 0x80000) {
          temp_v1 = 0x10;
        }
      }
      else if (temp_v0 != 0x200000) {
        if (temp_v0 != 0x400000) {
          if (temp_v0 != 0x800000) {
            temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
            if (temp_v0 != 0) {
              FUN_002acaac(temp_v0,*param_1,temp_v1);
            }
            return temp_v0;
          }
          temp_v1 = 0x10;
        }
        else {
          temp_v1 = 0x14;
        }
      }
      else {
        temp_v1 = 0x1c;
      }
    }
    else {
      if (temp_v0 != 0x10000000) {
        if (temp_v0 < 0x10000001) {
          if (temp_v0 == 0x2000000) goto LAB_00148e98;
          if (temp_v0 == 0x4000000) {
            temp_v1 = 0x18;
            temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
            if (temp_v0 != 0) {
              FUN_002acaac(temp_v0,*param_1,temp_v1);
            }
            return temp_v0;
          }
          if (temp_v0 != 0x8000000) {
            temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
            if (temp_v0 != 0) {
              FUN_002acaac(temp_v0,*param_1,temp_v1);
            }
            return temp_v0;
          }
        }
        else if (temp_v0 != 0x20000000) {
          if (temp_v0 == 0x40000000) {
            temp_v1 = 0x20;
          }
          temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
          if (temp_v0 != 0) {
            FUN_002acaac(temp_v0,*param_1,temp_v1);
          }
          return temp_v0;
        }
      }
      temp_v1 = 0x10;
    }
  }
  else {
LAB_00148e98:
    temp_v1 = 0x14;
  }
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1,4);
  if (temp_v0 != 0) {
    FUN_002acaac(temp_v0,*param_1,temp_v1);
  }
  return temp_v0;
}
