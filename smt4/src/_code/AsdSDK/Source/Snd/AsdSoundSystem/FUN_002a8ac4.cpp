/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8ac4` (_code @ 0x2a8ac4, 0x690 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_002a8a58(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int cameraSetViewMatrix(...);
int FUN_002ba12c(...);
int FUN_002c1ac8(...);
int FUN_002c1b64(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spBC; /* 0xbc: local_bc */
} param_3_stack;

extern int g_titleScene; /* 0x44ea00 */
extern unsigned int DAT_00476628; /* 0x476628 */
extern unsigned int DAT_004d46ac; /* 0x4d46ac */
extern unsigned int DAT_004d46bc; /* 0x4d46bc */
extern unsigned int DAT_004d46cc; /* 0x4d46cc */
extern unsigned int DAT_004d46dc; /* 0x4d46dc */
extern signed char DAT_004d46fd; /* 0x4d46fd */
extern signed char DAT_004d4910; /* 0x4d4910 */
extern signed char DAT_004d4911; /* 0x4d4911 */
extern float g_asdSoundListener; /* 0x4efd2c */
extern float DAT_004efd30; /* 0x4efd30 */
extern float DAT_004efd34; /* 0x4efd34 */

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
/* Supplied declaration required: FUN_002a8a58. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: cameraSetViewMatrix. */
/* Supplied declaration required: FUN_002ba12c. */
extern int __cxa_guard_acquire(unsigned int *);
extern unsigned int FUN_002c15ac(unsigned int);
extern unsigned int FUN_002c15d4(unsigned int);
/* Supplied declaration required: FUN_002c1ac8. */
/* Supplied declaration required: FUN_002c1b64. */


unsigned int FUN_002a8ac4(unsigned short *param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  unsigned char temp_v22 [148];
  
  temp_v19 = 0.0f;
  if (((DAT_00476628 & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&DAT_00476628), temp_v3 != 0)) {
    g_asdSoundListener = temp_v19;
    DAT_004efd30 = temp_v19;
    DAT_004efd34 = temp_v19;
  }
  temp_v16 = CONCAT44(DAT_004efd30,g_asdSoundListener);
  temp_v4 = 0;
  switch(*(unsigned char *)(*(int *)(param_3 + 4) + 5)) {
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
  temp_v5 = 0;
  temp_v17 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  switch(*(unsigned char *)(*(int *)(param_3 + 4) + 6)) {
  case 0:
    temp_v5 = 8;
    break;
  case 1:
    temp_v5 = 0x10;
    break;
  case 2:
    temp_v5 = 0x20;
    break;
  case 3:
    temp_v5 = 0x40;
    break;
  case 4:
    temp_v5 = 0x80;
    break;
  case 5:
    temp_v5 = 0x100;
    break;
  case 6:
    temp_v5 = 0x200;
    break;
  case 7:
    temp_v5 = 0x400;
  }
  temp_v18 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1 == (unsigned short *)0x0) || ((*param_2 & 0x20000) != 0)) {
    temp_v7 = param_2[9];
    temp_v10 = param_2[10];
    temp_v8 = param_2[7];
    temp_v9 = param_2[8];
  }
  else if ((*param_2 & 0x10000) != 0) {
    temp_v8 = (unsigned int)param_1[1];
    temp_v7 = (unsigned int)*param_1;
    temp_v9 = (param_1[3] & 0xffff7fff) * (unsigned int)*(unsigned short *)((int)param_2 + 0x2e) + temp_v8;
    temp_v10 = (param_1[2] & 0xffff7fff) * (unsigned int)(unsigned short)param_2[0xb] + temp_v7;
  }
  else {
    temp_v8 = (unsigned int)param_1[1];
    temp_v7 = (unsigned int)*param_1;
    temp_v9 = (param_1[3] & 0xffff7fff) + temp_v8;
    temp_v10 = temp_v7 + (param_1[2] & 0xffff7fff);
  }
  VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = *param_2;
  VectorSignedToFloat(temp_v10 - temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9 - temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = 0;
  if (((temp_v6 & 0x8000) == 0) && (param_1 != (unsigned short *)0x0)) {
    temp_v14 = (float)VectorUnsignedToFloat(param_1[2] & 0xffff7fff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(param_1[3] & 0xffff7fff,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else {
    temp_v14 = (float)VectorUnsignedToFloat(param_2[5],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(param_2[6],(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if ((((temp_v6 & 1) - 1) & (unsigned int)param_1) != 0) {
    if ((temp_v6 & 2) != 0) {
      temp_v3 = (int)(short)param_1[5] + param_2[2];
      temp_v7 = VectorSignedToFloat((int)(short)param_1[4] + param_2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = (unsigned long long)temp_v7;
      temp_v4 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = romwright_piece_4_4(temp_v4,(int)temp_v16);
    }
  }
  else {
    temp_v7 = param_2[1];
    temp_v9 = param_2[2];
    temp_v4 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    if ((temp_v6 & 0x1000000) != 0) {
      temp_v4 = VectorSignedToFloat(temp_v7 - ((param_1[2] & 0xffff7fff) >> 1),
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if ((temp_v6 & 0x2000000) != 0) {
      temp_v4 = VectorSignedToFloat(temp_v7 - (param_1[2] & 0xffff7fff),(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if ((temp_v6 & 0x4000000) != 0) {
      temp_v5 = VectorSignedToFloat(temp_v9 - ((param_1[3] & 0xffff7fff) >> 1),
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v16 = romwright_piece_4_4(temp_v5,temp_v4);
    if ((temp_v6 & 0x8000000) != 0) {
      temp_v3 = temp_v9 - (param_1[3] & 0xffff7fff);
      temp_v4 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = romwright_piece_4_4(temp_v4,(int)temp_v16);
    }
  }
  temp_v21 = 0.00390625f;
  temp_v12 = (float)VectorSignedToFloat(0x100 - param_2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v20 = CONCAT44(temp_v12 * 0.00390625f,temp_v19);
  if ((temp_v6 & 0x40000000) == 0) {
    FUN_002c1b64(g_titleScene,*(unsigned int *)(param_3 + 8),temp_v8);
  }
  puVar13 = (unsigned int *)0x0;
  puVar14 = (unsigned int *)0x0;
  puVar11 = (unsigned int *)0x0;
  puVar12 = (unsigned int *)0x0;
  if (DAT_004d46fd != '\0') {
    puVar13 = &DAT_004d46ac;
    puVar14 = &DAT_004d46bc;
    puVar11 = &DAT_004d46cc;
    puVar12 = &DAT_004d46dc;
  }
  if ((*param_2 & 0x80000000) != 0) {
    temp_v14 = temp_v17;
    temp_v15 = temp_v18;
    temp_v4 = FUN_002c15ac(*(unsigned int *)(g_titleScene + 0x528));
    temp_v12 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = FUN_002c15d4(*(unsigned int *)(g_titleScene + 0x528));
    temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v12) << 0x1f) |
            ((unsigned int)(temp_v17 == temp_v12) << 0x1e);
    temp_v8 = temp_v7 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v12 != temp_v12)) << 0x1c);
    temp_v17 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(temp_v8 >> 0x16) & 3);
    temp_v1 = (unsigned char)(temp_v7 >> 0x18);
    temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 < temp_v17) << 0x1f) |
            ((unsigned int)(temp_v18 == temp_v17) << 0x1e);
    in_fpscr = temp_v7 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v17 != temp_v17)) << 0x1c);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v8 >> 0x1c) & 1)) {
      temp_v14 = temp_v12;
    }
    temp_v1 = (unsigned char)(temp_v7 >> 0x18);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v15 = temp_v17;
    }
  }
  temp_v11 = (*param_2 & 0x10) == 0;
  if (!temp_v11) {
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_2[0xc] == (float)temp_v20) << 0x1e);
    temp_v11 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
  }
  if (!temp_v11) {
    temp_v3 = (int)(float)temp_v16;
    temp_v13 = (int)(float)(temp_v16 >> 0x20);
    temp_v0 = (short)param_2[0xd];
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v3 = (int)(short)param_2[0xe];
        }
      }
      else {
        temp_v19 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (int)(temp_v19 + temp_v14);
      }
    }
    else {
      temp_v19 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (int)(temp_v19 + temp_v14 * 0.5f);
    }
    temp_v0 = *(short *)((int)param_2 + 0x36);
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v13 = (int)*(short *)((int)param_2 + 0x3a);
        }
      }
      else {
        temp_v19 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19 = temp_v19 + temp_v15;
        temp_v13 = (int)temp_v19;
      }
    }
    else {
      temp_v19 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = temp_v19 + temp_v15 * 0.5f;
      temp_v13 = (int)temp_v19;
    }
    VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002a8a58(temp_v22,temp_v13);
    temp_v19 = (float)param_2[0xc];
    temp_v2 = 1;
  }
  if (DAT_004d4910 != '\0') {
    temp_v17 = (float)((unsigned long long)temp_v20 >> 0x20);
    temp_v8 = param_2[3];
    temp_v7 = *param_2 & 0x400000;
    if ((*param_2 & 0x800000) != 0) {
      temp_v9 = param_2[4];
      if (temp_v7 != 0) {
        temp_v7 = (unsigned int)*(unsigned char *)((int)param_1 + 0x11);
        temp_v9 = temp_v9 + temp_v7;
      }
      if ((int)temp_v9 >= 0x101) {
        temp_v9 = 0x100;
        temp_v7 = temp_v9;
      }
    }
    else {
      temp_v9 = temp_v8;
      if ((temp_v7 != 0) && (param_1 != (unsigned short *)0x0)) {
        temp_v9 = (unsigned int)*(unsigned char *)((int)param_1 + 0x11);
        temp_v7 = temp_v9;
      }
    }
    if (temp_v8 != temp_v9) {
      temp_v7 = 0x100 - temp_v9;
      temp_v17 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = temp_v17 * temp_v21;
    }
    FUN_002ba12c(g_titleScene,temp_v7);
    temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 == (float)temp_v20) << 0x1e);
    if (DAT_004d4911 != '\0') {
      VectorSignedToFloat((int)temp_v17,(unsigned char)(temp_v7 >> 0x16) & 3);
    }
    if (!romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0)) {
      FUN_002b70cc();
      FUN_002b7064();
    }
  }
  FUN_002c1ac8(puVar13,puVar14,puVar11,puVar12);
  if (temp_v2) {
    cameraSetViewMatrix(g_titleScene,temp_v22);
  }
  return 1;
}

} /* extern "C" */
