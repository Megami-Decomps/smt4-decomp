/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120054` (_code @ 0x120054, 0x380 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_2_stack;

extern unsigned char DAT_004212e8; /* 0x4212e8 */

/* Supplied declaration required: FUN_002b539c. */


unsigned int * FUN_00120054(char *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  int **ppiVar7;
  unsigned int temp_v4;
  int *temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int *temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int *temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int *temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  int *temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  
  puVar6 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x28,4);
  temp_v22 = 0;
  temp_v24 = 0;
  temp_v21 = (int *)0x0;
  temp_v23 = 0;
  temp_v9 = (int *)0x0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  if (*param_1 != '\0') {
    temp_v4 = *(unsigned int *)(param_1 + 4);
    temp_v5 = param_2;
    if (temp_v4 == 0) {
      temp_v6 = 0;
    }
    else {
      temp_v6 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4 << 4,0x20);
    }
    piVar2 = temp_v21;
    temp_v0 = temp_v6;
    temp_v7 = temp_v6;
    temp_v8 = temp_v4 & 0x3fffffff;
    if (&temp_v21 != &temp_v5) {
      temp_v6 = temp_v22;
      temp_v7 = temp_v23;
      temp_v8 = temp_v24;
      temp_v21 = temp_v5;
      temp_v22 = temp_v0;
      temp_v5 = piVar2;
      temp_v23 = temp_v0;
      temp_v24 = temp_v4 & 0x3fffffff;
    }
    FUN_002b539c(&temp_v5);
    temp_v4 = *(unsigned int *)(param_1 + 4);
    if (temp_v4 == 0) {
      temp_v6 = 0;
      temp_v5 = param_2;
    }
    else {
      temp_v5 = param_2;
      temp_v6 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v4 << 4,0x20);
    }
    piVar2 = temp_v9;
    temp_v0 = temp_v6;
    ppiVar7 = &temp_v5;
    temp_v7 = temp_v6;
    temp_v8 = temp_v4 & 0x3fffffff;
    if (&temp_v9 != &temp_v5) {
      temp_v6 = temp_v10;
      temp_v7 = temp_v11;
      temp_v8 = temp_v12;
      temp_v9 = temp_v5;
      temp_v5 = piVar2;
      temp_v10 = temp_v0;
      ppiVar7 = &temp_v5;
      temp_v11 = temp_v0;
      temp_v12 = temp_v4 & 0x3fffffff;
    }
  }
  else {
    temp_v16 = 0x40000000;
    temp_v13 = param_2;
    if (&temp_v21 != &temp_v13) {
      temp_v24 = 0x40000000;
      temp_v16 = 0;
      temp_v13 = (int *)0x0;
      temp_v21 = param_2;
    }
    temp_v23 = 0;
    temp_v22 = 0;
    temp_v15 = 0;
    temp_v14 = 0;
    FUN_002b539c(&temp_v13);
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0x40000000;
    temp_v13 = param_2;
    if (&temp_v9 != &temp_v13) {
      temp_v14 = temp_v10;
      temp_v15 = temp_v11;
      temp_v16 = temp_v12;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0x40000000;
      temp_v13 = temp_v9;
      temp_v9 = param_2;
    }
    ppiVar7 = &temp_v13;
  }
  FUN_002b539c(ppiVar7);
  temp_v3 = temp_v23;
  temp_v2 = temp_v22;
  temp_v1 = temp_v11;
  temp_v0 = temp_v10;
  if (puVar6 != (unsigned int *)0x0) {
    temp_v17 = temp_v21;
    temp_v22 = 0;
    temp_v23 = 0;
    temp_v25 = temp_v9;
    temp_v10 = 0;
    temp_v11 = 0;
    *puVar6 = (unsigned int)&DAT_004212e8;
    puVar6[1] = (unsigned int)param_2;
    puVar6[2] = (unsigned int)temp_v21;
    puVar6[3] = temp_v2;
    puVar6[4] = temp_v3;
    puVar6[5] = temp_v24;
    temp_v18 = 0;
    temp_v19 = 0;
    temp_v20 = temp_v24 & 0xc0000000;
    puVar6[6] = (unsigned int)temp_v9;
    puVar6[7] = temp_v0;
    puVar6[8] = temp_v1;
    puVar6[9] = temp_v12;
    temp_v26 = 0;
    temp_v27 = 0;
    temp_v28 = temp_v12 & 0xc0000000;
    temp_v12 = temp_v12 & 0xc0000000;
    temp_v24 = temp_v24 & 0xc0000000;
    FUN_002b539c(&temp_v25);
    FUN_002b539c(&temp_v17);
  }
  FUN_002b539c(&temp_v9);
  FUN_002b539c(&temp_v21);
  return puVar6;
}
