/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285834` (_code @ 0x285834, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00285834_arg0 fn_00285834_arg0;
struct fn_00285834_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x21];
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
};

/* Supplied declaration required: FUN_0021a610. */


void FUN_00285834(fn_00285834_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != (fn_00285834_arg0 *)0x0) {
    FUN_0021a610(param_1 + -1);
    return;
  }
  return;
}
