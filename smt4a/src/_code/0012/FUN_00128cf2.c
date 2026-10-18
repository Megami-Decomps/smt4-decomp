/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128cf2` (_code @ 0x128cf2, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_3_stack;

extern int FUN_002eba9c(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002f8264. */
extern int *FUN_0030d466(int, unsigned int);
/* Supplied declaration required: FUN_0030d48e. */
extern int FUN_0030d4b0(int *, unsigned int *);


void FUN_00128cf2(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [56];
  int iStack_20;
  unsigned int temp_v9;
  unsigned int *puStack_18;
  
  temp_v3 = *(int *)(param_1 + 0x14);
  iStack_20 = param_1;
  temp_v9 = param_2;
  puStack_18 = param_3;
  while( 1 ) {
    temp_v7[0] = **(unsigned int **)(param_1 + 0x14);
    temp_v4 = temp_v3;
    temp_v0 = FUN_0030d4b0(&temp_v4,temp_v7);
    if (temp_v0 == 1) break;
    temp_v5 = *(unsigned int *)(*(int *)(temp_v3 + 4) + 0x30);
    temp_v6 = *(unsigned int *)(*(int *)(temp_v3 + 4) + 0x34);
    temp_v0 = FUN_002eba9c((unsigned int *)&temp_v5,param_3);
    if (temp_v0 == 0) break;
    temp_v3 = *(int *)(temp_v3 + 4);
  }
  temp_v5 = *param_3;
  temp_v6 = param_3[1];
  temp_v0 = FUN_0030d48e(temp_v8,temp_v9);
  *(unsigned int *)(temp_v0 + 0x2c) = temp_v6;
  *(unsigned int *)(temp_v0 + 0x28) = temp_v5;
  piVar2 = (int *)FUN_0030d466(param_1 + 4,0);
  temp_v1 = FUN_0030d48e(piVar2 + 2,temp_v0);
  temp_v2 = *(unsigned int *)(temp_v0 + 0x28);
  *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v0 + 0x2c);
  *(unsigned int *)(temp_v1 + 0x28) = temp_v2;
  *piVar2 = temp_v3;
  piVar2[1] = *(int *)(temp_v3 + 4);
  **(int **)(temp_v3 + 4) = (int)piVar2;
  *(int **)(temp_v3 + 4) = piVar2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  FUN_002f8264(temp_v8);
  return;
}
