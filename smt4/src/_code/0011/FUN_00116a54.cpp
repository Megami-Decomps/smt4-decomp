/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116a54` (_code @ 0x116a54, 0xb80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00124c60(...);
int FUN_002b75ec(...);
int FUN_002b7638(...);
int FUN_002b93c8(...);
int FUN_002bd82c(...);
int SBORROW4(...);

int FUN_00124d24(int);
int FUN_00126194(int);
int FUN_002ba12c(...);
int FUN_002bed3c(void);
int vec2GetYInt(...);
int FUN_002bedb0(...);
int FUN_002bee04(...);
int FUN_002bf288(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_002c1b64(...);
int FUN_002c39a4(unsigned int);
int VectorSignedToFloat(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern unsigned int g_titleScene; /* 0x44ea00 */
extern signed char DAT_00493828; /* 0x493828 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001247d0(unsigned int);
/* Supplied declaration required: FUN_00124c60. */
/* Supplied declaration required: FUN_00124d24. */
extern int FUN_00125e30(void);
/* Supplied declaration required: FUN_00126194. */
extern int FUN_001264c4(unsigned int);
extern int FUN_002b753c(unsigned int);
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002b7638. */
extern int asdTMTexTableCallFileB(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bd82c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: vec2GetYInt. */
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);
extern unsigned int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


char FUN_00116a54(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  
  temp_v4 = jobGetWork();
  if (((temp_v4 == DAT_0043e190) && (*(char *)(DAT_0043e190 + 0x7d) != '\0')) &&
     (*(char *)(DAT_0043e190 + 0x7f) != '\0')) {
    FUN_00124d24(1);
  }
  if (*(char *)(temp_v4 + 0x83) != '\0') {
    return '\0';
  }
  temp_v0 = *(char *)(temp_v4 + 8);
  temp_v11 = temp_v0 == '\0';
  if (temp_v11) {
    temp_v0 = *(char *)(temp_v4 + 0x35);
  }
  if (temp_v11 && temp_v0 == '\0') {
    return temp_v0;
  }
  temp_v5 = asdTMTexTableCallFileB(0xe,0);
  FUN_002c1b64(g_titleScene,*(unsigned int *)(temp_v5 + 8));
  FUN_002c39a4(g_titleScene);
  switch(*(unsigned char *)(temp_v4 + 9)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
  case 0x12:
    temp_v12 = 0.27f;
    FUN_002ba12c(g_titleScene);
    temp_v5 = (int)temp_v12;
    if (*(char *)(temp_v4 + 9) == '\a' || *(char *)(temp_v4 + 9) == '\t') {
      FUN_002bf538();
      temp_v6 = FUN_002c5d80(1,0);
      FUN_002bee04(g_titleScene,3,temp_v6);
      temp_v16 = 0;
      temp_v17 = 6;
      FUN_002bf288(2,0xe,0x106,0);
      FUN_002bedb0(g_titleScene,3);
      FUN_002bf538();
    }
    FUN_00126194(temp_v4);
    temp_v7 = *(unsigned int *)(temp_v4 + 0xc);
    if ((temp_v7 & 0x20) != 0) goto LAB_00117048;
    if (((temp_v4 == 0) || (temp_v7 = (unsigned int)*(unsigned char *)(temp_v4 + 8), temp_v7 != 4)) ||
       (temp_v7 = (unsigned int)*(unsigned char *)(temp_v4 + 0x5f), temp_v7 != 0)) {
      if (temp_v4 != 0) {
        temp_v7 = (unsigned int)*(unsigned char *)(temp_v4 + 8);
      }
      if (temp_v4 != 0 && temp_v7 != 0) {
        temp_v8 = FUN_001264c4(*(unsigned int *)(temp_v4 + 4));
        if ((temp_v8 != 0) || ((*(char *)(temp_v4 + 8) == '\x04' && (*(char *)(temp_v4 + 0x5f) != '\0'))))
        {
          temp_v6 = FUN_002c5d80(1,0);
          FUN_002bee04(g_titleScene,3,temp_v6);
          temp_v8 = vec2GetXInt(temp_v4 + 0x2f4);
          temp_v8 = temp_v8 + temp_v5;
          temp_v9 = vec2GetYInt(temp_v4 + 0x2f4);
          FUN_002bf538();
          FUN_002bed3c();
          temp_v0 = *(char *)(temp_v4 + 9);
          if (!(temp_v0 == '\a' || temp_v0 == '\b')) {
            if (temp_v0 != '\t') {
              if ((DAT_00493828 == '\0') || (*(char *)(temp_v4 + 0x5f) != '\0')) {
                temp_v16 = 0;
                temp_v17 = 0x13;
                FUN_002bf288(2,0xe,7,temp_v5);
                temp_v17 = 0x15;
                temp_v16 = temp_v9;
                FUN_002bf288(2,0xe,6,temp_v8);
              }
              else {
                temp_v17 = 0x13;
                temp_v16 = 0;
                FUN_002bf288(2,0xe,0x116,temp_v5);
                temp_v6 = packNibblesAndByte(6,1,0);
                FUN_002bee04(g_titleScene,6,temp_v6);
                FUN_002bf538();
                temp_v17 = 0x15;
                temp_v16 = 0;
                FUN_002bf288(2,0xe,0x117,temp_v8);
                FUN_002bf538();
                FUN_002bedb0(g_titleScene,6);
              }
            }
            else {
              temp_v10 = FUN_002bf4f8(0xe,0xe0);
              temp_v16 = (int)*(short *)(temp_v10 + 10);
              temp_v17 = 0x13;
              FUN_002bf288(2,0xe,0xdf,*(short *)(temp_v10 + 8) + temp_v5);
              temp_v16 = *(short *)(temp_v10 + 10) + temp_v9;
              temp_v17 = 0x15;
              FUN_002bf288(2,0xe,0xde,*(short *)(temp_v10 + 8) + temp_v8);
            }
          }
          else {
            temp_v10 = FUN_002bf4f8(0xe,0xe1);
            temp_v16 = (int)*(short *)(temp_v10 + 10);
            temp_v17 = 0x13;
            FUN_002bf288(2,0xe,0xdf,*(short *)(temp_v10 + 8) + temp_v5);
            temp_v16 = *(short *)(temp_v10 + 10) + temp_v9;
            temp_v17 = 0x15;
            FUN_002bf288(2,0xe,0xde,*(short *)(temp_v10 + 8) + temp_v8);
          }
          FUN_002bedb0(g_titleScene,3);
        }
        if ((*(unsigned int *)(temp_v4 + 0xc) & 0x20) != 0) goto LAB_00117048;
      }
    }
    if ((temp_v4 == 0) || (*(char *)(temp_v4 + 8) != '\x04')) goto LAB_00117048;
    if ((*(char *)(DAT_0043e190 + 8) != '\0') &&
       ((*(char *)(DAT_0043e190 + 0x5f) == '\0' && (*(char *)(DAT_0043e18c + 0x5f) == '\0')))) {
      temp_v8 = vec2GetXInt(temp_v4 + 0x2f4);
      vec2GetYInt(temp_v4 + 0x2f4);
      temp_v6 = FUN_002c5d80(1,0);
      FUN_002bee04(g_titleScene,3,temp_v6);
      FUN_002bf538();
      temp_v16 = (int)*(float *)(temp_v4 + 0xa30);
      temp_v17 = 0x1a;
      FUN_002bf288(2,0xe,0x182,temp_v5);
      temp_v6 = packNibblesAndByte(6,1,0);
      FUN_002bee04(g_titleScene,6,temp_v6);
      FUN_002bf538();
      temp_v16 = (int)*(float *)(temp_v4 + 0xa30);
      temp_v17 = 0x1a;
      FUN_002bf288(2,0xe,0x183,temp_v8 + temp_v5);
      FUN_002bedb0(g_titleScene,6);
      FUN_002bf538();
      goto LAB_00117044;
    }
    break;
  case 0xc:
    temp_v6 = FUN_002c5d80(1,0);
    FUN_002bee04(g_titleScene,3,temp_v6);
    FUN_002bf538();
    FUN_002bed3c();
    temp_v14 = 0x3e8a3d71;
    temp_v5 = 0;
    do {
      if (*(char *)(temp_v4 + temp_v5 + 0x37) != '\0') {
        temp_v12 = (float)temp_v14;
        FUN_002ba12c(g_titleScene);
        VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b93c8(temp_v4 + temp_v5 * 0x8c + 0x498);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
LAB_00117044:
    FUN_002bedb0(g_titleScene,3);
  default:
LAB_00117048:
    if (*(char *)(temp_v4 + 8) == '\0') {
      return '\0';
    }
  }
  switch(*(unsigned char *)(temp_v4 + 9)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
  case 0x12:
    temp_v5 = 0;
    temp_v8 = 0;
    switch(*(unsigned char *)(temp_v4 + 9)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x10:
    case 0x11:
    case 0x12:
      temp_v5 = 0x7d8;
      temp_v8 = 3;
      break;
    case 7:
    case 8:
      temp_v5 = 0x6b;
      temp_v8 = 7;
      break;
    case 9:
      temp_v5 = 0x69;
      temp_v8 = 8;
    }
    temp_v6 = FUN_002c5d80(1,0);
    FUN_002bee04(g_titleScene,3,temp_v6);
    if (*(char *)(temp_v4 + 8) == '\x01' || *(char *)(temp_v4 + 8) == '\x04') {
      temp_v9 = FUN_00125e30();
      if (temp_v9 != 0) {
        temp_v9 = FUN_002bf4f8(0xe,0x7d8);
        temp_v10 = 0;
        temp_v15 = 0x3f800000;
        temp_v6 = 0x3eccccce;
        temp_v16 = 0;
        temp_v17 = 0;
        temp_v18 = 0x3f800000;
        temp_v19 = 0x3eccccce;
        FUN_002c1b64(g_titleScene,0);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v9 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v9 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b7638(&temp_v16);
        temp_v9 = FUN_002bf4f8(0xe,0x7d9);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v9 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v9 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b7638(&temp_v16);
        temp_v16 = temp_v15;
        temp_v17 = temp_v10;
        temp_v18 = temp_v10;
        temp_v19 = temp_v6;
        temp_v9 = FUN_002bf4f8(0xe,0x7da);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v9 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v9 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b7638(&temp_v16);
        temp_v9 = FUN_002bf4f8(0xe,0x7db);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v9 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v9 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b7638(&temp_v16);
        temp_v16 = temp_v10;
        temp_v17 = temp_v15;
        temp_v18 = temp_v10;
        temp_v19 = temp_v6;
        temp_v9 = FUN_002bf4f8(0xe,0x42);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v9 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v9 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b7638(&temp_v16);
      }
      FUN_002bd82c(*(unsigned int *)(temp_v4 + 4),*(unsigned int *)(temp_v4 + 0x10));
      temp_v9 = 0;
      if (temp_v8 != 0) {
        temp_v14 = 0x3e8a3d7100000000;
        do {
          temp_v10 = FUN_002bf4f8(0xe,temp_v5 + temp_v9);
          temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
          FUN_002ba12c(g_titleScene);
          temp_v16 = 6;
          temp_v17 = temp_v9;
          FUN_002b75ec(*(unsigned int *)(temp_v4 + 4),(int)*(short *)(temp_v10 + 8) + (int)temp_v12);
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < temp_v8);
      }
      temp_v5 = FUN_001247d0(*(unsigned int *)(temp_v4 + 4));
      if (temp_v5 != 0) {
        temp_v5 = FUN_002bf4f8(0xe,0x42);
        temp_v12 = 0.27f;
        FUN_002ba12c(g_titleScene);
        temp_v13 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8) +
                                            (int)**(short **)(temp_v5 + 0xc) / 2,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00124c60(*(int *)(temp_v4 + 4),
                     (int)(temp_v13 + (temp_v12 - *(float *)(*(int *)(temp_v4 + 4) + 0x4c) * 0.5f)),
                     *(short *)(temp_v5 + 10) - 1,0x33);
      }
    }
    break;
  default:
    return '\0';
  case 0xc:
    temp_v6 = FUN_002c5d80(1,0);
    FUN_002bee04(g_titleScene,3,temp_v6);
    temp_v12 = 0.27f;
    FUN_002ba12c(g_titleScene);
    temp_v18 = FUN_002b753c(*(unsigned int *)(temp_v4 + 4));
    temp_v5 = FUN_002bf4f8(0xe,0x8e);
    temp_v1 = *(short *)(temp_v5 + 8);
    temp_v2 = *(short *)(temp_v5 + 10);
    temp_v3 = **(short **)(temp_v5 + 0xc);
    temp_v5 = 0;
    do {
      if (*(char *)(temp_v4 + temp_v5 + 0x37) != '\0') {
        temp_v10 = temp_v4 + temp_v5 * 0x8c;
        temp_v11 = (*(unsigned char *)(temp_v10 + 0x520) & *(unsigned char *)(temp_v10 + 0x51f)) != 0;
        temp_v8 = 0;
        temp_v9 = 0;
        if (temp_v11) {
          temp_v8 = temp_v18 - temp_v5;
          temp_v9 = temp_v18;
        }
        if ((temp_v11 && temp_v9 != temp_v5) && temp_v8 < 0 == (temp_v11 && SBORROW4(temp_v9,temp_v5))) {
          temp_v17 = (int)*(char *)(temp_v4 + temp_v5 + 0x3c);
          temp_v16 = 6;
          FUN_002b75ec(*(unsigned int *)(temp_v4 + 4),
                       (((int)*(short *)(temp_v10 + 0x4b0) + (int)temp_v1 + (int)temp_v3 / 2) -
                       (int)*(short *)(temp_v4 + temp_v5 * 2 + 0x4c) / 2) + (int)temp_v12,
                       (int)*(short *)(temp_v10 + 0x4b2) + (int)temp_v2,0x3d);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
  }
  FUN_002bedb0(g_titleScene,3);
  return '\0';
}

} /* extern "C" */
