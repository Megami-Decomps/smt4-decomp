/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224880` (_code @ 0x224880, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00224880_arg0 fn_00224880_arg0;
struct fn_00224880_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xa0];
    int field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0xc];
    unsigned char field_0xcc; /* +0xcc */
    unsigned char pad_0xcd[0x3];
    int field_0xd0; /* +0xd0 */
};

typedef int romwright_code(...);

unsigned int FUN_00224880(fn_00224880_arg0 *param_1)

{
  int temp_v0;
  
  while( 1 ) {
    temp_v0 = (**(romwright_code **)((unsigned int)*(unsigned short *)(param_1->field_0xbc + param_1->field_0x18 * 4) * 4 +
                        0x588e60))(param_1);
    if (temp_v0 == 0) {
      param_1->field_0xd0 = 0;
      return 2;
    }
    if (temp_v0 == 2) break;
    if (temp_v0 == 1) {
      param_1->field_0xd0 = 0;
    }
  }
  *(int *)&param_1->field_0xcc = *(int *)&param_1->field_0xcc + 1;
  param_1->field_0xd0 = param_1->field_0xd0 + 1;
  return 1;
}

} /* extern "C" */
