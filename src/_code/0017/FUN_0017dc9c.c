/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017dc9c` (_code @ 0x17dc9c, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0017dc9c_arg0 fn_0017dc9c_arg0;
struct fn_0017dc9c_arg0 {
    unsigned char pad_0x0[0x3];
    unsigned char field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x3];
    unsigned char field_0x7; /* +0x7 */
    unsigned char pad_0x8[0x3];
    unsigned char field_0xb; /* +0xb */
    unsigned char pad_0xc[0x3];
    byte field_0xf; /* +0xf */
    unsigned char pad_0x10[0x1ff];
    byte field_0x20f; /* +0x20f */
    unsigned char pad_0x210[0x1ff];
    byte field_0x40f; /* +0x40f */
};


void FUN_0017dc9c(fn_0017dc9c_arg0 *param_1,int *param_2,int param_3)

{
  unsigned char *pbVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = (((*(unsigned int *)&param_1[-1].field_0x40f >> 8) + *(unsigned int *)&param_1->field_0x3 * 0x1000000) >>
          1) & 0x7f7f7f7f;
  temp_v1 = (((*(unsigned int *)&param_1->field_0x3 >> 8) + *(unsigned int *)&param_1->field_0x7 * 0x1000000) >> 1) &
          0x7f7f7f7f;
  temp_v2 = (((*(unsigned int *)&param_1->field_0x7 >> 8) + *(unsigned int *)&param_1->field_0xb * 0x1000000) >> 1) &
          0x7f7f7f7f;
  temp_v3 = (((*(unsigned int *)&param_1->field_0xb >> 8) + (unsigned int)param_1->field_0xf * 0x1000000) >> 1) &
          0x7f7f7f7f;
  pbVar1 = &param_1[-1].field_0x40f;
  do {
    temp_v4 = (((*(unsigned int *)(pbVar1 + 0x200) >> 8) + *(unsigned int *)(pbVar1 + 0x204) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    temp_v5 = (((*(unsigned int *)(pbVar1 + 0x204) >> 8) + *(unsigned int *)(pbVar1 + 0x208) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    temp_v6 = (((*(unsigned int *)(pbVar1 + 0x208) >> 8) + *(unsigned int *)(pbVar1 + 0x20c) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    temp_v7 = (((*(unsigned int *)(pbVar1 + 0x20c) >> 8) + (unsigned int)pbVar1[0x210] * 0x1000000) >> 1) & 0x7f7f7f7f
    ;
    *param_2 = temp_v0 + temp_v4;
    param_2[1] = temp_v1 + temp_v5;
    param_2[2] = temp_v2 + temp_v6;
    param_2[3] = temp_v3 + temp_v7;
    temp_v0 = (((*(unsigned int *)(pbVar1 + 0x400) >> 8) + *(unsigned int *)(pbVar1 + 0x404) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    temp_v1 = (((*(unsigned int *)(pbVar1 + 0x404) >> 8) + *(unsigned int *)(pbVar1 + 0x408) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    temp_v2 = (((*(unsigned int *)(pbVar1 + 0x408) >> 8) + *(unsigned int *)(pbVar1 + 0x40c) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    temp_v3 = (((*(unsigned int *)(pbVar1 + 0x40c) >> 8) + (unsigned int)pbVar1[0x410] * 0x1000000) >> 1) & 0x7f7f7f7f
    ;
    param_2[0x80] = temp_v4 + temp_v0;
    param_2[0x81] = temp_v5 + temp_v1;
    param_2[0x82] = temp_v6 + temp_v2;
    param_2[0x83] = temp_v7 + temp_v3;
    param_2 = param_2 + 0x100;
    param_3 = param_3 - 2;
    pbVar1 = pbVar1 + 0x400;
  } while (param_3 != 0);
  return;
}
