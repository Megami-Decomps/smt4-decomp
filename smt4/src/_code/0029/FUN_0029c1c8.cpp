#include "romwright_types.h"

extern "C" {

int FUN_001a7dbc(...);

typedef struct fn_0029c1c8_arg0 fn_0029c1c8_arg0;
struct fn_0029c1c8_arg0 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined2 field_0x4; /* +0x4 */
    undefined2 field_0x6; /* +0x6 */
    undefined2 field_0x8; /* +0x8 */
    undefined2 field_0xa; /* +0xa */
    undefined2 field_0xc; /* +0xc */
    ushort field_0xe; /* +0xe */
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
    unsigned char pad_0x44[0x2];
    undefined2 field_0x46; /* +0x46 */
    undefined1 field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x1];
    undefined1 field_0x4a; /* +0x4a */
    unsigned char pad_0x4b[0x5b6];
    undefined1 field_0x601; /* +0x601 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_001a7dbc. */
extern int FUN_002a8740(fn_0029c1c8_arg0 *);


void FUN_0029c1c8(fn_0029c1c8_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a8740(param_1);
  if (temp_v0 != 0) {
    FUN_001a7dbc(temp_v0,param_1,param_2,param_3);
    return;
  }
  return;
}

} /* extern "C" */
