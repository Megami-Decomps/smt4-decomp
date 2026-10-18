/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8aa4` (_code @ 0x3a8aa4, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003a8aa4_arg0 fn_003a8aa4_arg0;
struct fn_003a8aa4_arg0 {
    unsigned char pad_0x0[0x14];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x57f];
    unsigned char field_0x594; /* +0x594 */
    unsigned char pad_0x595[0xf];
    unsigned char field_0x5a4; /* +0x5a4 */
    unsigned char pad_0x5a5[0xc27];
    undefined4 field_0x11cc; /* +0x11cc */
    undefined4 field_0x11d0; /* +0x11d0 */
    undefined4 field_0x11d4; /* +0x11d4 */
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined1 field_0x11dc; /* +0x11dc */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_003a9660. */
/* Supplied declaration required: FUN_003a9868. */


void FUN_003a8aa4(fn_003a8aa4_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (0 < *(int *)&param_1->field_0x14) {
    FUN_002bef14();
    if (param_1->field_0x5a4 != '\0') {
      *(unsigned int *)&param_1->field_0x594 = 0x97;
      FUN_003a9868(param_1);
    }
    else {
      *(unsigned int *)&param_1->field_0x594 = 0x1f;
      FUN_003a9660(param_1);
    }
    FUN_002c1b64(DAT_0044ea00);
    FUN_002c1abc(DAT_0044ea00);
    return;
  }
  return;
}
