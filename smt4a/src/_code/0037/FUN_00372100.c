/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372100` (_code @ 0x372100, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00372100_arg0 fn_00372100_arg0;
typedef struct fn_00372100_arg1 fn_00372100_arg1;
struct fn_00372100_arg0 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined2 field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    undefined2 field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x6];
    short field_0x24; /* +0x24 */
    unsigned char pad_0x26[0x2];
    short field_0x28; /* +0x28 */
    short field_0x2a; /* +0x2a */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined2 field_0x38; /* +0x38 */
    undefined1 field_0x3a; /* +0x3a */
    undefined1 field_0x3b; /* +0x3b */
    undefined1 field_0x3c; /* +0x3c */
    undefined1 field_0x3d; /* +0x3d */
    undefined1 field_0x3e; /* +0x3e */
    undefined1 field_0x3f; /* +0x3f */
    undefined1 field_0x40; /* +0x40 */
    undefined1 field_0x41; /* +0x41 */
    unsigned char pad_0x42[0xc];
    undefined2 field_0x4e; /* +0x4e */
    unsigned char pad_0x50[0x10];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    unsigned char pad_0xa0[0x500];
    undefined4 field_0x5a0; /* +0x5a0 */
    unsigned char pad_0x5a4[0x8a];
    undefined1 field_0x62e; /* +0x62e */
};
struct fn_00372100_arg1 {
    uint field_0x0; /* +0x0 */
    uint field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xc];
    ushort field_0x1a; /* +0x1a */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    ushort field_0x28; /* +0x28 */
    short field_0x2a; /* +0x2a */
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x2];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x2a];
    ushort field_0x5e; /* +0x5e */
    unsigned char pad_0x60[0x2];
    ushort field_0x62; /* +0x62 */
};

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_002cb55c. */


void FUN_00372100(fn_00372100_arg0 *param_1,fn_00372100_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002cb55c(DAT_00588fd4 + 0x19d0,param_1,param_2);
  return;
}
