/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa640` (_code @ 0x3aa640, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00271b64(...);
int FUN_00362900(...);
int FUN_00390368(...);

typedef struct fn_003aa640_arg0 fn_003aa640_arg0;
typedef struct fn_003aa640_arg0_p9c fn_003aa640_arg0_p9c;
typedef struct fn_003aa640_arg0_pa0 fn_003aa640_arg0_pa0;
struct fn_003aa640_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x2];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x7];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x13];
    float field_0x2c; /* +0x2c */
    ushort field_0x30; /* +0x30 */
    unsigned char pad_0x32[0x22];
    undefined4 field_0x54; /* +0x54 */
    unsigned char pad_0x58[0x44];
    fn_003aa640_arg0_p9c *field_0x9c; /* +0x9c */
    fn_003aa640_arg0_pa0 *field_0xa0; /* +0xa0 */
};
struct fn_003aa640_arg0_p9c {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
};
struct fn_003aa640_arg0_pa0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    char field_0x18; /* +0x18 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00271b64. */
/* Supplied declaration required: FUN_00362900. */
/* Supplied declaration required: FUN_00390368. */


void FUN_003aa640(fn_003aa640_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  fn_003aa640_arg0_p9c *pfVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  fn_003aa640_arg0_pa0 *pfVar4;
  int temp_v3;
  
  FUN_00271b64(param_1->field_0x9c);
  pfVar1 = param_1->field_0x9c;
  temp_v3 = pfVar1->field_0x8;
  temp_v1 = temp_v0;
  if (temp_v3 != 0) {
    temp_v1 = pfVar1->field_0x10;
  }
  if (temp_v3 != 0 && temp_v1 != 0) {
    temp_v1 = pfVar1->field_0x18;
    pfVar4 = param_1->field_0xa0;
    if ((param_1->field_0xc == 3) && (temp_v2 = 0, 0 < temp_v3)) {
      do {
        if (*(int *)(temp_v1 + 0x10) == 0) {
          FUN_00390368(param_1,pfVar4);
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = temp_v1 + 0x28;
        pfVar4 = pfVar4 + 1;
      } while (temp_v2 < temp_v3);
    }
  }
  FUN_00362900(param_1);
  return;
}

} /* extern "C" */
