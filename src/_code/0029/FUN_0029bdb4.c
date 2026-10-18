/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bdb4` (_code @ 0x29bdb4, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0029bdb4_arg0 fn_0029bdb4_arg0;
struct fn_0029bdb4_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x14];
    void *field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x24];
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
};


void FUN_0029bdb4(fn_0029bdb4_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  param_1->field_0x78 = in_s0;
  if (0 < param_1->field_0x34) {
    if (param_1->field_0x4c != (void *)0x0) {
      *(float *)((int)param_1->field_0x4c + 0x40) = param_1->field_0x74 * in_s0;
    }
  }
  return;
}
