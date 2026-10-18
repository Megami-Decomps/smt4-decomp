/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d64cc` (_code @ 0x3d64cc, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d64cc_arg0 fn_003d64cc_arg0;
struct fn_003d64cc_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x563];
    float field_0x568; /* +0x568 */
    float field_0x56c; /* +0x56c */
    float field_0x570; /* +0x570 */
    unsigned char pad_0x574[0xc];
    float field_0x580; /* +0x580 */
    float field_0x584; /* +0x584 */
    float field_0x588; /* +0x588 */
    unsigned char pad_0x58c[0xc];
    float field_0x598; /* +0x598 */
    float field_0x59c; /* +0x59c */
    float field_0x5a0; /* +0x5a0 */
    unsigned char pad_0x5a4[0x4];
    float field_0x5a8; /* +0x5a8 */
    float field_0x5ac; /* +0x5ac */
    float field_0x5b0; /* +0x5b0 */
    float field_0x5b4; /* +0x5b4 */
    unsigned char pad_0x5b8[0xc];
    float field_0x5c4; /* +0x5c4 */
    float field_0x5c8; /* +0x5c8 */
    float field_0x5cc; /* +0x5cc */
    unsigned char pad_0x5d0[0xc];
    float field_0x5dc; /* +0x5dc */
    float field_0x5e0; /* +0x5e0 */
    float field_0x5e4; /* +0x5e4 */
    unsigned char pad_0x5e8[0x4];
    float field_0x5ec; /* +0x5ec */
    float field_0x5f0; /* +0x5f0 */
    float field_0x5f4; /* +0x5f4 */
    float field_0x5f8; /* +0x5f8 */
    unsigned char pad_0x5fc[0xc];
    float field_0x608; /* +0x608 */
    float field_0x60c; /* +0x60c */
    float field_0x610; /* +0x610 */
    unsigned char pad_0x614[0xc];
    float field_0x620; /* +0x620 */
    float field_0x624; /* +0x624 */
    float field_0x628; /* +0x628 */
    unsigned char pad_0x62c[0x4];
    float field_0x630; /* +0x630 */
};

/* Supplied declaration required: FUN_00227414. */


void FUN_003d64cc(fn_003d64cc_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  FUN_00227414(0,*(unsigned int *)&param_1[1].field_0x4,param_2);
  param_1->field_0x5a8 =
       (param_1->field_0x5ec - param_1->field_0x630) * in_s0 + param_1->field_0x630;
  param_1->field_0x580 =
       (param_1->field_0x5c4 - param_1->field_0x608) * in_s0 + param_1->field_0x608;
  param_1->field_0x584 =
       (param_1->field_0x5c8 - param_1->field_0x60c) * in_s0 + param_1->field_0x60c;
  param_1->field_0x588 =
       (param_1->field_0x5cc - param_1->field_0x610) * in_s0 + param_1->field_0x610;
  param_1->field_0x568 =
       (param_1->field_0x5ac - param_1->field_0x5f0) * in_s0 + param_1->field_0x5f0;
  param_1->field_0x56c =
       (param_1->field_0x5b0 - param_1->field_0x5f4) * in_s0 + param_1->field_0x5f4;
  param_1->field_0x570 =
       (param_1->field_0x5b4 - param_1->field_0x5f8) * in_s0 + param_1->field_0x5f8;
  param_1->field_0x598 =
       (param_1->field_0x5dc - param_1->field_0x620) * in_s0 + param_1->field_0x620;
  param_1->field_0x59c =
       (param_1->field_0x5e0 - param_1->field_0x624) * in_s0 + param_1->field_0x624;
  param_1->field_0x5a0 =
       (param_1->field_0x5e4 - param_1->field_0x628) * in_s0 + param_1->field_0x628;
  return;
}
