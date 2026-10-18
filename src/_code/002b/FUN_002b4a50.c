/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4a50` (_code @ 0x2b4a50, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002b4a50_arg0 fn_002b4a50_arg0;
struct fn_002b4a50_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x324];
    undefined4 field_0x35c; /* +0x35c */
    undefined4 field_0x360; /* +0x360 */
};

typedef int romwright_code();

/* WARNING: Control flow encountered bad instruction data */

void FUN_002b4a50(fn_002b4a50_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1->field_0x35c = 0;
  param_1->field_0x34 = (int)param_1;
  (*(romwright_code *)0x2b4c00)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
