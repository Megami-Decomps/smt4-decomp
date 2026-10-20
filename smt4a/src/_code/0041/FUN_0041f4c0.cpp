/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f4c0` (_code @ 0x41f4c0, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(...);
int FUN_0019de98(...);
int FUN_002f0384(...);
int FUN_0041e58c(...);
int FUN_0041f020(...);

typedef struct fn_0041f4c0_arg0 fn_0041f4c0_arg0;
struct fn_0041f4c0_arg0 {
    unsigned char pad_0x0[0x5];
    char field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x1];
    byte field_0x7; /* +0x7 */
    undefined4 field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
    undefined1 field_0xd; /* +0xd */
    unsigned char pad_0xe[0x5a];
    undefined1 field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x2a3];
    undefined1 field_0x30c; /* +0x30c */
    unsigned char pad_0x30d[0x13f];
    undefined1 field_0x44c; /* +0x44c */
    undefined1 field_0x44d; /* +0x44d */
    undefined1 field_0x44e; /* +0x44e */
};

extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_0023b3d0(void);
extern int FUN_002857dc(void);
/* Supplied declaration required: FUN_002f0384. */
extern int FUN_0038b320(void);
/* Supplied declaration required: FUN_0041e58c. */
/* Supplied declaration required: FUN_0041f020. */


void FUN_0041f4c0(fn_0041f4c0_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  
  temp_v2 = FUN_0023b3d0();
  if (((temp_v2 != 0) && (temp_v2 = FUN_002857dc(), temp_v2 != 0)) && (temp_v2 = FUN_0038b320(), temp_v2 != 0)
     ) {
    FUN_0041e58c(param_1);
    param_1->field_0x44c = 0;
    param_1->field_0x44d = 0;
    param_1->field_0x44e = 0;
    FUN_0041f020(param_1,1);
    temp_v2 = FUN_00163fd4(6);
    if (((temp_v2 != 0) || (temp_v2 = FUN_00163fd4(3), temp_v2 != 0)) ||
       ((temp_v2 = FUN_00163fd4(0xc), temp_v2 != 0 || (temp_v2 = FUN_00163fd4(0xf), temp_v2 != 0)))) {
      param_1->field_0x30c = 1;
      FUN_002f0384(0);
      param_1->field_0x68 = 0;
    }
    temp_v1 = param_1->field_0x5;
    FUN_00187180(0x3d,0);
    temp_v2 = FUN_00192798();
    FUN_0019de98(temp_v2 + temp_v1 * 0x54 + 0x14,0xf4f4f4ff);
    temp_v0 = param_1->field_0x7;
    param_1->field_0x8 = 0;
    param_1->field_0x7 = 0xd;
    param_1->field_0xd = temp_v0;
    param_1->field_0xc = 4;
  }
  return;
}

} /* extern "C" */
