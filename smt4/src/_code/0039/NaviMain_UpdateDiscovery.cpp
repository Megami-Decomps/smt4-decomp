/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_UpdateDiscovery` (_code @ 0x39f01c, 0x5f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairCopy(...);
int FUN_00231dec(...);
int FUN_002bed3c(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(...);
int FUN_003996c8(void);
int FUN_00399d0c(...);
int FUN_0039ba2c(...);
int FUN_0039bd04(...);
int MapNaviTable_GetAreaCount(void);
int MapNaviTable_GetCategoryCount(void);
int NaviMain_GetCurrentMap(int);
int SBORROW4(...);
int VectorSignedToFloat(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_1_stack;

extern unsigned char DAT_00404b28; /* 0x404b28 */
extern unsigned char DAT_00404b70; /* 0x404b70 */
extern unsigned char DAT_00404bb8; /* 0x404bb8 */
extern unsigned char DAT_00404c00; /* 0x404c00 */
extern int DAT_0044cdd8; /* 0x44cdd8 */
extern unsigned int g_titleScene; /* 0x44ea00 */
extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern signed char DAT_0049f941; /* 0x49f941 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: pairCopy. */
/* Supplied declaration required: FUN_00231dec. */
extern unsigned int lmapSceneGetObj(void);
extern int FUN_00288f78(int);
extern int flagBitIsSet(unsigned int);
extern int FUN_002b8694(void);
/* Supplied declaration required: FUN_002bed3c. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
/* Supplied declaration required: FUN_003996c8. */
/* Supplied declaration required: FUN_00399d0c. */
/* Supplied declaration required: FUN_0039ba2c. */
/* Supplied declaration required: FUN_0039bd04. */
/* Supplied declaration required: MapNaviTable_GetAreaCount. */
extern int MapNaviTable_GetAreaRecord(unsigned char *, unsigned int);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(unsigned char *, unsigned int);
extern int MapNavi_SetDiscoveredCell(int, unsigned int);
/* Supplied declaration required: NaviMain_GetCurrentMap. */
extern int NaviMain_GetPosY(int);
/* Supplied declaration required: rt_memcpy_w. */


void NaviMain_UpdateDiscovery(int param_1)

{
/* irregular: 11 unstructured edge(s); 2 goto(s); irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned char *puVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar11;
  int temp_v8;
  int temp_v9;
  short *psVar14;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  float temp_v22 [18];
  unsigned char temp_v23 [72];
  unsigned char temp_v24 [72];
  unsigned char temp_v25 [72];
  unsigned char temp_v26 [72];
  unsigned char temp_v27 [4];
  unsigned char *temp_v28;
  
  if (DAT_0049f941 != '\0') {
    return;
  }
  temp_v4 = FUN_002b8694();
  if ((((temp_v4 == 0) && ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0)) &&
      (*(char *)(param_1 + 0xc) != '\0')) && (DAT_0049f924 != 0xffffffff)) {
    rt_memcpy_w(temp_v23,&DAT_00404b28,0x48);
    rt_memcpy_w(temp_v24,&DAT_00404b70,0x48);
    rt_memcpy_w(temp_v25,&DAT_00404bb8,0x48);
    rt_memcpy_w(temp_v26,&DAT_00404c00,0x48);
    puVar6 = (unsigned int *)lmapSceneGetObj();
    temp_v16 = romwright_piece_4_4(puVar6[2],*puVar6);
    temp_v4 = NaviMain_GetPosY(param_1 + 0x162);
    NaviMain_GetCurrentMap(param_1 + 0x162);
    temp_v0 = DAT_0049f924;
    if ((int)*(short *)(param_1 + 0x121c0) != DAT_0049f924) {
      puVar7 = temp_v27;
      *(short *)(param_1 + 0x121c0) = (short)DAT_0049f924;
      MapNaviTable_GetCategoryCount();
      temp_v5 = MapNaviTable_GetCategoryRecord(temp_v27,0);
      temp_v6 = 0;
      if ((int)puVar7 > temp_v6) {
        do {
          psVar14 = (short *)(temp_v5 + temp_v6 * 0x14);
          if (*psVar14 == -1) break;
          if (*(unsigned char *)(psVar14 + 2) == temp_v0) {
            temp_v5 = temp_v5 + temp_v6 * 0x14;
            if (temp_v5 == 0) break;
            *(short *)(param_1 + 0x121be) = (short)*(char *)(temp_v5 + 5);
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while ((int)puVar7 > temp_v6);
      }
      temp_v0 = DAT_0049f924;
      puVar7 = temp_v27;
      MapNaviTable_GetAreaCount();
      temp_v6 = MapNaviTable_GetAreaRecord(temp_v27,0);
      temp_v5 = 0;
      if (temp_v5 < (int)puVar7) {
        do {
          temp_v10 = *(unsigned int *)(temp_v6 + temp_v5 * 0x10);
          if (temp_v10 == 0xffffffff) break;
          if (temp_v10 == temp_v0) {
            if (temp_v6 + temp_v5 * 0x10 == 0) break;
            *(unsigned char *)(param_1 + 0x121bc) = 1;
            goto LAB_0039f1cc;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (int)puVar7);
      }
      *(unsigned char *)(param_1 + 0x121bc) = 0;
    }
LAB_0039f1cc:
    temp_v1 = *(short *)(param_1 + 0x121be);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) {
          if (temp_v1 != 3) {
            rt_memcpy_w(temp_v22,temp_v23,0x48);
          }
          else {
            rt_memcpy_w(temp_v22,temp_v26,0x48);
          }
        }
        else {
          rt_memcpy_w(temp_v22,temp_v25,0x48);
        }
      }
      else {
        rt_memcpy_w(temp_v22,temp_v24,0x48);
      }
    }
    else {
      rt_memcpy_w(temp_v22,temp_v23,0x48);
    }
    temp_v20 = 1000.0f;
    temp_v21 = 0x44834000;
    temp_v19 = 500.0f;
    temp_v28 = (unsigned char *)(param_1 + 0x5a8e);
    temp_v6 = 0;
    temp_v4 = param_1 + temp_v4 * 8;
    do {
      temp_v0 = DAT_0049f924;
      temp_v18 = (float)temp_v16;
      temp_v14 = temp_v20;
      if (DAT_0049f924 != 0x73) {
        if (DAT_0049f924 == 0x77) {
          temp_v14 = (float)temp_v21;
          temp_v18 = -(temp_v18 - temp_v14);
        }
      }
      else {
        temp_v18 = -(temp_v18 - temp_v14);
      }
      temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
      temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0xd88),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0xd8c),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (int)((temp_v18 + temp_v22[temp_v6 * 2]) - temp_v15 * temp_v19) / 1000;
      temp_v3 = (int)((temp_v17 + temp_v22[temp_v6 * 2 + 1]) - temp_v14 * temp_v19) / 1000;
      if (*(char *)(param_1 + 0x121bc) != '\0') {
        puVar7 = temp_v27;
        MapNaviTable_GetAreaCount();
        temp_v7 = MapNaviTable_GetAreaRecord(temp_v27,0);
        temp_v8 = 0;
        if (temp_v8 < (int)puVar7) {
          do {
            puVar11 = (unsigned int *)(temp_v7 + temp_v8 * 0x10);
            if (*puVar11 == 0xffffffff) break;
            if (*puVar11 == temp_v0) {
              temp_v11 = (int)(char)puVar11[1];
              temp_v13 = SBORROW4(temp_v11,temp_v5);
              temp_v9 = temp_v11 - temp_v5;
              temp_v12 = temp_v11 == temp_v5;
              if (temp_v11 <= temp_v5) {
                temp_v11 = (int)*(char *)((int)puVar11 + 5);
                temp_v13 = SBORROW4(temp_v11,temp_v3);
                temp_v9 = temp_v11 - temp_v3;
                temp_v12 = temp_v11 == temp_v3;
              }
              if (temp_v12 || temp_v9 < 0 != temp_v13) {
                temp_v11 = (int)*(char *)((int)puVar11 + 6);
                temp_v12 = SBORROW4(temp_v11,temp_v5);
                temp_v9 = temp_v11 - temp_v5;
                if (temp_v5 <= temp_v11) {
                  temp_v12 = SBORROW4((int)*(char *)((int)puVar11 + 7),temp_v3);
                  temp_v9 = *(char *)((int)puVar11 + 7) - temp_v3;
                }
                if (temp_v9 < 0 == temp_v12) {
                  temp_v14 = (float)VectorSignedToFloat((int)(short)puVar11[2],
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v14 == temp_v18) << 0x1e) |
                             ((unsigned int)(temp_v18 <= temp_v14) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6))) {
                    temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 10),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v14 == temp_v17) << 0x1e) |
                               ((unsigned int)(temp_v17 <= temp_v14) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6))) {
                      temp_v14 = (float)VectorSignedToFloat((int)(short)puVar11[3],
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v10 = temp_v0 | ((unsigned int)(temp_v14 < temp_v18) << 0x1f);
                      in_fpscr = temp_v10 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v18 != temp_v18)) << 0x1c);
                      if ((unsigned char)(temp_v10 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v14 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 0xe),
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v0 = temp_v0 | ((unsigned int)(temp_v14 < temp_v17) << 0x1f);
                        in_fpscr = temp_v0 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v17 != temp_v17)) << 0x1c);
                        if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) break;
                      }
                    }
                  }
                  goto LAB_0039f450;
                }
              }
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < (int)puVar7);
        }
      }
      if (-1 < temp_v5 && -1 < temp_v3) {
        temp_v7 = DAT_0049f924 * 8;
        temp_v9 = (int)*(short *)(temp_v7 + 0x4c322c);
        temp_v12 = SBORROW4(temp_v5,temp_v9);
        temp_v8 = temp_v5 - temp_v9;
        if (temp_v5 < temp_v9) {
          temp_v12 = SBORROW4(temp_v3,(int)*(short *)(temp_v7 + 0x4c322e));
          temp_v8 = temp_v3 - *(short *)(temp_v7 + 0x4c322e);
        }
        if ((temp_v8 < 0 != temp_v12) &&
           (temp_v5 = MapNavi_SetDiscoveredCell
                              ((int)(short)(*(short *)(temp_v7 + 0x4c322a) * (short)temp_v3 +
                                           *(short *)(temp_v7 + 0x4c3228) + (short)temp_v5),1),
           temp_v5 != 0)) {
          *temp_v28 = 1;
        }
      }
LAB_0039f450:
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 9);
  }
  temp_v4 = gameFlagIsSet(0x400);
  if (temp_v4 != 0) {
    temp_v6 = flagBitIsSet(0x76);
    temp_v4 = 0;
    if (temp_v6 != 0) {
      temp_v4 = *(int *)(param_1 + 4);
    }
    if ((temp_v6 != 0 && temp_v4 != 0) &&
       (pairCopy(param_1 + 0x164,temp_v22), (unsigned int)temp_v22[0] < 0xc39f8001)) {
      FUN_002c39a4(g_titleScene);
      FUN_002bed3c();
      if ((g_gameState != 0x13) ||
         ((DAT_0049f920 != 6 && (!(DAT_0049f920 == 7 || DAT_0049f920 == 8))))) {
        if (*(char *)(param_1 + 0xc) != '\0') {
          FUN_003996c8();
        }
        else {
          FUN_00399d0c(param_1);
        }
      }
      else if ((*(unsigned int *)(param_1 + 0x10) & 2) == 0) {
        DAT_0044cdd8 = 0xf1;
        FUN_00231dec(param_1);
        DAT_0044cdd8 = DAT_0044cdd8 + 1;
      }
      FUN_002c198c(g_titleScene);
      FUN_002c18e4(g_titleScene);
      if ((*(char *)(param_1 + 0x9ec) != '\0') && (*(char *)(param_1 + 0x9ee) == '\0')) {
        FUN_0039bd04(param_1);
      }
      if ((((*(char *)(param_1 + 0xa85) != '\0') && (*(char *)(param_1 + 0xa84) == '\0')) ||
          ((g_gameState == 0x13 && ((DAT_0049f920 == 6 || DAT_0049f920 == 7) || DAT_0049f920 == 8))
          )) || (temp_v4 = FUN_00288f78(g_gameState), temp_v4 == 3)) {
        FUN_0039ba2c(param_1);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
