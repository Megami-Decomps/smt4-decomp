#include "romwright_types.h"

extern "C" {

int FUN_004637fc(void);

typedef struct fn_004632b0_arg0 fn_004632b0_arg0;
struct fn_004632b0_arg0 {
    unsigned char pad_0x0[0x27];
    undefined1 field_0x27; /* +0x27 */
    unsigned char pad_0x28[0x8];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x4];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined1 field_0x50; /* +0x50 */
    undefined1 field_0x51; /* +0x51 */
    unsigned char pad_0x52[0xb42];
    undefined1 field_0xb94; /* +0xb94 */
    unsigned char pad_0xb95[0x163];
    undefined4 field_0xcf8; /* +0xcf8 */
};

/* Supplied declaration required: FUN_004637fc. */


void FUN_004632b0(fn_004632b0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_004637fc();
  param_1->field_0x38 = 0;
  *(unsigned int *)&param_1->field_0x3c = 0xffffffff;
  param_1->field_0x40 = 0;
  param_1->field_0x48 = 0;
  param_1->field_0x4c = 0;
  param_1->field_0x50 = 0;
  param_1->field_0x51 = 0;
  param_1->field_0x27 = 0;
  param_1->field_0xb94 = 3;
  param_1->field_0x30 = 0;
  param_1->field_0xcf8 = 0xffffffff;
  param_1->field_0x34 = 0;
  return;
}

} /* extern "C" */
