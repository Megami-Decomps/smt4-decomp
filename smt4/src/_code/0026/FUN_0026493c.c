/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026493c` (_code @ 0x26493c, 0x7d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int DAT_00447060; /* 0x447060 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f978; /* 0x49f978 */
extern unsigned int DAT_0049f97c; /* 0x49f97c */
extern unsigned int DAT_0049f980; /* 0x49f980 */
extern unsigned char DAT_0049fb45; /* 0x49fb45 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0019dc04. */
extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0020d7f4. */
/* Supplied declaration required: FUN_0021dfbc. */
/* Supplied declaration required: FUN_002648e8. */
/* Supplied declaration required: FUN_00274798. */
/* Supplied declaration required: FUN_00276904. */
/* Supplied declaration required: FUN_002769b4. */
/* Supplied declaration required: FUN_00277b5c. */
/* Supplied declaration required: FUN_0027d9a8. */
/* Supplied declaration required: FUN_0027efb8. */
/* Supplied declaration required: FUN_0027f164. */
extern unsigned int FUN_00290d74(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00291e40. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bff50. */
extern int FUN_002c8684(unsigned int);
/* Supplied declaration required: FUN_002dfea4. */
/* Supplied declaration required: FUN_002e8ba0. */
/* Supplied declaration required: FUN_002eb184. */
/* Supplied declaration required: FUN_002fb4dc. */
/* Supplied declaration required: FUN_002fb988. */
extern short aeabi_idivmod(int, int);


void FUN_0026493c(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 21 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar9;
  float *pfVar10;
  unsigned int *puVar11;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14 [11];
  
  FUN_0019dc04();
  temp_v7 = DAT_00447e88;
  temp_v11 = 0.0f;
  temp_v13 = 2.0f;
  switch(*(unsigned int *)(param_1 + 0xcc)) {
  case 1:
    FUN_002fb988(param_1);
    return;
  case 2:
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(unsigned int *)(param_1 + 200) = 0x3f800000;
      *(unsigned int *)(param_1 + 0xd0) = 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      *(unsigned int *)(param_1 + 0xc4) = 0x40000000;
      return;
    }
    if ((*(int *)(param_1 + 0xd0) == 1) &&
       (temp_v11 = *(float *)(param_1 + 200) - 0.033333335f, *(float *)(param_1 + 200) = temp_v11,
       (int)temp_v11 < 0x3c23d70a)) {
      *(unsigned int *)(param_1 + 200) = 0x3c23d70a;
      *(unsigned int *)(param_1 + 0xd0) = 2;
      *(unsigned int *)(param_1 + 0xd4) = 0;
    }
    break;
  case 3:
    temp_v7 = *(int *)(param_1 + 0xd0);
    if (temp_v7 == 0) {
      *(unsigned int *)(param_1 + 200) = 0;
      *(unsigned int *)(param_1 + 0xd0) = 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      *(unsigned int *)(param_1 + 0xc4) = 0x40000000;
      return;
    }
    if (temp_v7 != 1) {
      if ((temp_v7 == 2) && (temp_v4 = 1, *(int *)(DAT_00447060 + 0xcc) != 1)) {
        temp_v7 = DAT_00447060;
        *(unsigned int *)(DAT_00447060 + 0xcc) = temp_v4;
        *(unsigned int *)(temp_v7 + 0xd0) = 0;
        *(unsigned int *)(temp_v7 + 0xd4) = 0;
        return;
      }
    }
    else {
      temp_v11 = *(float *)(param_1 + 200) + 0.06666667f;
      *(float *)(param_1 + 200) = temp_v11;
      if ((int)temp_v11 >= 0x3f800001) {
        *(unsigned int *)(param_1 + 200) = 0x3f800000;
        *(unsigned int *)(param_1 + 0xd0) = 2;
        *(unsigned int *)(param_1 + 0xd4) = 0;
        return;
      }
    }
    break;
  case 4:
    *(unsigned int *)(param_1 + 200) = 0;
    return;
  case 5:
    temp_v11 = *(float *)(param_1 + 0x4ee0);
    temp_v13 = *(float *)(param_1 + 0x4ed8);
    temp_v9 = *(float *)(param_1 + 0x4edc);
    piVar9 = (int *)(param_1 + 0x4ee4);
    *(float *)(DAT_00447e88 + 0x1c) =
         *(float *)(DAT_00447e88 + 0x1c) + *(float *)(param_1 + 0x4ed4) * temp_v11;
    *(float *)(temp_v7 + 0x20) = *(float *)(temp_v7 + 0x20) + temp_v13 * temp_v11;
    *(float *)(temp_v7 + 0x24) = *(float *)(temp_v7 + 0x24) + temp_v9 * temp_v11;
    temp_v7 = DAT_00447e88;
    puVar11 = (unsigned int *)(DAT_00447e88 + 0x20);
    temp_v4 = *(unsigned int *)(DAT_00447e88 + 0x24);
    *(unsigned int *)(DAT_00447e88 + 0x28) = *(unsigned int *)(DAT_00447e88 + 0x1c);
    *(unsigned int *)(temp_v7 + 0x2c) = *puVar11;
    *(unsigned int *)(temp_v7 + 0x30) = temp_v4;
    if (*piVar9 == 0) {
      *(unsigned char *)(param_1 + 0x94) = 1;
      FUN_0021dfbc();
    }
    temp_v7 = *(int *)(param_1 + 0x4ee8);
    if (temp_v7 >= 0x1f) {
      if (*piVar9 == temp_v7 - 0x1e) {
LAB_00264b84:
        temp_v7 = FUN_002c8684(*(unsigned int *)(param_1 + 0x40));
        if (temp_v7 != 0) {
          FUN_00277b5c(DAT_0049f91c,DAT_0049f920);
        }
      }
    }
    else if (*piVar9 == 1) goto LAB_00264b84;
    temp_v3 = *piVar9;
    *piVar9 = temp_v3 + 1;
    temp_v7 = DAT_00447e88;
    if (*(int *)(param_1 + 0x4ee8) <= temp_v3 + 1) {
      temp_v4 = *(unsigned int *)(param_1 + 0x4ec8);
      temp_v5 = *(unsigned int *)(param_1 + 0x4ecc);
      temp_v6 = *(unsigned int *)(param_1 + 0x4ed0);
      puVar11 = (unsigned int *)(DAT_00447e88 + 0x28);
      *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v4;
      *(unsigned int *)(temp_v7 + 0x20) = temp_v5;
      *(unsigned int *)(temp_v7 + 0x24) = temp_v6;
      *puVar11 = temp_v4;
      *(unsigned int *)(temp_v7 + 0x2c) = temp_v5;
      *(unsigned int *)(temp_v7 + 0x30) = temp_v6;
      temp_v4 = 6;
      if (*(int *)(DAT_00447060 + 0xcc) == 6) {
        return;
      }
      temp_v7 = DAT_00447060;
      *(unsigned int *)(DAT_00447060 + 0xcc) = temp_v4;
      *(unsigned int *)(temp_v7 + 0xd0) = 0;
      *(unsigned int *)(temp_v7 + 0xd4) = 0;
      return;
    }
    break;
  case 7:
    temp_v14[3] = 0.6f;
    temp_v14[4] = 0.6f;
    temp_v14[5] = 0.6f;
    if (*(int *)(param_1 + 0xd0) == 0) {
      FUN_00291e40(0x1000186);
      FUN_0027f164(2,3);
      FUN_0027efb8(2,5,0xf);
      *(unsigned short *)(param_1 + 0x4eec) = 0xf;
      *(unsigned short *)(param_1 + 0x4ef0) = 4000;
      *(unsigned short *)(param_1 + 0x4eee) = 0x640;
      *(unsigned short *)(param_1 + 0x4ef2) = 0x640;
      *(float *)(param_1 + 0x4ef4) = temp_v11;
      *(float *)(param_1 + 0x4ef8) = temp_v11;
      *(float *)(param_1 + 0x4efc) = temp_v11;
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    }
    if (*(int *)(param_1 + 0xd0) != 1) {
      return;
    }
    if (*(short *)(param_1 + 0x4eec) != 0) {
      temp_v12 = 0.5f;
      temp_v7 = 0;
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4eee),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14[0] = temp_v9 * 0.01f;
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ef0),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14[1] = temp_v9 * 0.01f;
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ef2),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14[2] = temp_v9 * 0.01f;
      do {
        pfVar10 = temp_v14 + temp_v7;
        temp_v9 = *pfVar10;
        if (temp_v9 != temp_v11) {
          FUN_0027d9a8();
          temp_v10 = *pfVar10;
          temp_v3 = param_1 + temp_v7 * 4;
          temp_v8 = *(float *)(temp_v3 + 0x4ef4);
          temp_v9 = temp_v9 * temp_v12 * temp_v10 + temp_v10 * temp_v12;
          if (romwright_fabs_4(temp_v8) >= temp_v10 * temp_v14[temp_v7 + 3]) {
            if (temp_v8 <= temp_v11) {
              temp_v8 = temp_v8 + temp_v9;
            }
            else {
              temp_v8 = temp_v8 - temp_v9;
            }
            *(float *)(temp_v3 + 0x4ef4) = temp_v8;
          }
          else {
            FUN_0027d9a8();
            *(float *)(temp_v3 + 0x4ef4) =
                 *(float *)(temp_v3 + 0x4ef4) + (temp_v8 - temp_v12) * temp_v9 * temp_v13;
          }
          temp_v9 = *(float *)(temp_v3 + 0x4ef4);
          if (*(float *)(temp_v3 + 0x4ef4) <= -*pfVar10) {
            temp_v9 = -*pfVar10;
          }
          *(float *)(temp_v3 + 0x4ef4) = temp_v9;
          if (*pfVar10 < temp_v9) {
            temp_v9 = *pfVar10;
          }
          *(float *)(temp_v3 + 0x4ef4) = temp_v9;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      temp_v0 = *(short *)(param_1 + 0x4eec);
      temp_v7 = (int)temp_v0;
      if (0 < temp_v7) {
        temp_v1 = *(short *)(param_1 + 0x4eee);
        temp_v2 = aeabi_idivmod((int)temp_v1,temp_v7 + 5);
        *(short *)(param_1 + 0x4eee) = temp_v1 - temp_v2;
        temp_v1 = *(short *)(param_1 + 0x4ef0);
        temp_v2 = aeabi_idivmod((int)temp_v1,temp_v7 + 5);
        *(short *)(param_1 + 0x4ef0) = temp_v1 - temp_v2;
        temp_v1 = *(short *)(param_1 + 0x4ef2);
        temp_v2 = aeabi_idivmod((int)temp_v1,temp_v7 + 5);
        *(short *)(param_1 + 0x4ef2) = temp_v1 - temp_v2;
        *(short *)(param_1 + 0x4eec) = temp_v0 - 1;
      }
      temp_v7 = DAT_00447e88;
      *(float *)(DAT_00447e88 + 0x1c) =
           *(float *)(DAT_00447e88 + 0x28) + *(float *)(param_1 + 0x4ef4);
      *(float *)(temp_v7 + 0x20) = *(float *)(temp_v7 + 0x2c) + *(float *)(param_1 + 0x4ef8);
      *(float *)(temp_v7 + 0x24) = *(float *)(temp_v7 + 0x30) + *(float *)(param_1 + 0x4efc);
      return;
    }
    *(unsigned int *)(DAT_00447e88 + 0x1c) = *(unsigned int *)(DAT_00447e88 + 0x28);
    *(unsigned int *)(temp_v7 + 0x20) = *(unsigned int *)(temp_v7 + 0x2c);
    *(unsigned int *)(temp_v7 + 0x24) = *(unsigned int *)(temp_v7 + 0x30);
    temp_v4 = 1;
    if (*(int *)(DAT_00447060 + 0xcc) == 1) {
      return;
    }
    temp_v7 = DAT_00447060;
    *(unsigned int *)(DAT_00447060 + 0xcc) = temp_v4;
    *(unsigned int *)(temp_v7 + 0xd0) = 0;
    *(unsigned int *)(temp_v7 + 0xd4) = 0;
    return;
  case 8:
    switch(*(unsigned int *)(param_1 + 0xd0)) {
    case 0:
      DAT_0049fb45 = 0;
      FUN_002fb4dc();
      FUN_0020d7f4();
      temp_v7 = DAT_00447e88;
      puVar11 = (unsigned int *)(DAT_00447e88 + 0x20);
      temp_v4 = *(unsigned int *)(DAT_00447e88 + 0x24);
      *(unsigned int *)(DAT_00447e88 + 0x28) = *(unsigned int *)(DAT_00447e88 + 0x1c);
      *(unsigned int *)(temp_v7 + 0x2c) = *puVar11;
      *(unsigned int *)(temp_v7 + 0x30) = temp_v4;
      FUN_002bff50();
      FUN_002769b4(0xffffffff,0xffffffff);
      DAT_0049f970 = 0;
      DAT_0049f980 = 0x747331;
      DAT_0049f978 = 0x5f726373;
      DAT_0049f97c = 0x70616d6c;
      temp_v4 = FUN_00290d74(*(unsigned int *)(param_1 + 0x9a4),&DAT_0049f978);
      *(unsigned int *)(param_1 + 0x99c) = temp_v4;
      FUN_00296f4c(*(unsigned int *)(param_1 + 0x9ac),temp_v4);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 1:
      if (*(int *)(param_1 + 0xd4) == 2) {
        FUN_002bf810(0x1000179);
      }
      if (*(int *)(param_1 + 0xd4) == 0x2d) {
        FUN_002bf810(0x1000202);
      }
      if (*(int *)(param_1 + 0xd4) == 0x9c) {
        FUN_002bf810(0x1000201);
      }
      if (*(int *)(param_1 + 0xd4) == 0xf0) {
        FUN_002bf810(0x10001fe);
      }
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
      temp_v7 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x9ac));
      if ((temp_v7 == 2) && (*(int *)(param_1 + 0xd4) >= 0xf1)) {
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        *(unsigned int *)(param_1 + 0xd4) = 0;
        return;
      }
      break;
    case 2:
      temp_v7 = *(int *)(param_1 + 0xd4) + 1;
      *(int *)(param_1 + 0xd4) = temp_v7;
      if (temp_v7 >= 0x5b) {
        *(unsigned int *)(param_1 + 0xd0) = 3;
        *(unsigned int *)(param_1 + 0xd4) = 0;
        return;
      }
      break;
    case 3:
      FUN_002e8ba0();
      FUN_00277b5c(DAT_0049f91c,DAT_0049f920);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 4:
      *(unsigned int *)(param_1 + 0xd0) = 5;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 5:
      FUN_002dfea4();
      FUN_002eb184();
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 6:
      temp_v7 = *(int *)(param_1 + 0xd4) + 1;
      *(int *)(param_1 + 0xd4) = temp_v7;
      if (temp_v7 >= 10) {
        FUN_002648e8(param_1 + 0xec);
        FUN_00274798();
      }
      if (*(int *)(param_1 + 0xd4) == 0x14) {
        FUN_00276904();
      }
      if (*(int *)(param_1 + 0xd4) >= 0x1f) {
        temp_v4 = 1;
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        if (*(int *)(DAT_00447060 + 0xcc) == 1) {
          return;
        }
        temp_v7 = DAT_00447060;
        *(unsigned int *)(DAT_00447060 + 0xcc) = temp_v4;
        *(unsigned int *)(temp_v7 + 0xd0) = 0;
        *(unsigned int *)(temp_v7 + 0xd4) = 0;
        return;
      }
    }
  }
  return;
}
