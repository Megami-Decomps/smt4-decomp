/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001274fc` (_code @ 0x1274fc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001274fc_arg0 fn_001274fc_arg0;
typedef struct fn_001274fc_arg0_p1c fn_001274fc_arg0_p1c;
struct fn_001274fc_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    fn_001274fc_arg0_p1c *field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    undefined4 field_0x2c; /* +0x2c */
};
struct fn_001274fc_arg0_p1c {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

/* Supplied declaration required: FUN_00126b48. */
/* Supplied declaration required: FUN_00126cd0. */
extern unsigned int FUN_0030db5c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0030dd02. */


unsigned int FUN_001274fc(fn_001274fc_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  fn_001274fc_arg0_p1c *pfVar3;
  
  if ((((param_1 != (fn_001274fc_arg0 *)0x0) &&
       (pfVar3 = param_1->field_0x1c, pfVar3 != (fn_001274fc_arg0_p1c *)0x0)) &&
      (param_1->field_0x20 != 0)) && (param_1->field_0x24 != 0)) {
    param_1->field_0x14 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x2c = 2;
    pfVar3->field_0x14 = 0;
    pfVar3->field_0x10 = pfVar3->field_0x8;
    temp_v0 = pfVar3->field_0x18;
    if (temp_v0 < 0) {
      temp_v0 = -temp_v0;
      pfVar3->field_0x18 = temp_v0;
    }
    if (temp_v0 == 0) {
      temp_v1 = 0x71;
    }
    else {
      temp_v1 = 0x2a;
    }
    *(unsigned int *)&pfVar3->field_0x4 = temp_v1;
    if (temp_v0 != 2) {
      temp_v1 = FUN_0030db5c(0,0);
    }
    else {
      temp_v1 = 0;
      FUN_0030dd02(0,0);
    }
    *(unsigned int *)(param_1 + 1) = temp_v1;
    *(unsigned int *)&pfVar3[1].field_0xc = 0;
    FUN_00126cd0(pfVar3);
    FUN_00126b48(pfVar3);
    return 0;
  }
  return 0xfffffffe;
}
