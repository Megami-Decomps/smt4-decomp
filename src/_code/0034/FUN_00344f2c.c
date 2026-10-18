/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344f2c` (_code @ 0x344f2c, 0x230 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00344f2c_arg1 fn_00344f2c_arg1;
struct fn_00344f2c_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x10];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x5];
    short field_0x26; /* +0x26 */
    int field_0x28; /* +0x28 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023cb44. */
/* Supplied declaration required: FUN_0023ce64. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_0028a210. */
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_003ae858(unsigned int, int);


void FUN_00344f2c(unsigned int param_1,fn_00344f2c_arg1 *param_2)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  puVar2 = (unsigned int *)FUN_00293c98();
  FUN_00282b94(puVar2,(int)*(short *)((int)param_2->field_0x14 + 0x62));
  if (puVar2 == (unsigned int *)0x0) {
    param_2->field_0x2 = 0;
    return;
  }
  if (param_2->field_0x20 != '\0') {
    if ((param_2->field_0x20 == '\x01') &&
       (temp_v3 = FUN_003ae858(DAT_00439ca8,(int)param_2->field_0x26), temp_v3 == 0)) {
      param_2->field_0x2 = 0;
      return;
    }
  }
  else {
    temp_v4 = *puVar2;
    if ((temp_v4 & 0x10) != 0) {
      temp_v1 = FUN_00293c98();
      FUN_0023ce64(temp_v1,(int)*(short *)((int)param_2->field_0x14 + 0x62),0);
      temp_v3 = param_2->field_0x28;
      if (temp_v3 != 1) {
        if (temp_v3 != 2) {
          if (temp_v3 != 3) {
            if (temp_v3 != 4) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v1 = DAT_00439ca8;
            FUN_0028a210(DAT_00439ca8,2,1);
            temp_v0 = (short)temp_v1;
          }
          else {
            temp_v1 = DAT_00439ca8;
            FUN_0028a210(DAT_00439ca8,3,1);
            temp_v0 = (short)temp_v1;
          }
        }
        else {
          temp_v1 = DAT_00439ca8;
          FUN_0028a210(DAT_00439ca8,0,1);
          temp_v0 = (short)temp_v1;
        }
      }
      else {
        temp_v1 = DAT_00439ca8;
        FUN_0028a210(DAT_00439ca8,1);
        temp_v0 = (short)temp_v1;
      }
    }
    else {
      if ((temp_v4 & 0x2a) == 0) {
        param_2->field_0x2 = 0;
        return;
      }
      temp_v3 = (int)*(short *)((int)puVar2 + 0x6e);
      temp_v6 = param_2->field_0x28;
      if ((temp_v4 & 0x20) != 0) {
        temp_v3 = 4;
      }
      temp_v5 = (int)(short)(int)*(float *)((int)param_2->field_0x14 + 0x30);
      temp_v2 = (int)(short)(int)*(float *)((int)param_2->field_0x14 + 0x34);
      if (temp_v6 != 1) {
        if (temp_v6 != 2) {
          if (temp_v6 != 3) {
            if (temp_v6 != 4) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v1 = DAT_00439ca8;
            FUN_0023cb44(DAT_00439ca8,temp_v3,2,temp_v5,temp_v2);
            temp_v0 = (short)temp_v1;
          }
          else {
            temp_v1 = DAT_00439ca8;
            FUN_0023cb44(DAT_00439ca8,temp_v3,3,temp_v5,temp_v2);
            temp_v0 = (short)temp_v1;
          }
        }
        else {
          temp_v1 = DAT_00439ca8;
          FUN_0023cb44(DAT_00439ca8,temp_v3,0,temp_v5,temp_v2);
          temp_v0 = (short)temp_v1;
        }
      }
      else {
        temp_v1 = DAT_00439ca8;
        FUN_0023cb44(DAT_00439ca8,temp_v3,1,temp_v5,temp_v2);
        temp_v0 = (short)temp_v1;
      }
    }
    param_2->field_0x26 = temp_v0;
    param_2->field_0x20 = '\x01';
  }
  param_2->field_0x2 = 1;
  return;
}
