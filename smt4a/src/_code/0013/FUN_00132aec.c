/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132aec` (_code @ 0x132aec, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00132aec_arg0 fn_00132aec_arg0;
struct fn_00132aec_arg0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

extern unsigned int *FUN_00310186(fn_00132aec_arg0 *, unsigned int);


void FUN_00132aec(fn_00132aec_arg0 *param_1,int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  void *pvVar3;
  
  pvVar3 = param_1->field_0x10;
  puVar1 = (unsigned int *)FUN_00310186(param_1,0);
  temp_v0 = *param_2;
  *puVar1 = (unsigned int)pvVar3;
  puVar1[2] = temp_v0;
  puVar1[1] = *(unsigned int *)((int)pvVar3 + 4);
  **(unsigned int **)((int)pvVar3 + 4) = (unsigned int)puVar1;
  *(unsigned int **)((int)pvVar3 + 4) = puVar1;
  param_1->field_0x14 = param_1->field_0x14 + 1;
  return;
}
