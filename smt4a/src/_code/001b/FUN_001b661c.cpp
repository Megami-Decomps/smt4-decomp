#include "romwright_types.h"

extern "C" {

int FUN_001b4a90(...);
int FUN_002e6dd4(...);

typedef struct fn_001b661c_arg1 fn_001b661c_arg1;
struct fn_001b661c_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x2];
    undefined1 field_0x3f; /* +0x3f */
    undefined1 field_0x40; /* +0x40 */
    undefined1 field_0x41; /* +0x41 */
};

extern unsigned char DAT_005c4bb4; /* 0x5c4bb4 */

/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_002e6dd4. */


void FUN_001b661c(int param_1,fn_001b661c_arg1 *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x24) & 1) != 0) {
    FUN_002e6dd4(param_2,param_3);
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x24) & 2) != 0) {
    FUN_001b4a90(param_2,param_3,(*(unsigned int *)((unsigned char *)&DAT_005c4bb4 + 0x4)));
    return;
  }
  return;
}

} /* extern "C" */
