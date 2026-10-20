/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1584` (_code @ 0x2d1584, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026933c(...);
int FUN_003024d0(...);

typedef struct fn_002d1584_arg0 fn_002d1584_arg0;
typedef struct fn_002d1584_arg0_p9c fn_002d1584_arg0_p9c;
struct fn_002d1584_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x2];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x7];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x83];
    fn_002d1584_arg0_p9c *field_0x9c; /* +0x9c */
    int field_0xa0; /* +0xa0 */
};
struct fn_002d1584_arg0_p9c {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
};

/* Supplied declaration required: FUN_0026933c. */
/* Supplied declaration required: FUN_003024d0. */


void FUN_002d1584(fn_002d1584_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  fn_002d1584_arg0_p9c *pfVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  FUN_0026933c(param_1->field_0x9c);
  pfVar1 = param_1->field_0x9c;
  temp_v4 = pfVar1->field_0x8;
  temp_v1 = temp_v0;
  if (temp_v4 != 0) {
    temp_v1 = pfVar1->field_0x10;
  }
  if (temp_v4 != 0 && temp_v1 != 0) {
    temp_v1 = pfVar1->field_0x18;
    temp_v3 = param_1->field_0xa0;
    if ((param_1->field_0xc == 3) && (temp_v2 = 0, 0 < temp_v4)) {
      do {
        if (*(int *)(temp_v1 + 0x10) == 0) {
          FUN_003024d0(param_1,temp_v3);
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = temp_v1 + 0x28;
        temp_v3 = temp_v3 + 0x1c;
      } while (temp_v2 < temp_v4);
    }
  }
  return;
}

} /* extern "C" */
