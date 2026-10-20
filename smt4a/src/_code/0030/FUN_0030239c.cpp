/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030239c` (_code @ 0x30239c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ece58(...);

typedef struct fn_0030239c_arg0 fn_0030239c_arg0;
struct fn_0030239c_arg0 {
    unsigned char pad_0x0[0x3c];
    ushort field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0xda];
    undefined4 field_0x118; /* +0x118 */
    undefined4 field_0x11c; /* +0x11c */
    undefined2 field_0x120; /* +0x120 */
    undefined2 field_0x122; /* +0x122 */
    unsigned char pad_0x124[0x4];
    undefined4 field_0x128; /* +0x128 */
    undefined4 field_0x12c; /* +0x12c */
    undefined1 field_0x130; /* +0x130 */
    undefined1 field_0x131; /* +0x131 */
    unsigned char pad_0x132[0x2];
    undefined4 field_0x134; /* +0x134 */
    undefined1 field_0x138; /* +0x138 */
    unsigned char pad_0x139[0x7];
    undefined4 field_0x140; /* +0x140 */
    undefined4 field_0x144; /* +0x144 */
    undefined4 field_0x148; /* +0x148 */
};

extern unsigned int FUN_002e75fa(void);
/* Supplied declaration required: FUN_002ece58. */


void FUN_0030239c(fn_0030239c_arg0 *param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4,
                 int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1->field_0x3c = param_1->field_0x3c | (param_3 & 0xf) | (param_4 & 0xfff0);
  param_1->field_0x120 = 0;
  param_1->field_0x122 = 0;
  param_1->field_0x140 = 0;
  param_1->field_0x144 = 0;
  param_1->field_0x128 = 0;
  param_1->field_0x12c = 0;
  param_1->field_0x11c = param_2;
  param_1->field_0x148 = param_6;
  if (param_5 != 0) {
    temp_v0 = FUN_002e75fa();
    FUN_002ece58(param_1,temp_v0);
  }
  param_1->field_0x118 = param_7;
  param_1->field_0x130 = 0;
  param_1->field_0x134 = 0;
  param_1->field_0x131 = 0;
  param_1->field_0x138 = 0;
  return;
}

} /* extern "C" */
