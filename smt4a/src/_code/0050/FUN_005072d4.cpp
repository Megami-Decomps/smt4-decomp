/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005072d4` (_code @ 0x5072d4, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_005072d4_arg0 fn_005072d4_arg0;
struct fn_005072d4_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x36];
    ushort field_0x38; /* +0x38 */
    unsigned char pad_0x3a[0x2e];
    int field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x4];
    ushort field_0x74; /* +0x74 */
    unsigned char pad_0x76[0xa];
    int field_0x80; /* +0x80 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void FUN_005072d4(fn_005072d4_arg0 *param_1,int *param_2,int *param_3)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  temp_v1 = *param_3;
  temp_v0 = param_1->field_0x38;
  temp_v2 = (unsigned int)temp_v0 * 0x158;
  *param_2 = temp_v2 + 3;
  param_2[6] = (unsigned int)temp_v0;
  param_2[7] = temp_v2;
  temp_v3 = (unsigned int)param_1->field_0x38;
  temp_v1 = ((temp_v1 * 0xe + 0x23U) & 0xfffffffc) * 8;
  if (temp_v3 == 0 || temp_v1 == 0) {
    temp_v4 = 0;
    temp_v3 = temp_v4;
  }
  else {
    temp_v4 = temp_v1 * temp_v3;
    param_2[1] = param_2[1] + temp_v4 + 0xf;
  }
  param_2[9] = temp_v4;
  param_2[8] = temp_v3;
  temp_v0 = param_1->field_0x74;
  temp_v1 = (unsigned int)temp_v0 * 2;
  temp_v2 = param_2[2] + temp_v1 + 3;
  param_2[2] = temp_v2;
  param_2[10] = (unsigned int)temp_v0;
  param_2[0xb] = temp_v1;
  temp_v0 = param_1->field_0x74;
  temp_v1 = (unsigned int)temp_v0 * 0x40;
  temp_v2 = temp_v2 + temp_v1 + 3;
  param_2[2] = temp_v2;
  param_2[0xc] = (unsigned int)temp_v0;
  param_2[0xd] = temp_v1;
  temp_v0 = param_1->field_0x74;
  temp_v1 = (unsigned int)temp_v0 * 0x30;
  param_2[0xf] = temp_v1;
  temp_v1 = temp_v2 + temp_v1 + 3;
  param_2[0xe] = (unsigned int)temp_v0;
  param_2[2] = temp_v1;
  if (param_1->field_0x1 == 2) {
    temp_v0 = param_1->field_0x74;
    temp_v2 = (unsigned int)temp_v0 * 0xc;
    param_2[0x11] = temp_v2;
    param_2[0x10] = (unsigned int)temp_v0;
    param_2[2] = temp_v1 + temp_v2 + 3;
  }
  temp_v3 = (param_1->field_0x80 + 7U) >> 3;
  if (temp_v3 == 0) {
    temp_v3 = 0;
  }
  else {
    param_2[3] = param_2[3] + temp_v3 + 3;
  }
  param_2[0x12] = temp_v3;
  param_2[0x13] = temp_v3;
  temp_v2 = param_1->field_0x6c;
  temp_v1 = temp_v2 * 8;
  param_2[4] = param_2[4] + temp_v1 + 3;
  param_2[0x14] = temp_v2;
  param_2[0x15] = temp_v1;
  temp_v4 = 0;
  temp_v3 = 0;
  if (param_1->field_0x6c != 0) {
    do {
      temp_v1 = temp_v4 * 0x1c;
      temp_v4 = temp_v4 + 1;
      param_2[4] = param_2[4] + *(int *)(param_1->field_0x68 + temp_v1 + 4) * 0x18 + 3;
      temp_v3 = param_1->field_0x6c;
    } while (temp_v4 < temp_v3);
  }
  param_2[5] = param_2[5] + temp_v3 * 0xc + 3;
  param_2[0x16] = temp_v3;
  param_2[0x17] = temp_v3 * 0xc;
  temp_v3 = 0;
  if (temp_v3 < (unsigned int)param_1->field_0x6c) {
    do {
      temp_v1 = temp_v3 * 0x1c;
      temp_v3 = temp_v3 + 1;
      temp_v5 = *(unsigned int *)(param_1->field_0x68 + temp_v1 + 0x14);
      temp_v4 = (temp_v5 & 0x1ff) >> 1;
      if ((temp_v5 & 1) != 0) {
        temp_v4 = temp_v4 + 1;
      }
      param_2[5] = param_2[5] + (temp_v4 & 0xff) * 8 + 3;
    } while (temp_v3 < (unsigned int)param_1->field_0x6c);
  }
  return;
}

} /* extern "C" */
