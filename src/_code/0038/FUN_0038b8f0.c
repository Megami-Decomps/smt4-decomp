/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b8f0` (_code @ 0x38b8f0, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int FUN_002a308c(int);
extern unsigned int *FUN_002bad80(unsigned char *);
extern unsigned int *FUN_002bb09c(unsigned int *);
/* Supplied declaration required: FUN_0038bd00. */


void FUN_0038b8f0(unsigned int *param_1,int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned char temp_v7 [12];
  
  temp_v6 = temp_v6 & 0xffffff00;
  puVar1 = (unsigned int *)FUN_002bb09c(&uStack_34);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)FUN_002bad80(temp_v7);
  temp_v1 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v1;
  temp_v1 = param_3[1];
  temp_v2 = param_3[2];
  temp_v3 = param_3[3];
  temp_v4 = param_3[4];
  temp_v5 = param_3[5];
  *(unsigned int *)(param_2 + 8) = *param_3;
  *(unsigned int *)(param_2 + 0xc) = temp_v1;
  *(unsigned int *)(param_2 + 0x10) = temp_v2;
  *(unsigned int *)(param_2 + 0x14) = temp_v3;
  *(unsigned int *)(param_2 + 0x18) = temp_v4;
  *(unsigned int *)(param_2 + 0x1c) = temp_v5;
  temp_v0 = FUN_002a308c(param_2 + 8);
  if (temp_v0 == 0) {
    *param_1 = temp_v6;
    param_1[1] = uStack_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    param_1[4] = uStack_28;
  }
  else {
    FUN_0038bd00(param_1,param_2,*(unsigned short *)param_3);
  }
  return;
}
