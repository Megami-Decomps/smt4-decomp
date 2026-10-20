/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdabe` (_code @ 0x2fdabe, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002fdabe_arg0 fn_002fdabe_arg0;
struct fn_002fdabe_arg0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x10];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
};

extern unsigned int *FUN_001328c2(fn_002fdabe_arg0 *, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002ede60(unsigned int *, int);


void FUN_002fdabe(fn_002fdabe_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  void *pvVar6;
  
  pvVar6 = param_1->field_0x10;
  puVar1 = (unsigned int *)FUN_001328c2(param_1,0,param_3,param_4,param_4);
  temp_v0 = FUN_002ede60(puVar1 + 2,param_2);
  temp_v3 = *(unsigned int *)(param_2 + 0x24);
  temp_v2 = *(unsigned int *)(param_2 + 0x20);
  temp_v1 = *(unsigned int *)(param_2 + 0x28);
  *(unsigned int *)(temp_v0 + 0x2c) = *(unsigned int *)(param_2 + 0x2c);
  *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x20) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x28) = temp_v1;
  *puVar1 = (unsigned int)pvVar6;
  puVar1[1] = *(unsigned int *)((int)pvVar6 + 4);
  **(unsigned int **)((int)pvVar6 + 4) = (unsigned int)puVar1;
  *(unsigned int **)((int)pvVar6 + 4) = puVar1;
  param_1->field_0x14 = param_1->field_0x14 + 1;
  return;
}

} /* extern "C" */
