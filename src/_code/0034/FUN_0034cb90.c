/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cb90` (_code @ 0x34cb90, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034cb90_arg0 fn_0034cb90_arg0;
struct fn_0034cb90_arg0 {
    unsigned char pad_0x0[0x14];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    void *field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x8];
    int field_0x2c; /* +0x2c */
};


unsigned int FUN_0034cb90(fn_0034cb90_arg0 *param_1)

{
  unsigned int temp_v0;
  void *pvVar2;
  
  if (param_1->field_0x2c == 5) {
    pvVar2 = param_1->field_0x14;
    temp_v0 = 1;
    if ((pvVar2 != (void *)0x0) && (*(float *)((int)pvVar2 + 0x38) < *(float *)((int)pvVar2 + 0x48))
       ) {
      temp_v0 = 0;
    }
    pvVar2 = param_1->field_0x20;
    if (pvVar2 == (void *)0x0) {
      return temp_v0;
    }
    if (*(float *)((int)pvVar2 + 0x48) <= *(float *)((int)pvVar2 + 0x38)) {
      return temp_v0;
    }
  }
  return 0;
}
