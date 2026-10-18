/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110334` (_code @ 0x110334, 0x102 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00110334_arg0 fn_00110334_arg0;
struct fn_00110334_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 *field_0xc; /* +0xc */
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    undefined4 field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
};

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00110440; /* 0x110440 */
extern signed char DAT_00594959; /* 0x594959 */

extern unsigned int FUN_00128ce0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e3140. */
extern int FUN_002e784e(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002fb0b4. */
/* Supplied declaration required: FUN_002fb0d4. */
/* Supplied declaration required: FUN_002fb1c4. */
/* Supplied declaration required: FUN_002fb1d4. */
/* Supplied declaration required: FUN_002fb1ea. */
/* Supplied declaration required: FUN_0042d250. */


unsigned char FUN_00110334(fn_00110334_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  fn_00110334_arg0 *pfVar4;
  unsigned int *puVar5;
  fn_00110334_arg0 *temp_v3;
  unsigned int temp_v4;
  fn_00110334_arg0 *temp_v5;
  unsigned char temp_v6 [16];
  
  if ((DAT_00594959 == '\0') && (param_1->field_0xc[1] == 0)) {
    temp_v0 = param_1->field_0x18;
    param_1->field_0xc[2] = temp_v0;
    temp_v0 = FUN_002e784e(temp_v0 + 0xfff,&LAB_00110440,0);
    param_1->field_0xc[1] = temp_v0;
    *(unsigned int *)((temp_v0 + 0xfffU) & 0xfffff000) = 0xcc;
  }
  if (*param_1->field_0xc == 0) {
    temp_v1 = FUN_00128ce0(&LAB_00110440,0);
    *param_1->field_0xc = temp_v1;
  }
  *(unsigned char *)(param_1->field_0xc + 3) = 0;
  temp_v0 = param_1->field_0x20;
  if (temp_v0 == -0x80000000) {
    temp_v0 = -2;
  }
  if (DAT_00594959 != '\0') {
    pfVar4 = (fn_00110334_arg0 *)*param_1->field_0xc;
    temp_v2 = param_1->field_0x18;
    temp_v1 = param_1->field_0x14;
    temp_v4 = 0x110459;
    temp_v3 = param_1;
    FUN_002fb0b4(&temp_v5,0);
    FUN_0042d250(pfVar4,&temp_v5,temp_v4,&temp_v3,temp_v2,temp_v1,temp_v0);
  }
  else {
    temp_v3 = (fn_00110334_arg0 *)*param_1->field_0xc;
    puVar5 = param_1->field_0xc;
    temp_v4 = 0x110459;
    temp_v1 = param_1->field_0x14;
    temp_v5 = param_1;
    FUN_002fb0b4(temp_v6,0);
    pfVar4 = temp_v3;
    FUN_002fb0d4(temp_v3,temp_v6,temp_v4,&temp_v5,
                 puVar5[2] + ((puVar5[1] + 0xfff) & 0xfffff000),temp_v1,temp_v0,0);
  }
  if ((((unsigned int)pfVar4 & 0x7ffffff) >> 0x15 != 3) && ((int)pfVar4 < 0)) {
    FUN_002e3140();
  }
  temp_v1 = *param_1->field_0xc;
  if (-1 >= (int)pfVar4) {
    FUN_002fb1c4();
    *param_1->field_0xc = 0;
  }
  else {
    FUN_002fb1d4();
    *(unsigned int *)&param_1->field_0x10 = temp_v1;
    FUN_002fb1ea(*param_1->field_0xc,param_1->field_0x14);
  }
  return -1 < (int)pfVar4;
}
