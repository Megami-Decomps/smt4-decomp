/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001212a0` (_code @ 0x1212a0, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031008a(void);

typedef struct fn_001212a0_arg0 fn_001212a0_arg0;
struct fn_001212a0_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x6];
    void *field_0xc; /* +0xc */
};

extern unsigned char FUN_00306d18(unsigned int, void *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0031008a. */


void FUN_001212a0(fn_001212a0_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_0031008a();
  *(unsigned int *)((int)param_1->field_0xc + 0xb0) = param_2;
  if (param_1->field_0x4 != 0) {
    temp_v0 = FUN_00306d18(param_2,param_1->field_0xc,1,0);
    param_1->field_0x5 = temp_v0;
  }
  return;
}

} /* extern "C" */
