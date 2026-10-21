/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d98c` (_code @ 0x48d98c, 0xa6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00183bb0(void);

int FUN_0014e314(...);
int FUN_001692ac(...);
int FUN_0016c4b8(...);
int FUN_0016c69c(...);
int FUN_0016c6f0(...);
int FUN_001835b4(...);
int drawSetColorFromRGBA8(...);
int FUN_00185dd4(...);
int effectSetByteSpeed(...);
int words2Copy(int, float *);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_1_stack;

extern unsigned int DAT_00587f24; /* 0x587f24 */
extern int g_renderCtx; /* 0x59dbb4 */
extern int DAT_005f1c5c; /* 0x5f1c5c */
extern signed char DAT_005f1c60; /* 0x5f1c60 */
extern unsigned char DAT_00616ee4; /* 0x616ee4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_001692ac. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00185dd4. */
extern int gameFlagIsSet(unsigned int);
extern int gameOwnedBitTest(unsigned int);
/* Supplied declaration required: effectSetByteSpeed. */
/* Supplied declaration required: words2Copy. */


void FUN_0048d98c(int param_1)

{
/* irregular: 6 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int *puVar8;
  int *piVar9;
  int *piVar10;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15 [30];
  int temp_v16;
  
  words2Copy(param_1 + 0x4d0,&temp_v13);
  piVar10 = (int *)(param_1 + 0x84f4);
  temp_v7 = 0;
  temp_v4 = *piVar10;
  temp_v6 = 0;
  if (0 < temp_v4) {
    do {
      temp_v2 = temp_v6 + 1;
      temp_v15[temp_v7] = (unsigned int)*(unsigned char *)(param_1 + temp_v6 * 100 + 0x7b98);
      temp_v7 = temp_v7 + 1;
      temp_v6 = temp_v2;
    } while (temp_v2 < temp_v4);
  }
  temp_v6 = 0;
  piVar9 = (int *)(param_1 + 0x204f8);
  temp_v16 = 0;
  if (0 < temp_v7) {
    do {
      temp_v4 = g_renderCtx;
      if (DAT_005f1c5c == 0) {
        temp_v2 = FUN_001692ac(1);
        piVar7 = (int *)(temp_v4 + 0x1258);
        temp_v1 = *piVar7;
        temp_v5 = piVar7[temp_v1 + 2];
        *piVar7 = temp_v1 + 1;
        piVar7[temp_v1 + 3] = temp_v2;
        if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v5 != temp_v2) {
          (**(romwright_code **)(temp_v4 + 0x1274))();
          *(unsigned char *)(temp_v4 + 0x1270) = 0;
        }
        FUN_0016c4b8(g_renderCtx,0);
        temp_v12 = 0;
        temp_v4 = temp_v16;
        temp_v2 = temp_v16;
        if (temp_v16 < *piVar9) {
          do {
            temp_v1 = param_1 + temp_v4 * 0x30;
            temp_v2 = *(int *)(temp_v1 + 0x8500);
            if (((temp_v2 != 0x1d3 && temp_v2 != 0x1d4) && (temp_v2 != 0x1d5 && temp_v2 != 0x1d6)) &&
               (temp_v2 != 0x1d2 && temp_v2 != 0x1d1)) {
              temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x84fa);
              temp_v2 = temp_v4;
              if (temp_v15[temp_v6] != temp_v3) break;
              if (((temp_v3 != 0xbb) && (temp_v3 != 0xbc && temp_v3 != 0xbd)) &&
                 (temp_v3 != 0xbe && temp_v3 != 0xa6)) {
                temp_v8 = *(char *)(temp_v1 + 0x84f8) != '\0';
                temp_v0 = '\0';
                if (temp_v8) {
                  temp_v0 = *(char *)(temp_v1 + 0x84f9);
                }
                if (temp_v8 && temp_v0 != '\0') {
                  VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x8514),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorUnsignedToFloat
                            (*(unsigned int *)(temp_v1 + 0x8520),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x8518),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorUnsignedToFloat
                            (*(unsigned int *)(temp_v1 + 0x851c),(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_0014e314(temp_v12);
                }
              }
            }
            temp_v4 = temp_v4 + 1;
            temp_v2 = temp_v16;
          } while (temp_v4 < *piVar9);
        }
        temp_v16 = temp_v2;
        temp_v4 = g_renderCtx;
        piVar7 = (int *)(g_renderCtx + 0x1258);
        temp_v2 = *piVar7;
        temp_v1 = piVar7[temp_v2 + 2];
        *piVar7 = temp_v2 - 1;
        if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v1 != piVar7[temp_v2 + 1]) {
          (**(romwright_code **)(temp_v4 + 0x1274))();
          *(unsigned char *)(temp_v4 + 0x1270) = 0;
        }
      }
      temp_v4 = g_renderCtx;
      temp_v2 = FUN_001692ac(3,0);
      piVar7 = (int *)(temp_v4 + 0x1258);
      temp_v1 = *piVar7;
      temp_v5 = piVar7[temp_v1 + 2];
      *piVar7 = temp_v1 + 1;
      piVar7[temp_v1 + 3] = temp_v2;
      if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v5 != temp_v2) {
        (**(romwright_code **)(temp_v4 + 0x1274))();
        *(unsigned char *)(temp_v4 + 0x1270) = 0;
      }
      temp_v4 = 0;
      if (temp_v4 < *piVar10) {
        do {
          temp_v2 = param_1 + temp_v4 * 100;
          if (*(short *)(temp_v2 + 0x7bc8) != 0) {
            drawSetColorFromRGBA8(*(unsigned int *)(temp_v2 + 0x7bdc));
            effectSetByteSpeed(*(unsigned int *)(temp_v2 + 0x7bdc) & 0xff);
            temp_v1 = gameFlagIsSet(0x3b);
            if (((temp_v1 == 0) || (*(unsigned char *)(temp_v2 + 0x7b98) != 0xa6)) &&
               (temp_v15[temp_v6] == (unsigned int)*(unsigned char *)(temp_v2 + 0x7b98))) {
              temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x7bd0),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x7bcc),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_00185dd4(9,*(unsigned int *)(temp_v2 + 0x7b94),*(unsigned short *)(temp_v2 + 0x7bca),
                           (int)(temp_v10 + temp_v13),(int)(temp_v9 + temp_v14),
                           *(unsigned int *)(temp_v2 + 0x7bd4),*(unsigned int *)(temp_v2 + 0x7bd8),
                           temp_v4 * 2 + 0xb);
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *piVar10);
      }
      temp_v4 = g_renderCtx;
      piVar7 = (int *)(g_renderCtx + 0x1258);
      temp_v2 = *piVar7;
      temp_v1 = piVar7[temp_v2 + 2];
      *piVar7 = temp_v2 - 1;
      if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v1 != piVar7[temp_v2 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x1274))(piVar7[temp_v2 + 1]);
        *(unsigned char *)(temp_v4 + 0x1270) = 0;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v7);
  }
  if (DAT_005f1c60 != '\0') {
    temp_v12 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v12);
    FUN_0016c4b8(g_renderCtx,0);
    temp_v6 = 0;
    if (0 < *piVar9) {
LAB_0048ddd4:
      temp_v4 = param_1 + temp_v6 * 0x30;
      temp_v8 = *(char *)(temp_v4 + 0x84f8) != '\0';
      temp_v0 = '\0';
      if (temp_v8) {
        temp_v0 = *(char *)(temp_v4 + 0x84f9);
      }
      if (temp_v8 && temp_v0 != '\0') {
        temp_v7 = *(int *)(temp_v4 + 0x8500);
        if (temp_v7 == -1) {
          temp_v12 = 0x8080ff80;
        }
        else {
          temp_v12 = 0xff808080;
          if ((int)DAT_00587f24 < 1) {
            temp_v3 = 0;
          }
          else {
            temp_v3 = DAT_00587f24 & 1;
            temp_v2 = 0;
            if (temp_v3 != 0) {
              do {
                if (*(int *)(&DAT_00616ee4 + temp_v2 * 4) == temp_v7) goto LAB_0048de78;
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < (int)temp_v3);
            }
          }
          for (; (int)temp_v3 < (int)DAT_00587f24; temp_v3 = temp_v3 + 2) {
            if ((*(int *)(&DAT_00616ee4 + temp_v3 * 4) == temp_v7) ||
               (*(int *)(temp_v3 * 4 + 0x616ee8) == temp_v7)) {
              temp_v12 = 0x80ff8080;
              break;
            }
          }
        }
        VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x8520),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8514),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8518),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x851c),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_0014e314(temp_v12);
      }
      else if ((int)*(short *)(temp_v4 + 0x84fe) == (int)*(char *)(param_1 + 100)) {
        temp_v7 = *(int *)(temp_v4 + 0x8500);
        if (temp_v7 == -1) {
          temp_v12 = 0x8080ff40;
        }
        else {
          temp_v12 = 0xff808040;
          if ((int)DAT_00587f24 < 1) {
            temp_v3 = 0;
          }
          else {
            temp_v3 = DAT_00587f24 & 1;
            temp_v2 = 0;
            if (temp_v3 != 0) {
              do {
                if (*(int *)(&DAT_00616ee4 + temp_v2 * 4) == temp_v7) goto LAB_0048df64;
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < (int)temp_v3);
            }
          }
          for (; (int)temp_v3 < (int)DAT_00587f24; temp_v3 = temp_v3 + 2) {
            if ((*(int *)(&DAT_00616ee4 + temp_v3 * 4) == temp_v7) ||
               (*(int *)(temp_v3 * 4 + 0x616ee8) == temp_v7)) {
              temp_v12 = 0x80ff8080;
              break;
            }
          }
        }
        VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8518),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8514),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x8520),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x851c),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_0014e314(temp_v12);
      }
      goto LAB_0048dfb4;
    }
LAB_0048dfc4:
    FUN_0016c69c(g_renderCtx,3);
  }
  temp_v12 = FUN_001692ac(1,0);
  FUN_0016c6f0(g_renderCtx,3,temp_v12);
  temp_v6 = 0;
  if (0 < *(int *)(param_1 + 0x7b8c)) {
    temp_v11 = 0x40400000;
    do {
      temp_v4 = param_1 + temp_v6 * 100;
      puVar8 = (unsigned int *)(temp_v4 + 0x178c);
      if (*(short *)(temp_v4 + 0x17c0) != 0) {
        drawSetColorFromRGBA8(*(unsigned int *)(temp_v4 + 0x17d4));
        effectSetByteSpeed(*(unsigned int *)(temp_v4 + 0x17d4) & 0xff);
        if (*(char *)(temp_v4 + 0x17dc) != '\0') {
          *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffff66;
          effectSetByteSpeed(0x66);
        }
        if (*(short *)(temp_v4 + 0x17c2) == 0x1bc8 || *(short *)(temp_v4 + 0x17c2) == 0x1bc9) {
          *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
          drawSetColorFromRGBA8(0xffffffff);
          effectSetByteSpeed(*(unsigned int *)(temp_v4 + 0x17d4) & 0xff);
        }
        if (*(short *)(temp_v4 + 0x17c2) == 0x1bd2) {
          if (*(int *)(param_1 + 0x4c0) != 0) {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffff00;
            effectSetByteSpeed(0);
          }
          else {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
            effectSetByteSpeed(0xff);
            temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001835b4(9,*puVar8,0x1bd3,(int)((temp_v10 + temp_v13) - (float)temp_v11),
                         (int)((temp_v9 + temp_v14) - (float)temp_v11),0xb);
          }
        }
        if (*(short *)(temp_v4 + 0x17c2) == 0x1bd4) {
          if (*(int *)(param_1 + 0x4c0) != 0) {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffff00;
            effectSetByteSpeed(0);
          }
          else {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
            effectSetByteSpeed(0xff);
            temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001835b4(9,*puVar8,0x1bd5,(int)((temp_v10 + temp_v13) - (float)temp_v11),
                         (int)((temp_v9 + temp_v14) - (float)temp_v11),0xb);
          }
        }
        if (*(short *)(temp_v4 + 0x17c2) == 0x1bd6) {
          if (*(int *)(param_1 + 0x4c0) != 0) {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffff00;
            effectSetByteSpeed(0);
          }
          else {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
            effectSetByteSpeed(0xff);
            temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001835b4(9,*puVar8,0x1bd7,(int)((temp_v10 + temp_v13) - (float)temp_v11),
                         (int)((temp_v9 + temp_v14) - (float)temp_v11),0xb);
          }
        }
        if (*(short *)(temp_v4 + 0x17c2) == 0x1bd8) {
          if (*(int *)(param_1 + 0x4c0) != 0) {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffff00;
            effectSetByteSpeed(0);
          }
          else {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
            effectSetByteSpeed(0xff);
            temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001835b4(9,*puVar8,0x1bd9,(int)((temp_v10 + temp_v13) - (float)temp_v11),
                         (int)((temp_v9 + temp_v14) - (float)temp_v11),0xb);
          }
        }
        if (*(unsigned char *)(temp_v4 + 0x1791) == 0xff) {
          temp_v7 = gameOwnedBitTest(*(unsigned int *)(temp_v4 + 0x17e8));
          if (temp_v7 == 0) {
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffff88;
            temp_v12 = 0x88;
          }
          else {
            temp_v12 = 0xff;
            *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
          }
          effectSetByteSpeed(temp_v12);
        }
        temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        if (*(unsigned char *)(temp_v4 + 0x1791) != 0xfd) {
          temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c4),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00185dd4(9,*puVar8,*(unsigned short *)(temp_v4 + 0x17c2),(int)(temp_v10 + temp_v13),
                       (int)(temp_v9 + temp_v14),*(unsigned int *)(temp_v4 + 0x17cc),
                       *(unsigned int *)(temp_v4 + 0x17d0),0xb);
        }
        else {
          temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x17c4),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001835b4(9,*puVar8,*(unsigned short *)(temp_v4 + 0x17c2),(int)(temp_v10 + temp_v13),
                       (int)(temp_v9 + temp_v14),0xb);
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < *(int *)(param_1 + 0x7b8c));
  }
  FUN_00183bb0();
  FUN_0016c69c(g_renderCtx,3);
  return;
LAB_0048de78:
  temp_v12 = 0x80ff8080;
  VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x8520),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8514),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8518),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x851c),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0014e314(temp_v12);
LAB_0048dfb4:
  temp_v6 = temp_v6 + 1;
  if (*piVar9 <= temp_v6) goto LAB_0048dfc4;
  goto LAB_0048ddd4;
LAB_0048df64:
  temp_v12 = 0x80ff8080;
  VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8518),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x8514),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x8520),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x851c),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0014e314(temp_v12);
  goto LAB_0048dfb4;
}

} /* extern "C" */
