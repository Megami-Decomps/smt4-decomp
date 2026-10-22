/* NON_MATCHING: found outside every function: its address is in FUN_0037ab50's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0037ad88 for reference (not compiled; its own view of the boundaries):

typedef struct fn_0037ad88_arg2 fn_0037ad88_arg2;
typedef struct fn_0037ad88_arg3 fn_0037ad88_arg3;
struct fn_0037ad88_arg2 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 * /
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc * /
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 * /
    unsigned char pad_0x18[0x4];
    undefined4 field_0x1c; /* +0x1c * /
};
struct fn_0037ad88_arg3 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 * /
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc * /
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 * /
    unsigned char pad_0x18[0x4];
    undefined4 field_0x1c; /* +0x1c * /
};


void FUN_0037ad88(int param_1,int param_2,fn_0037ad88_arg2 *param_3,fn_0037ad88_arg3 *param_4,
                 unsigned char *param_5,int param_6)

{
  unsigned char uVar1;
  
  if (param_1 == 0) {
    uVar1 = 4;
  }
  else {
    *(unsigned int *)(param_6 + 0x52c) = *(unsigned int *)(param_2 + 4);
    *(unsigned int *)(param_6 + 0x530) = param_3->field_0x4;
    *(unsigned int *)(param_6 + 0x540) = param_4->field_0x4;
    *(unsigned char *)(param_6 + 0x550) = *param_5;
    *(unsigned int *)(param_6 + 0x534) = param_3->field_0xc;
    *(unsigned int *)(param_6 + 0x544) = param_4->field_0xc;
    *(unsigned char *)(param_6 + 0x551) = param_5[1];
    *(unsigned int *)(param_6 + 0x538) = param_3->field_0x14;
    *(unsigned int *)(param_6 + 0x548) = param_4->field_0x14;
    *(unsigned char *)(param_6 + 0x552) = param_5[2];
    *(unsigned int *)(param_6 + 0x53c) = param_3->field_0x1c;
    *(unsigned int *)(param_6 + 0x54c) = param_4->field_0x1c;
    *(unsigned char *)(param_6 + 0x553) = param_5[3];
    uVar1 = 2;
  }
  *(unsigned char *)(param_6 + 0x554) = uVar1;
  return;
}
*/
#include "common.h"
