/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aedcc` (_code @ 0x2aedcc, 0x198 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002aedcc_arg0 fn_002aedcc_arg0;
struct fn_002aedcc_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    float field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    byte field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x4b];
    byte field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    int field_0x80; /* +0x80 */
    int field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x5];
    byte field_0x8d; /* +0x8d */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a6228. */
extern int FUN_002a63f8(unsigned int);
/* Supplied declaration required: FUN_002a6410. */
/* Supplied declaration required: FUN_002a8ab0. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002aec20(int, unsigned int, int, unsigned int);
extern int FUN_002c1f28(void);


void FUN_002aedcc(fn_002aedcc_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x14 != param_2) {
    if (param_1->field_0x7c != 0) {
      if (param_1->field_0x84 != -1) {
        FUN_002aeb2c(param_1->field_0x10);
        FUN_002a6410(DAT_00433158,param_1->field_0x10,param_1->field_0x84);
        param_1->field_0x84 = -1;
        param_1->field_0x80 = 0;
      }
      param_1->field_0x14 = param_2;
    }
    else if (param_1->field_0x8d == 0) {
      if ((param_1->field_0x14 != -1) && (temp_v0 = FUN_002a63f8(param_1->field_0x10), temp_v0 == 0)) {
        if (param_1->field_0x18 == -1) {
          param_1->field_0x18 = param_2;
        }
        return;
      }
      if (((param_1->field_0x30 == 0) || (param_1->field_0x28 == 0.0f)) && (param_1->field_0xc != 0))
      {
        FUN_002aeb2c(param_1->field_0x10,param_1->field_0x14);
        FUN_002a6410(DAT_00433158,param_1->field_0x10,param_1->field_0x14);
        param_1->field_0xc = 0;
      }
      temp_v0 = FUN_002c1f28();
      if (temp_v0 != 0) {
        param_1->field_0x7c = 1;
      }
      else {
        if (param_1->field_0xc != 0) {
          param_1->field_0x80 = param_1->field_0xc;
          param_1->field_0x84 = param_1->field_0x14;
        }
        param_1->field_0x14 = param_2;
        temp_v0 = FUN_002aec20(DAT_00433158,param_1->field_0x10,param_2,1);
        if (temp_v0 != 0) {
          temp_v0 = DAT_00433158;
          FUN_002a6228(DAT_00433158,param_1->field_0x10,param_1->field_0x14,0x10000);
        }
        else {
          temp_v0 = param_1->field_0x10;
          FUN_002a6214(temp_v0,param_1->field_0x14);
        }
        param_1->field_0xc = temp_v0;
        if (param_1->field_0x80 != 0) {
          if (-1 < param_3) {
            FUN_002a8ab0(param_1,4,0);
            return;
          }
          FUN_002a8ab0(param_1,3,0);
          return;
        }
      }
    }
  }
  return;
}
