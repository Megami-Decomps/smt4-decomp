/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120f86` (_code @ 0x120f86, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00310284(void);

typedef struct fn_00120f86_arg0 fn_00120f86_arg0;
struct fn_00120f86_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    undefined1 field_0x9; /* +0x9 */
};

extern unsigned char FUN_00306d18(unsigned int, void *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00310284. */


void FUN_00120f86(fn_00120f86_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_00310284();
  *(unsigned int *)((int)param_1->field_0x4 + 8) = param_2;
  if (param_1->field_0x8 != 0) {
    temp_v0 = FUN_00306d18(param_2,param_1->field_0x4,0xf,0);
    param_1->field_0x9 = temp_v0;
  }
  return;
}

} /* extern "C" */
