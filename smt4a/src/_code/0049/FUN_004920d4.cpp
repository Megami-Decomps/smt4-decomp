/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004920d4` (_code @ 0x4920d4, 0x660 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(...);
int renderCtxResetColorScale(...);
int skinObjectUpdateMatrices(...);
int FUN_00183bb0(void);
int FUN_00486444(void);
int FUN_00487470(...);
int FUN_0048a1b8(...);
int FUN_0048b260(...);
int FUN_0048b514(...);
int FUN_00492c5c(int);
int FUN_00492c84(...);
int words2Copy(...);
int MapNaviTable_GetAreaCount(void);
int MapNaviTable_GetCategoryCount(void);
int NaviMain_GetCurrentMap(int);
int SBORROW4(...);
int VectorSignedToFloat(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
} param_1_stack;

extern unsigned char DAT_005324b8; /* 0x5324b8 */
extern unsigned char DAT_00532500; /* 0x532500 */
extern unsigned char DAT_00532548; /* 0x532548 */
extern unsigned char DAT_00532590; /* 0x532590 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern int DAT_005f1604; /* 0x5f1604 */
extern signed char DAT_005f1622; /* 0x5f1622 */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00162858(void);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00183bb0. */
extern int dataTableGetEntry49(unsigned char);
extern int gameFlagsClassify(unsigned int);
extern int FUN_00384cf4(void);
extern unsigned int gameFlagsGetWord1590Ptr(unsigned int);
extern int FUN_004083a8(int);
/* Supplied declaration required: FUN_00486444. */
/* Supplied declaration required: FUN_00487470. */
/* Supplied declaration required: FUN_0048a1b8. */
/* Supplied declaration required: FUN_0048b260. */
/* Supplied declaration required: FUN_0048b514. */
extern int FUN_0048e40c(int);
extern unsigned int lmapSceneGetObj(void);
extern int FUN_00492c34(int);
/* Supplied declaration required: FUN_00492c5c. */
extern int FUN_00492c70(int);
/* Supplied declaration required: FUN_00492c84. */
/* Supplied declaration required: words2Copy. */
/* Supplied declaration required: MapNaviTable_GetAreaCount. */
extern int MapNaviTable_GetAreaRecord(unsigned char *, unsigned int);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(unsigned char *, unsigned int);
extern int MapNavi_SetDiscoveredCell(int, unsigned int);
/* Supplied declaration required: NaviMain_GetCurrentMap. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004920d4(int param_1)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 18 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  float *pfVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char *puVar9;
  int temp_v7;
  short *psVar11;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar15;
  char *pcVar16;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  float temp_v20 [18];
  unsigned char temp_v21 [88];
  unsigned char temp_v22 [80];
  unsigned char temp_v23 [72];
  unsigned char temp_v24 [72];
  unsigned char temp_v25 [8];
  unsigned char temp_v26 [4];
  int temp_v27;
  unsigned int *temp_v28;
  unsigned int *temp_v29;
  short *temp_v30;
  unsigned char *temp_v31;
  unsigned char temp_v32 [32];
  int temp_v33;
  
  if (DAT_005f1622 != '\0') {
    return;
  }
  temp_v33 = param_1;
  temp_v3 = FUN_00162858();
  if ((((temp_v3 == 0) &&
       (!((*(unsigned int *)(temp_v33 + 0x10) & 0x20) != 0 || (*(unsigned int *)(temp_v33 + 0x10) & 8) != 0))) &&
      (*(char *)(temp_v33 + 0xc) != '\0')) && (DAT_005f1604 != -1)) {
    rt_memcpy_w(temp_v21,&DAT_005324b8,0x48);
    rt_memcpy_w(temp_v23,&DAT_00532500,0x48);
    rt_memcpy_w(temp_v22,&DAT_00532548,0x48);
    rt_memcpy_w(temp_v24,&DAT_00532590,0x48);
    temp_v3 = temp_v33 + 0x4cc;
    pfVar5 = (float *)lmapSceneGetObj();
    temp_v15 = *pfVar5;
    temp_v17 = pfVar5[2];
    temp_v4 = FUN_00492c34(temp_v3);
    NaviMain_GetCurrentMap(temp_v3);
    temp_v27 = DAT_005f1604;
    if (DAT_005f1a5e != '\0') {
      FUN_00492c5c(temp_v3);
      temp_v4 = FUN_00492c70(temp_v3);
      temp_v27 = DAT_005f1604;
      if (DAT_005f1a5e != '\0') {
        temp_v27 = FUN_00492c84(temp_v3);
      }
    }
    temp_v3 = temp_v33;
    pcVar16 = (char *)(temp_v33 + 0x20500);
    if (*(short *)(temp_v33 + 0x20504) != temp_v27) {
      if (DAT_005f1a5e == '\0') {
        temp_v2 = (unsigned short)temp_v27;
      }
      else {
        temp_v2 = FUN_00492c84();
      }
      *(unsigned short *)(temp_v3 + 0x20504) = temp_v2;
      puVar9 = temp_v25;
      MapNaviTable_GetCategoryCount();
      temp_v5 = MapNaviTable_GetCategoryRecord(temp_v25,0);
      temp_v6 = 0;
      if (0 < (int)puVar9) {
        while (psVar11 = (short *)(temp_v5 + temp_v6 * 0x14), *psVar11 != -1) {
          if (*(unsigned char *)(psVar11 + 2) == temp_v2) {
            temp_v5 = temp_v5 + temp_v6 * 0x14;
            if (temp_v5 != 0) {
              *(short *)(temp_v3 + 0x20502) = (short)*(char *)(temp_v5 + 5);
            }
            break;
          }
          temp_v6 = temp_v6 + 1;
          if ((int)puVar9 <= temp_v6) break;
        }
      }
      temp_v1 = *(short *)(temp_v3 + 0x20504);
      puVar9 = temp_v26;
      MapNaviTable_GetAreaCount();
      temp_v6 = MapNaviTable_GetAreaRecord(temp_v26,0);
      temp_v5 = 0;
      if (temp_v5 < (int)puVar9) {
        do {
          temp_v8 = *(int *)(temp_v6 + temp_v5 * 0x10);
          if (temp_v8 == -1) break;
          if (temp_v8 == temp_v1) {
            if (temp_v6 + temp_v5 * 0x10 != 0) {
              *pcVar16 = '\x01';
              goto LAB_004922ec;
            }
            break;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < (int)puVar9);
      }
      *pcVar16 = '\0';
    }
LAB_004922ec:
    temp_v1 = *(short *)(temp_v3 + 0x20502);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) {
          if (temp_v1 != 3) {
            rt_memcpy_w(temp_v20,temp_v21,0x48);
          }
          else {
            rt_memcpy_w(temp_v20,temp_v24,0x48);
          }
        }
        else {
          rt_memcpy_w(temp_v20,temp_v22,0x48);
        }
      }
      else {
        rt_memcpy_w(temp_v20,temp_v23,0x48);
      }
    }
    else {
      rt_memcpy_w(temp_v20,temp_v21,0x48);
    }
    temp_v19 = 0x43fa0000;
    temp_v3 = temp_v33 + temp_v4 * 8;
    temp_v29 = (unsigned int *)(temp_v3 + 0x1690);
    temp_v28 = (unsigned int *)(temp_v3 + 0x168c);
    temp_v3 = 0;
    temp_v31 = (unsigned char *)(temp_v33 + 0x7b92);
    temp_v30 = (short *)(temp_v27 * 8 + 0x6172e4);
    do {
      temp_v16 = temp_v15;
      temp_v18 = temp_v17;
      if (DAT_005f1a5e != '\0') {
        puVar9 = (unsigned char *)gameFlagsGetWord1590Ptr(0);
        temp_v16 = temp_v15;
        temp_v18 = temp_v17;
        temp_v4 = dataTableGetEntry49(*puVar9);
        temp_v15 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0x34),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0x36),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
      }
      temp_v5 = temp_v27;
      temp_v14 = (float)VectorSignedToFloat(*temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = (float)VectorSignedToFloat(*temp_v29,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (int)((temp_v15 + temp_v20[temp_v3 * 2]) - temp_v14 * (float)temp_v19) / 1000;
      temp_v6 = (int)((temp_v17 + temp_v20[temp_v3 * 2 + 1]) - temp_v13 * (float)temp_v19) / 1000;
      if (*pcVar16 != '\0') {
        puVar9 = temp_v32;
        MapNaviTable_GetAreaCount();
        temp_v8 = MapNaviTable_GetAreaRecord(temp_v32,0);
        temp_v7 = 0;
        if (0 < (int)puVar9) {
          while( 1 ) {
            piVar15 = (int *)(temp_v8 + temp_v7 * 0x10);
            temp_v9 = *piVar15;
            if (temp_v9 == -1) break;
            if (temp_v9 == temp_v5) {
              temp_v10 = (int)(char)piVar15[1];
              temp_v12 = SBORROW4(temp_v10,temp_v4);
              temp_v0 = temp_v10 - temp_v4;
              temp_v11 = temp_v10 == temp_v4;
              if (temp_v10 <= temp_v4) {
                temp_v10 = (int)*(char *)((int)piVar15 + 5);
                temp_v12 = SBORROW4(temp_v10,temp_v6);
                temp_v0 = temp_v10 - temp_v6;
                temp_v11 = temp_v10 == temp_v6;
              }
              if (temp_v11 || temp_v0 < 0 != temp_v12) {
                temp_v10 = (int)*(char *)((int)piVar15 + 6);
                temp_v11 = SBORROW4(temp_v10,temp_v4);
                temp_v0 = temp_v10 - temp_v4;
                if (temp_v4 <= temp_v10) {
                  temp_v11 = SBORROW4((int)*(char *)((int)piVar15 + 7),temp_v6);
                  temp_v0 = *(char *)((int)piVar15 + 7) - temp_v6;
                }
                if (temp_v0 < 0 == temp_v11) {
                  if ((((((short)piVar15[2] == 0) || (temp_v5 = FUN_004083a8(temp_v9), temp_v5 == 0)) &&
                       ((*(short *)((int)piVar15 + 10) == 0 ||
                        (temp_v5 = FUN_004083a8(*piVar15), temp_v5 == 0)))) &&
                      (((short)piVar15[3] == 0 || (temp_v5 = FUN_004083a8(*piVar15), temp_v5 == 0)))) &&
                     ((temp_v15 = temp_v16, temp_v17 = temp_v18, *(short *)((int)piVar15 + 0xe) == 0 ||
                      (temp_v5 = FUN_004083a8(*piVar15), temp_v15 = temp_v16, temp_v17 = temp_v18, temp_v5 == 0)
                      ))) goto LAB_004925c8;
                  break;
                }
              }
            }
            temp_v7 = temp_v7 + 1;
            if ((int)puVar9 <= temp_v7) break;
          }
        }
      }
      temp_v15 = temp_v16;
      temp_v17 = temp_v18;
      if ((((-1 < temp_v4 && -1 < temp_v6) && (temp_v4 < temp_v30[2])) && (temp_v6 < temp_v30[3])) &&
         (temp_v4 = MapNavi_SetDiscoveredCell
                            ((int)(short)(temp_v30[1] * (short)temp_v6 + *temp_v30 + (short)temp_v4),1),
         temp_v15 = temp_v16, temp_v17 = temp_v18, temp_v4 != 0)) {
        *temp_v31 = 1;
      }
LAB_004925c8:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 9);
  }
  temp_v3 = FUN_0048e40c(temp_v33);
  if (((temp_v3 != 0) && (*(int *)(temp_v33 + 4) != 0)) &&
     (words2Copy(temp_v33 + 0x4d0,temp_v20), (unsigned int)temp_v20[0] < 0xc39f8001)) {
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    if (*(char *)(temp_v33 + 0xc) != '\0') {
      FUN_00486444();
    }
    else {
      FUN_00487470(temp_v33);
    }
    if ((DAT_005f1a5e != '\0') && (temp_v3 = FUN_00384cf4(), temp_v3 == 0)) {
      FUN_0048b260(temp_v33);
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    if ((*(char *)(temp_v33 + 0x12d0) != '\0') && (*(char *)(temp_v33 + 0x12d2) == '\0')) {
      FUN_0048b514(temp_v33);
    }
    if (((*(char *)(temp_v33 + 0x1369) != '\0') && (*(char *)(temp_v33 + 0x1368) == '\0')) ||
       (temp_v3 = gameFlagsClassify(g_gameState), temp_v3 == 3)) {
      FUN_0048a1b8(temp_v33);
      return;
    }
  }
  return;
}

} /* extern "C" */
