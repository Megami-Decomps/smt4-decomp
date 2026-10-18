/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003038fc` (_code @ 0x3038fc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003038fc_arg0 fn_003038fc_arg0;
struct fn_003038fc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

extern unsigned char DAT_0055b10c; /* 0x55b10c */

extern unsigned int *FUN_002e9f80(fn_003038fc_arg0 *);
/* Supplied declaration required: FUN_0030fe20. */


unsigned int * FUN_003038fc(fn_003038fc_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002e9f80(param_1);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[7] = param_3;
  puVar1[6] = 0;
  *puVar1 = (unsigned int)&DAT_0055b10c;
  FUN_0030fe20(puVar1,param_2);
  return puVar1;
}
