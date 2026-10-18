/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bdfc` (_code @ 0x37bdfc, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037bdfc_arg0 fn_0037bdfc_arg0;
struct fn_0037bdfc_arg0 {
    unsigned char pad_0x0[0x360];
    undefined4 field_0x360; /* +0x360 */
    unsigned char pad_0x364[0x4c];
    undefined4 field_0x3b0; /* +0x3b0 */
    unsigned char pad_0x3b4[0x8];
    undefined4 field_0x3bc; /* +0x3bc */
    unsigned char pad_0x3c0[0x1c];
    uint field_0x3dc; /* +0x3dc */
};

/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_002e0798. */
extern unsigned int FUN_00388024(void);
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_0037bdfc(fn_0037bdfc_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_00224880(param_1->field_0x360);
  if (temp_v0 == 2) {
    param_1->field_0x3bc = 0;
    FUN_002e0798(0x28);
    FUN_003fd63c(0x551,1);
    param_1->field_0x3dc = param_1->field_0x3dc & 0xfffffff7;
    temp_v1 = FUN_00388024();
    param_1->field_0x3b0 = temp_v1;
    FUN_00169ddc(0x100021e);
    temp_v1 = 3;
  }
  return temp_v1;
}
