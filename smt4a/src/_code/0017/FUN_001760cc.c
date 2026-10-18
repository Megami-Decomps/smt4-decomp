/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001760cc` (_code @ 0x1760cc, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001760cc_arg0 fn_001760cc_arg0;
struct fn_001760cc_arg0 {
    unsigned char pad_0x0[0x310];
    undefined4 field_0x310; /* +0x310 */
    undefined4 field_0x314; /* +0x314 */
    int field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x34];
    undefined4 field_0x350; /* +0x350 */
};

extern int FUN_0019241c(); /* 0x19241c */
extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_00191f68. */
/* Supplied declaration required: FUN_002e56ec. */


void FUN_001760cc(fn_001760cc_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  param_1->field_0x310 = 0;
  param_1->field_0x314 = 0;
  param_1->field_0x350 = 0;
  if (param_1->field_0x318 != 0) {
    FUN_002e56ec(param_1->field_0x318,FUN_0019241c);
    param_1->field_0x318 = 0;
  }
  FUN_00191f68(param_1);
  *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
  return;
}
