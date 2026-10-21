/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019b770` (_code @ 0x19b770, 0x700 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001640cc(...);
int FUN_0016c4b8(...);
int FUN_001879d0(...);
int camSetMatrixA(...);
int FUN_0019ac70(...);
int FUN_0019f678(...);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_4_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_005c4c20; /* 0x5c4c20 */
extern unsigned int DAT_00630724; /* 0x630724 */
extern unsigned int DAT_00630734; /* 0x630734 */
extern unsigned int DAT_00630744; /* 0x630744 */
extern unsigned int DAT_00630754; /* 0x630754 */
extern signed char DAT_00630775; /* 0x630775 */
extern unsigned char g_asdSoundOptions; /* 0x6308f8 */
extern signed char DAT_00630988; /* 0x630988 */
extern float g_asdSoundListener; /* 0x64c014 */
extern float DAT_0064c018; /* 0x64c018 */
extern float DAT_0064c01c; /* 0x64c01c */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001640cc. */
extern unsigned int asdGxPresetsGetByKind(unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned int FUN_00184df8(unsigned int);
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: camSetMatrixA. */
/* Supplied declaration required: FUN_0019ac70. */
/* Supplied declaration required: FUN_0019f678. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
extern int __cxa_guard_acquire(unsigned int *);


unsigned int FUN_0019b770(unsigned short *param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  int temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  unsigned int *temp_v21;
  unsigned char temp_v22 [72];
  int temp_v23;
  unsigned char *temp_v24;
  
  temp_v18 = 0.0f;
  if (((DAT_005c4c20 & 1) == 0) && (temp_v2 = __cxa_guard_acquire(&DAT_005c4c20), temp_v2 != 0)) {
    g_asdSoundListener = temp_v18;
    DAT_0064c018 = temp_v18;
    DAT_0064c01c = temp_v18;
  }
  temp_v15 = CONCAT44(DAT_0064c018,g_asdSoundListener);
  temp_v3 = 0;
  switch(*(unsigned char *)(*(int *)(param_3 + 4) + 5)) {
  case 0:
    temp_v3 = 8;
    break;
  case 1:
    temp_v3 = 0x10;
    break;
  case 2:
    temp_v3 = 0x20;
    break;
  case 3:
    temp_v3 = 0x40;
    break;
  case 4:
    temp_v3 = 0x80;
    break;
  case 5:
    temp_v3 = 0x100;
    break;
  case 6:
    temp_v3 = 0x200;
    break;
  case 7:
    temp_v3 = 0x400;
  }
  temp_v4 = 0;
  temp_v16 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  switch(*(unsigned char *)(*(int *)(param_3 + 4) + 6)) {
  case 0:
    temp_v4 = 8;
    break;
  case 1:
    temp_v4 = 0x10;
    break;
  case 2:
    temp_v4 = 0x20;
    break;
  case 3:
    temp_v4 = 0x40;
    break;
  case 4:
    temp_v4 = 0x80;
    break;
  case 5:
    temp_v4 = 0x100;
    break;
  case 6:
    temp_v4 = 0x200;
    break;
  case 7:
    temp_v4 = 0x400;
  }
  temp_v17 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1 == (unsigned short *)0x0) || ((*param_2 & 0x20000) != 0)) {
    temp_v6 = param_2[7];
    temp_v7 = param_2[8];
    temp_v8 = param_2[9];
    temp_v9 = param_2[10];
  }
  else if ((*param_2 & 0x10000) != 0) {
    temp_v6 = (unsigned int)param_1[1];
    temp_v8 = (unsigned int)*param_1;
    temp_v7 = (param_1[3] & 0xffff7fff) * (unsigned int)*(unsigned short *)((int)param_2 + 0x2e) + temp_v6;
    temp_v9 = (param_1[2] & 0xffff7fff) * (unsigned int)(unsigned short)param_2[0xb] + temp_v8;
  }
  else {
    temp_v6 = (unsigned int)param_1[1];
    temp_v8 = (unsigned int)*param_1;
    temp_v7 = (param_1[3] & 0xffff7fff) + temp_v6;
    temp_v9 = temp_v8 + (param_1[2] & 0xffff7fff);
  }
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = *param_2;
  VectorSignedToFloat(temp_v9 - temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v7 - temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (unsigned int)((temp_v5 & 0x2000) != 0);
  if ((param_1 != (unsigned short *)0x0) && (temp_v8 = (unsigned int)param_1[3], (param_1[3] & 0x8000) != 0)) {
    temp_v6 = temp_v6 ^ 1;
  }
  temp_v23 = 0;
  if (((temp_v5 & 0x8000) == 0) && (param_1 != (unsigned short *)0x0)) {
    temp_v6 = param_1[2] & 0xffff7fff;
    temp_v13 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorUnsignedToFloat(param_1[3] & 0xffff7fff,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else {
    temp_v13 = (float)VectorUnsignedToFloat(param_2[5],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorUnsignedToFloat(param_2[6],(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if ((((temp_v5 & 1) - 1) & (unsigned int)param_1) != 0) {
    if ((temp_v5 & 2) != 0) {
      temp_v8 = (unsigned int)(short)param_1[5];
      temp_v6 = temp_v8 + param_2[2];
      temp_v7 = VectorSignedToFloat((int)(short)param_1[4] + param_2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (unsigned long long)temp_v7;
      temp_v7 = temp_v6;
      temp_v3 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = romwright_piece_4_4(temp_v3,(int)temp_v15);
    }
  }
  else {
    temp_v7 = param_2[1];
    temp_v6 = param_2[2];
    temp_v3 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    if ((temp_v5 & 0x1000000) != 0) {
      temp_v8 = temp_v7 - ((param_1[2] & 0xffff7fff) >> 1);
      temp_v3 = VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if ((temp_v5 & 0x2000000) != 0) {
      temp_v8 = param_1[2] & 0xffff7fff;
      temp_v3 = VectorSignedToFloat(temp_v7 - temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if ((temp_v5 & 0x4000000) != 0) {
      temp_v4 = VectorSignedToFloat(temp_v6 - ((param_1[3] & 0xffff7fff) >> 1),
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v15 = romwright_piece_4_4(temp_v4,temp_v3);
    if ((temp_v5 & 0x8000000) != 0) {
      temp_v7 = temp_v6 - (param_1[3] & 0xffff7fff);
      temp_v3 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = romwright_piece_4_4(temp_v3,(int)temp_v15);
    }
  }
  temp_v20 = 0.00390625f;
  temp_v11 = (float)VectorSignedToFloat(0x100 - param_2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = CONCAT44(temp_v11 * 0.00390625f,temp_v18);
  if ((temp_v5 & 0x40000000) == 0 && param_4 == 0) {
    FUN_0016c4b8(g_renderCtx,*(unsigned int *)(param_3 + 8),temp_v6,temp_v8);
  }
  puVar12 = (unsigned int *)0x0;
  temp_v21 = (unsigned int *)0x0;
  puVar10 = (unsigned int *)0x0;
  puVar11 = (unsigned int *)0x0;
  if (DAT_00630775 != '\0') {
    temp_v21 = &DAT_00630724;
    puVar12 = &DAT_00630734;
    puVar10 = &DAT_00630744;
    puVar11 = &DAT_00630754;
  }
  if ((*param_2 & 0x80000000) != 0) {
    temp_v13 = temp_v16;
    temp_v14 = temp_v17;
    temp_v3 = FUN_00184df8(*(unsigned int *)(g_renderCtx + 0x52c));
    temp_v11 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = asdGxPresetsGetByKind(*(unsigned int *)(g_renderCtx + 0x52c));
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v11) << 0x1f) |
            ((unsigned int)(temp_v16 == temp_v11) << 0x1e);
    temp_v7 = temp_v6 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v11 != temp_v11)) << 0x1c);
    temp_v16 = (float)VectorUnsignedToFloat(temp_v3,(unsigned char)(temp_v7 >> 0x16) & 3);
    temp_v1 = (unsigned char)(temp_v6 >> 0x18);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v16) << 0x1f) |
            ((unsigned int)(temp_v17 == temp_v16) << 0x1e);
    in_fpscr = temp_v6 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v16 != temp_v16)) << 0x1c);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v7 >> 0x1c) & 1)) {
      temp_v13 = temp_v11;
    }
    temp_v1 = (unsigned char)(temp_v6 >> 0x18);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v14 = temp_v16;
    }
  }
  temp_v10 = (*param_2 & 0x10) == 0;
  if (!temp_v10) {
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_2[0xc] == (float)temp_v19) << 0x1e);
    temp_v10 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
  }
  if (!temp_v10) {
    temp_v2 = (int)(float)temp_v15;
    temp_v12 = (int)(float)(temp_v15 >> 0x20);
    temp_v0 = (short)param_2[0xd];
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v2 = (int)(short)param_2[0xe];
        }
      }
      else {
        temp_v18 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = (int)(temp_v18 + temp_v13);
      }
    }
    else {
      temp_v18 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (int)(temp_v18 + temp_v13 * 0.5f);
    }
    temp_v0 = *(short *)((int)param_2 + 0x36);
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v12 = (int)*(short *)((int)param_2 + 0x3a);
        }
      }
      else {
        temp_v18 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = (int)(temp_v18 + temp_v14);
      }
    }
    else {
      temp_v18 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (int)(temp_v18 + temp_v14 * 0.5f);
    }
    VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0019ac70(temp_v22,temp_v2,temp_v12);
    temp_v23 = 1;
    temp_v18 = (float)param_2[0xc];
  }
  temp_v24 = &g_asdSoundOptions;
  if (DAT_00630988 != '\0') {
    if (param_4 != 0) {
      FUN_0019f678(param_4,*(unsigned int *)(param_3 + 8),temp_v21,puVar12,puVar10,puVar11);
      if (temp_v23 != 0) {
        camSetMatrixA(g_renderCtx,temp_v22);
      }
      return 1;
    }
    temp_v16 = (float)((unsigned long long)temp_v19 >> 0x20);
    temp_v6 = param_2[3];
    temp_v7 = *param_2 & 0x400000;
    if ((*param_2 & 0x800000) != 0) {
      temp_v8 = param_2[4];
      if (temp_v7 != 0) {
        temp_v8 = temp_v8 + *(unsigned char *)((int)param_1 + 0x11);
      }
      if ((int)temp_v8 >= 0x101) {
        temp_v8 = 0x100;
      }
    }
    else {
      temp_v8 = temp_v6;
      if ((temp_v7 != 0) && (param_1 != (unsigned short *)0x0)) {
        temp_v8 = (unsigned int)*(unsigned char *)((int)param_1 + 0x11);
      }
    }
    if (temp_v6 != temp_v8) {
      temp_v6 = 0x100 - temp_v8;
      temp_v16 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = temp_v16 * temp_v20;
    }
    FUN_001879d0(g_renderCtx,temp_v6);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 == (float)temp_v19) << 0x1e);
    if (temp_v24[0x91] != '\0') {
      VectorSignedToFloat((int)temp_v16,(unsigned char)(temp_v6 >> 0x16) & 3);
    }
    if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1e,0)) {
      FUN_001a1ee0();
      FUN_001b63b0();
    }
  }
  else if (param_4 != 0) {
    FUN_0019f678(param_4,*(unsigned int *)(param_3 + 8),temp_v21,puVar12,puVar10,puVar11);
    if (temp_v23 != 0) {
      camSetMatrixA(g_renderCtx,temp_v22);
    }
    return 1;
  }
  FUN_001640cc(temp_v21,puVar12,puVar10,puVar11);
  if (temp_v23 != 0) {
    camSetMatrixA(g_renderCtx,temp_v22);
  }
  return 1;
}

} /* extern "C" */
