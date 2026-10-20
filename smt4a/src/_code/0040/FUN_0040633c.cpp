/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040633c` (_code @ 0x406348, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(void);

typedef struct fn_00406348_arg0 fn_00406348_arg0;
struct fn_00406348_arg0 {
    unsigned char pad_0x0[0x6a9];
    undefined1 field_0x6a9; /* +0x6a9 */
    unsigned char pad_0x6aa[0x6];
    undefined4 field_0x6b0; /* +0x6b0 */
    undefined4 field_0x6b4; /* +0x6b4 */
    undefined4 field_0x6b8; /* +0x6b8 */
    undefined4 field_0x6bc; /* +0x6bc */
    undefined4 field_0x6c0; /* +0x6c0 */
    undefined4 field_0x6c4; /* +0x6c4 */
    undefined4 field_0x6c8; /* +0x6c8 */
    undefined4 field_0x6cc; /* +0x6cc */
    unsigned char pad_0x6d0[0x30];
    undefined1 field_0x700; /* +0x700 */
};

/* Supplied declaration required: FUN_002f5020. */


void FUN_0040633c(fn_00406348_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f5020();
  param_1->field_0x6b0 = 0;
  param_1->field_0x6b4 = 0;
  param_1->field_0x6b8 = 0;
  param_1->field_0x6bc = 0x3f800000;
  param_1->field_0x6c0 = 0;
  param_1->field_0x6c4 = 0;
  param_1->field_0x6c8 = 0;
  param_1->field_0x6cc = 0x3f800000;
  param_1->field_0x700 = 0;
  param_1->field_0x6a9 = 0;
  return;
}

} /* extern "C" */
