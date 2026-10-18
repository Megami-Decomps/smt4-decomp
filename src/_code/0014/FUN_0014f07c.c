/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f07c` (_code @ 0x14f07c, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_00154080. */
extern int FUN_00155948(int *);
/* Supplied declaration required: FUN_00158d0c. */
extern unsigned int FUN_002c2ff0(void);


int * FUN_0014f07c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  int iStack_24;
  int temp_v10;
  unsigned int uStack_1c;
  
  piVar6 = &temp_v6;
  temp_v3 = *(int *)(param_1 + 0x228);
  puVar1 = *(unsigned int **)(param_1 + 8);
  if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x40000092) != 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  temp_v2 = puVar1[0x38];
  if (temp_v2 != 0) {
    temp_v4 = temp_v2 + (int)(puVar1 + 0x38);
  }
  else {
    temp_v4 = 0;
  }
  iStack_24 = param_1;
  temp_v10 = param_2;
  uStack_1c = param_3;
  temp_v0 = FUN_00155948(&temp_v10);
  if (temp_v0 != 0) {
    FUN_00158d0c(param_1,1);
  }
  temp_v0 = temp_v10;
  temp_v5 = *(unsigned int *)(*(int *)(temp_v3 + 8) + 0x10);
  temp_v2 = *(unsigned int *)(temp_v4 + 0x28);
  if (temp_v10 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    temp_v1 = FUN_002c2ff0();
    temp_v6 = temp_v0;
    temp_v9 = 1;
    temp_v7 = temp_v5;
    temp_v8 = param_3;
    FUN_00154080(&temp_v6,temp_v1);
    *(unsigned char *)((int)piVar6 + 0x5d) = (~temp_v2 & 2) != 0;
  }
  (**(romwright_code **)(*piVar6 + 0xc))(piVar6,temp_v3);
  return piVar6;
}
