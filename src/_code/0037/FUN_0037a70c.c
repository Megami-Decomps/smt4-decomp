/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a70c` (_code @ 0x37a70c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037a70c_arg0 fn_0037a70c_arg0;
struct fn_0037a70c_arg0 {
    unsigned char pad_0x0[0x34];
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x18];
    byte field_0x50; /* +0x50 */
    byte field_0x51; /* +0x51 */
};

/* Supplied declaration required: FUN_002b93f0. */


void FUN_0037a70c(fn_0037a70c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  void *pvVar3;
  unsigned char temp_v2;
  
  temp_v2 = param_1->field_0x51 != 0;
  temp_v0 = 0;
  if (temp_v2) {
    temp_v0 = param_1->field_0x50;
  }
  if (temp_v2 && temp_v0 != 0) {
    pvVar3 = param_1->field_0x34;
    temp_v1 = *(unsigned int *)((int)pvVar3 + 4);
    if ((temp_v1 & 0xfffffffe) != 0) {
      FUN_002b93f0(temp_v1 & 0xfffffffe);
      *(unsigned int *)((int)pvVar3 + 4) = 0;
    }
    param_1->field_0x50 = 0;
  }
  return;
}
