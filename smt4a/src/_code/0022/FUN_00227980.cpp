/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227980` (_code @ 0x227980, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00227980_arg0 fn_00227980_arg0;
struct fn_00227980_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x9c];
    int field_0xbc; /* +0xbc */
};

typedef int romwright_code(...);
extern unsigned char DAT_00533f90; /* 0x533f90 */
extern unsigned char g_scrContext; /* 0x588e3c */


unsigned int FUN_00227980(fn_00227980_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_1->field_0x18;
  temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0xbc + temp_v3 * 4 + 2) * 8;
  (*(fn_00227980_arg0 * *)((unsigned char *)&g_scrContext + 0x20)) = param_1;
  temp_v1 = (**(romwright_code **)(&DAT_00533f90 + temp_v0))();
  if (temp_v1 == 0) {
    temp_v2 = 2;
  }
  else {
    param_1->field_0x1c = param_1->field_0x1c - *(int *)(temp_v0 + 0x533f94);
    if (param_1->field_0x18 == temp_v3) {
      param_1->field_0x18 = param_1->field_0x18 + 1;
    }
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
