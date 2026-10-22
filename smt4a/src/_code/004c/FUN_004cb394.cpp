/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cb394` (_code @ 0x4cb394, 0x274 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(unsigned int *, int);
int VectorSignedToFloat(...);

typedef struct fn_004cb394_arg1 fn_004cb394_arg1;
struct fn_004cb394_arg1 {
    unsigned char pad_0x0[0x10];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xb];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x2b];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x16];
    short field_0x6a; /* +0x6a */
    int field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x4];
    uint field_0x74; /* +0x74 */
};

extern int DAT_0057aa10; /* 0x57aa10 */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */
extern unsigned int g_battleMotionCombatantClearMask; /* 0x57aa68 */
extern unsigned int DAT_0057aa6c; /* 0x57aa6c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004cb394(unsigned int *param_1,fn_004cb394_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v0 = DAT_0057aa10;
  if (((param_2->field_0x50 & 2) != 0) &&
     (FUN_003f0e20(param_1,(int)param_2->field_0x6a), param_1 != (unsigned int *)0x0)) {
    if (((param_1[1] & DAT_0057aa6c) == 0 && (g_battleMotionCombatantClearMask & *param_1) == 0) ||
       (param_2->field_0x6c == 0xffff)) {
      param_2->field_0x74 = 0xffffffff;
    }
    else {
      temp_v1 = *(unsigned int *)&param_2[1].field_0x24;
      temp_v3 = 0;
      do {
        if ((temp_v1 == 0) && (((unsigned int)(unsigned short)param_1[0x9d] & (1 << (temp_v3 & 0xff))) != 0)) {
          *(unsigned int *)&param_2[1].field_0x24 = temp_v3;
          temp_v1 = temp_v3;
          break;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0xe);
      if (temp_v1 == 7) {
        temp_v3 = 0x52dee7ff;
      }
      else if (temp_v1 == 5) {
        temp_v3 = 0xb252ceff;
      }
      else if (temp_v1 == 6) {
        temp_v3 = 0xf721f9ff;
      }
      else if (temp_v1 == 8) {
        temp_v3 = 0xefd629ff;
      }
      else if (temp_v1 == 9) {
        temp_v3 = 0x7e620cff;
      }
      else if (temp_v1 == 3) {
        temp_v3 = 0xff4000ff;
      }
      else if (temp_v1 == 0xb) {
        temp_v3 = 0xff0055ff;
      }
      else if (temp_v1 == 0xc) {
        temp_v3 = 0x124fd8ff;
      }
      else {
        temp_v3 = DAT_0057aa1c;
        if (temp_v1 == 0xd) {
          temp_v3 = 0x6b7296ff;
        }
      }
      if (*(unsigned int *)&param_2[1].field_0x20 != temp_v3) {
        temp_v4 = param_2->field_0x74;
        *(unsigned int *)&param_2[1].field_0x20 = temp_v3;
        *(unsigned int *)&param_2[1].field_0x1c = temp_v4;
        *(unsigned int *)&param_2[1].field_0x10 = 0;
      }
      temp_v5 = *(int *)&param_2[1].field_0x10;
      if (temp_v5 < temp_v0) {
        temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = (float)VectorSignedToFloat(temp_v5 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = *(unsigned int *)&param_2[1].field_0x1c;
        *(int *)&param_2[1].field_0x10 = temp_v5 + 1;
        temp_v1 = (temp_v2 & 0xff0000) >> 0x10;
        temp_v7 = temp_v7 / temp_v6;
        temp_v4 = (temp_v2 & 0xff00) >> 8;
        temp_v8 = (float)VectorSignedToFloat((temp_v3 >> 0x18) - (temp_v2 >> 0x18),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)VectorSignedToFloat(((temp_v3 & 0xff0000) >> 0x10) - temp_v1,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat(((temp_v3 & 0xff00) >> 8) - temp_v4,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat((temp_v3 & 0xff) - (temp_v2 & 0xff),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        param_2->field_0x74 =
             (int)(temp_v6 * temp_v7) + (temp_v2 & 0xff) +
             ((int)(temp_v8 * temp_v7) + (temp_v2 >> 0x18)) * 0x1000000 +
             (temp_v1 + (int)(temp_v9 * temp_v7)) * 0x10000 + ((int)(temp_v10 * temp_v7) + temp_v4) * 0x100;
        return;
      }
      param_2->field_0x74 = temp_v3;
      *(int *)&param_2[1].field_0x10 = temp_v5 + 1;
      temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = (float)VectorSignedToFloat(temp_v5 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v6 + 20.0f + 4.0f < temp_v7) {
        temp_v3 = temp_v1 + 1;
        do {
          if (((unsigned int)(unsigned short)param_1[0x9d] & (1 << (temp_v3 & 0xff))) != 0) {
            *(unsigned int *)&param_2[1].field_0x24 = temp_v3;
            return;
          }
          temp_v3 = temp_v3 + 1;
          if (temp_v3 >= 0xe) {
            temp_v3 = 0;
          }
        } while (temp_v1 != temp_v3);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
