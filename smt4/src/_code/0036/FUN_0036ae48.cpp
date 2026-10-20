/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ae48` (_code @ 0x36ae48, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236288(unsigned int *);
int FUN_00236350(unsigned int *, unsigned int *, unsigned int *);
int nw_gfx_CalculatedTransform_UpdateRotateFlags(unsigned int *);
int nw_gfx_CalculatedTransform_UpdateTranslateFlags(unsigned int *);

typedef struct fn_0036ae48_arg0 fn_0036ae48_arg0;
typedef struct fn_0036ae48_arg1 fn_0036ae48_arg1;
struct fn_0036ae48_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0xb];
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x2c];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0xf];
    unsigned char field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x6];
    byte field_0x5b; /* +0x5b */
    byte field_0x5c; /* +0x5c */
    byte field_0x5d; /* +0x5d */
    unsigned char pad_0x5e[0x6];
    int field_0x64; /* +0x64 */
};
struct fn_0036ae48_arg1 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x2f];
    int field_0x44; /* +0x44 */
    unsigned char pad_0x48[0xc];
    int field_0x54; /* +0x54 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_00236288. */
/* Supplied declaration required: FUN_00236350. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlags. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


void FUN_0036ae48(fn_0036ae48_arg0 *param_1,fn_0036ae48_arg1 *param_2,int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  float temp_v14;
  
  temp_v4 = 0;
  if (temp_v4 < *(int *)((int)param_2->field_0x8 + 0x10)) {
    do {
      temp_v5 = *(int *)(param_1->field_0x14 + temp_v4 * 4);
      if (temp_v5 != -1) {
        temp_v0 = *(int *)(param_3 + 0x1c);
        if (temp_v0 == 0) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = param_3 + 0x1c + temp_v0;
        }
        puVar2 = (unsigned int *)0x0;
        if (temp_v0 != 0) {
          piVar1 = (int *)(temp_v0 + temp_v5 * 0x10 + 0x28);
          temp_v0 = *piVar1;
          if (temp_v0 == 0) {
            puVar2 = (unsigned int *)0x0;
          }
          else {
            puVar2 = (unsigned int *)((int)piVar1 + temp_v0);
          }
        }
        temp_v1 = puVar2[2];
        if (temp_v1 == 5 || temp_v1 == 8) {
          temp_v7 = *puVar2;
          puVar13 = *(unsigned int **)(param_2->field_0x54 + temp_v4 * 4);
          puVar12 = *(unsigned int **)(param_2->field_0x44 + temp_v4 * 4);
          if (temp_v1 == 5) {
            temp_v1 = 0x3b80000;
            temp_v10 = 0x70000;
          }
          else {
            temp_v1 = 0x18;
            temp_v10 = 0x20;
          }
          temp_v13 = (temp_v1 & temp_v7) == 0;
          if (!temp_v13) {
            FUN_00236350(puVar12,puVar13 + 3,puVar13 + 6);
          }
          if ((temp_v7 & temp_v10) != 0) {
            temp_v2 = puVar13[1];
            temp_v3 = puVar13[2];
            puVar12[0xc] = *puVar13;
            puVar12[0xd] = temp_v2;
            puVar12[0xe] = temp_v3;
            puVar12[0xf] = puVar12[0xf] | 0x800;
          }
          else if (temp_v13) goto LAB_0036b044;
          temp_v1 = puVar12[0xf];
          temp_v7 = temp_v1 & 0xbfffffff;
          puVar12[0xf] = temp_v7;
          if (param_1->field_0x5b != 0) {
            temp_v7 = temp_v7 | 8;
          }
          else {
            temp_v7 = temp_v1 & 0xbffffff7;
          }
          puVar12[0xf] = temp_v7;
          if (param_1->field_0x5c != 0) {
            temp_v1 = puVar12[0xf] | 0x10;
          }
          else {
            temp_v1 = puVar12[0xf] & 0xffffffef;
          }
          puVar12[0xf] = temp_v1;
          if (param_1->field_0x5d != 0) {
            temp_v1 = puVar12[0xf] | 4;
          }
          else {
            temp_v1 = puVar12[0xf] & 0xfffffffb;
          }
          puVar12[0xf] = temp_v1;
          if ((~puVar12[0xf] & 8) != 0) {
            temp_v1 = puVar12[0xf] & 0xfffff9ff;
            puVar12[0xf] = temp_v1;
            temp_v14 = (float)puVar12[0xc];
            if (((temp_v14 == (float)puVar12[0xd]) && (temp_v14 == (float)puVar12[0xe])) &&
               (puVar12[0xf] = temp_v1 | 0x400, (float)puVar12[0xc] == 1.0f)) {
              puVar12[0xf] = temp_v1 | 0x600;
            }
          }
          nw_gfx_CalculatedTransform_UpdateRotateFlags(puVar12);
          nw_gfx_CalculatedTransform_UpdateTranslateFlags(puVar12);
          FUN_00236288(puVar12);
          if (param_1->field_0x64 != *(int *)(param_1 + 1)) {
            puVar13 = (unsigned int *)(param_1->field_0x64 + temp_v5 * 0x40);
            temp_v2 = puVar12[1];
            temp_v3 = puVar12[2];
            temp_v6 = puVar12[3];
            temp_v8 = puVar12[4];
            temp_v9 = puVar12[5];
            temp_v11 = puVar12[6];
            temp_v12 = puVar12[7];
            *puVar13 = *puVar12;
            puVar13[1] = temp_v2;
            puVar13[2] = temp_v3;
            puVar13[3] = temp_v6;
            puVar13[4] = temp_v8;
            puVar13[5] = temp_v9;
            puVar13[6] = temp_v11;
            puVar13[7] = temp_v12;
            temp_v2 = puVar12[8];
            temp_v3 = puVar12[9];
            temp_v6 = puVar12[10];
            temp_v12 = puVar12[0xb];
            temp_v8 = puVar12[0xc];
            temp_v9 = puVar12[0xd];
            temp_v11 = puVar12[0xe];
            puVar13[0xf] = puVar12[0xf];
            puVar13[8] = temp_v2;
            puVar13[9] = temp_v3;
            puVar13[10] = temp_v6;
            puVar13[0xb] = temp_v12;
            puVar13[0xc] = temp_v8;
            puVar13[0xd] = temp_v9;
            puVar13[0xe] = temp_v11;
          }
        }
      }
LAB_0036b044:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)((int)param_2->field_0x8 + 0x10));
  }
  return;
}

} /* extern "C" */
