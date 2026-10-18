/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032cc8c` (_code @ 0x32cc8c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0032cc8c_arg0 fn_0032cc8c_arg0;
struct fn_0032cc8c_arg0 {
    unsigned char pad_0x0[0x6c];
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    byte field_0x84; /* +0x84 */
};

extern signed char DAT_0063f4c4; /* 0x63f4c4 */

/* Supplied declaration required: FUN_0015e198. */


void FUN_0032cc8c(fn_0032cc8c_arg0 *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0063f4c4 != '\0') && (param_1 < (fn_0032cc8c_arg0 *)0x10)) {
    temp_v0 = (int)param_1 * 0xc;
    *(unsigned int *)(temp_v0 + 0x63f338) = *param_2;
    *(unsigned int *)(temp_v0 + 0x63f33c) = param_2[1];
    *(unsigned int *)(temp_v0 + 0x63f340) = param_2[2];
    FUN_0015e198((int)param_1 * 0x88 + 0x63ea78,temp_v0 + 0x63f338);
    return;
  }
  return;
}
