/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387af0` (_code @ 0x387af0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00387af0_arg0 fn_00387af0_arg0;
struct fn_00387af0_arg0 {
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
    unsigned char pad_0x354[0xf4];
    undefined4 field_0x448; /* +0x448 */
    undefined4 field_0x44c; /* +0x44c */
};

extern int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_002baa40. */


void FUN_00387af0(fn_00387af0_arg0 *param_1)

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
  param_1->field_0x448 = 0;
  param_1->field_0x44c = 0;
  *(unsigned char *)(DAT_00433130 + 0x450c) = 1;
  param_1->field_0x31c = 1;
  param_1->field_0x328 = 0;
  FUN_002baa40();
  temp_v0 = puVar1[1];
  param_1->field_0x320 = *puVar1;
  *(unsigned int *)&param_1->field_0x324 = temp_v0;
  return;
}
