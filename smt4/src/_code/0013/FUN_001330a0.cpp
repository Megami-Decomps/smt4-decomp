/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001330a0` (_code @ 0x1330a0, 0x4c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004652a8; /* 0x4652a8 */
extern unsigned int *DAT_004655c0; /* 0x4655c0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_00147a7c(unsigned int);


void FUN_001330a0(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr, in_r3; 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int in_r3;
  int *piVar8;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar11;
  int unaff_r7;
  unsigned int *puVar12;
  unsigned int *puVar13;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned int temp_v11 [6];
  
  puVar1 = DAT_004655c0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v7 = *(int *)(DAT_004652a8 + 8);
  piVar3 = *(int **)(temp_v7 + 0xc);
  if (piVar3 == (int *)0x0) {
    in_r3 = *(int *)(temp_v7 + 0x1c);
  }
  if (piVar3 == (int *)0x0 && in_r3 == 0) {
    temp_v8 = 0x8cd7;
  }
  else {
    temp_v8 = 0x8cd6;
    if (piVar3 != (int *)0x0) {
      temp_v9 = *piVar3 == 0;
      temp_v2 = 0;
      if (!temp_v9) {
        temp_v2 = piVar3[3];
      }
      if (!temp_v9 && temp_v2 != 0) {
        temp_v3 = piVar3[4];
      }
      if ((temp_v9 || temp_v2 == 0) || temp_v3 == 0) goto LAB_00133154;
    }
    piVar8 = *(int **)(temp_v7 + 0x1c);
    if (piVar8 != (int *)0x0) {
      temp_v9 = *piVar8 != 0;
      temp_v6 = 0;
      if (temp_v9) {
        temp_v6 = piVar8[3];
      }
      if (temp_v9 && temp_v6 != 0) {
        unaff_r7 = piVar8[4];
      }
      if ((temp_v9 && temp_v6 != 0) && unaff_r7 != 0) {
        if ((temp_v2 == 0) || ((temp_v6 == temp_v2 && (unaff_r7 == temp_v3)))) goto LAB_0013314c;
        temp_v8 = 0x8cd9;
      }
    }
    else {
LAB_0013314c:
      if (piVar3 != piVar8) {
        temp_v8 = 0x8cd5;
      }
    }
  }
LAB_00133154:
  if (temp_v8 != 0x8cd5) {
    DAT_004655c0[0x1a1] = 0;
    *(unsigned char *)(puVar1 + 0x1a4) = 0;
    *(unsigned char *)((int)puVar1 + 0x691) = 0;
    *(unsigned char *)((int)puVar1 + 0x692) = 0;
    return;
  }
  DAT_004655c0[0x1a1] = 0x8cd5;
  if ((puVar1[2] & 0x100) != 0) {
    return;
  }
  puVar12 = *(unsigned int **)(temp_v7 + 0xc);
  puVar13 = *(unsigned int **)(temp_v7 + 0x1c);
  temp_v4 = 0;
  temp_v5 = 0;
  puVar11 = puVar1 + 0x201;
  if ((((puVar12 != (unsigned int *)0x0) && (puVar1[0x204] != *puVar12)) ||
      ((puVar13 != (unsigned int *)0x0 && (puVar1[0x203] != *puVar13)))) || ((puVar1[1] & 0x100) != 0)) {
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 1;
      DAT_004652a0[1] = 0xf0111;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 1;
      DAT_004652a0[1] = 0xf0110;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
  }
  if (*(int *)(temp_v7 + 0xc) == 0) {
    *(unsigned char *)(puVar1 + 0x1a4) = 0;
  }
  else {
    *(unsigned char *)(puVar1 + 0x1a4) = 1;
    puVar1[0x204] = *puVar12;
    puVar1[0x206] = puVar12[8];
    temp_v4 = puVar12[7];
    if (temp_v4 != 0) {
      if (temp_v4 != 2) {
        if (temp_v4 != 3) {
          if (temp_v4 == 4) {
            puVar1[0x1a2] = 4;
            *puVar11 = 0;
          }
        }
        else {
          puVar1[0x1a2] = 3;
          *puVar11 = 0;
        }
      }
      else {
        puVar1[0x1a2] = 2;
        *puVar11 = 0;
      }
    }
    else {
      puVar1[0x1a2] = 0;
      *puVar11 = 2;
    }
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = *puVar11 | (puVar1[0x1a2] << 0x10);
      DAT_004652a0[1] = 0xf0117;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      temp_v4 = FUN_00147a7c(puVar1[0x204]);
      *DAT_004652a0 = temp_v4 >> 3;
      DAT_004652a0[1] = 0xf011d;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    temp_v4 = puVar12[3];
    temp_v5 = puVar12[4];
  }
  if (*(int *)(temp_v7 + 0x1c) == 0) {
    *(unsigned char *)((int)puVar1 + 0x691) = 0;
    *(unsigned char *)((int)puVar1 + 0x692) = 0;
  }
  else {
    temp_v4 = puVar1[0x1a3];
    *(unsigned char *)((int)puVar1 + 0x691) = 1;
    puVar1[0x203] = *puVar13;
    temp_v5 = puVar13[0xe];
    if (temp_v5 == 0x10) {
      puVar1[0x202] = 0;
      puVar1[0x1a3] = 0;
    }
    else if (temp_v5 != 0x18) {
      if (temp_v5 == 0x20) {
        puVar1[0x202] = 3;
        puVar1[0x1a3] = 3;
      }
    }
    else {
      puVar1[0x202] = 2;
      puVar1[0x1a3] = 2;
    }
    if ((char)puVar1[0x15] != '\0') {
      if (puVar1[0x1a3] != 0) {
        if (temp_v4 == 0) {
          *puVar1 = *puVar1 | 4;
        }
        if (puVar1[0x1a3] != 3) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = 1;
        }
      }
      else if (temp_v4 != 0) {
        *puVar1 = *puVar1 | 4;
        if (puVar1[0x1a3] != 3) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = 1;
        }
      }
      else {
        temp_v0 = 0;
      }
    }
    else if (puVar1[0x1a3] != 3) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 1;
    }
    *(unsigned char *)((int)puVar1 + 0x692) = temp_v0;
    puVar1[0x205] = puVar13[8];
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = puVar1[0x202];
      DAT_004652a0[1] = 0xf0116;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      temp_v4 = FUN_00147a7c(puVar1[0x203]);
      *DAT_004652a0 = temp_v4 >> 3;
      DAT_004652a0[1] = 0xf011c;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    temp_v4 = puVar13[3];
    temp_v5 = puVar13[4];
  }
  temp_v1 = puVar1[0x1a6];
  temp_v9 = temp_v1 != temp_v4;
  if (!temp_v9) {
    temp_v1 = puVar1[0x1a7];
  }
  if ((temp_v9 || temp_v1 != temp_v5) || ((puVar1[1] & 0x100) != 0)) {
    temp_v1 = (temp_v4 & 0xfff) | (((temp_v5 - 1) & 0xfff00fff) << 0xc);
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      DAT_004652a0[1] = 0xf011e;
      *DAT_004652a0 = temp_v1 | 0x1000000;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
      DAT_004652a0[1] = 0xf006e;
      *DAT_004652a0 = temp_v1 | 0x1000000;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    puVar1[0x1a6] = temp_v4;
    puVar1[0x1a7] = temp_v5;
    if ((char)puVar1[0x192] != '\0') {
      *puVar1 = *puVar1 | 0x200;
    }
  }
  if ((char)puVar1[0xc] != '\0') {
    return;
  }
  *(unsigned char *)(puVar1 + 0xc) = 1;
  puVar1 = DAT_004655c0;
  temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = temp_v10 * 0.5f;
  temp_v1 = 0;
  if (romwright_fabs_4(temp_v10) != 0.0f) {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17) - 0x40;
  }
  temp_v9 = -1 < (int)temp_v1;
  if (temp_v9) {
    temp_v1 = (((unsigned int)temp_v10 & 0x7fffff) >> 7) | (temp_v1 << 0x10);
  }
  if (temp_v9) {
    temp_v1 = temp_v1 | (((unsigned int)temp_v10 >> 0x1f) << 0x17);
  }
  else {
    temp_v1 = ((unsigned int)temp_v10 >> 0x1f) << 0x17;
  }
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = temp_v1;
    DAT_004652a0[1] = 0xf0041;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = temp_v10 * 0.5f;
  temp_v1 = 0;
  if (romwright_fabs_4(temp_v10) != 0.0f) {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17) - 0x40;
  }
  temp_v9 = -1 < (int)temp_v1;
  if (temp_v9) {
    temp_v1 = (((unsigned int)temp_v10 & 0x7fffff) >> 7) | (temp_v1 << 0x10);
  }
  if (temp_v9) {
    temp_v1 = temp_v1 | (((unsigned int)temp_v10 >> 0x1f) << 0x17);
  }
  else {
    temp_v1 = ((unsigned int)temp_v10 >> 0x1f) << 0x17;
  }
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = temp_v1;
    DAT_004652a0[1] = 0xf0043;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (temp_v4 != 0 && temp_v5 != 0) {
    temp_v2 = 0;
    temp_v11[0] = temp_v4;
    temp_v11[1] = temp_v5;
    do {
      temp_v1 = temp_v11[temp_v2];
      if (temp_v1 == 0x280) {
        temp_v11[temp_v2] = 0x36999999;
      }
      else {
        if ((int)temp_v1 < 0x281) {
          if (temp_v1 == 400) {
            temp_v1 = 0x3747ae14;
          }
          else if ((int)temp_v1 < 0x191) {
            if (temp_v1 == 0xf0) {
              temp_v1 = 0x38111111;
            }
            else if (temp_v1 == 0x140) {
              temp_v1 = 0x37999999;
            }
            else {
code_r0x00142e04:
              temp_v10 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = 2.0f / temp_v10;
              if (romwright_fabs_4(temp_v10) != 0.0f) {
                temp_v3 = ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17) - 0x40;
                if (-1 >= temp_v3) {
                  temp_v1 = ((unsigned int)temp_v10 >> 0x1f) << 0x1e;
                }
                else {
                  temp_v1 = ((unsigned int)temp_v10 & 0x7fffff) | (temp_v3 << 0x17) |
                          (((unsigned int)temp_v10 >> 0x1f) << 0x1e);
                }
              }
              else {
                temp_v3 = 0;
                temp_v1 = ((unsigned int)temp_v10 & 0x7fffff) | (temp_v3 << 0x17) |
                        (((unsigned int)temp_v10 >> 0x1f) << 0x1e);
              }
              temp_v11[temp_v2] = temp_v1;
              temp_v1 = temp_v1 << 1;
            }
          }
          else if (temp_v1 == 0x1e0) {
            temp_v1 = 0x37111111;
          }
          else {
            if (temp_v1 != 600) goto code_r0x00142e04;
            temp_v1 = 0x36b4e81b;
          }
        }
        else if (temp_v1 == 800) {
          temp_v1 = 0x3647ae14;
        }
        else if (temp_v1 == 0x400) {
          temp_v1 = 0x36000000;
        }
        else if (temp_v1 == 0x4b0) {
          temp_v1 = 0x35b4e81b;
        }
        else {
          if (temp_v1 != 0x500) goto code_r0x00142e04;
          temp_v1 = 0x35999999;
        }
        temp_v11[temp_v2] = temp_v1;
      }
      if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = temp_v11[temp_v2];
        DAT_004652a0[1] = (temp_v2 * 2 + 0x42U) | 0xf0000;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
  }
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 0;
    DAT_004652a0[1] = 0xf0068;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = temp_v4;
  puVar1[0xb] = temp_v5;
  if ((char)puVar1[0xc] == '\0') {
    *(unsigned char *)(puVar1 + 0xc) = 1;
  }
  return;
}

} /* extern "C" */
