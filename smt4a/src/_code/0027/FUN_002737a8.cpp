/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002737a8` (_code @ 0x2737a8, 0xe3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd76c(int, int *);
int FUN_003fdb18(int);

int ptrListRemoveClearOwner(unsigned int);
int FUN_001f3eec(void);
int FUN_00281b94(int);
int FUN_00294854(void);
int FUN_002b5cb4(void);
int FUN_002ddda4(...);
int FUN_00319f64(int);
int FUN_00352e9c(int, int);
int FUN_003b51a4(void);
int FUN_003d2150(void);
int FUN_003fd7c0(...);
int FUN_003fd924(...);
int FUN_003fe86c(...);
int FUN_004ff920(int);
int FUN_004ff98c(...);
int VectorSignedToFloat(int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int *g_mapGimic; /* 0x580ca0 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern int FUN_0016345c(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001f3eec. */
/* Supplied declaration required: FUN_00281b94. */
/* Supplied declaration required: FUN_00294854. */
/* Supplied declaration required: FUN_002b5cb4. */
extern int FUN_002ddd7c(void);
/* Supplied declaration required: FUN_002ddda4. */
/* Supplied declaration required: FUN_00319f64. */
extern int FUN_0033bfac(void);
extern int FUN_00352cd8(int);
/* Supplied declaration required: FUN_00352e9c. */
/* Supplied declaration required: FUN_003b51a4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
extern int FUN_0040ab8c(int);
/* Supplied declaration required: FUN_004ff920. */
extern int FUN_004ff970(unsigned int);
/* Supplied declaration required: FUN_004ff98c. */
extern int FUN_004ff9b4(unsigned int);
extern int FUN_004ffa14(int);
extern int slots4FGetActiveValue(int);
extern int FUN_004ffba8(int);


/* WARNING: Type propagation algorithm not settling */

void FUN_002737a8(void)

{
/* irregular: 34 unstructured edge(s); 10 goto(s); irregular input(s): in_fpscr, in_s0; 19 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  int in_s0;
  float temp_v8;
  unsigned long long temp_v9;
  unsigned long long temp_v10;
  
  temp_v0 = gameFlagsGetBlock();
  if ((char)g_mapGimic[1] != '\0') {
    temp_v0 = *g_mapGimic;
    if (temp_v0 == 0) {
      temp_v0 = 0x22;
      do {
        temp_v4 = temp_v0 * 0xf;
        temp_v1 = g_mapGimic[temp_v0 * 0xf + 0x2a];
        if (temp_v1 != 0) {
          temp_v4 = *(int *)(temp_v1 + 4);
        }
        if (temp_v1 != 0 && temp_v4 != 0) {
          ptrListRemoveClearOwner(g_handleRegistry);
        }
        temp_v0 = temp_v0 - 1;
      } while (-1 < temp_v0);
    }
    else if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 != 3) {
          return;
        }
        temp_v0 = FUN_0033bfac();
        if (temp_v0 != 0) {
          temp_v0 = 0;
          do {
            if (((char)g_mapGimic[temp_v0 * 0xf + 0x24] != '\0') &&
               (*(short *)((int)g_mapGimic + temp_v0 * 0x3c + 0xa6) == 0xc)) {
              FUN_00281b94((int)(short)g_mapGimic[temp_v0 * 0xf + 0x2b]);
            }
            piVar1 = g_mapGimic;
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 0x23);
          *(unsigned char *)(g_mapGimic + 1) = 0;
          *piVar1 = 0;
          return;
        }
        return;
      }
      FUN_003b51a4();
    }
    else {
      FUN_00294854();
    }
    *g_mapGimic = *g_mapGimic + 1;
  }
  else {
    if ((char)g_mapGimic[0x26d] != '\0') {
      temp_v6 = *(unsigned int *)(*(int *)(g_mapGimic[0x272] + 4) + 4);
      if (DAT_005f161f != '\0') {
        temp_v6 = temp_v6 | 3;
      }
      else {
        temp_v6 = temp_v6 & 0xfffffffc;
      }
      *(unsigned int *)(*(int *)(g_mapGimic[0x272] + 4) + 4) = temp_v6;
    }
    temp_v9 = 0x40e0000000000000;
    temp_v10 = 0x3f80000040a00000;
    temp_v4 = 0;
    do {
      piVar1 = g_mapGimic;
      if ((char)g_mapGimic[temp_v4 * 0xf + 0x24] != '\0') {
        temp_v1 = *(int *)(g_mapGimic[temp_v4 * 0xf + 0x2a] + 4);
        if (DAT_005f161f != '\0') {
          *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
        }
        else {
          temp_v6 = *(unsigned int *)(temp_v1 + 4);
          temp_v5 = temp_v6 & 0xfffffffc;
          *(unsigned int *)(temp_v1 + 4) = temp_v5;
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x26) {
            if ((char)piVar1[0x1a] != '\0') {
              if (piVar1[0x1b] >= 2) {
                *(unsigned int *)(temp_v1 + 4) = temp_v6 & 0xfffffffc;
              }
              switch(piVar1[0x1b]) {
              default:
                break;
              case 1:
                in_s0 = (int)temp_v9;
                FUN_003fe86c(temp_v1,0,2);
                temp_v2 = 2;
                g_mapGimic[0x1b] = temp_v2;
                break;
              case 2:
                FUN_004ff920(temp_v1);
                piVar2 = g_mapGimic;
                if (in_s0 >= 0x42700000) {
                  g_mapGimic[0x1b] = 3;
                  piVar2[0x1c] = 0;
                }
                break;
              case 3:
                VectorSignedToFloat(piVar1[0x1c],(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v8 = -255.0f;
                FUN_001f3eec();
                in_s0 = (int)temp_v8;
                g_mapGimic[0x1c] = g_mapGimic[0x1c] + 1;
                FUN_002ddda4(in_s0);
                temp_v2 = FUN_004ffba8(temp_v1);
                if (temp_v2 == 0) break;
                in_s0 = (int)temp_v9;
                FUN_003fe86c(temp_v1,1,2);
                temp_v2 = 4;
                g_mapGimic[0x1b] = temp_v2;
                break;
              case 4:
                temp_v7 = 0;
                FUN_002ddda4(temp_v7);
              }
            }
            else {
              *(unsigned int *)(temp_v1 + 4) = temp_v5 | 3;
              piVar1[0x1b] = 1;
              temp_v2 = FUN_002ddd7c();
              if (temp_v2 != -0xff) {
                temp_v7 = 0xffffff01;
                FUN_002ddda4(temp_v7);
              }
            }
          }
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x27) {
            switch(g_mapGimic[0x1d]) {
            default:
              break;
            case 1:
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,1,2);
              temp_v2 = 2;
              g_mapGimic[0x1d] = temp_v2;
              break;
            case 2:
              temp_v2 = FUN_004ffba8(temp_v1);
              if (temp_v2 == 0) break;
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,2);
              g_mapGimic[0x1d] = 3;
              break;
            case 3:
              *(unsigned char *)(temp_v0 + 0x1525) = 1;
              FUN_00319f64((int)(short)piVar1[temp_v4 * 0xf + 0x2b]);
              temp_v2 = 4;
              g_mapGimic[0x1d] = temp_v2;
            }
          }
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x28) {
            switch(g_mapGimic[0x1e]) {
            default:
              break;
            case 1:
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,1,2);
              temp_v2 = 2;
              g_mapGimic[0x1e] = temp_v2;
              break;
            case 2:
              temp_v2 = FUN_004ffba8(temp_v1);
              if (temp_v2 == 0) break;
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,2);
              temp_v2 = 3;
              g_mapGimic[0x1e] = temp_v2;
              break;
            case 3:
              *(unsigned char *)(temp_v0 + 0x1524) = 1;
              FUN_00319f64((int)(short)piVar1[temp_v4 * 0xf + 0x2b]);
              g_mapGimic[0x1e] = 4;
              break;
            }
          }
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x29) {
            switch(g_mapGimic[0x1f]) {
            default:
              break;
            case 1:
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,1,2);
              temp_v2 = 2;
              g_mapGimic[0x1f] = temp_v2;
              break;
            case 2:
              temp_v2 = FUN_004ffba8(temp_v1);
              if (temp_v2 == 0) break;
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,2);
              temp_v2 = 3;
              g_mapGimic[0x1f] = temp_v2;
              break;
            case 3:
              *(unsigned char *)(temp_v0 + 0x1526) = 1;
              FUN_00319f64((int)(short)piVar1[temp_v4 * 0xf + 0x2b]);
              g_mapGimic[0x1f] = 4;
              break;
            }
          }
          if ((*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x55) &&
             (temp_v2 = gameFlagIsSet(0x1120), temp_v2 != 0)) {
            in_s0 = (int)temp_v9;
            FUN_003fd7c0(temp_v1,2);
          }
          if ((*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x56) &&
             (temp_v2 = gameFlagIsSet(0x1122), temp_v2 != 0)) {
            in_s0 = (int)temp_v9;
            FUN_003fd7c0(temp_v1,2);
          }
          if ((*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x57) &&
             (temp_v2 = gameFlagIsSet(0x1121), temp_v2 != 0)) {
            in_s0 = (int)temp_v9;
            FUN_003fd7c0(temp_v1,2);
          }
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x4d) {
            temp_v2 = FUN_00352cd8((int)*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xb2));
            if (temp_v2 != 0) {
              if ((short)piVar1[temp_v4 * 0xf + 0x29] == 2) goto LAB_00273ee8;
              in_s0 = (int)temp_v9;
              *(unsigned short *)(piVar1 + temp_v4 * 0xf + 0x29) = 2;
              FUN_003fe86c(temp_v1,2,2);
            }
            if ((short)piVar1[temp_v4 * 0xf + 0x29] == 0) {
              temp_v8 = (float)piVar1[temp_v4 * 0xf + 0x25];
              FUN_002b5cb4();
              temp_v2 = (int)temp_v8;
              in_s0 = temp_v2;
              if (temp_v2 < 0x3e9) {
                in_s0 = (int)temp_v9;
                FUN_003fe86c(temp_v1,1,2);
                *(unsigned short *)(piVar1 + temp_v4 * 0xf + 0x29) = 1;
                if (temp_v2 >= 200) {
                  FUN_003d2150();
                }
                if (temp_v2 < 0x1f5) {
                  *(int *)(temp_v1 + 0x1fc) = (int)((unsigned long long)temp_v9 >> 0x20);
                }
                else {
                  *(int *)(temp_v1 + 0x1fc) = (int)temp_v10;
                }
              }
            }
            if ((((short)piVar1[temp_v4 * 0xf + 0x29] == 1) &&
                (temp_v2 = FUN_004ff98c(temp_v1), temp_v2 == 1)) &&
               (temp_v2 = FUN_004ffa14(temp_v1), temp_v2 != 0)) {
              in_s0 = (int)temp_v9;
              FUN_003fe86c(temp_v1,2);
              FUN_00352e9c((int)*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xb2),1);
              *(int *)(temp_v1 + 0x1fc) = (int)((unsigned long long)temp_v10 >> 0x20);
              *(unsigned short *)(piVar1 + temp_v4 * 0xf + 0x29) = 2;
            }
          }
LAB_00273ee8:
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x4e) {
            if (g_gameState == 0x1c) {
              temp_v2 = gameFlagIsSet(0x37c);
              goto joined_r0x00273f44;
            }
            if (g_gameState == 0x1d) {
              temp_v2 = gameFlagIsSet(0x37d);
              goto joined_r0x00273f44;
            }
            if (g_gameState == 0x1e) {
              temp_v2 = gameFlagIsSet(0x37e);
              goto joined_r0x00273f44;
            }
            if (g_gameState != 0x1f) goto LAB_00274348;
            if (DAT_005f1600 != 1) {
              temp_v2 = gameFlagIsSet(0x308);
joined_r0x00273f44:
              if (temp_v2 != 0) {
                if (((short)piVar1[temp_v4 * 0xf + 0x29] != 2) &&
                   (temp_v2 = slots4FGetActiveValue(temp_v1), temp_v2 != 2)) {
                  *(unsigned short *)(piVar1 + temp_v4 * 0xf + 0x29) = 2;
                  FUN_003fd924(temp_v1,2,2);
                  in_s0 = (int)temp_v9;
                  FUN_003fd7c0(temp_v1,2);
                }
              }
            }
            else {
              temp_v2 = gameFlagIsSet(0x37f);
              if (temp_v2 != 0) {
                if (((short)piVar1[temp_v4 * 0xf + 0x29] != 2) &&
                   (temp_v2 = slots4FGetActiveValue(temp_v1), temp_v2 != 2)) {
                  *(unsigned short *)(piVar1 + temp_v4 * 0xf + 0x29) = 2;
                  FUN_003fd924(temp_v1,2,2);
                  in_s0 = (int)temp_v9;
                  FUN_003fd7c0(temp_v1,2);
                }
              }
            }
          }
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x44) {
            if (g_gameState != 0x1a) goto LAB_00274348;
            if (DAT_005f1600 != 1) {
              if (DAT_005f1600 != 3) {
                if (DAT_005f1600 != 5) {
                  if (DAT_005f1600 != 8) {
                    if (DAT_005f1600 != 10) {
                      if (DAT_005f1600 != 0xe) {
                        if (DAT_005f1600 != 0x10) goto LAB_00274348;
                        temp_v2 = gameFlagIsSet(0x379);
                      }
                      else {
                        temp_v2 = gameFlagIsSet(0x378);
                      }
                    }
                    else {
                      temp_v2 = gameFlagIsSet(0x377);
                    }
                  }
                  else {
                    temp_v2 = gameFlagIsSet(0x376);
                  }
                }
                else {
                  temp_v2 = gameFlagIsSet(0x375);
                }
              }
              else {
                temp_v2 = gameFlagIsSet(0x374);
              }
              if (temp_v2 == 0) goto LAB_0027412c;
            }
            if (((short)piVar1[temp_v4 * 0xf + 0x29] != 2) &&
               (temp_v2 = slots4FGetActiveValue(temp_v1), temp_v2 != 2)) {
              *(unsigned short *)(piVar1 + temp_v4 * 0xf + 0x29) = 2;
              FUN_003fd924(temp_v1,2,2);
              in_s0 = (int)temp_v9;
              FUN_003fd7c0(temp_v1,2);
            }
          }
LAB_0027412c:
          if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) == 0x50) {
            if (piVar1[temp_v4 * 0xf + 0x32] == 1) {
              temp_v2 = (int)temp_v9;
              switch(g_mapGimic[0x21]) {
              default:
                break;
              case 1:
                FUN_003fe86c(temp_v1,1,2);
                temp_v3 = 2;
                in_s0 = temp_v2;
                g_mapGimic[0x21] = temp_v3;
                break;
              case 2:
                temp_v2 = FUN_004ffba8(temp_v1);
                if (temp_v2 == 0) break;
                g_mapGimic[0x21] = 3;
                break;
              case 3:
                FUN_003fe86c(temp_v1,2);
                FUN_00319f64((int)(short)piVar1[temp_v4 * 0xf + 0x2b]);
                temp_v3 = 4;
                in_s0 = temp_v2;
                g_mapGimic[0x21] = temp_v3;
              }
              if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) != 0x50) goto LAB_00274348;
            }
            if (piVar1[temp_v4 * 0xf + 0x32] == 2) {
              temp_v2 = (int)temp_v9;
              switch(g_mapGimic[0x22]) {
              default:
                break;
              case 1:
                FUN_003fe86c(temp_v1,1,2);
                temp_v3 = 2;
                in_s0 = temp_v2;
                g_mapGimic[0x22] = temp_v3;
                break;
              case 2:
                temp_v2 = FUN_004ffba8(temp_v1);
                if (temp_v2 != 0) {
                  g_mapGimic[0x22] = 3;
                }
                break;
              case 3:
                FUN_003fe86c(temp_v1,2);
                FUN_00319f64((int)(short)piVar1[temp_v4 * 0xf + 0x2b]);
                temp_v3 = 4;
                in_s0 = temp_v2;
                g_mapGimic[0x22] = temp_v3;
              }
              if (*(short *)((int)piVar1 + temp_v4 * 0x3c + 0xa6) != 0x50) goto LAB_00274348;
            }
            if (piVar1[temp_v4 * 0xf + 0x32] == 3) {
              temp_v2 = (int)temp_v9;
              switch(g_mapGimic[0x23]) {
              default:
                break;
              case 1:
                FUN_003fe86c(temp_v1,1,2);
                temp_v3 = 2;
                in_s0 = temp_v2;
                g_mapGimic[0x23] = temp_v3;
                break;
              case 2:
                temp_v2 = FUN_004ffba8(temp_v1);
                if (temp_v2 != 0) {
                  g_mapGimic[0x23] = 3;
                }
                break;
              case 3:
                FUN_003fe86c(temp_v1,2);
                FUN_00319f64((int)(short)piVar1[temp_v4 * 0xf + 0x2b]);
                temp_v3 = 4;
                in_s0 = temp_v2;
                g_mapGimic[0x23] = temp_v3;
              }
            }
          }
LAB_00274348:
          if (*(char *)((int)piVar1 + temp_v4 * 0x3c + 0x91) != '\0') {
            FUN_003fd76c(temp_v1,piVar1 + temp_v4 * 0xf + 0x25);
            in_s0 = (int)temp_v9;
            FUN_003fdb18(temp_v1);
            temp_v2 = slots4FGetActiveValue(temp_v1);
            if (temp_v2 != (short)piVar1[temp_v4 * 0xf + 0x29]) {
              in_s0 = (int)temp_v9;
              FUN_003fd924(temp_v1,(int)(short)piVar1[temp_v4 * 0xf + 0x29],2);
            }
            *(unsigned char *)((int)piVar1 + temp_v4 * 0x3c + 0x91) = 0;
          }
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x23);
    temp_v0 = g_gameState;
    if (g_gameState == 0x20) {
      temp_v0 = DAT_005f1600;
    }
    if (g_gameState == 0x20 && temp_v0 == 2) {
      temp_v0 = 0;
      do {
        piVar1 = g_mapGimic;
        if ((char)g_mapGimic[temp_v0 * 6 + 0x231] != '\0') {
          if ((char)g_mapGimic[temp_v0 * 6 + 0x235] != '\0') {
            temp_v7 = *(unsigned int *)(g_mapGimic[temp_v0 * 6 + 0x233] + 4);
            temp_v4 = FUN_004ff970(temp_v7);
            if ((temp_v4 == *(short *)((int)piVar1 + temp_v0 * 0x18 + 0x8c6)) &&
               (temp_v4 = FUN_004ff9b4(temp_v7), temp_v4 != 0)) {
              temp_v4 = piVar1[temp_v0 * 6 + 0x234];
              piVar1[temp_v0 * 6 + 0x234] = temp_v4 - 1;
              if (temp_v4 - 1 < 1) {
                FUN_003fd7c0(temp_v7,(int)*(short *)((int)piVar1 + temp_v0 * 0x18 + 0x8d6),2);
                piVar1[temp_v0 * 6 + 0x234] = 0;
                *(unsigned char *)(piVar1 + temp_v0 * 6 + 0x235) = 0;
                *(unsigned short *)((int)piVar1 + temp_v0 * 0x18 + 0x8d6) = 0;
              }
              else {
                FUN_003fd7c0(temp_v7,(int)*(short *)((int)piVar1 + temp_v0 * 0x18 + 0x8c6),2);
              }
            }
          }
          temp_v4 = gameFlagIsSet(0x592);
          if (temp_v4 != 0) {
            if ((((short)piVar1[temp_v0 * 6 + 0x232] == 0xd2) &&
                (temp_v4 = FUN_0040ab8c(piVar1[temp_v0 * 6 + 0x233]), temp_v4 != 0)) &&
               (temp_v4 = *(int *)(piVar1[temp_v0 * 6 + 0x233] + 4), temp_v4 != 0)) {
              *(unsigned char *)(piVar1 + temp_v0 * 6 + 0x236) = 1;
              temp_v1 = FUN_0016345c();
              if (temp_v1 != 0) {
                temp_v1 = FUN_004ff98c(temp_v4);
                if (temp_v1 != 2) {
                  FUN_003fd924(temp_v4,2);
                  FUN_003fd7c0(temp_v4,0,2);
                }
              }
              else {
                temp_v1 = FUN_004ff98c(temp_v4);
                if (temp_v1 == 2) {
                  FUN_003fd924(temp_v4,0,2);
                  FUN_003fd7c0(temp_v4,0,2);
                }
              }
            }
          }
          else if ((((short)piVar1[temp_v0 * 6 + 0x232] == 0xd2) &&
                   (temp_v4 = FUN_0040ab8c(piVar1[temp_v0 * 6 + 0x233]), temp_v4 != 0)) &&
                  (temp_v7 = *(unsigned int *)(piVar1[temp_v0 * 6 + 0x233] + 4),
                  (char)piVar1[temp_v0 * 6 + 0x236] != '\0')) {
            temp_v4 = FUN_004ff98c(temp_v7);
            if (temp_v4 == 2) {
              FUN_003fd924(temp_v7,0,2);
              FUN_003fd7c0(temp_v7,0,2);
            }
            *(unsigned char *)(piVar1 + temp_v0 * 6 + 0x236) = 0;
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 10);
      return;
    }
  }
  return;
}

} /* extern "C" */
