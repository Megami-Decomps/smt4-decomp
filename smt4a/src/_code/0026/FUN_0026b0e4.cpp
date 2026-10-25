/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b0e4` (_code @ 0x26b0e4, 0x10ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int FUN_00164168(...);
void FUN_00289418(int x, int y, float alpha);

int textFormatBuffer(...);
int FUN_0015f858(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001834a4(...);
int fontMeasureLineAdvance(...);
int FUN_00184310(void);
int FUN_001fc720(int, int);
int statusDownDrawIndicatorPairs(...);
int resourceRunOperationIfUnblocked(...);
int FUN_00344cd0(...);
int FUN_003d3a4c(...);
int FUN_0047fc38(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_0026be98; /* 0x26be98 */
extern unsigned char LAB_0026be9c; /* 0x26be9c */
extern unsigned char DAT_00536b70; /* 0x536b70 */
extern int g_statusDown; /* 0x588fe8 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: FUN_00184310. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001fc720. */
/* Supplied declaration required: statusDownDrawIndicatorPairs. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4878(int);
extern int FUN_002a4894(int);
extern unsigned short *FUN_002c7e24(void);
extern int FUN_002c7e3c(void);
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_003d3a4c. */
/* Supplied declaration required: FUN_0047fc38. */
extern int equipmentHasPositiveUpgrade(unsigned int);


unsigned int FUN_0026b0e4(void)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 21 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char **ppuVar10;
  unsigned int temp_v9;
  unsigned short *puVar12;
  int temp_v10;
  int *piVar14;
  int temp_v11;
  unsigned char *puVar16;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  unsigned char *temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int uStack_a8;
  int temp_v21;
  int temp_v22;
  int iStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int temp_v23;
  int temp_v24;
  
  temp_v11 = g_statusDown;
  temp_v0 = vec2GetXInt(g_statusDown + 0x28);
  temp_v1 = vec2GetYInt(temp_v11 + 0x28);
  float bannerAlpha = *(float *)(temp_v11 + 0x48);
  if (bannerAlpha < 0.0f) {
    bannerAlpha = 0.0f;
  }
  temp_v4 = g_statusDown;
  temp_v2 = *(int *)(temp_v11 + 0x518);
  in_fpscr = in_fpscr & 0xfffffff;
  if (temp_v2 == 1) {
    temp_v2 = *(int *)(temp_v11 + 0x520);
  }
  else if (temp_v2 == 2) {
    temp_v2 = *(int *)(temp_v11 + 0x51c);
  }
  switch(temp_v2) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x20:
    FUN_001fc720(temp_v0,temp_v1);
    break;
  case 0x13:
    puVar16 = (unsigned char *)0x0;
    temp_v19 = FUN_002a4894(g_statusDown + 0x67c);
    temp_v18 = 0;
    temp_v17 = (unsigned char *)0x0;
    efctSetSpeed();
    FUN_00164b5c(2,0x12,0xc,temp_v0,temp_v1,0xb3);
    FUN_001835b4(2,0x12,0x52b,temp_v0,temp_v1,0xb5);
    FUN_001835b4(2,0x12,0x52c,temp_v0,temp_v1,0xb5);
    statusDownDrawIndicatorPairs(temp_v0,temp_v1);
    temp_v20 = temp_v4 + 0x600;
    temp_v11 = 0;
LAB_0026b298:
    do {
      temp_v9 = 0;
      temp_v13 = 0xffffffff;
      if (temp_v11 != 0) {
        if (temp_v11 != 1) {
          if (temp_v11 != 2) {
            if (temp_v11 != 3) {
              if (temp_v11 != 4) {
                if (temp_v11 != 5) {
                  if (temp_v11 == 6) {
                    puVar16 = (unsigned char *)0x295;
                    temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x78);
                  }
                }
                else {
                  puVar16 = (unsigned char *)0x21d;
                  temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x76);
                }
              }
              else {
                puVar16 = (unsigned char *)0x1a5;
                temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x74);
              }
            }
            else {
              puVar16 = (unsigned char *)0x12d;
              temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x72);
            }
          }
          else {
            puVar16 = (unsigned char *)0x30d;
            temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x70);
            temp_v2 = gameFlagIsSet(0x410);
            if (temp_v2 == 0) {
              temp_v11 = 3;
              goto LAB_0026b298;
            }
          }
        }
        else {
          puVar16 = (unsigned char *)0xb5;
          temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x6e);
          temp_v2 = gameFlagIsSet(0x410);
          if (temp_v2 == 0) {
            temp_v11 = 2;
            goto LAB_0026b298;
          }
        }
      }
      else {
        puVar16 = (unsigned char *)0x3d;
        temp_v9 = (unsigned int)*(unsigned short *)(temp_v20 + 0x6c);
      }
      temp_v2 = equipmentHasPositiveUpgrade(temp_v9);
      if (temp_v2 != 0) {
        temp_v13 = 0x8400ff;
        temp_v3 = temp_v9;
        FUN_0047fc38();
        if (temp_v3 != 0) {
          temp_v13 = 0xfbeb39ff;
        }
      }
      temp_v2 = FUN_001834a4(0x12,temp_v11 + 0x466);
      FUN_00164b5c(2,0x12,0xd,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xb3);
      if (temp_v11 == temp_v19) {
        temp_v17 = puVar16;
        temp_v18 = temp_v9;
      }
      temp_v10 = FUN_001834a4(0x12,0x464);
      uiDrawItemCategoryIcon((short)(int)puVar16,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v1,0xb5,0);
      if (temp_v9 != 0) {
        temp_v10 = FUN_001834a4(0x12,0x465);
        FUN_0015f858(temp_v9,0);
        if (temp_v9 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,temp_v13,temp_v9,(int)*(short *)(temp_v10 + 10));
        }
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 7);
    if (*(int *)(temp_v4 + 0x518) != 0x13) {
      return 0;
    }
    temp_v11 = gameFlagIsSet(0x410);
    if ((temp_v11 == 0) && (temp_v19 == 1 || temp_v19 == 2)) {
      return 0;
    }
    temp_v2 = FUN_001834a4(0x12,temp_v19 + 0x477);
    efctSetSpeed();
    FUN_001835b4(2,0x12,0x46d,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xbf);
    FUN_001835b4(2,0x12,0x46e,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xbf);
    FUN_001835b4(2,0x12,0x46f,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xbf);
    efctSetSpeed();
    FUN_001835b4(2,0x12,0x470,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc4);
    temp_v11 = *(int *)(temp_v4 + 0x530);
    temp_v15 = temp_v11 != 0;
    if (!temp_v15) {
      temp_v11 = *(int *)(temp_v4 + 0x534);
    }
    if (!(temp_v15 || temp_v11 != 0)) {
      temp_v11 = *(int *)(temp_v4 + 0x538);
      temp_v15 = temp_v11 == 0;
      if (temp_v15) {
        temp_v11 = *(int *)(temp_v4 + 0x53c);
      }
      temp_v16 = temp_v15 && temp_v11 == 0;
      if (temp_v15 && temp_v11 == 0) {
        temp_v16 = *(int *)(temp_v4 + 0x540) == 0;
      }
      if ((!temp_v16) || (*(int *)(temp_v4 + 0x52c) < 0)) goto LAB_0026b644;
      temp_v11 = 0x5a9;
      temp_v13 = 0xf5ff9fff;
      temp_v12 = 0x5ab;
      temp_v14 = 0x5ac;
    }
    else {
LAB_0026b644:
      temp_v11 = 0x471;
      temp_v13 = 0x9fe7ffff;
      temp_v12 = 0x473;
      temp_v14 = 0x59d;
    }
    FUN_001835b4(2,0x12,temp_v11,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc4);
    FUN_001835b4(2,0x12,temp_v11 + 1,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc4
                );
    FUN_001835b4(2,0x12,temp_v12,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc4);
    efctSetSpeed();
    FUN_001835b4(2,0x12,temp_v14,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc4);
    efctSetSpeed();
    FUN_001835b4(2,0x12,0x474,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc4);
    if (0 < (int)temp_v18) {
      temp_v11 = FUN_001834a4(0x12,0x476);
      temp_v9 = temp_v18;
      FUN_0015f858(temp_v18,0);
      temp_v4 = equipmentHasPositiveUpgrade(temp_v18);
      if (temp_v4 != 0) {
        temp_v13 = 0x8400ff;
        temp_v3 = temp_v18;
        FUN_0047fc38();
        if (temp_v3 != 0) {
          temp_v13 = 0xfbeb39ff;
        }
      }
      if (temp_v9 != 0) {
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v0,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(3,temp_v13,temp_v9,(int)*(short *)(temp_v11 + 8));
      }
    }
    temp_v11 = FUN_001834a4(0x12,0x475);
    uiDrawItemCategoryIcon((int)(short)(int)temp_v17,
                 (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v1,0xc9,0);
    break;
  case 0x14:
  case 0x15:
    FUN_003d3a4c(temp_v0,temp_v1);
    break;
  case 0x16:
  case 0x17:
    temp_v11 = g_statusDown + 0x2354;
    temp_v23 = temp_v11;
    temp_v2 = resourceRunOperationIfUnblocked();
    temp_v10 = FUN_002a4894(temp_v11);
    temp_v11 = FUN_002a4878(temp_v11);
    efctSetSpeed();
    FUN_00164b5c(2,0x12,0x10,temp_v0,temp_v1,0xb3);
    statusDownDrawIndicatorPairs(temp_v0,temp_v1);
    temp_v24 = temp_v4 + 0x2300;
    if (*(short *)(temp_v4 + 0x234a) < 1) {
      efctSetSpeed();
    }
    temp_v19 = temp_v11 + (temp_v2 + temp_v10) * 4;
    temp_v11 = 0;
    do {
      temp_v2 = 0;
      do {
        temp_v10 = resourceRunOperationIfUnblocked(temp_v23);
        temp_v10 = temp_v2 + (temp_v10 + temp_v11) * 4;
        if (*(short *)(temp_v24 + 0x48) <= temp_v10) break;
        temp_v5 = FUN_001834a4(0x12,temp_v2 + temp_v11 * 4 + 0x4ae);
        temp_v7 = g_renderCtx;
        temp_v6 = *(int *)(temp_v4 + 0x518);
        temp_v8 = temp_v6;
        if (temp_v6 == 0x16) {
          temp_v8 = temp_v19;
        }
        if (!(temp_v6 != 0x16 || temp_v8 != temp_v10)) {
          FUN_001835b4(2,0x12,0x4a3,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,
                       0xb5);
        }
        else {
          temp_v8 = packNibblesAndByte(6,1,0);
          piVar14 = (int *)(temp_v7 + 0x12b8);
          temp_v6 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = temp_v8;
          if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v6 != temp_v8) {
            (**(romwright_code **)(temp_v7 + 0x12d4))();
            *(unsigned char *)(temp_v7 + 0x12d0) = 0;
          }
          FUN_001835b4(2,0x12,0x4a2,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,
                       0xb5);
          temp_v8 = g_renderCtx;
          temp_v7 = packNibblesAndByte(6,7,0);
          piVar14 = (int *)(temp_v8 + 0x12b8);
          temp_v6 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = temp_v7;
          if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v6 != temp_v7) {
            (**(romwright_code **)(temp_v8 + 0x12d4))();
            *(unsigned char *)(temp_v8 + 0x12d0) = 0;
          }
        }
        temp_v10 = temp_v4 + temp_v10 * 4;
        if (*(short *)(temp_v10 + 0xf4a) != 0) {
          temp_v8 = FUN_001834a4(0x12,0x4a4);
          FUN_0018152c((int)*(short *)(temp_v10 + 0xf48),
                       (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v0,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v1,0xba,0);
          FUN_001835b4(2,0x12,0x4a6,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,
                       0xba);
          temp_v8 = FUN_001834a4(0x12,0x4ad);
          temp_v18 = (unsigned int)*(unsigned short *)(temp_v10 + 0xf4a);
          temp_v17 = &LAB_0026be98;
          FUN_00180310(2,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v0,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v1,1,6,0xba);
        }
        else {
          FUN_001835b4(2,0x12,0x4a4,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,
                       0xba);
          FUN_001835b4(2,0x12,0x4a6,*(short *)(temp_v5 + 8) + temp_v0,*(short *)(temp_v5 + 10) + temp_v1,
                       0xba);
          temp_v10 = FUN_001834a4(0x12,0x4ad);
          temp_v17 = &LAB_0026be9c;
          FUN_00180310(2,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v0,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v1,1,6,0xba);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 9);
    efctSetSpeed();
    if ((*(int *)(temp_v4 + 0x518) == 0x16) && (0 < *(short *)(temp_v24 + 0x4a))) {
      temp_v11 = FUN_002a4878(temp_v23);
      temp_v2 = FUN_002a4894(temp_v23);
      temp_v2 = FUN_001834a4(0x12,temp_v11 + temp_v2 * 4 + 0x4ae);
      efctSetSpeed();
      temp_v11 = g_renderCtx;
      temp_v10 = packNibblesAndByte(6,1,0);
      piVar14 = (int *)(temp_v11 + 0x12b8);
      temp_v8 = piVar14[*piVar14 + 2];
      piVar14[*piVar14 + 2] = temp_v10;
      if (*(char *)(temp_v11 + 0x12d0) != '\0' || temp_v8 != temp_v10) {
        (**(romwright_code **)(temp_v11 + 0x12d4))();
        *(unsigned char *)(temp_v11 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0x12,0x4a7,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xc9);
      temp_v11 = g_renderCtx;
      temp_v2 = packNibblesAndByte(6,7,0);
      piVar14 = (int *)(temp_v11 + 0x12b8);
      temp_v10 = piVar14[*piVar14 + 2];
      piVar14[*piVar14 + 2] = temp_v2;
      if (*(char *)(temp_v11 + 0x12d0) != '\0' || temp_v10 != temp_v2) {
        (**(romwright_code **)(temp_v11 + 0x12d4))();
        *(unsigned char *)(temp_v11 + 0x12d0) = 0;
      }
      efctSetSpeed();
    }
    FUN_001835b4(2,0x12,0x5a1,temp_v0,temp_v1,0xbf);
    iStack_9c = (int)*(short *)(temp_v4 + 0x590);
    temp_v22 = (int)*(short *)(temp_v4 + 0x58e);
    uStack_98 = 0xc4;
    uStack_94 = 0;
    temp_v21 = (int)*(short *)(temp_v4 + 0x58c);
    temp_v20 = 0x401;
    temp_v19 = 0x402;
    temp_v18 = 0x400;
    uStack_a8 = 0x403;
    temp_v17 = (unsigned char *)0x406;
    FUN_00344cd0(temp_v23,temp_v0,temp_v1,0x12,0x404,0x405);
    if (*(short *)(temp_v24 + 0x4a) < 1) {
      FUN_00164b5c(2,0x12,0x1b,temp_v0,temp_v1,0xdd);
      temp_v11 = FUN_001834a4(0x12,0x544);
      textFormatBuffer(&temp_v17,&DAT_00536b70);
      ppuVar10 = &temp_v17;
      fontMeasureLineAdvance(ppuVar10,2);
      VectorSignedToFloat(temp_v0 + (int)*(short *)(temp_v11 + 8) +
                                  ((int)**(short **)(temp_v11 + 0xc) - (int)ppuVar10) / 2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,&temp_v17);
    }
    break;
  case 0x18:
    efctSetSpeed();
    FUN_00164b5c(2,0x12,0xf,temp_v0,temp_v1,0xb3);
    FUN_00164b5c(2,0x12,0xe,temp_v0,temp_v1,0xb3);
    statusDownDrawIndicatorPairs(temp_v0,temp_v1);
    temp_v9 = (unsigned int)*(unsigned short *)(temp_v4 + 0x598);
    FUN_00184310();
    if (temp_v9 != 0) {
      if (*(char *)(temp_v9 + 9) == '\x01') {
        FUN_001835b4(2,0x12,0x483,temp_v0,temp_v1,0xbf);
      }
      if (*(char *)(temp_v9 + 9) == '\x05') {
        FUN_001835b4(2,0x12,0x484,temp_v0,temp_v1,0xbf);
      }
      if (*(char *)(temp_v9 + 9) == '\x04') {
        FUN_001835b4(2,0x12,0x485,temp_v0,temp_v1,0xbf);
      }
    }
    temp_v15 = 0;
    temp_v11 = FUN_002c7e3c();
    if (temp_v11 != 0xe) {
      if (temp_v11 != 7) {
        if (temp_v11 == 0x10) {
          temp_v15 = 1;
        }
      }
      else {
        puVar12 = (unsigned short *)FUN_002c7e24();
        temp_v11 = FUN_0026264c(*puVar12);
        if (temp_v11 == 0) {
          temp_v15 = 1;
        }
      }
    }
    else {
      temp_v15 = 1;
    }
    if ((*(short *)(temp_v4 + 0x598) < 0) || (temp_v15)) {
      FUN_001835b4(2,0x12,0x545,temp_v0,temp_v1,0xbf);
    }
    else {
      temp_v11 = 0;
      do {
        temp_v2 = FUN_001834a4(0x12,temp_v11 + 0x48d);
        temp_v10 = resourceRunOperationIfUnblocked(temp_v4 + 0x23c0);
        FUN_00164168(*(unsigned int *)(temp_v4 + 0x23b8),*(short *)(temp_v2 + 8) + temp_v0,
                     *(short *)(temp_v2 + 10) + temp_v1,0xb5,6,temp_v10 + temp_v11);
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 10);
      FUN_001835b4(2,0x12,0x5a2,temp_v0,temp_v1,0xbf);
      iStack_9c = (int)*(short *)(temp_v4 + 0x590);
      temp_v22 = (int)*(short *)(temp_v4 + 0x58e);
      uStack_98 = 0xc4;
      uStack_94 = 0;
      temp_v21 = (int)*(short *)(temp_v4 + 0x58c);
      temp_v19 = 0x488;
      temp_v20 = 0x487;
      uStack_a8 = 0x489;
      temp_v17 = (unsigned char *)0x48c;
      temp_v18 = 0x486;
      FUN_00344cd0(temp_v4 + 0x23c0,temp_v0,temp_v1,0x12,0x48a,0x48b);
    }
    efctSetSpeed();
    break;
  case 0x1f:
    efctSetSpeed();
    temp_v11 = 0;
    do {
      FUN_001835b4(2,0x12,temp_v11 + 0x553,temp_v0,temp_v1,0xbf);
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 3);
    efctSetSpeed();
    FUN_00289418(temp_v0,temp_v1,bannerAlpha);
  }
  return 0;
}

} /* extern "C" */
