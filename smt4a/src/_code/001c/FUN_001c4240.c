/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c4240` (_code @ 0x1c4240, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001c4240_arg0 fn_001c4240_arg0;
struct fn_001c4240_arg0 {
    unsigned char pad_0x0[0x8];
    uint field_0x8; /* +0x8 */
    byte field_0xc; /* +0xc */
    byte field_0xd; /* +0xd */
    unsigned char pad_0xe[0x2];
    uint field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x1];
    byte field_0x1d; /* +0x1d */
};

typedef int romwright_code();
extern unsigned int DAT_00646618; /* 0x646618 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_001c4240(fn_001c4240_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned int temp_v0;
  romwright_code *pcVar2;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  
  temp_v0 = param_1->field_0x10;
  if (param_1->field_0x8 <= temp_v0) {
    pcVar2 = (romwright_code *)(&DAT_00646618)[param_1->field_0xd];
    if (pcVar2 != (romwright_code *)0x0) {
      if (param_1->field_0xd != 4) {
        (*pcVar2)();
      }
      else if (param_1->field_0x1d != 0) {
        temp_v1 = param_1->field_0x14;
        (*pcVar2)();
        param_1->field_0x18 = temp_v1;
      }
    }
    temp_v0 = (unsigned int)param_1->field_0xc;
    VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  return temp_v0;
}
