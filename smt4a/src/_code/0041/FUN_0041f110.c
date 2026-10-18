/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f110` (_code @ 0x41f110, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0041f110_arg0 fn_0041f110_arg0;
struct fn_0041f110_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x2];
    byte field_0x7; /* +0x7 */
    int field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
    undefined1 field_0xd; /* +0xd */
    unsigned char pad_0xe[0x4];
    unsigned char field_0x12; /* +0x12 */
    unsigned char pad_0x13[0x5];
    int field_0x18; /* +0x18 */
};

typedef int romwright_code();
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */
extern int FUN_0022e72c(void);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_00334158(void);
/* Supplied declaration required: FUN_0041e3a0. */
/* Supplied declaration required: FUN_00420a2c. */


void FUN_0041f110(fn_0041f110_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = param_1->field_0x8;
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        return;
      }
      FUN_00420a2c(param_1);
      if (param_1[param_1->field_0x18 * 5 + 0x2d].field_0x12 == '\0') {
        return;
      }
      temp_v0 = param_1->field_0x7;
      param_1->field_0x7 = 6;
      param_1->field_0xd = temp_v0;
      param_1->field_0x8 = 0;
      param_1->field_0xc = 0;
      return;
    }
  }
  else {
    FUN_0041e3a0(param_1,1);
    param_1->field_0x8 = param_1->field_0x8 + 1;
  }
  FUN_00420a2c(param_1);
  temp_v1 = FUN_00334158();
  if (((temp_v1 != 0) || (temp_v1 = FUN_0022e72c(), temp_v1 != 0)) && ((char)param_1[3].field_0x8 != '\0')
     ) {
    *(unsigned char *)&param_1[3].field_0x8 = 0;
    if (*(int *)&param_1[3].field_0x4 != 0) {
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)&param_1[3].field_0x4 + 4));
      if (*(int **)&param_1[3].field_0x4 != (int *)0x0) {
        (**(romwright_code **)(**(int **)&param_1[3].field_0x4 + 4))();
        *(unsigned int *)&param_1[3].field_0x4 = 0;
      }
    }
    FUN_0022e774();
    param_1->field_0x8 = param_1->field_0x8 + 1;
    return;
  }
  return;
}
