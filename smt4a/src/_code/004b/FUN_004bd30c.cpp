/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd30c` (_code @ 0x4bd30c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002305d0(...);

typedef struct fn_004bd30c_arg0 fn_004bd30c_arg0;
struct fn_004bd30c_arg0 {
    short field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined2 field_0x4; /* +0x4 */
    undefined2 field_0x6; /* +0x6 */
    undefined2 field_0x8; /* +0x8 */
    undefined2 field_0xa; /* +0xa */
    undefined2 field_0xc; /* +0xc */
    short field_0xe; /* +0xe */
    ushort field_0x10; /* +0x10 */
    unsigned char pad_0x12[0xa];
    undefined2 field_0x1c; /* +0x1c */
    undefined2 field_0x1e; /* +0x1e */
    undefined2 field_0x20; /* +0x20 */
    undefined2 field_0x22; /* +0x22 */
    undefined2 field_0x24; /* +0x24 */
    undefined2 field_0x26; /* +0x26 */
    undefined2 field_0x28; /* +0x28 */
    undefined2 field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x2];
    undefined4 field_0x30; /* +0x30 */
    undefined2 field_0x34; /* +0x34 */
    undefined2 field_0x36; /* +0x36 */
    undefined2 field_0x38; /* +0x38 */
    undefined2 field_0x3a; /* +0x3a */
    undefined2 field_0x3c; /* +0x3c */
    undefined2 field_0x3e; /* +0x3e */
    undefined2 field_0x40; /* +0x40 */
    undefined2 field_0x42; /* +0x42 */
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x1a];
    ushort field_0x62; /* +0x62 */
    undefined2 field_0x64; /* +0x64 */
    undefined1 field_0x66; /* +0x66 */
    unsigned char pad_0x67[0xc4];
    undefined1 field_0x12b; /* +0x12b */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_002305d0. */


void FUN_004bd30c(fn_004bd30c_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001ab854();
  if (temp_v0 != 0) {
    FUN_002305d0(temp_v0,param_1,param_2,param_3);
    return;
  }
  return;
}

} /* extern "C" */
