/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efe94` (_code @ 0x2efe94, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002efe94_arg0 fn_002efe94_arg0;
typedef struct fn_002efe94_arg1 fn_002efe94_arg1;
struct fn_002efe94_arg0 {
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
    undefined1 field_0x3d; /* +0x3d */
    undefined1 field_0x3e; /* +0x3e */
    unsigned char pad_0x3f[0xc];
    undefined1 field_0x4b; /* +0x4b */
    undefined1 field_0x4c; /* +0x4c */
    undefined1 field_0x4d; /* +0x4d */
};
struct fn_002efe94_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x20];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    byte field_0x5c; /* +0x5c */
    byte field_0x5d; /* +0x5d */
    byte field_0x5e; /* +0x5e */
    unsigned char pad_0x5f[0xc];
    byte field_0x6b; /* +0x6b */
    byte field_0x6c; /* +0x6c */
    byte field_0x6d; /* +0x6d */
};

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_002c5df8. */


void FUN_002efe94(fn_002efe94_arg0 *param_1,fn_002efe94_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e190;
  if ((int)param_2 < 9) {
    *(unsigned int *)(DAT_0044e190 + 0x4b2) = 0;
    *(unsigned int *)(temp_v0 + 0x4b6) = 0;
    *(unsigned int *)(temp_v0 + 0x4ba) = 0;
    *(unsigned int *)(temp_v0 + 0x4be) = 0;
    FUN_002c5df8(temp_v0 + 0x4b2,param_1,(int)param_2 << 1);
    return;
  }
  return;
}
