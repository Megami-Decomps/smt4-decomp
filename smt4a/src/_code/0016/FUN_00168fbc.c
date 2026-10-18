/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168fbc` (_code @ 0x168fbc, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00168fbc(int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 4 goto(s) */
  unsigned int temp_v0;
  
  if (param_1 != 0x6754) {
    if (param_1 < 0x6754) {
      if (param_1 != 0x1909) {
        if (param_1 < 0x1909) {
          if (param_1 == 0x1906) goto LAB_00169108;
          if (param_1 == 0x1907) goto LAB_00169088;
          if (param_1 != 0x1908) {
            return;
          }
        }
        else {
          if (param_1 == 0x190a) goto LAB_001690b4;
          if (param_1 == 0x6700) {
            temp_v0 = 6;
            *param_3 = temp_v0;
            return;
          }
          if (param_1 != 0x6752) {
            return;
          }
        }
        if (param_2 == 0x1401) {
          temp_v0 = 0;
        }
        else if (param_2 == 0x8033) {
          temp_v0 = 4;
        }
        else {
          if (param_2 != 0x8034) {
            return;
          }
          temp_v0 = 2;
        }
      }
      else {
LAB_001690e4:
        if (param_2 == 0x1401) {
          temp_v0 = 7;
        }
        else {
          if (param_2 != 0x6761) {
            return;
          }
          temp_v0 = 10;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x6756:
LAB_00169108:
        if (param_2 == 0x1401) {
          temp_v0 = 8;
        }
        else {
          if (param_2 != 0x6761) {
            return;
          }
          temp_v0 = 0xb;
        }
        break;
      case 0x6757:
        goto LAB_001690e4;
      case 0x6758:
LAB_001690b4:
        if (param_2 == 0x1401) {
          temp_v0 = 5;
        }
        else {
          if (param_2 != 0x6760) {
            return;
          }
          temp_v0 = 9;
        }
        break;
      case 0x6759:
        temp_v0 = 6;
        break;
      case 0x675a:
        temp_v0 = 0xc;
        break;
      case 0x675b:
        temp_v0 = 0xd;
        break;
      default:
        return;
      }
    }
  }
  else {
LAB_00169088:
    if (param_2 == 0x1401) {
      temp_v0 = 1;
    }
    else {
      if (param_2 != 0x8363) {
        return;
      }
      temp_v0 = 3;
    }
  }
  *param_3 = temp_v0;
  return;
}
