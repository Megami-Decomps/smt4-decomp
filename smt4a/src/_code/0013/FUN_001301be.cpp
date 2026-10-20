/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001301be` (_code @ 0x1301be, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00309fcc(unsigned int *, unsigned int, unsigned int);

typedef struct fn_001301be_arg1 fn_001301be_arg1;
struct fn_001301be_arg1 {
    unsigned char pad_0x0[0x10];
    void *field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x1];
    byte field_0x19; /* +0x19 */
};

extern unsigned char *FUN_00301df0(unsigned int *);
/* Supplied declaration required: FUN_00309fcc. */


unsigned int * FUN_001301be(unsigned int *param_1,fn_001301be_arg1 *param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = param_2->field_0x14;
  *(unsigned char *)(param_1 + 6) = param_3;
  *(unsigned char *)((int)param_1 + 0x19) = param_2->field_0x19;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar1 = (unsigned char *)FUN_00301df0(param_1);
  param_1[4] = (unsigned int)puVar1;
  *puVar1 = 0;
  puVar5 = param_1;
  FUN_00309fcc(param_1,*(unsigned int *)((int)param_2->field_0x10 + 4),param_1[4]);
  *(unsigned int **)(param_1[4] + 4) = puVar5;
  temp_v1 = param_1[4];
  if (puVar5 != (unsigned int *)0x0) {
    do {
      puVar2 = puVar5;
      puVar5 = (unsigned int *)puVar2[2];
    } while (puVar5 != (unsigned int *)0x0);
    *(unsigned int **)(temp_v1 + 8) = puVar2;
    temp_v1 = *(int *)(param_1[4] + 4);
    do {
      temp_v0 = temp_v1;
      temp_v1 = *(int *)(temp_v0 + 0xc);
    } while (temp_v1 != 0);
    *(int *)(param_1[4] + 0xc) = temp_v0;
  }
  else {
    *(int *)(temp_v1 + 8) = temp_v1;
    *(unsigned int *)(param_1[4] + 0xc) = param_1[4];
  }
  return param_1;
}

} /* extern "C" */
