/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cbec` (_code @ 0x34cbec, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034cbec_arg0 fn_0034cbec_arg0;
struct fn_0034cbec_arg0 {
    unsigned char pad_0x0[0xc];
    void *field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    void *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x10];
    int field_0x2c; /* +0x2c */
};


unsigned int FUN_0034cbec(fn_0034cbec_arg0 *param_1)

{
  unsigned int temp_v0;
  void *pvVar2;
  
  if (param_1->field_0x2c == 3) {
    pvVar2 = param_1->field_0xc;
    temp_v0 = 1;
    if ((pvVar2 != (void *)0x0) && (*(float *)((int)pvVar2 + 0x38) < *(float *)((int)pvVar2 + 0x48))
       ) {
      temp_v0 = 0;
    }
    pvVar2 = param_1->field_0x18;
    if (pvVar2 == (void *)0x0) {
      return temp_v0;
    }
    if (*(float *)((int)pvVar2 + 0x48) <= *(float *)((int)pvVar2 + 0x38)) {
      return temp_v0;
    }
  }
  return 0;
}
