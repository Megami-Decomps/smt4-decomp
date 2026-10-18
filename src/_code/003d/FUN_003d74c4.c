/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d74c4` (_code @ 0x3d74c4, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d74c4_arg0 fn_003d74c4_arg0;
struct fn_003d74c4_arg0 {
    unsigned char pad_0x0[0x680];
    unsigned char field_0x680; /* +0x680 */
    unsigned char pad_0x681[0x113];
    float field_0x794; /* +0x794 */
    float field_0x798; /* +0x798 */
    float field_0x79c; /* +0x79c */
    unsigned char pad_0x7a0[0xc];
    float field_0x7ac; /* +0x7ac */
    float field_0x7b0; /* +0x7b0 */
    float field_0x7b4; /* +0x7b4 */
    unsigned char pad_0x7b8[0xc];
    float field_0x7c4; /* +0x7c4 */
    float field_0x7c8; /* +0x7c8 */
    float field_0x7cc; /* +0x7cc */
    float field_0x7d0; /* +0x7d0 */
    float field_0x7d4; /* +0x7d4 */
    float field_0x7d8; /* +0x7d8 */
    unsigned char pad_0x7dc[0xc];
    float field_0x7e8; /* +0x7e8 */
    float field_0x7ec; /* +0x7ec */
    float field_0x7f0; /* +0x7f0 */
    float field_0x7f4; /* +0x7f4 */
    float field_0x7f8; /* +0x7f8 */
    float field_0x7fc; /* +0x7fc */
    float field_0x800; /* +0x800 */
    float field_0x804; /* +0x804 */
    float field_0x808; /* +0x808 */
    unsigned char pad_0x80c[0xc];
    float field_0x818; /* +0x818 */
    float field_0x81c; /* +0x81c */
    float field_0x820; /* +0x820 */
    float field_0x824; /* +0x824 */
    float field_0x828; /* +0x828 */
    float field_0x82c; /* +0x82c */
    float field_0x830; /* +0x830 */
    float field_0x834; /* +0x834 */
    float field_0x838; /* +0x838 */
};

/* Supplied declaration required: FUN_00227414. */


void FUN_003d74c4(fn_003d74c4_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  FUN_00227414(0,*(unsigned int *)&param_1->field_0x680,param_2);
  param_1->field_0x7e8 =
       param_1->field_0x7f4 + (param_1->field_0x800 - param_1->field_0x7f4) * in_s0;
  param_1->field_0x7ec =
       param_1->field_0x7f8 + (param_1->field_0x804 - param_1->field_0x7f8) * in_s0;
  param_1->field_0x7f0 =
       param_1->field_0x7fc + (param_1->field_0x808 - param_1->field_0x7fc) * in_s0;
  param_1->field_0x818 =
       param_1->field_0x824 + (param_1->field_0x830 - param_1->field_0x824) * in_s0;
  param_1->field_0x81c =
       param_1->field_0x828 + (param_1->field_0x834 - param_1->field_0x828) * in_s0;
  param_1->field_0x820 =
       param_1->field_0x82c + (param_1->field_0x838 - param_1->field_0x82c) * in_s0;
  param_1->field_0x7d0 =
       param_1->field_0x7d4 + (param_1->field_0x7d8 - param_1->field_0x7d4) * in_s0;
  param_1->field_0x7c4 =
       param_1->field_0x7c8 + (param_1->field_0x7cc - param_1->field_0x7c8) * in_s0;
  param_1->field_0x7ac =
       param_1->field_0x7b0 + (param_1->field_0x7b4 - param_1->field_0x7b0) * in_s0;
  param_1->field_0x794 =
       param_1->field_0x798 + (param_1->field_0x79c - param_1->field_0x798) * in_s0;
  return;
}
