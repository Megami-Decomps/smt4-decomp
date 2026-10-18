/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a07cc` (_code @ 0x1a07cc, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001a07cc_arg0 fn_001a07cc_arg0;
struct fn_001a07cc_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x9c];
    int field_0xbc; /* +0xbc */
};

typedef int romwright_code();
extern unsigned char DAT_00406038; /* 0x406038 */
extern fn_001a07cc_arg0 *DAT_0044deb8; /* 0x44deb8 */


unsigned int FUN_001a07cc(fn_001a07cc_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_1->field_0x18;
  temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0xbc + temp_v3 * 4 + 2) * 8;
  DAT_0044deb8 = param_1;
  temp_v1 = (**(romwright_code **)(&DAT_00406038 + temp_v0))();
  if (temp_v1 == 0) {
    temp_v2 = 2;
  }
  else {
    param_1->field_0x1c = param_1->field_0x1c - *(int *)(temp_v0 + 0x40603c);
    if (param_1->field_0x18 == temp_v3) {
      param_1->field_0x18 = param_1->field_0x18 + 1;
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
