/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002916b8` (_code @ 0x2916b8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002916b8_arg0 fn_002916b8_arg0;
struct fn_002916b8_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xd];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x13];
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
};

/* Supplied declaration required: FUN_00291950. */


void FUN_002916b8(fn_002916b8_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == (fn_002916b8_arg0 *)0x0) {
    return;
  }
  if (*(unsigned int **)&param_1[0x11].field_0x10 != (unsigned int *)0x0) {
    **(unsigned int **)&param_1[0x11].field_0x10 = 0;
  }
  FUN_00291950();
  return;
}
