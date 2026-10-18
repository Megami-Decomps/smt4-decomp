/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef8f8` (_code @ 0x2ef8f8, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_0010acb8(unsigned int);
extern unsigned int FUN_002eacbc(int);
/* Supplied declaration required: FUN_002eb188. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eed8c(int);
extern unsigned int *FUN_002eee88(int, int);
extern int FUN_002ef01c(unsigned int);
/* Supplied declaration required: FUN_002ef584. */
/* Supplied declaration required: FUN_0043222c. */


void FUN_002ef8f8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned short *puVar3;
  unsigned int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_18;
  
  temp_v4 = param_2;
  temp_v5 = param_3;
  uStack_18 = param_4;
  if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 3) {
    temp_v4 = param_1 + 0x9c;
    for (temp_v3 = 0; temp_v3 < (int)(*(unsigned short *)(param_1 + 0x104) + 1); temp_v3 = temp_v3 + 1) {
      puVar1 = (unsigned int *)FUN_002eee88(temp_v4,temp_v3);
      temp_v0 = FUN_0010acb8(*puVar1);
      if (temp_v0 != 0) {
        *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
        FUN_002ef584(*(int *)(param_1 + 4) + 0x14,param_2);
        return;
      }
    }
  }
  puVar3 = (unsigned short *)(param_2 + 0x120);
  temp_v2 = *puVar3 + 1;
  *puVar3 = temp_v2;
  if (*(unsigned int *)(param_1 + 0x318) < (unsigned int)temp_v2) {
    *(unsigned int *)(param_1 + 0x318) = (unsigned int)temp_v2;
  }
  if (*puVar3 >= 2) {
    *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
    temp_v3 = FUN_002eed8c(param_2);
    *(int *)(param_1 + 0x314) = temp_v3 + *(int *)(param_1 + 0x314);
  }
  temp_v3 = param_1;
  FUN_0043222c(param_1,param_2);
  *(int *)(*(int *)(param_2 + 0x118) + 4) = temp_v3;
  FUN_002ef584(*(int *)(param_1 + 4) + 0x14,param_2);
  temp_v3 = FUN_002ef01c(*(unsigned int *)(param_1 + 4));
  if (*(char *)(temp_v3 + 0x70) != '\0') {
    FUN_002eb588(&temp_v4);
    *(int *)(param_1 + 0xd8) = temp_v4;
    *(unsigned int *)(param_1 + 0xdc) = temp_v5;
  }
  temp_v1 = FUN_002eacbc(param_1);
  temp_v3 = *(int *)(param_1 + 4);
  temp_v4 = param_1 + 0x220;
  FUN_002eb188(temp_v3,*(unsigned short *)(param_1 + 0x8e),temp_v1,param_2);
  if (temp_v3 != 0) {
    return;
  }
  *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + 1;
  return;
}
