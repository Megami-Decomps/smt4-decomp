/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cb8a0` (_code @ 0x4cb8a0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004cb8a0_arg0 fn_004cb8a0_arg0;
struct fn_004cb8a0_arg0 {
    unsigned char pad_0x0[0x48];
    int field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x64];
    undefined4 field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x10];
    undefined4 field_0xc4; /* +0xc4 */
    undefined4 field_0xc8; /* +0xc8 */
    unsigned char pad_0xcc[0x30];
    undefined4 field_0xfc; /* +0xfc */
    undefined4 field_0x100; /* +0x100 */
};

extern signed char DAT_0057aa04; /* 0x57aa04 */
extern unsigned int DAT_0057aa20; /* 0x57aa20 */
extern unsigned int DAT_0057aa24; /* 0x57aa24 */


void FUN_004cb8a0(fn_004cb8a0_arg0 *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = DAT_0057aa24;
  temp_v0 = DAT_0057aa20;
  if (DAT_0057aa04 != '\0') {
    param_1->field_0x100 = DAT_0057aa24;
    param_1->field_0xb0 = temp_v0;
    param_1->field_0xc4 = temp_v1;
    param_1->field_0x48 = 2;
    param_1->field_0xfc = 0;
    param_1->field_0xc8 = 0;
  }
  else if (param_1->field_0x48 != 2) {
    param_1->field_0x100 = DAT_0057aa24;
    param_1->field_0xb0 = temp_v0;
    param_1->field_0xc4 = temp_v1;
    param_1->field_0x48 = 2;
    param_1->field_0xfc = 0;
    return;
  }
  return;
}

} /* extern "C" */
