#include "romwright_types.h"

extern "C" {

int FUN_002bd420(...);

typedef struct fn_00235368_arg0 fn_00235368_arg0;
struct fn_00235368_arg0 {
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
    byte field_0x3c; /* +0x3c */
    byte field_0x3d; /* +0x3d */
    byte field_0x3e; /* +0x3e */
    unsigned char pad_0x3f[0xc];
    byte field_0x4b; /* +0x4b */
    byte field_0x4c; /* +0x4c */
    byte field_0x4d; /* +0x4d */
};

extern unsigned int DAT_004def08; /* 0x4def08 */

/* Supplied declaration required: FUN_002bd420. */


void FUN_00235368(fn_00235368_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002bd420(param_1,&DAT_004def08,0x10);
  return;
}

} /* extern "C" */
