/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f764` (_code @ 0x19f764, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e1fc(unsigned int);
int FUN_001ac64c(unsigned int, unsigned int, unsigned int, unsigned int);

typedef struct fn_0019f764_arg0 fn_0019f764_arg0;
struct fn_0019f764_arg0 {
    unsigned char pad_0x0[0x11f0];
    uint field_0x11f0; /* +0x11f0 */
    byte field_0x11f4; /* +0x11f4 */
    byte field_0x11f5; /* +0x11f5 */
};

/* Supplied declaration required: FUN_0019e1fc. */
/* Supplied declaration required: FUN_001ac64c. */


void FUN_0019f764(fn_0019f764_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = (unsigned int)param_1->field_0x11f4;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x11f0;
  }
  if ((!temp_v1 || temp_v0 != param_2) && (param_1->field_0x11f0 = param_2, param_2 != 0)) {
    FUN_001ac64c(*(unsigned int *)(param_2 + 0x14),*(unsigned int *)(param_2 + 0x18),
                 *(unsigned int *)(param_2 + 0x34),*(unsigned int *)(param_2 + 0x30));
    param_1->field_0x11f5 = 3;
  }
  param_1->field_0x11f4 = 0;
  if (param_1->field_0x11f5 != param_3) {
    FUN_0019e1fc(param_3);
    param_1->field_0x11f5 = (unsigned char)param_3;
  }
  return;
}

} /* extern "C" */
