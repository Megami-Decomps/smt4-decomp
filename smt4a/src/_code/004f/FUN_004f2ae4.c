/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f2ae4` (_code @ 0x4f2ae4, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004f2ae4_arg0 fn_004f2ae4_arg0;
struct fn_004f2ae4_arg0 {
    unsigned char pad_0x0[0x6ec];
    unsigned char field_0x6ec; /* +0x6ec */
    unsigned char pad_0x6ed[0x113];
    float field_0x800; /* +0x800 */
    float field_0x804; /* +0x804 */
    float field_0x808; /* +0x808 */
    unsigned char pad_0x80c[0xc];
    float field_0x818; /* +0x818 */
    float field_0x81c; /* +0x81c */
    float field_0x820; /* +0x820 */
    unsigned char pad_0x824[0xc];
    float field_0x830; /* +0x830 */
    float field_0x834; /* +0x834 */
    float field_0x838; /* +0x838 */
    float field_0x83c; /* +0x83c */
    float field_0x840; /* +0x840 */
    float field_0x844; /* +0x844 */
    unsigned char pad_0x848[0xc];
    float field_0x854; /* +0x854 */
    float field_0x858; /* +0x858 */
    float field_0x85c; /* +0x85c */
    float field_0x860; /* +0x860 */
    float field_0x864; /* +0x864 */
    float field_0x868; /* +0x868 */
    float field_0x86c; /* +0x86c */
    float field_0x870; /* +0x870 */
    float field_0x874; /* +0x874 */
    unsigned char pad_0x878[0xc];
    float field_0x884; /* +0x884 */
    float field_0x888; /* +0x888 */
    float field_0x88c; /* +0x88c */
    float field_0x890; /* +0x890 */
    float field_0x894; /* +0x894 */
    float field_0x898; /* +0x898 */
    float field_0x89c; /* +0x89c */
    float field_0x8a0; /* +0x8a0 */
    float field_0x8a4; /* +0x8a4 */
};

/* Supplied declaration required: FUN_003d4dd4. */


void FUN_004f2ae4(fn_004f2ae4_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  FUN_003d4dd4(0,*(unsigned int *)&param_1->field_0x6ec,param_2);
  param_1->field_0x854 =
       param_1->field_0x860 + (param_1->field_0x86c - param_1->field_0x860) * in_s0;
  param_1->field_0x858 =
       param_1->field_0x864 + (param_1->field_0x870 - param_1->field_0x864) * in_s0;
  param_1->field_0x85c =
       param_1->field_0x868 + (param_1->field_0x874 - param_1->field_0x868) * in_s0;
  param_1->field_0x884 =
       param_1->field_0x890 + (param_1->field_0x89c - param_1->field_0x890) * in_s0;
  param_1->field_0x888 =
       param_1->field_0x894 + (param_1->field_0x8a0 - param_1->field_0x894) * in_s0;
  param_1->field_0x88c =
       param_1->field_0x898 + (param_1->field_0x8a4 - param_1->field_0x898) * in_s0;
  param_1->field_0x83c =
       param_1->field_0x840 + (param_1->field_0x844 - param_1->field_0x840) * in_s0;
  param_1->field_0x830 =
       param_1->field_0x834 + (param_1->field_0x838 - param_1->field_0x834) * in_s0;
  param_1->field_0x818 =
       param_1->field_0x81c + (param_1->field_0x820 - param_1->field_0x81c) * in_s0;
  param_1->field_0x800 =
       param_1->field_0x804 + (param_1->field_0x808 - param_1->field_0x804) * in_s0;
  return;
}
