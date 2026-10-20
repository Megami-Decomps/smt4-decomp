/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412b3c` (_code @ 0x412b3c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042c7c8(unsigned int, unsigned char *, unsigned int, int);

typedef struct fn_00412b3c_arg0 fn_00412b3c_arg0;
struct fn_00412b3c_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x28];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
};

/* stack frame of param_2: 15 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned char sp15; /* 0x15: local_15 */
    unsigned char sp16; /* 0x16: local_16 */
    unsigned char sp17; /* 0x17: local_17 */
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp25; /* 0x25: local_25 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp2D; /* 0x2d: local_2d */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int FUN_001bc2ec(unsigned int);
/* Supplied declaration required: FUN_0042c7c8. */


void FUN_00412b3c(fn_00412b3c_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned int temp_v15;
  
  temp_v11 = 0;
  temp_v15 = 0;
  temp_v12 = 1;
  temp_v6 = 0;
  temp_v1 = 0;
  temp_v13 = 0xff;
  temp_v7 = 1;
  temp_v2 = 1;
  temp_v14 = 0xff;
  temp_v8 = 0xff;
  temp_v3 = 0xff;
  temp_v9 = 0xff;
  temp_v10 = 0;
  temp_v4 = 0xff;
  temp_v5 = 0;
  if ((param_1->field_0x4 & 1) != 0) {
    temp_v13 = 0;
    temp_v0 = FUN_001bc2ec(param_1->field_0x30);
    FUN_0042c7c8(param_2,&temp_v11,temp_v0,0xb);
  }
  if ((param_1->field_0x4 & 2) != 0) {
    temp_v3 = 1;
    temp_v0 = FUN_001bc2ec(param_1->field_0x34);
    FUN_0042c7c8(param_2,&temp_v1,temp_v0,0xf);
  }
  if ((param_1->field_0x4 & 0x20) != 0) {
    temp_v3 = 1;
    temp_v0 = FUN_001bc2ec(param_1->field_0x38);
    FUN_0042c7c8(param_2,&temp_v1,temp_v0,0xd);
  }
  if ((param_1->field_0x4 & 4) != 0) {
    temp_v8 = 2;
    temp_v0 = FUN_001bc2ec(param_1->field_0x3c);
    FUN_0042c7c8(param_2,&temp_v6,temp_v0,7);
  }
  return;
}

} /* extern "C" */
