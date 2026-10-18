/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea258` (_code @ 0x3ea258, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ea258_arg0 fn_003ea258_arg0;
struct fn_003ea258_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    ushort field_0x14; /* +0x14 */
    ushort field_0x16; /* +0x16 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


unsigned int FUN_003ea258(fn_003ea258_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 goto(s) */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  if (param_1->field_0x14 == param_2) {
    return (unsigned int)param_1->field_0x16;
  }
  param_1->field_0x14 = (unsigned short)param_2;
  temp_v1 = 0xffff;
  for (puVar3 = *(unsigned short **)((int)param_1->field_0x8 + 0x10); puVar3 != (unsigned short *)0x0;
      puVar3 = *(unsigned short **)(puVar3 + 4)) {
    temp_v4 = param_2 <= *puVar3;
    temp_v3 = *puVar3 == param_2;
    if (!temp_v4 || temp_v3) {
      temp_v4 = puVar3[1] <= param_2;
      temp_v3 = param_2 == puVar3[1];
    }
    if (!temp_v4 || temp_v3) {
      temp_v0 = puVar3[2];
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            puVar4 = puVar3 + 7;
            puVar3 = puVar3 + 6 + ((unsigned int)puVar3[6] * 2 - 1);
            if (puVar4 <= puVar3) goto LAB_003ea300;
          }
        }
        else {
          temp_v1 = (unsigned int)puVar3[(param_2 - *puVar3) + 6];
        }
      }
      else {
        temp_v1 = ((unsigned int)puVar3[6] + (param_2 - *puVar3)) & 0xffff;
      }
      break;
    }
  }
  param_1->field_0x16 = (unsigned short)temp_v1;
  return temp_v1;
  while (puVar4 <= puVar3) {
LAB_003ea300:
    puVar5 = puVar4 + ((((int)puVar3 - (int)puVar4) >> 2) / 2) * 2;
    temp_v2 = (unsigned int)*puVar5;
    if (temp_v2 >= param_2 && temp_v2 != param_2) {
      puVar3 = puVar5 + -2;
    }
    if (temp_v2 < param_2) {
      puVar4 = puVar5 + 2;
    }
    if (temp_v2 == param_2) {
      temp_v1 = (unsigned int)puVar5[1];
      break;
    }
  }
  param_1->field_0x16 = (unsigned short)temp_v1;
  return temp_v1;
}
