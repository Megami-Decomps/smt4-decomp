/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138940` (_code @ 0x138940, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00138940_arg0 fn_00138940_arg0;
struct fn_00138940_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x17];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x18];
    void *field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0xc];
    int field_0x58; /* +0x58 */
    short field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x3];
    int field_0x64; /* +0x64 */
    short field_0x68; /* +0x68 */
    undefined2 field_0x6a; /* +0x6a */
    char field_0x6c; /* +0x6c */
    unsigned char pad_0x6d[0x3];
    void *field_0x70; /* +0x70 */
    undefined2 field_0x74; /* +0x74 */
    undefined2 field_0x76; /* +0x76 */
    void *field_0x78; /* +0x78 */
    undefined2 field_0x7c; /* +0x7c */
    undefined2 field_0x7e; /* +0x7e */
    undefined2 field_0x80; /* +0x80 */
    undefined2 field_0x82; /* +0x82 */
    undefined1 field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x2];
    undefined1 field_0x87; /* +0x87 */
    undefined1 field_0x88; /* +0x88 */
    undefined1 field_0x89; /* +0x89 */
    undefined1 field_0x8a; /* +0x8a */
};

/* Supplied declaration required: FUN_002bdac0. */


void FUN_00138940(fn_00138940_arg0 *param_1,int *param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  char temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  short *psVar8;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  param_1->field_0x7c = 0;
  param_1->field_0x7e = 0;
  param_1->field_0x80 = 0;
  param_1->field_0x82 = 0;
  param_1->field_0x84 = 1;
  if (-1 < *param_2) {
    FUN_002bdac0(param_1,(int)(short)*param_2,(int)(char)param_2[1]);
  }
  temp_v6 = *(int *)((int)param_1->field_0x78 + 0xc);
  if (-1 < temp_v6) {
    temp_v3 = *(char *)((int)param_1->field_0x78 + 0x10);
    temp_v1 = (short)temp_v6;
    if (param_1->field_0x58 != 0) {
      param_1->field_0x5c = temp_v1;
      param_1->field_0x5e = 0;
      param_1->field_0x87 = 0;
      param_1->field_0x8a = 0;
      param_1->field_0x60 = temp_v3;
      puVar5 = (unsigned int *)(param_1->field_0x58 + temp_v1 * 0xc);
      if (temp_v3 == '\0') {
        temp_v4 = *puVar5;
      }
      else {
        temp_v4 = puVar5[1];
      }
      param_1->field_0x20 = temp_v4;
    }
  }
  temp_v6 = *(int *)((int)param_1->field_0x78 + 0x14);
  if (-1 < temp_v6) {
    temp_v3 = *(char *)((int)param_1->field_0x78 + 0x18);
    temp_v1 = (short)temp_v6;
    if (param_1->field_0x64 != 0) {
      param_1->field_0x68 = temp_v1;
      param_1->field_0x6a = 0;
      param_1->field_0x88 = 0;
      param_1->field_0x8a = 0;
      param_1->field_0x6c = temp_v3;
      puVar5 = (unsigned int *)(param_1->field_0x64 + temp_v1 * 0xc);
      if (temp_v3 == '\0') {
        temp_v4 = *puVar5;
      }
      else {
        temp_v4 = puVar5[1];
      }
      param_1->field_0x24 = temp_v4;
      param_1->field_0x28 = temp_v4;
      param_1->field_0x2c = temp_v4;
    }
  }
  temp_v6 = *(int *)((int)param_1->field_0x78 + 8);
  if (-1 < temp_v6) {
    temp_v7 = 0;
    temp_v5 = 0;
    temp_v2 = *(unsigned short *)((int)param_1->field_0x48 + 6);
    if (temp_v2 >> 2 != 0) {
      temp_v8 = *(int *)((int)param_1->field_0x48 + 0x18);
      do {
        if (temp_v7 == (short)temp_v6) {
          psVar8 = (short *)(temp_v8 + temp_v5 * 4);
          goto LAB_00138a98;
        }
        temp_v0 = temp_v5 * 4;
        temp_v5 = temp_v5 + 1;
        if (*(short *)(temp_v8 + temp_v0) == -1) {
          temp_v7 = temp_v7 + 1;
        }
      } while (temp_v5 < temp_v2 >> 2);
    }
    psVar8 = (short *)0x0;
LAB_00138a98:
    param_1->field_0x70 = psVar8;
    if (psVar8 != (short *)0x0) {
      param_1->field_0x74 = 0;
      param_1->field_0x76 = 0;
      param_1->field_0x89 = 0;
      param_1->field_0x8a = 0;
      param_1->field_0x4 = (int)*psVar8;
      *(unsigned int *)&param_1->field_0x8 = 0xffffffff;
    }
  }
  return;
}
