/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bacec` (_code @ 0x2bacec, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002bacec_arg0 fn_002bacec_arg0;
struct fn_002bacec_arg0 {
    unsigned char pad_0x0[0x310];
    undefined4 field_0x310; /* +0x310 */
    undefined4 field_0x314; /* +0x314 */
    int field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x34];
    undefined4 field_0x350; /* +0x350 */
};

extern int FUN_0013188c(); /* 0x13188c */
extern signed char DAT_0044e3b0; /* 0x44e3b0 */

/* Supplied declaration required: FUN_002b4a50. */
/* Supplied declaration required: FUN_002b4d6c. */


int FUN_002bacec(fn_002bacec_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  param_1->field_0x310 = 0;
  param_1->field_0x314 = 0;
  param_1->field_0x350 = 0;
  if (param_1->field_0x318 != 0) {
    FUN_002b4d6c(param_1->field_0x318,FUN_0013188c);
    param_1->field_0x318 = 0;
  }
  FUN_002b4a50(param_1);
  return (int)DAT_0044e3b0;
}
