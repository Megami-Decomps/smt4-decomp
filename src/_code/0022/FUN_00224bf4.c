/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224bf4` (_code @ 0x224bf4, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00224bf4(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  switch(param_1) {
  default:
    return;
  case 1:
    if (param_4 != 0) {
      temp_v1 = 0xf7;
      temp_v0 = 0xe7;
    }
    else {
      temp_v1 = 0xef;
      temp_v0 = 0xdf;
    }
    break;
  case 2:
    if (param_4 != 0) {
      temp_v1 = 0xf8;
      temp_v0 = 0xe8;
    }
    else {
      temp_v1 = 0xf0;
      temp_v0 = 0xe0;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  case 3:
    if (param_4 != 0) {
      temp_v1 = 0xf9;
      temp_v0 = 0xe9;
    }
    else {
      temp_v1 = 0xf1;
      temp_v0 = 0xe1;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  case 4:
    if (param_4 != 0) {
      temp_v1 = 0xfa;
      temp_v0 = 0xea;
    }
    else {
      temp_v1 = 0xf2;
      temp_v0 = 0xe2;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  case 5:
    if (param_4 != 0) {
      temp_v1 = 0xfb;
      temp_v0 = 0xeb;
    }
    else {
      temp_v1 = 0xf3;
      temp_v0 = 0xe3;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  case 6:
    if (param_4 != 0) {
      temp_v1 = 0xfc;
      temp_v0 = 0xec;
    }
    else {
      temp_v1 = 0xf4;
      temp_v0 = 0xe4;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  case 7:
    if (param_4 != 0) {
      temp_v1 = 0xfe;
      temp_v0 = 0xee;
    }
    else {
      temp_v1 = 0xf6;
      temp_v0 = 0xe6;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  case 8:
    if (param_4 != 0) {
      temp_v1 = 0xfd;
      temp_v0 = 0xed;
    }
    else {
      temp_v1 = 0xf5;
      temp_v0 = 0xe5;
    }
    *param_2 = temp_v1;
    *param_3 = temp_v0;
    return;
  }
  *param_2 = temp_v1;
  *param_3 = temp_v0;
  return;
}
