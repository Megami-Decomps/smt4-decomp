/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046e2d0` (_code @ 0x46e2d0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0046e2d0_arg0 fn_0046e2d0_arg0;
struct fn_0046e2d0_arg0 {
    unsigned char pad_0x0[0x310];
    undefined4 field_0x310; /* +0x310 */
    undefined4 field_0x314; /* +0x314 */
    unsigned char pad_0x318[0x4];
    undefined1 field_0x31c; /* +0x31c */
    unsigned char pad_0x31d[0x3];
    undefined4 field_0x320; /* +0x320 */
    unsigned char field_0x324; /* +0x324 */
    unsigned char pad_0x325[0x3];
    undefined4 field_0x328; /* +0x328 */
    unsigned char pad_0x32c[0x18];
    undefined4 field_0x344; /* +0x344 */
    unsigned char pad_0x348[0x8];
    undefined4 field_0x350; /* +0x350 */
    unsigned char pad_0x354[0x110];
    undefined4 field_0x464; /* +0x464 */
    undefined4 field_0x468; /* +0x468 */
};

extern int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_001b57a8. */


void FUN_0046e2d0(fn_0046e2d0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  puVar1 = temp_v1;
  param_1->field_0x344 = 0;
  param_1->field_0x310 = 0;
  param_1->field_0x314 = 0;
  param_1->field_0x350 = 0;
  param_1->field_0x464 = 0;
  param_1->field_0x468 = 0;
  *(unsigned char *)(DAT_0057027c + 0x450c) = 1;
  param_1->field_0x31c = 1;
  param_1->field_0x328 = 0;
  FUN_001b57a8();
  temp_v0 = puVar1[1];
  param_1->field_0x320 = *puVar1;
  *(unsigned int *)&param_1->field_0x324 = temp_v0;
  return;
}
