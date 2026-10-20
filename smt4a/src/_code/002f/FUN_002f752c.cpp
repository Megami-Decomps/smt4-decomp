#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_5_stack;


void FUN_002f752c(int param_1,int *param_2,int *param_3,unsigned int param_4,int param_5)

{
  int temp_v0;
  
  switch(param_4) {
  case 0:
    *param_2 = (int)*(short *)(param_1 + 0x13b2);
    *param_3 = (int)*(short *)(param_1 + 0x13c0);
    if (param_5 == 0) {
      return;
    }
    *param_2 = (int)*(short *)(param_1 + 0x19f2) + (int)*(short *)(param_1 + 0x2004);
    temp_v0 = (int)*(short *)(param_1 + 0x1a00);
    break;
  case 1:
    *param_2 = (int)*(short *)(param_1 + 0x13b4);
    *param_3 = (int)*(short *)(param_1 + 0x13c2);
    if (param_5 == 0) {
      return;
    }
    *param_2 = (int)*(short *)(param_1 + 0x19f4) + (int)*(short *)(param_1 + 0x2006);
    temp_v0 = (int)*(short *)(param_1 + 0x1a02);
    break;
  case 2:
    *param_2 = (int)*(short *)(param_1 + 0x13b6);
    *param_3 = (int)*(short *)(param_1 + 0x13c4);
    if (param_5 == 0) {
      return;
    }
    *param_2 = (int)*(short *)(param_1 + 0x19f6) + (int)*(short *)(param_1 + 0x2008);
    temp_v0 = (int)*(short *)(param_1 + 0x1a04);
    break;
  case 3:
    *param_2 = (int)*(short *)(param_1 + 0x13b8);
    *param_3 = (int)*(short *)(param_1 + 0x13c6);
    if (param_5 == 0) {
      return;
    }
    *param_2 = (int)*(short *)(param_1 + 0x19f8) + (int)*(short *)(param_1 + 0x200a);
    temp_v0 = (int)*(short *)(param_1 + 0x1a06);
    break;
  case 4:
    *param_2 = (int)*(short *)(param_1 + 0x13ba);
    *param_3 = (int)*(short *)(param_1 + 0x13c8);
    if (param_5 != 0) {
      *param_2 = (int)*(short *)(param_1 + 0x19fa) + (int)*(short *)(param_1 + 0x200c);
      *param_3 = (int)*(short *)(param_1 + 0x1a08);
      return;
    }
  default:
    return;
  }
  *param_3 = temp_v0;
  return;
}

} /* extern "C" */
