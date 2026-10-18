/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002af0bc` (_code @ 0x2af0bc, 0x464 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spBC; /* 0xbc: local_bc */
} param_1_stack;

extern unsigned int *FUN_002a7f04(void);
extern int FUN_002a84ec(int, int);
/* Supplied declaration required: FUN_002acbd8. */


void FUN_002af0bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  int temp_v41;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  piVar4 = *(int **)(param_1 + 0xc);
  uStack_54 = *(unsigned int *)(param_1 + 0xa8);
  temp_v41 = *(unsigned int *)(param_1 + 0x98);
  uStack_50 = *(unsigned int *)(param_1 + 0xb8);
  piVar5 = *(int **)(param_1 + 600);
  if (piVar4 != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(*piVar4 + 0x14))(piVar4);
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,param_1 + 0x148,temp_v0,&temp_v41);
  }
  else {
    temp_v0 = FUN_002acbd8();
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,param_1 + 0x148,temp_v0,&temp_v41);
  }
  temp_v1 = FUN_002a84ec(param_1 + 0x178,param_1 + 0x148);
  if (temp_v1 == 0) {
    puVar3 = (unsigned int *)FUN_002acbd8();
    temp_v0 = puVar3[1];
    temp_v4 = puVar3[2];
    temp_v6 = puVar3[3];
    temp_v9 = puVar3[4];
    temp_v11 = puVar3[5];
    temp_v13 = puVar3[6];
    temp_v15 = puVar3[7];
    *(unsigned int *)(param_1 + 0x178) = *puVar3;
    *(unsigned int *)(param_1 + 0x17c) = temp_v0;
    *(unsigned int *)(param_1 + 0x180) = temp_v4;
    *(unsigned int *)(param_1 + 0x184) = temp_v6;
    *(unsigned int *)(param_1 + 0x188) = temp_v9;
    *(unsigned int *)(param_1 + 0x18c) = temp_v11;
    *(unsigned int *)(param_1 + 400) = temp_v13;
    *(unsigned int *)(param_1 + 0x194) = temp_v15;
    temp_v0 = puVar3[8];
    temp_v4 = puVar3[9];
    temp_v6 = puVar3[10];
    *(unsigned int *)(param_1 + 0x1a4) = puVar3[0xb];
    *(unsigned int *)(param_1 + 0x198) = temp_v0;
    *(unsigned int *)(param_1 + 0x19c) = temp_v4;
    *(unsigned int *)(param_1 + 0x1a0) = temp_v6;
  }
  (**(romwright_code **)(**(int **)(param_1 + 0x260) + 0xc))
            (*(int **)(param_1 + 0x260),param_1 + 0x1a8,param_1 + 0x228);
  temp_v19 = *(float *)(param_1 + 0x1bc);
  temp_v39 = *(float *)(param_1 + 0x1d0);
  temp_v2 = *(float *)(param_1 + 0x1d8);
  temp_v3 = *(float *)(param_1 + 0x1dc);
  temp_v5 = *(float *)(param_1 + 0x1e0);
  temp_v7 = *(float *)(param_1 + 0x1e4);
  temp_v16 = *(float *)(param_1 + 0x1b8);
  temp_v22 = *(float *)(param_1 + 0x1d4);
  temp_v17 = *(float *)(param_1 + 0x1c0);
  temp_v20 = *(float *)(param_1 + 0x1c4);
  temp_v23 = *(float *)(param_1 + 0x1c8);
  temp_v21 = *(float *)(param_1 + 0x1cc);
  temp_v18 = *(float *)(param_1 + 0x1b4);
  temp_v38 = temp_v16 * temp_v39;
  temp_v10 = *(float *)(param_1 + 0x1a8);
  temp_v12 = *(float *)(param_1 + 0x1ac);
  temp_v14 = *(float *)(param_1 + 0x1b0);
  temp_v25 = temp_v19 * temp_v22;
  temp_v29 = temp_v19 * temp_v23;
  temp_v24 = temp_v20 * temp_v39;
  temp_v31 = temp_v17 * temp_v21;
  temp_v27 = temp_v20 * temp_v23;
  temp_v32 = (((((temp_v19 * temp_v39 * temp_v7 + temp_v17 * temp_v22 * temp_v3 + temp_v20 * temp_v21 * temp_v5) *
               temp_v10 + temp_v12 * (temp_v16 * temp_v22 * temp_v5 + temp_v17 * temp_v23 * temp_v7 +
                                 temp_v24 * temp_v2) +
               temp_v14 * (temp_v16 * temp_v21 * temp_v7 + temp_v25 * temp_v2 + temp_v27 * temp_v3) +
              temp_v18 * (temp_v38 * temp_v3 + temp_v29 * temp_v5 + temp_v31 * temp_v2)) -
             temp_v10 * (temp_v25 * temp_v5 + temp_v31 * temp_v7 + temp_v24 * temp_v3)) -
            temp_v12 * (temp_v38 * temp_v7 + temp_v17 * temp_v22 * temp_v2 + temp_v27 * temp_v5)) -
           temp_v14 * (temp_v16 * temp_v22 * temp_v3 + temp_v29 * temp_v7 + temp_v20 * temp_v21 * temp_v2)) -
           temp_v18 * (temp_v16 * temp_v21 * temp_v5 + temp_v19 * temp_v39 * temp_v2 + temp_v17 * temp_v23 * temp_v3);
  if (temp_v32 == 0.0f) {
    puVar3 = (unsigned int *)FUN_002a7f04();
    temp_v0 = puVar3[1];
    temp_v4 = puVar3[2];
    temp_v6 = puVar3[3];
    temp_v9 = puVar3[4];
    temp_v11 = puVar3[5];
    temp_v13 = puVar3[6];
    temp_v15 = puVar3[7];
    *(unsigned int *)(param_1 + 0x1e8) = *puVar3;
    *(unsigned int *)(param_1 + 0x1ec) = temp_v0;
    *(unsigned int *)(param_1 + 0x1f0) = temp_v4;
    *(unsigned int *)(param_1 + 500) = temp_v6;
    *(unsigned int *)(param_1 + 0x1f8) = temp_v9;
    *(unsigned int *)(param_1 + 0x1fc) = temp_v11;
    *(unsigned int *)(param_1 + 0x200) = temp_v13;
    *(unsigned int *)(param_1 + 0x204) = temp_v15;
    temp_v0 = puVar3[9];
    temp_v4 = puVar3[10];
    temp_v6 = puVar3[0xb];
    temp_v9 = puVar3[0xc];
    temp_v11 = puVar3[0xd];
    temp_v13 = puVar3[0xe];
    temp_v15 = puVar3[0xf];
    *(unsigned int *)(param_1 + 0x208) = puVar3[8];
    *(unsigned int *)(param_1 + 0x20c) = temp_v0;
    *(unsigned int *)(param_1 + 0x210) = temp_v4;
    *(unsigned int *)(param_1 + 0x214) = temp_v6;
    *(unsigned int *)(param_1 + 0x218) = temp_v9;
    *(unsigned int *)(param_1 + 0x21c) = temp_v11;
    *(unsigned int *)(param_1 + 0x220) = temp_v13;
    *(unsigned int *)(param_1 + 0x224) = temp_v15;
    return;
  }
  temp_v36 = temp_v20 * temp_v3 - temp_v19 * temp_v7;
  temp_v37 = temp_v23 * temp_v7 - temp_v22 * temp_v2;
  temp_v32 = 1.0f / temp_v32;
  temp_v34 = temp_v16 * temp_v7 - temp_v20 * temp_v2;
  temp_v40 = temp_v39 * temp_v3 - temp_v21 * temp_v5;
  temp_v8 = temp_v39 * temp_v7 - temp_v22 * temp_v5;
  temp_v28 = temp_v39 * temp_v2 - temp_v23 * temp_v5;
  temp_v35 = temp_v16 * temp_v3 - temp_v19 * temp_v2;
  temp_v30 = temp_v17 * temp_v7 - temp_v20 * temp_v5;
  temp_v26 = temp_v21 * temp_v2 - temp_v23 * temp_v3;
  temp_v33 = temp_v19 * temp_v5 - temp_v17 * temp_v3;
  temp_v3 = temp_v21 * temp_v7 - temp_v22 * temp_v3;
  temp_v2 = temp_v17 * temp_v2 - temp_v16 * temp_v5;
  temp_v31 = temp_v31 - temp_v19 * temp_v39;
  temp_v24 = temp_v24 - temp_v17 * temp_v22;
  temp_v27 = temp_v27 - temp_v16 * temp_v22;
  temp_v29 = temp_v29 - temp_v16 * temp_v21;
  temp_v25 = temp_v25 - temp_v20 * temp_v21;
  temp_v38 = temp_v38 - temp_v17 * temp_v23;
  *(float *)(param_1 + 0x1f0) = (temp_v12 * temp_v30 + temp_v14 * temp_v36 + temp_v18 * temp_v33) * temp_v32;
  *(float *)(param_1 + 0x1fc) = ((temp_v10 * temp_v8 - temp_v14 * temp_v37) - temp_v18 * temp_v28) * temp_v32;
  *(float *)(param_1 + 0x200) = ((temp_v14 * temp_v34 + temp_v18 * temp_v2) - temp_v10 * temp_v30) * temp_v32;
  *(float *)(param_1 + 0x1e8) = ((temp_v19 * temp_v8 - temp_v17 * temp_v3) - temp_v20 * temp_v40) * temp_v32;
  *(float *)(param_1 + 0x1ec) = ((temp_v14 * temp_v3 + temp_v18 * temp_v40) - temp_v12 * temp_v8) * temp_v32;
  *(float *)(param_1 + 0x1f8) = ((temp_v17 * temp_v37 + temp_v20 * temp_v28) - temp_v16 * temp_v8) * temp_v32;
  *(float *)(param_1 + 0x208) = ((temp_v16 * temp_v3 - temp_v19 * temp_v37) - temp_v20 * temp_v26) * temp_v32;
  *(float *)(param_1 + 0x220) = ((-(temp_v14 * temp_v35) - temp_v10 * temp_v33) - temp_v12 * temp_v2) * temp_v32;
  *(float *)(param_1 + 500) = (temp_v12 * temp_v24 + temp_v14 * temp_v25 + temp_v18 * temp_v31) * temp_v32;
  *(float *)(param_1 + 0x204) = ((temp_v14 * temp_v27 + temp_v18 * temp_v38) - temp_v10 * temp_v24) * temp_v32;
  *(float *)(param_1 + 0x214) = ((temp_v18 * temp_v29 - temp_v10 * temp_v25) - temp_v12 * temp_v27) * temp_v32;
  *(float *)(param_1 + 0x224) = ((-(temp_v14 * temp_v29) - temp_v10 * temp_v31) - temp_v12 * temp_v38) * temp_v32;
  *(float *)(param_1 + 0x20c) = ((temp_v12 * temp_v37 + temp_v18 * temp_v26) - temp_v10 * temp_v3) * temp_v32;
  *(float *)(param_1 + 0x210) = ((temp_v18 * temp_v35 - temp_v10 * temp_v36) - temp_v12 * temp_v34) * temp_v32;
  *(float *)(param_1 + 0x218) = ((temp_v16 * temp_v40 - temp_v19 * temp_v28) + temp_v17 * temp_v26) * temp_v32;
  *(float *)(param_1 + 0x21c) = ((temp_v12 * temp_v28 - temp_v14 * temp_v26) - temp_v10 * temp_v40) * temp_v32;
  return;
}
