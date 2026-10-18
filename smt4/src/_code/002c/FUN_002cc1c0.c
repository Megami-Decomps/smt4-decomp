/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc1c0` (_code @ 0x2cc1c0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002cc1c0_arg0 fn_002cc1c0_arg0;
struct fn_002cc1c0_arg0 {
    unsigned char pad_0x0[0x68];
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    byte field_0x80; /* +0x80 */
};

extern signed char DAT_004e3134; /* 0x4e3134 */

/* Supplied declaration required: nw_snd_Sound3DActor_SetPosition. */


void FUN_002cc1c0(fn_002cc1c0_arg0 *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_004e3134 != '\0') && (param_1 < (fn_002cc1c0_arg0 *)0x10)) {
    temp_v0 = (int)param_1 * 0xc;
    *(unsigned int *)(temp_v0 + 0x4e2fa8) = *param_2;
    *(unsigned int *)(temp_v0 + 0x4e2fac) = param_2[1];
    *(unsigned int *)(temp_v0 + 0x4e2fb0) = param_2[2];
    nw_snd_Sound3DActor_SetPosition((int)param_1 * 0x84 + 0x4e2728,temp_v0 + 0x4e2fa8);
    return;
  }
  return;
}
