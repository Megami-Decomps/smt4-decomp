/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa01c` (_code @ 0x4fa01c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004fa01c_arg0 fn_004fa01c_arg0;
struct fn_004fa01c_arg0 {
    unsigned char pad_0x0[0x339c];
    undefined4 field_0x339c; /* +0x339c */
    unsigned char pad_0x33a0[0xe];
    undefined2 field_0x33ae; /* +0x33ae */
    undefined2 field_0x33b0; /* +0x33b0 */
    undefined2 field_0x33b2; /* +0x33b2 */
    undefined1 field_0x33b4; /* +0x33b4 */
    undefined1 field_0x33b5; /* +0x33b5 */
    undefined2 field_0x33b6; /* +0x33b6 */
    undefined2 field_0x33b8; /* +0x33b8 */
    undefined2 field_0x33ba; /* +0x33ba */
    unsigned char field_0x33bc; /* +0x33bc */
    unsigned char pad_0x33bd[0x3];
    undefined4 *field_0x33c0; /* +0x33c0 */
    undefined4 field_0x33c4; /* +0x33c4 */
    undefined4 field_0x33c8; /* +0x33c8 */
    undefined4 field_0x33cc; /* +0x33cc */
    undefined4 field_0x33d0; /* +0x33d0 */
    undefined4 field_0x33d4; /* +0x33d4 */
    undefined4 field_0x33d8; /* +0x33d8 */
    undefined4 field_0x33dc; /* +0x33dc */
    undefined4 field_0x33e0; /* +0x33e0 */
};

/* Supplied declaration required: FUN_004f7f08. */


void FUN_004fa01c(fn_004fa01c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)&param_1->field_0x33bc = 0;
  FUN_004f7f08();
  return;
}
