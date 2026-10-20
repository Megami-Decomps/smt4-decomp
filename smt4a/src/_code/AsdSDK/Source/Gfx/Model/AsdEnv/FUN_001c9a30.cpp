/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c9a30` (_code @ 0x1c9a30, 0x6f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cefe0(int *, unsigned int);
int FUN_001cf074(unsigned int, float *);
int nw_gfx_RenderContext_TransformToViewCoordinate(...);
int nw_gfx_internal_FastWordCopyAsm_6(unsigned int *, float *);

/* stack frame of param_3: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
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
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005c0edc; /* 0x5c0edc */
extern unsigned int DAT_005c0ee0; /* 0x5c0ee0 */
extern unsigned int DAT_005c0ee4; /* 0x5c0ee4 */
extern unsigned int DAT_005c0efc; /* 0x5c0efc */
extern unsigned int DAT_005c0f04; /* 0x5c0f04 */
extern unsigned int DAT_005c0f08; /* 0x5c0f08 */

/* Supplied declaration required: FUN_001cefe0. */
/* Supplied declaration required: FUN_001cf074. */
/* Supplied declaration required: nw_gfx_RenderContext_TransformToViewCoordinate. */
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_6. */


void FUN_001c9a30(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  int temp_v21;
  float temp_v22;
  float fStack_7c;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  int temp_v37;
  unsigned int uStack_2c;
  int iStack_28;
  
  temp_v8 = *(int *)(param_3 + 8);
  temp_v0 = 1 << (param_2 & 0xff);
  temp_v1 = *(int *)(temp_v8 + 0xb8);
  temp_v15 = 0.0f;
  temp_v21 = *(int *)(param_1 + 0xa4) + 0x148;
  temp_v37 = param_1;
  uStack_2c = param_2;
  iStack_28 = param_3;
  if (temp_v1 == 0) {
    temp_v17 = *(float *)(param_3 + 0x17c);
    temp_v18 = *(float *)(param_3 + 0x180);
    temp_v19 = *(float *)(param_3 + 0x184);
    temp_v20 = 0.0f;
    nw_gfx_RenderContext_TransformToViewCoordinate(param_1,&temp_v17,temp_v21);
    temp_v22 = -temp_v17;
    fStack_7c = -temp_v18;
    temp_v24 = -temp_v20;
    temp_v23 = -temp_v19;
    FUN_001cf074(param_2,&temp_v22);
    if (temp_v20 == temp_v15) {
      DAT_005c0efc = DAT_005c0efc | temp_v0;
    }
    else {
      DAT_005c0efc = DAT_005c0efc & ~temp_v0;
    }
    DAT_005c0f04 = DAT_005c0f04 | temp_v0;
    DAT_005c0f08 = DAT_005c0f08 | temp_v0;
    return;
  }
  temp_v16 = 1.0f;
  temp_v9 = param_2 * 0x10 - 0x7fe8feb6;
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return;
    }
    temp_v1 = *(int *)(temp_v8 + 0x11c);
    if (temp_v1 != 0) {
      temp_v2 = temp_v8 + 0x11c + temp_v1;
    }
    else {
      temp_v2 = 0;
    }
    if (temp_v2 != 0) {
      DAT_005c0f04 = DAT_005c0f04 & ~temp_v0;
      if (temp_v1 != 0) {
        temp_v1 = temp_v8 + 0x11c + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v2 = *(int *)(temp_v1 + 8);
      if (temp_v2 != 0) {
        piVar4 = (int *)(temp_v1 + 8 + temp_v2);
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (*piVar4 != -0x80000000) {
        if (*piVar4 != 0x40000000) {
          piVar4 = (int *)0x0;
        }
        else {
          temp_v1 = piVar4[3];
          if (temp_v1 != 0) {
            piVar4 = (int *)((int)(piVar4 + 3) + temp_v1);
          }
          else {
            piVar4 = (int *)0x0;
          }
        }
      }
      FUN_001cefe0(piVar4,(param_2 + 7) & 0xff);
      temp_v1 = *(int *)(temp_v8 + 0x11c);
      if (temp_v1 != 0) {
        temp_v2 = temp_v8 + 0x11c + temp_v1;
      }
      else {
        temp_v2 = 0;
      }
      temp_v3 = *(int *)(temp_v2 + 8);
      if (temp_v3 != 0) {
        piVar4 = (int *)(temp_v2 + 8 + temp_v3);
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (*piVar4 != -0x80000000) {
        if (*piVar4 != 0x40000000) {
          piVar4 = (int *)0x0;
        }
        else {
          temp_v2 = piVar4[3];
          if (temp_v2 != 0) {
            piVar4 = (int *)((int)(piVar4 + 3) + temp_v2);
          }
          else {
            piVar4 = (int *)0x0;
          }
        }
      }
      if ((char)piVar4[2] != '\0') {
        DAT_005c0edc = DAT_005c0edc & 0xfffffdff;
      }
      else {
        DAT_005c0edc = DAT_005c0edc | 0x200;
      }
      if (temp_v1 != 0) {
        puVar5 = (unsigned int *)(temp_v8 + 0x11c + temp_v1);
      }
      else {
        puVar5 = (unsigned int *)0x0;
      }
      DAT_005c0ee0 = (DAT_005c0ee0 & 0xfffff8ff) | ((*puVar5 & 0xff) << 8);
      if (temp_v1 != 0) {
        temp_v1 = temp_v8 + 0x11c + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      DAT_005c0ee4 = (DAT_005c0ee4 & 0xfffff8ff) | ((*(unsigned int *)(temp_v1 + 4) & 0xff) << 8);
    }
    if ((~*(unsigned int *)(temp_v8 + 0x18) & 4) == 0) {
      temp_v1 = *(int *)(temp_v8 + 0x118);
      if (temp_v1 != 0) {
        temp_v2 = temp_v8 + 0x118 + temp_v1;
      }
      else {
        temp_v2 = 0;
      }
      if (temp_v2 != 0) {
        DAT_005c0f08 = DAT_005c0f08 & ~temp_v0;
        if (temp_v1 != 0) {
          piVar4 = (int *)(temp_v1 + temp_v8 + 0x118);
        }
        else {
          piVar4 = (int *)0x0;
        }
        if (*piVar4 != -0x80000000) {
          if (*piVar4 != 0x40000000) {
            piVar4 = (int *)0x0;
          }
          else {
            temp_v1 = piVar4[3];
            if (temp_v1 != 0) {
              piVar4 = (int *)((int)(piVar4 + 3) + temp_v1);
            }
            else {
              piVar4 = (int *)0x0;
            }
          }
        }
        FUN_001cefe0(piVar4,(param_2 + 0xf) & 0xff);
        temp_v4 = *(unsigned int *)(temp_v8 + 0x128);
        temp_v10 = *(unsigned int *)(temp_v8 + 300);
        DAT_005b40e0[1] = temp_v9;
        *DAT_005b40e0 = temp_v10;
        DAT_005b40e0[2] = temp_v4;
        DAT_005b40e0[3] = 0;
        DAT_005b40e0 = DAT_005b40e0 + 4;
      }
      else {
        DAT_005c0f08 = DAT_005c0f08 | temp_v0;
      }
    }
    else {
      DAT_005c0f08 = DAT_005c0f08 | temp_v0;
    }
    temp_v33 = *(float *)(param_3 + 0x17c);
    temp_v34 = *(float *)(param_3 + 0x180);
    temp_v35 = *(float *)(param_3 + 0x184);
    temp_v36 = temp_v15;
    nw_gfx_RenderContext_TransformToViewCoordinate(temp_v37,&temp_v33,temp_v21);
    temp_v29 = *(unsigned int *)(param_3 + 0x98);
    temp_v30 = *(unsigned int *)(param_3 + 0xa8);
    temp_v31 = *(unsigned int *)(param_3 + 0xb8);
    temp_v32 = temp_v16;
    nw_gfx_RenderContext_TransformToViewCoordinate(temp_v37,&temp_v29,temp_v21);
    temp_v7 = temp_v29 & 0x7fffff;
    temp_v6 = 0;
    if ((temp_v29 & 0x80000000) != 0) {
      temp_v6 = 0x8000;
    }
    temp_v11 = (temp_v29 & 0x7fffffff) == 0;
    if (temp_v11) {
      temp_v7 = temp_v7 >> 0xd;
    }
    temp_v28 = 0;
    temp_v5 = 0;
    if (!temp_v11) {
      temp_v5 = ((temp_v29 & 0x7fffffff) >> 0x17) - 0x70;
      temp_v7 = temp_v7 >> 0xd;
      if (-1 < (int)temp_v5) {
        if ((int)temp_v5 >= 0x20) {
          temp_v6 = 0x7c00;
        }
        else {
          temp_v6 = temp_v7 | temp_v6 | ((temp_v5 & 0x1f) << 10);
        }
      }
    }
    else {
      temp_v6 = temp_v7 | temp_v6 | ((temp_v5 & 0x1f) << 10);
    }
    temp_v7 = 0;
    if ((temp_v30 & 0x80000000) != 0) {
      temp_v7 = 0x8000;
    }
    if ((temp_v30 & 0x7fffffff) == 0) {
      temp_v5 = 0;
      temp_v7 = ((temp_v30 & 0x7fffff) >> 0xd) | temp_v7 | ((temp_v5 & 0x1f) << 10);
    }
    else {
      temp_v5 = ((temp_v30 & 0x7fffffff) >> 0x17) - 0x70;
      if (-1 < (int)temp_v5) {
        if ((int)temp_v5 >= 0x20) {
          temp_v7 = 0x7c00;
        }
        else {
          temp_v7 = ((temp_v30 & 0x7fffff) >> 0xd) | temp_v7 | ((temp_v5 & 0x1f) << 10);
        }
      }
    }
    temp_v24 = (float)(param_2 * 0x10 - 0x7fc0febc);
    temp_v23 = (float)((temp_v6 & 0xffff) | (temp_v7 << 0x10));
    temp_v25 = 0;
    if ((temp_v31 & 0x80000000) != 0) {
      temp_v25 = 0x8000;
    }
    if ((temp_v31 & 0x7fffffff) == 0) {
      temp_v7 = 0;
      temp_v25 = temp_v25 | ((temp_v31 & 0x7fffff) >> 0xd) | ((temp_v7 & 0x1f) << 10);
    }
    else {
      temp_v7 = ((temp_v31 & 0x7fffffff) >> 0x17) - 0x70;
      if (-1 < (int)temp_v7) {
        if ((int)temp_v7 >= 0x20) {
          temp_v25 = 0x7c00;
        }
        else {
          temp_v25 = temp_v25 | ((temp_v31 & 0x7fffff) >> 0xd) | ((temp_v7 & 0x1f) << 10);
        }
      }
    }
    temp_v14 = 8191.0f;
    temp_v12 = (-temp_v33 + 2.0f) * 2048.0f;
    temp_v16 = temp_v15;
    if ((temp_v15 <= temp_v12) && (temp_v16 = temp_v12, (int)temp_v12 >= 0x46000000)) {
      temp_v16 = temp_v14;
    }
    temp_v13 = (-temp_v34 + 2.0f) * 2048.0f;
    temp_v12 = temp_v15;
    if ((temp_v15 <= temp_v13) && (temp_v12 = temp_v13, (int)temp_v13 >= 0x46000000)) {
      temp_v12 = temp_v14;
    }
    temp_v26 = ((int)(temp_v16 - 4096.0f) & 0x1fffU) | (((int)(temp_v12 - 4096.0f) & 0x1fffU) << 0x10);
    temp_v12 = (-temp_v35 + 2.0f) * 2048.0f;
    temp_v16 = temp_v15;
    if ((temp_v15 <= temp_v12) && (temp_v16 = temp_v12, (int)temp_v12 >= 0x46000000)) {
      temp_v16 = temp_v14;
    }
    temp_v27 = (int)(temp_v16 - 4096.0f) & 0x1fff;
    nw_gfx_internal_FastWordCopyAsm_6(DAT_005b40e0,&temp_v23);
    if (temp_v32 != temp_v15) {
      DAT_005c0efc = DAT_005c0efc & ~temp_v0;
      return;
    }
  }
  else {
    DAT_005c0f04 = temp_v0 | DAT_005c0f04;
    if ((~*(unsigned int *)(temp_v8 + 0x18) & 4) == 0) {
      temp_v1 = *(int *)(temp_v8 + 0x118);
      if (temp_v1 != 0) {
        temp_v2 = temp_v8 + 0x118 + temp_v1;
      }
      else {
        temp_v2 = 0;
      }
      if (temp_v2 != 0) {
        DAT_005c0f08 = DAT_005c0f08 & ~temp_v0;
        if (temp_v1 != 0) {
          piVar4 = (int *)(temp_v8 + 0x118 + temp_v1);
        }
        else {
          piVar4 = (int *)0x0;
        }
        if (*piVar4 != -0x80000000) {
          if (*piVar4 != 0x40000000) {
            piVar4 = (int *)0x0;
          }
          else {
            temp_v1 = piVar4[3];
            if (temp_v1 != 0) {
              piVar4 = (int *)((int)(piVar4 + 3) + temp_v1);
            }
            else {
              piVar4 = (int *)0x0;
            }
          }
        }
        FUN_001cefe0(piVar4,(param_2 + 0xf) & 0xff);
        temp_v4 = *(unsigned int *)(temp_v8 + 300);
        DAT_005b40e0[2] = *(unsigned int *)(temp_v8 + 0x128);
        DAT_005b40e0[3] = 0;
        *DAT_005b40e0 = temp_v4;
        DAT_005b40e0[1] = temp_v9;
        DAT_005b40e0 = DAT_005b40e0 + 4;
      }
      else {
        DAT_005c0f08 = temp_v0 | DAT_005c0f08;
      }
    }
    else {
      DAT_005c0f08 = temp_v0 | DAT_005c0f08;
    }
    temp_v22 = *(float *)(param_3 + 0x98);
    fStack_7c = *(float *)(param_3 + 0xa8);
    temp_v23 = *(float *)(param_3 + 0xb8);
    temp_v24 = temp_v16;
    nw_gfx_RenderContext_TransformToViewCoordinate(temp_v37,&temp_v22,temp_v21);
    FUN_001cf074(param_2,&temp_v22);
    if (temp_v24 != temp_v15) {
      DAT_005c0efc = DAT_005c0efc & ~temp_v0;
      return;
    }
  }
  DAT_005c0efc = DAT_005c0efc | temp_v0;
  return;
}

} /* extern "C" */
