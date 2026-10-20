/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8208` (_code @ 0x2f8208, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002f8208_arg0 fn_002f8208_arg0;
struct fn_002f8208_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x27];
    char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0xf];
    void *field_0x3c; /* +0x3c */
};

typedef int romwright_code(...);

unsigned int FUN_002f8208(fn_002f8208_arg0 *param_1,int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  param_1->field_0x2c = (char)param_2;
  puVar1 = (unsigned int *)param_1->field_0x3c;
  if ((puVar1 != (unsigned int *)0x0) &&
     (temp_v0 = (**(romwright_code **)*puVar1)(puVar1,param_2 == 0), temp_v0 != 0)) {
    param_1->field_0x4 = 0;
    return 1;
  }
  return 0;
}

} /* extern "C" */
