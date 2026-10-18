/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111168` (_code @ 0x111168, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_4_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7908. */
extern int *FUN_002ed2a2(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002fc056. */
/* Supplied declaration required: FUN_002fc088. */


void FUN_00111168(int *param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int *temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char uStack00000000;
  unsigned char temp_v3 [12];
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [4];
  int *temp_v7;
  int iStack_20;
  unsigned int temp_v8;
  int *piStack_18;
  
  temp_v7 = param_1;
  iStack_20 = param_2;
  temp_v8 = param_3;
  piStack_18 = param_4;
  FUN_002e6e34(temp_v3,param_2 + 0x105c);
  if ((*(char *)(param_2 + 0xc) == '\0') || (*(char *)(param_2 + 0x108f) != '\0')) {
    if (*(int *)(param_2 + 0x1050) < 0) {
      temp_v2 = *(int *)(param_2 + 0x1058);
      temp_v1 = *(int *)(param_2 + 0x1054);
      *temp_v7 = *(int *)(param_2 + 0x1050);
      temp_v7[1] = temp_v1;
      temp_v7[2] = temp_v2;
      piVar1 = temp_v7 + 3;
      FUN_002e6e5c(temp_v3,piVar1);
      return;
    }
    temp_v5 = *(unsigned int *)(*(int *)(param_2 + 0x109c) + 0x18);
    piVar1 = (int *)FUN_002ed2a2((unsigned int *)&temp_v5,&uStack00000000);
    temp_v1 = *piVar1;
    *param_4 = temp_v1;
    if (temp_v1 != 0) {
      FUN_002fc056(*(unsigned int *)(param_2 + 0x109c),temp_v8);
      FUN_002fc088(*(unsigned int *)(param_2 + 0x109c),*param_4);
      puVar2 = temp_v6;
      temp_v6[0] = 0x10001;
    }
    else {
      puVar2 = (unsigned int *)&temp_v4;
      temp_v4 = 0x10001;
    }
  }
  else {
    *param_4 = 0;
    puVar2 = (unsigned int *)&temp_v4;
    temp_v4 = 0x10001;
  }
  FUN_002e7908(temp_v7,puVar2);
  piVar1 = temp_v0;
  FUN_002e6e5c(temp_v3,piVar1);
  return;
}
