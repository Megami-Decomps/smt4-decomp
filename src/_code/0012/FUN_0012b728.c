/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b728` (_code @ 0x12b728, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012b728_arg1 fn_0012b728_arg1;
struct fn_0012b728_arg1 {
    unsigned char pad_0x0[0xc8];
    undefined4 field_0xc8; /* +0xc8 */
    unsigned char pad_0xcc[0x14];
    int field_0xe0; /* +0xe0 */
    int field_0xe4; /* +0xe4 */
};

/* Supplied declaration required: FUN_0013d980. */
/* Supplied declaration required: FUN_00149d98. */


void FUN_0012b728(unsigned int param_1,fn_0012b728_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int *puVar6;
  
  temp_v1 = 0;
  temp_v2 = param_2->field_0xe0;
  if (0 < temp_v2) {
    puVar6 = (unsigned int *)0x0;
    do {
      puVar1 = puVar6;
      if (param_2->field_0xe4 != 0) {
        puVar1 = (unsigned int *)((int)&param_2->field_0xe4 + param_2->field_0xe4);
      }
      temp_v0 = puVar1[temp_v1];
      puVar4 = puVar6;
      if (temp_v0 != 0) {
        puVar4 = (unsigned int *)(temp_v0 + (int)(puVar1 + temp_v1));
      }
      puVar1 = puVar6;
      if (puVar4[0xc] != 0) {
        puVar1 = (unsigned int *)((int)puVar4 + puVar4[0xc] + 0x30);
      }
      FUN_0013d980(param_1,*puVar1);
      FUN_00149d98(param_1,puVar4);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return;
}
