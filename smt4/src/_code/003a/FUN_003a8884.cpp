/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8884` (_code @ 0x3a8884, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_003a9440(...);
int FUN_003a9648(...);

typedef struct fn_003a8884_arg0 fn_003a8884_arg0;
struct fn_003a8884_arg0 {
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

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_003a9440. */
/* Supplied declaration required: FUN_003a9648. */


void FUN_003a8884(fn_003a8884_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (0 < *(int *)&param_1->field_0x14) {
    FUN_002bed3c();
    if (param_1->field_0x5a4 != '\0') {
      *(unsigned int *)&param_1->field_0x594 = 0x97;
      FUN_003a9648(param_1);
    }
    else {
      *(unsigned int *)&param_1->field_0x594 = 0x1f;
      FUN_003a9440(param_1);
    }
    FUN_002c198c(DAT_0044ea00);
    FUN_002c18e4(DAT_0044ea00);
    return;
  }
  return;
}

} /* extern "C" */
