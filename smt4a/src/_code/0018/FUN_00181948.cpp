/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00181948` (_code @ 0x181948, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef struct fn_00181948_arg0 fn_00181948_arg0;
struct fn_00181948_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x34];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x7];
    void *field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x1c];
    void *field_0x70; /* +0x70 */
    short field_0x74; /* +0x74 */
    short field_0x76; /* +0x76 */
    int field_0x78; /* +0x78 */
    undefined2 field_0x7c; /* +0x7c */
    undefined2 field_0x7e; /* +0x7e */
    undefined4 field_0x80; /* +0x80 */
    unsigned char field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x4];
    byte field_0x89; /* +0x89 */
    short field_0x8a; /* +0x8a */
    byte field_0x8c; /* +0x8c */
    unsigned char pad_0x8d[0x4];
    undefined1 field_0x91; /* +0x91 */
    undefined1 field_0x92; /* +0x92 */
    unsigned char pad_0x93[0x2];
    undefined1 field_0x95; /* +0x95 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_00181948(fn_00181948_arg0 *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  short *psVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v7;
  float temp_v8;
  
  if ((param_1->field_0x89 == 0) && (psVar4 = (short *)param_1->field_0x70, psVar4 != (short *)0x0)) {
    temp_v8 = (float)VectorUnsignedToFloat
                              ((unsigned int)(unsigned short)psVar4[param_1->field_0x74 * 2 + 1],
                               (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v8 / in_s0,3);
    if ((int)param_1->field_0x76 < (int)(temp_v7 & 0xffff)) {
      param_1->field_0x76 = param_1->field_0x76 + 1;
    }
    else {
      temp_v1 = param_1->field_0x74 + 1;
      param_1->field_0x76 = 0;
      param_1->field_0x74 = temp_v1;
      temp_v3 = (int)psVar4[temp_v1 * 2];
      if (temp_v3 == -1) {
        temp_v6 = param_1->field_0x84 != '\0';
        temp_v3 = 0;
        if (temp_v6) {
          temp_v3 = param_1->field_0x78;
        }
        if ((temp_v6 && temp_v3 != 0) &&
           (temp_v1 = *(short *)((int)&param_1->field_0x80 + 2),
           *(int *)(temp_v3 + temp_v1 * 0x1c + 8) != -1)) {
          temp_v1 = temp_v1 + 1;
          *(short *)((int)&param_1->field_0x80 + 2) = temp_v1;
          temp_v3 = *(int *)(temp_v3 + temp_v1 * 0x1c + 8);
          if (temp_v3 != -1 && temp_v3 != -3) {
            temp_v4 = 0;
            temp_v7 = 0;
            temp_v2 = *(unsigned short *)(*(int *)&param_1->field_0x48 + 6);
            if (temp_v2 >> 2 != 0) {
              temp_v5 = *(int *)(*(int *)&param_1->field_0x48 + 0x18);
              do {
                if (temp_v4 == (short)temp_v3) {
                  psVar4 = (short *)(temp_v5 + temp_v7 * 4);
                  goto LAB_00181a94;
                }
                temp_v0 = temp_v7 * 4;
                temp_v7 = temp_v7 + 1;
                if (*(short *)(temp_v5 + temp_v0) == -1) {
                  temp_v4 = temp_v4 + 1;
                }
              } while (temp_v7 < temp_v2 >> 2);
            }
            psVar4 = (short *)0x0;
LAB_00181a94:
            param_1->field_0x70 = psVar4;
            if (psVar4 == (short *)0x0) {
              return;
            }
            param_1->field_0x74 = 0;
            param_1->field_0x76 = 0;
            param_1->field_0x89 = 0;
            *(unsigned char *)&param_1->field_0x8a = 0;
            param_1->field_0x4 = (int)*psVar4;
            param_1->field_0x8 = 0xffffffff;
            return;
          }
        }
        param_1->field_0x89 = 1;
        return;
      }
      if (temp_v3 != -2) {
        param_1->field_0x4 = temp_v3;
        param_1->field_0x8 = 0xffffffff;
      }
      else {
        param_1->field_0x74 = 0;
        param_1->field_0x4 = (int)*psVar4;
        param_1->field_0x8 = 0xffffffff;
      }
    }
    return;
  }
  param_1->field_0x89 = 1;
  return;
}

} /* extern "C" */
