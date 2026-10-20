/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b0a4` (_code @ 0x35b0a4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd0(int, int);

typedef struct fn_0035b0a4_arg0 fn_0035b0a4_arg0;
struct fn_0035b0a4_arg0 {
    unsigned char pad_0x0[0x3c];
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x2];
    undefined1 field_0x3f; /* +0x3f */
    undefined1 field_0x40; /* +0x40 */
    undefined1 field_0x41; /* +0x41 */
};

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002e6dd0. */


void FUN_0035b0a4(fn_0035b0a4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < (fn_0035b0a4_arg0 *)0x20) {
    FUN_002e6dd0(DAT_0057f69c + (int)param_1 * 100 + 0x2720c,100);
    return;
  }
  return;
}

} /* extern "C" */
