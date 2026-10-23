/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae5cc` (_code @ 0x2ae5cc, 0x2c98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016432c(...);
int FUN_00164b5c(...);
int FUN_0018152c(...);
int FUN_00184310(void);
int FUN_0034ea70(...);
int FUN_003a6404(...);

int effectDispatchSelector(...);
int FUN_00180310(...);
int FUN_00183bb0(void);
int pairSetHalves(...);
int jobGetScalarValue(void);
int markerKindGetColor(...);
int FUN_001a1ee0(void);
int FUN_001f3e80(...);
int fadeObjectResetIfActive(...);
int efctCallRoutineWithSpeedOverride(...);
int devilDispatchTextureResource(...);
int devilIsTextureLoaded(...);
int FUN_003c2690(...);
int FUN_003eb200(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);

int textFormatBuffer(...);
int btlGetMainState(void);
int FUN_00162790(...);
int vec2GetXInt(...);
int efctSetSpeed(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183788(...);
int FUN_0018408c(...);
int drawSetColorFromRGBA8(...);
int gameGetSlotRecord(...);
int FUN_0025e704(...);
int FUN_002b4dcc(...);
int FUN_002b4e7c(void);
int heldAmountLessThan(...);
int FUN_0035ae58(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_5: 38 slot(s), 152 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
} param_5_stack;

extern unsigned char LAB_002af618; /* 0x2af618 */
extern unsigned char LAB_002af620; /* 0x2af620 */
extern unsigned char LAB_002afa0c; /* 0x2afa0c */
extern unsigned char DAT_00573bd8; /* 0x573bd8 */
extern unsigned char DAT_00573bd9; /* 0x573bd9 */
extern unsigned char DAT_00573bda; /* 0x573bda */
extern unsigned char DAT_00573bdb; /* 0x573bdb */
extern unsigned int DAT_00573bdc; /* 0x573bdc */
extern float DAT_00573be0; /* 0x573be0 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: btlGetMainState. */
extern unsigned int gameGetPlayerName(void);
extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_0016432c. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
extern int vec2GetYInt(int);
/* Supplied declaration required: effectDispatchSelector. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int recordGetScaledMaximum(int);
extern unsigned int FUN_00180114(unsigned short);
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183788. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: pairSetHalves. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: markerKindGetColor. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: FUN_001f3e80. */
/* Supplied declaration required: fadeObjectResetIfActive. */
/* Supplied declaration required: FUN_0025e704. */
extern int btlMainGetUnk14(void);
/* Supplied declaration required: FUN_002b4dcc. */
/* Supplied declaration required: FUN_002b4e7c. */
extern int valueAtMostFifthOfTotal(int, int);
/* Supplied declaration required: heldAmountLessThan. */
/* Supplied declaration required: efctCallRoutineWithSpeedOverride. */
/* Supplied declaration required: FUN_0034ea70. */
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: devilDispatchTextureResource. */
/* Supplied declaration required: FUN_003a6404. */
/* Supplied declaration required: devilIsTextureLoaded. */
/* Supplied declaration required: FUN_003c2690. */
extern int FUN_003e4978(void);
extern int partySlotMatchesSelected(int);
extern int uiEntryGetState(int, int);
/* Supplied declaration required: FUN_003eb200. */


void FUN_002ae5cc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 39 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar10;
  int temp_v8;
  unsigned char *puVar12;
  int temp_v9;
  unsigned int *puVar14;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned char temp_v19;
  unsigned int in_fpscr;
  float temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned long long temp_v26;
  short temp_v27;
  int temp_v28;
  int temp_v29;
  int temp_v30;
  int temp_v31;
  unsigned char temp_v32 [36];
  int temp_v33;
  int temp_v34;
  unsigned int temp_v35 [5];
  unsigned char temp_v36 [8];
  int *temp_v37;
  int temp_v38;
  unsigned char temp_v39 [8];
  unsigned char temp_v40 [8];
  int temp_v41;
  int temp_v42;
  int *temp_v43;
  int temp_v44;
  int temp_v45;
  int temp_v46;
  int temp_v47;
  unsigned int temp_v48;
  int temp_v49;
  int iStack_34;
  int temp_v50;
  int temp_v51;
  int iStack_28;
  
  temp_v41 = param_1 + 0x3800;
  temp_v26 = 0x3f800000;
  temp_v51 = param_3;
  if (*(char *)(param_1 + 0x38b9) != '\0') {
    temp_v51 = 1;
  }
  temp_v28 = param_4 * 8;
  if (temp_v28 >= 0x29) {
    temp_v28 = 0x28;
  }
  temp_v30 = 0;
  temp_v31 = 0;
  temp_v42 = param_1 + 0x12b8;
  temp_v38 = param_1 + 0x4000;
  temp_v3 = *(int *)(param_1 + 0x41a0);
  temp_v16 = 0;
  temp_v4 = *(int *)(param_1 + 0x41a4);
  temp_v44 = param_1 + 0x2208;
  temp_v43 = (int *)(param_1 + 0x3890);
  temp_v46 = param_1 + 0x3d00;
  piVar6 = (int *)(param_1 + 0x3874);
  temp_v37 = (int *)(param_1 + 0x387c);
  temp_v45 = temp_v28 - (temp_v28 >> 0x1f);
  iStack_34 = param_1;
  temp_v50 = param_2;
  iStack_28 = param_4;
  do {
    efctSetSpeed();
    temp_v5 = FUN_001834a4(0xd,temp_v16 + 0x36);
    temp_v33 = param_1 + temp_v16 * 0x8c;
    temp_v15 = temp_v33 + 0x73c;
    temp_v6 = vec2GetXInt(temp_v15);
    temp_v1 = *(short *)(temp_v5 + 8);
    temp_v15 = vec2GetYInt(temp_v15);
    temp_v27 = *(short *)(temp_v5 + 10);
    temp_v5 = vec2GetXInt(temp_v42);
    temp_v7 = vec2GetYInt(temp_v42);
    temp_v34 = param_1 + temp_v16;
    temp_v47 = temp_v34 + 0x4a00;
    temp_v6 = temp_v5 + temp_v6 + temp_v1 + temp_v3;
    temp_v5 = temp_v7 + temp_v15 + temp_v27 + temp_v4;
    if (*(char *)(temp_v34 + 0x4ae5) != '\0') {
      temp_v15 = FUN_001834a4(0xd,temp_v16 + 0x46);
      piVar10 = (int *)(param_1 + temp_v16 * 4 + 0x4aec);
      temp_v7 = *piVar10;
      if (temp_v7 < 4) {
        temp_v8 = (int)*(short *)(*(int *)(temp_v15 + 0xc) + 2);
        VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        piVar10 = (int *)((int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1e)) >> 2);
        temp_v5 = (int)piVar10 * temp_v7 + temp_v5;
      }
      else if (temp_v7 < 0x11) {
        piVar10 = (int *)(int)*(short *)(*(int *)(temp_v15 + 0xc) + 2);
        temp_v5 = temp_v5 + (int)piVar10;
      }
      else if (temp_v7 < 0x19) {
        temp_v8 = (int)*(short *)(*(int *)(temp_v15 + 0xc) + 2);
        temp_v8 = ((int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1d)) >> 3) * (0x11 - temp_v7) + temp_v8;
        if (*(char *)(temp_v34 + 0x4b0a) != '\0') {
          temp_v5 = temp_v5 + temp_v8;
          piVar10 = (int *)(temp_v7 - 0x11);
          VectorSignedToFloat(piVar10,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        else {
          temp_v5 = temp_v5 - temp_v8;
          piVar10 = (int *)(temp_v7 - 0x11);
          VectorSignedToFloat(piVar10,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      efctSetSpeed(piVar10);
      temp_v7 = g_renderCtx;
      piVar10 = (int *)(g_renderCtx + 0x1318);
      temp_v8 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = 3;
      if (*(char *)(temp_v7 + 0x1330) != '\0' || temp_v8 != 3) {
        (**(romwright_code **)(temp_v7 + 0x1334))(3);
        *(unsigned char *)(temp_v7 + 0x1330) = 0;
      }
      FUN_0035ae58((int)*(short *)(temp_v15 + 8),(int)*(short *)(temp_v15 + 10),
                   (int)**(short **)(temp_v15 + 0xc),(*(short **)(temp_v15 + 0xc))[1] - temp_v28,1);
    }
    temp_v15 = temp_v34;
    if ((!(*(char *)(temp_v34 + 0x41ed) == '\0' || temp_v16 < 1)) &&
       ((temp_v7 = uiEntryGetState(*piVar6,temp_v16), temp_v7 != 0 ||
        (-1 >= *(short *)(param_1 + temp_v16 * 2 + 0x4210))))) {
      if (temp_v50 != 0) {
        temp_v7 = FUN_001834a4(0xd,0x3a);
        temp_v15 = g_renderCtx;
        piVar10 = (int *)(g_renderCtx + 0x1318);
        temp_v8 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = 3;
        if (*(char *)(temp_v15 + 0x1330) != '\0' || temp_v8 != 3) {
          (**(romwright_code **)(temp_v15 + 0x1334))();
          *(unsigned char *)(temp_v15 + 0x1330) = 0;
        }
        FUN_0035ae58(*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,
                     (int)**(short **)(temp_v7 + 0xc),(*(short **)(temp_v7 + 0xc))[1] - temp_v28,1);
        FUN_001835b4(2,0xd,0x3a,temp_v6,temp_v5,6);
        temp_v15 = FUN_001834a4(0xd,0x45);
        FUN_001835b4(2,0xd,0x1b,
                     (int)*(short *)(temp_v15 + 8) + temp_v6 + (int)**(short **)(temp_v15 + 0xc) / 2,
                     ((int)*(short *)(temp_v15 + 10) + temp_v5 + (int)(*(short **)(temp_v15 + 0xc))[1] / 2
                     ) - (temp_v45 >> 1),0xb);
        temp_v5 = g_renderCtx;
        piVar10 = (int *)(g_renderCtx + 0x1318);
        temp_v6 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = 0;
        if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v6 != 0) {
          (**(romwright_code **)(temp_v5 + 0x1334))();
          *(unsigned char *)(temp_v5 + 0x1330) = 0;
        }
      }
      else {
        FUN_001835b4(2,0xd,0,temp_v6,temp_v5,6);
        temp_v15 = FUN_001834a4(0xd,0x35);
        FUN_001835b4(2,0xd,0x1b,
                     (int)*(short *)(temp_v15 + 8) +
                     temp_v6 + ((*(unsigned short *)(temp_v15 + 4) & 0xffff7fff) >> 1),
                     (int)*(short *)(temp_v15 + 10) +
                     temp_v5 + ((*(unsigned short *)(temp_v15 + 6) & 0xffff7fff) >> 1),0xb);
      }
    }
    else {
      if (temp_v50 != 0) {
        temp_v8 = FUN_001834a4(0xd,0x3a);
        temp_v7 = g_renderCtx;
        if (*(char *)(temp_v47 + 0xe5) == '\0') {
          piVar10 = (int *)(g_renderCtx + 0x1318);
          temp_v13 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = 3;
          if (*(char *)(temp_v7 + 0x1330) != '\0' || temp_v13 != 3) {
            (**(romwright_code **)(temp_v7 + 0x1334))(3);
            *(unsigned char *)(temp_v7 + 0x1330) = 0;
          }
          FUN_0035ae58(*(short *)(temp_v8 + 8) + temp_v6,*(short *)(temp_v8 + 10) + temp_v5,
                       (int)**(short **)(temp_v8 + 0xc),(*(short **)(temp_v8 + 0xc))[1] - temp_v28,1)
          ;
        }
        FUN_001835b4(2,0xd,0x3a,temp_v6,temp_v5,6);
        if (*(char *)(temp_v15 + 0x41e8) != '\0') {
          if ((*(unsigned short *)(param_1 + temp_v16 * 2 + 0x4210) < 0xfffe) &&
             (temp_v7 = uiEntryGetState(*piVar6,temp_v16), temp_v7 != 0)) {
            if (*(char *)(temp_v33 + 0xa82) != '\0') {
              temp_v7 = FUN_001834a4(0xd,0x45);
              temp_v13 = temp_v33 + 0xc28;
              temp_v8 = vec2GetXInt(temp_v13);
              temp_v13 = vec2GetYInt(temp_v13);
              efctSetSpeed();
              FUN_001835b4(2,0xd,0x1b,
                           *(short *)(temp_v7 + 8) + temp_v6 +
                           temp_v8 + (int)**(short **)(temp_v7 + 0xc) / 2,
                           temp_v13 + (int)(*(short **)(temp_v7 + 0xc))[1] / 2 +
                           *(short *)(temp_v7 + 10) + temp_v5,0x1f);
              efctSetSpeed();
            }
            efctSetSpeed();
          }
          else {
            efctSetSpeed();
          }
        }
        temp_v7 = param_1 + temp_v16 * 2;
        temp_v1 = *(short *)(temp_v7 + 0x4210);
        if (temp_v1 != -1) {
          if (temp_v1 == -2) {
            if (*(char *)(temp_v15 + 0x41ed) != '\0') {
              temp_v8 = uiEntryGetState(*piVar6,temp_v16);
              if (temp_v8 != 0) {
                if (((-1 < *(short *)(temp_v7 + 0x4210)) && (*(char *)(temp_v15 + 0x41ed) != '\0')) &&
                   (temp_v15 = uiEntryGetState(*piVar6,temp_v16), temp_v15 == 0)) {
                  efctSetSpeed();
                }
              }
              else {
                efctSetSpeed();
              }
            }
          }
          else if (((-1 < *(short *)(temp_v7 + 0x4210)) && (*(char *)(temp_v15 + 0x41ed) != '\0')) &&
                  (temp_v15 = uiEntryGetState(*piVar6,temp_v16), temp_v15 == 0)) {
            efctSetSpeed();
          }
        }
        else if (*(char *)(temp_v15 + 0x41ed) != '\0') {
          efctSetSpeed();
        }
        FUN_001835b4(2,0xd,0x3b,temp_v6,temp_v5,0xb);
        FUN_001835b4(2,0xd,0x3c,temp_v6,temp_v5,0xb);
        FUN_001835b4(2,0xd,0x3d,temp_v6,temp_v5,0xb);
        FUN_001835b4(2,0xd,0x3e,temp_v6,temp_v5 - temp_v28,0xb);
        temp_v15 = g_renderCtx;
        if (*(char *)(temp_v47 + 0xe5) == '\0') {
          piVar10 = (int *)(g_renderCtx + 0x1318);
          temp_v7 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = 0;
          if (*(char *)(temp_v15 + 0x1330) != '\0' || temp_v7 != 0) {
            (**(romwright_code **)(temp_v15 + 0x1334))(0);
            *(unsigned char *)(temp_v15 + 0x1330) = 0;
          }
        }
      }
      else {
        FUN_001835b4(2,0xd,0,temp_v6,temp_v5,6);
        if (*(char *)(temp_v15 + 0x41e8) != '\0') {
          if ((*(unsigned short *)(param_1 + temp_v16 * 2 + 0x4210) < 0xfffe) &&
             (temp_v7 = uiEntryGetState(*piVar6,temp_v16), temp_v7 != 0)) {
            if (*(char *)(temp_v33 + 0xa82) != '\0') {
              temp_v7 = FUN_001834a4(0xd,0x35);
              temp_v13 = temp_v33 + 0xc28;
              temp_v8 = vec2GetXInt(temp_v13);
              temp_v13 = vec2GetYInt(temp_v13);
              efctSetSpeed();
              FUN_001835b4(2,0xd,0x1b,
                           *(short *)(temp_v7 + 8) + temp_v6 +
                           temp_v8 + (int)**(short **)(temp_v7 + 0xc) / 2,
                           temp_v13 + (int)(*(short **)(temp_v7 + 0xc))[1] / 2 +
                           *(short *)(temp_v7 + 10) + temp_v5,0x1f);
              efctSetSpeed();
            }
            efctSetSpeed();
          }
          else {
            efctSetSpeed();
          }
        }
        temp_v7 = param_1 + temp_v16 * 2;
        temp_v1 = *(short *)(temp_v7 + 0x4210);
        if (temp_v1 != -1) {
          if (temp_v1 == -2) {
            if (*(char *)(temp_v15 + 0x41ed) != '\0') {
              temp_v8 = uiEntryGetState(*piVar6,temp_v16);
              if (temp_v8 != 0) {
                if (((-1 < *(short *)(temp_v7 + 0x4210)) && (*(char *)(temp_v15 + 0x41ed) != '\0')) &&
                   (temp_v15 = uiEntryGetState(*piVar6,temp_v16), temp_v15 == 0)) {
                  efctSetSpeed();
                }
              }
              else {
                efctSetSpeed();
              }
            }
          }
          else if (((-1 < *(short *)(temp_v7 + 0x4210)) && (*(char *)(temp_v15 + 0x41ed) != '\0')) &&
                  (temp_v15 = uiEntryGetState(*piVar6,temp_v16), temp_v15 == 0)) {
            efctSetSpeed();
          }
        }
        else if (*(char *)(temp_v15 + 0x41ed) != '\0') {
          efctSetSpeed();
        }
        FUN_001835b4(2,0xd,1,temp_v6,temp_v5,0xb);
        FUN_001835b4(2,0xd,2,temp_v6,temp_v5,0xb);
        FUN_001835b4(2,0xd,3,temp_v6,temp_v5,0xb);
        FUN_001835b4(2,0xd,4,temp_v6,temp_v5,0xb);
      }
      FUN_001835b4(2,0xd,6,temp_v6,temp_v5,0xe);
      FUN_001835b4(2,0xd,7,temp_v6,temp_v5,0xe);
      FUN_001835b4(2,0xd,8,temp_v6,temp_v5,0xe);
      FUN_001835b4(2,0xd,9,temp_v6,temp_v5,0xe);
      temp_v15 = param_1 + temp_v16 * 2;
      temp_v29 = 0;
      temp_v49 = 0;
      temp_v7 = (int)*(short *)(temp_v15 + 0x41f2);
      if (*(char *)(temp_v34 + 0x40d8) != '\0') {
        temp_v8 = param_1 + temp_v16 * 4;
        temp_v29 = *(int *)(temp_v8 + 0x40e4);
        temp_v49 = *(int *)(temp_v8 + 0x40f8);
        if (*(char *)(temp_v34 + 0x4120) == '\0') {
          temp_v29 = -temp_v29;
          temp_v49 = -temp_v49;
        }
      }
      textFormatBuffer(temp_v39,&LAB_002af618,(int)*(short *)(temp_v15 + 0x4206));
      temp_v1 = *(short *)(temp_v15 + 0x4210);
      temp_v48 = 0;
      if (temp_v1 != -1) {
        if (temp_v1 != -2) {
          if (-1 < temp_v1) {
            temp_v7 = param_1 + temp_v16 * 300;
            if (*(short *)(temp_v7 + 0x4292) != 0) {
              temp_v8 = temp_v7 + 0x4230;
              *(unsigned short *)(temp_v15 + 0x41f2) = *(unsigned short *)(temp_v7 + 0x425a);
              *(unsigned short *)(temp_v15 + 0x41fc) = *(unsigned short *)(temp_v7 + 0x425c);
            }
            else {
              temp_v8 = gameGetSlotRecord();
            }
            temp_v1 = FUN_002b4dcc(temp_v8);
            temp_v30 = (int)temp_v1;
            temp_v31 = (int)*(short *)(temp_v8 + 0x10);
            temp_v12 = FUN_00180114(*(unsigned short *)(temp_v8 + 0x62));
            textFormatBuffer(temp_v32,&LAB_002af620,temp_v12);
            temp_v48 = heldAmountLessThan(temp_v30,*(unsigned short *)(temp_v8 + 0x62));
          }
        }
        else {
          temp_v7 = btlMainGetUnk14();
          temp_v1 = FUN_002b4dcc();
          temp_v30 = (int)temp_v1;
          temp_v31 = (int)*(short *)(temp_v7 + 0x10);
          temp_v12 = FUN_00180114(*(unsigned short *)(temp_v7 + 0x62));
          textFormatBuffer(temp_v32,&LAB_002af620,temp_v12);
          temp_v48 = (unsigned int)(*(short *)(temp_v7 + 0xe) < temp_v30);
        }
      }
      else {
        temp_v13 = gameGetPlayerData();
        temp_v8 = temp_v13;
        FUN_002b4e7c();
        temp_v30 = (int)(short)temp_v8;
        temp_v31 = (int)*(short *)(temp_v13 + 0x1e);
        temp_v12 = gameGetPlayerName();
        textFormatBuffer(temp_v32,&LAB_002af620,temp_v12);
        temp_v48 = heldAmountLessThan(temp_v30,0xffffffff);
        if (temp_v7 < 1) {
          btlGetMainState();
        }
      }
      temp_v7 = param_1 + temp_v16 * 4;
      if (*(int *)(temp_v7 + 0x3c88) != 0) {
        FUN_00183788((int)*(short *)(temp_v15 + 0x41f2),temp_v30,*(int *)(temp_v7 + 0x3c88),0,0xd,10,
                     0xd,0xc,0xb,temp_v6,temp_v5,0x15,0);
      }
      else {
        FUN_00183788((int)*(short *)(temp_v15 + 0x41f2),temp_v30,temp_v29,
                     *(unsigned int *)(temp_v7 + 0x410c),0xd,10,0xd,0xc,0xb,temp_v6,temp_v5,0x15,0);
      }
      temp_v8 = (int)(short)temp_v49;
      temp_v12 = *(unsigned int *)(temp_v7 + 0x410c);
      if (*(int *)(temp_v7 + 0x3c98) != 0) {
        temp_v12 = 0;
        temp_v8 = *(int *)(temp_v7 + 0x3c98);
      }
      FUN_0025e704((int)*(short *)(temp_v15 + 0x41fc),temp_v31,temp_v8,temp_v12,0xd,0xe,0x10,0xf,temp_v6,
                   temp_v5,0x15,0);
      temp_v29 = *(short *)(temp_v15 + 0x41f2) + temp_v29;
      temp_v8 = *(short *)(temp_v15 + 0x41fc) + temp_v49;
      if (((*(char *)(temp_v46 + 0xb0) != '\0') && (*(short *)(temp_v15 + 0x4210) == -1)) &&
         (temp_v29 < 1)) {
        temp_v29 = 1;
      }
      if (temp_v30 < temp_v29) {
        temp_v29 = temp_v30;
      }
      if (temp_v29 < 0) {
        temp_v29 = 0;
      }
      textFormatBuffer(temp_v36,&LAB_002af618,temp_v29);
      if (temp_v31 < temp_v8) {
        temp_v8 = temp_v31;
      }
      if (temp_v8 < 0) {
        temp_v8 = 0;
      }
      textFormatBuffer(temp_v40,&LAB_002af618,temp_v8);
      temp_v13 = FUN_001834a4(0xd,0x1c);
      puVar12 = temp_v32;
      FUN_0018408c(puVar12,1);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 8) +
                          ((int)**(short **)(temp_v13 + 0xc) - (int)puVar12) / 2 + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v13 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(1,0xffffffff,temp_v32);
      temp_v13 = valueAtMostFifthOfTotal(temp_v29,temp_v30);
      if (temp_v13 != 0) {
        temp_v12 = 0xdc0f14ff;
        drawSetColorFromRGBA8(temp_v12);
      }
      else if (temp_v48 != 0) {
        temp_v12 = 0x6ef0ffff;
        drawSetColorFromRGBA8(temp_v12);
      }
      efctSetSpeed();
      temp_v13 = FUN_001834a4(0xd,0x20);
      if (temp_v29 >= 10000) {
        FUN_00180310(0,*(short *)(temp_v13 + 8) + temp_v6,*(short *)(temp_v13 + 10) + temp_v5,1,4,0x10,
                     &LAB_002afa0c);
      }
      else {
        FUN_00180310(0,*(short *)(temp_v13 + 8) + temp_v6,*(short *)(temp_v13 + 10) + temp_v5,1,4,0x10,
                     temp_v36);
      }
      FUN_00183bb0();
      temp_v13 = FUN_001834a4(0xd,0x24);
      if (temp_v8 >= 10000) {
        FUN_00180310(0,*(short *)(temp_v13 + 8) + temp_v6,*(short *)(temp_v13 + 10) + temp_v5,1,4,0x10,
                     &LAB_002afa0c);
      }
      else {
        FUN_00180310(0,*(short *)(temp_v13 + 8) + temp_v6,*(short *)(temp_v13 + 10) + temp_v5,1,4,0x10,
                     temp_v40);
      }
      if (temp_v50 != 0) {
        temp_v8 = FUN_001834a4(0xd,0x43);
      }
      else {
        temp_v8 = FUN_001834a4(0xd,0x33);
      }
      temp_v13 = g_renderCtx;
      if (*(char *)(temp_v47 + 0xe5) != '\0') {
        temp_v9 = FUN_001834a4(0xd,temp_v16 + 0x46);
        temp_v13 = g_renderCtx;
        temp_v9 = (int)*(short *)(temp_v9 + 10) + (int)*(short *)(*(int *)(temp_v9 + 0xc) + 2);
        temp_v14 = *(short *)(temp_v8 + 10) + temp_v5;
        if (temp_v14 < temp_v9) {
          temp_v17 = (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2);
          if (temp_v9 < (int)*(short *)(temp_v8 + 10) + temp_v5 + temp_v17) {
            temp_v17 = temp_v9 - temp_v14;
          }
          piVar10 = (int *)(g_renderCtx + 0x1318);
          temp_v9 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = 0;
          if (*(char *)(temp_v13 + 0x1330) != '\0' || temp_v9 != 0) {
            (**(romwright_code **)(temp_v13 + 0x1334))(0);
            *(unsigned char *)(temp_v13 + 0x1330) = 0;
          }
          temp_v13 = g_renderCtx;
          piVar10 = (int *)(g_renderCtx + 0x1318);
          temp_v9 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = 3;
          if (*(char *)(temp_v13 + 0x1330) != '\0' || temp_v9 != 3) {
            (**(romwright_code **)(temp_v13 + 0x1334))(3);
            *(unsigned char *)(temp_v13 + 0x1330) = 0;
          }
          FUN_0035ae58(*(short *)(temp_v8 + 8) + temp_v6,*(short *)(temp_v8 + 10) + temp_v5,
                       (int)**(short **)(temp_v8 + 0xc),temp_v17 - temp_v28,1);
        }
      }
      else {
        piVar10 = (int *)(g_renderCtx + 0x1318);
        temp_v9 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = 3;
        if (*(char *)(temp_v13 + 0x1330) != '\0' || temp_v9 != 3) {
          (**(romwright_code **)(temp_v13 + 0x1334))(3);
          *(unsigned char *)(temp_v13 + 0x1330) = 0;
        }
        FUN_0035ae58(*(short *)(temp_v8 + 8) + temp_v6,*(short *)(temp_v8 + 10) + temp_v5,
                     (int)**(short **)(temp_v8 + 0xc),(*(short **)(temp_v8 + 0xc))[1] - temp_v28,1);
      }
      temp_v11 = *(unsigned int *)(temp_v7 + 0x4178);
      if ((int)temp_v11 >= 1) {
        temp_v24 = *(float *)(temp_v7 + 0x418c);
        if ((temp_v11 & 1) != 0) {
          temp_v24 = -temp_v24;
        }
        temp_v13 = (int)temp_v24;
        temp_v24 = (float)VectorSignedToFloat(0xf - temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v24 = temp_v24 * 1.5707964f * 0.06666667f * 40.743664f;
        temp_v8 = temp_v13;
        FUN_001a1ee0();
        *(float *)(temp_v7 + 0x418c) = ((float)temp_v26 - temp_v24) * 8.0f;
      }
      else {
        temp_v8 = 0;
        temp_v13 = 0;
      }
      temp_v11 = 1;
      temp_v18 = 0;
      puVar14 = (unsigned int *)(temp_v7 + 0x3e30);
LAB_002afa60:
      temp_v9 = (int)*(short *)(temp_v15 + 0x4210);
      temp_v10 = 0;
      if (temp_v9 != -1) {
        if (temp_v9 != -2) {
          if (temp_v9 >= 0) {
            temp_v9 = gameGetSlotRecord(temp_v9);
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v9 + 0x60);
          }
        }
        else {
          temp_v9 = btlMainGetUnk14();
          temp_v10 = (unsigned int)*(unsigned short *)(temp_v9 + 0x60);
        }
      }
      else {
        temp_v9 = gameGetPlayerData();
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v9 + 0x5e);
      }
      temp_v25 = (unsigned int)temp_v26;
      if ((temp_v10 & (1 << (temp_v11 & 0xff))) == 0) {
LAB_002afaf4:
        temp_v11 = temp_v11 + 1;
        if ((int)temp_v11 >= 0xe) goto LAB_002afb00;
        while (temp_v11 == 2) {
          temp_v11 = 3;
        }
        goto LAB_002afa60;
      }
      if (*puVar14 != temp_v18) {
        temp_v18 = (temp_v18 + 1) & 0xffff;
        goto LAB_002afaf4;
      }
      markerKindGetColor((int)(short)temp_v11);
      drawSetColorFromRGBA8();
LAB_002afb00:
      temp_v9 = FUN_001834a4(0xd,0x44);
      temp_v14 = (int)(short)*(unsigned int *)(temp_v7 + 0x4bb0);
      devilIsTextureLoaded(temp_v14,1);
      if (temp_v14 != 0) {
        devilDispatchTextureResource((int)(short)*(unsigned int *)(temp_v7 + 0x4bb0),
                     temp_v8 + temp_v6 + (int)*(short *)(temp_v9 + 8),
                     (int)*(short *)(temp_v9 + 10) + temp_v5 + temp_v13,0x15,1);
      }
      if (*(short *)(temp_v15 + 0x4b2c) != 0) {
        if (*(short *)(temp_v15 + 0x4b2c) == 5) {
          temp_v9 = (int)*(short *)(temp_v15 + 0x4210);
          temp_v2 = 0;
          if (temp_v9 != -1) {
            if (temp_v9 != -2) {
              if (temp_v9 >= 0) {
                temp_v9 = gameGetSlotRecord(temp_v9);
                temp_v2 = *(unsigned short *)(temp_v9 + 0x60);
              }
            }
            else {
              temp_v9 = btlMainGetUnk14();
              temp_v2 = *(unsigned short *)(temp_v9 + 0x60);
            }
          }
          else {
            temp_v9 = gameGetPlayerData();
            temp_v2 = *(unsigned short *)(temp_v9 + 0x5e);
          }
          if ((temp_v2 & 0x10) != 0) {
            efctSetSpeed();
            temp_v9 = g_renderCtx;
            temp_v14 = packNibblesAndByte(6,1,0);
            piVar10 = (int *)(temp_v9 + 0x12b8);
            temp_v17 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = temp_v14;
            if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v17 != temp_v14) {
              (**(romwright_code **)(temp_v9 + 0x12d4))();
              *(unsigned char *)(temp_v9 + 0x12d0) = 0;
            }
            temp_v18 = (unsigned int)DAT_00573bd9;
            temp_v11 = (unsigned int)DAT_00573bda;
            temp_v23 = (float)VectorUnsignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)VectorUnsignedToFloat((unsigned int)DAT_00573bd8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v24 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = VectorFloatToUnsigned(temp_v23 * DAT_00573be0,3);
            temp_v22 = VectorFloatToUnsigned(temp_v20 * DAT_00573be0,3);
            temp_v21 = VectorFloatToUnsigned(temp_v24 * DAT_00573be0,3);
            temp_v10 = temp_v10 & 0xff;
            temp_v21 = temp_v21 & 0xff;
            temp_v9 = FUN_001f3e80(temp_v22 & 0xff,(unsigned int)DAT_00573bd8,DAT_00573bdc,
                                  *(unsigned short *)(temp_v15 + 0x4b36),0);
            temp_v18 = FUN_001f3e80(temp_v10,temp_v18,DAT_00573bdc,*(unsigned short *)(temp_v15 + 0x4b36),0) & 0xff;
            temp_v11 = FUN_001f3e80(temp_v21,temp_v11,DAT_00573bdc,*(unsigned short *)(temp_v15 + 0x4b36),0);
            drawSetColorFromRGBA8((temp_v9 << 0x18) | (temp_v18 << 0x10) | ((temp_v11 & 0xff) << 8) |
                         (unsigned int)DAT_00573bdb);
            temp_v9 = FUN_001834a4(0xd,0x43);
            FUN_001835b4(2,0xd,2000,(int)*(short *)(temp_v9 + 8) + temp_v8 + temp_v6,
                         (int)*(short *)(temp_v9 + 10) + temp_v5 + temp_v13,0x1f);
            FUN_00183bb0();
            temp_v9 = g_renderCtx;
            temp_v14 = packNibblesAndByte(6,7,0);
            piVar10 = (int *)(temp_v9 + 0x12b8);
            temp_v17 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = temp_v14;
            if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v17 != temp_v14) {
              (**(romwright_code **)(temp_v9 + 0x12d4))();
              *(unsigned char *)(temp_v9 + 0x12d0) = 0;
            }
            efctSetSpeed();
          }
          else {
            *(unsigned short *)(temp_v15 + 0x4b2c) = 0;
          }
        }
        efctSetSpeed();
        if (temp_v50 != 0) {
          FUN_001835b4(2,0xd,0x1c8,temp_v6 + temp_v8,temp_v13 + temp_v5,0x1a);
          temp_v1 = (short)temp_v13;
          temp_v27 = (short)temp_v8;
        }
        else {
          FUN_001835b4(2,0xd,0x1c7,temp_v6 + temp_v8,temp_v13 + temp_v5,0x1a);
          temp_v1 = (short)temp_v13;
          temp_v27 = (short)temp_v8;
        }
        efctSetSpeed();
        temp_v8 = g_renderCtx;
        piVar10 = (int *)(g_renderCtx + 0x1318);
        temp_v13 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = 0;
        if (*(char *)(temp_v8 + 0x1330) != '\0' || temp_v13 != 0) {
          (**(romwright_code **)(temp_v8 + 0x1334))(0);
          *(unsigned char *)(temp_v8 + 0x1330) = 0;
        }
        if (temp_v50 != 0) {
          temp_v8 = FUN_001834a4(0xd,0x1ca);
        }
        else {
          temp_v8 = FUN_001834a4(0xd,0x1c9);
        }
        temp_v1 = (short)temp_v5 + temp_v1;
        temp_v27 = (short)temp_v6 + temp_v27;
        temp_v13 = temp_v33 + 0x168c;
        pairSetHalves(temp_v13,(int)(short)(*(short *)(temp_v8 + 8) + *(short *)(temp_v15 + 0x4b82) +
                                        temp_v27),
                     (int)(short)(*(short *)(temp_v8 + 10) + *(short *)(temp_v15 + 0x4b8c) + temp_v1));
        fadeObjectResetIfActive(temp_v13);
        temp_v13 = g_renderCtx;
        if (*(char *)(temp_v33 + 0x1941) != '\0') {
          temp_v9 = packNibblesAndByte(6,1,0);
          piVar10 = (int *)(temp_v13 + 0x12b8);
          temp_v14 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = temp_v9;
          if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v14 != temp_v9) {
            (**(romwright_code **)(temp_v13 + 0x12d4))(temp_v9);
            *(unsigned char *)(temp_v13 + 0x12d0) = 0;
          }
          temp_v13 = temp_v33 + 0x18bc;
          pairSetHalves(temp_v13,(int)(short)(*(short *)(temp_v8 + 8) + temp_v27),
                       (int)(short)(*(short *)(temp_v8 + 10) + temp_v1));
          *(unsigned int *)(temp_v13 + 0x30) = *(unsigned int *)(temp_v7 + 0x4b40);
          fadeObjectResetIfActive(temp_v13);
          fadeObjectResetIfActive(temp_v13);
          temp_v7 = g_renderCtx;
          temp_v8 = packNibblesAndByte(6,7,0);
          piVar10 = (int *)(temp_v7 + 0x12b8);
          temp_v13 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = temp_v8;
          if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v13 != temp_v8) {
            (**(romwright_code **)(temp_v7 + 0x12d4))();
            *(unsigned char *)(temp_v7 + 0x12d0) = 0;
          }
        }
        efctSetSpeed();
      }
      FUN_00183bb0();
      if (temp_v50 != 0) {
        if (*(short *)(temp_v15 + 0x4206) >= 100) {
          FUN_001835b4(2,0xd,500,temp_v6,temp_v5,0x1f);
          FUN_001835b4(2,0xd,0x1f5,temp_v6,temp_v5,0x1f);
          temp_v7 = FUN_001834a4(0xd,0x1f8);
          FUN_00180310(0,*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,1,3,0x24,
                       temp_v39);
        }
        else {
          FUN_001835b4(2,0xd,0x3f,temp_v6,temp_v5 - temp_v28,0x1f);
          temp_v7 = FUN_001834a4(0xd,0x42);
          FUN_00180310(0,*(short *)(temp_v7 + 8) + temp_v6,(*(short *)(temp_v7 + 10) + temp_v5) - temp_v28,
                       1,2,0x24,temp_v39);
        }
      }
      else if (*(short *)(temp_v15 + 0x4206) >= 100) {
        FUN_001835b4(2,0xd,0x1ef,temp_v6,temp_v5,0x1f);
        FUN_001835b4(2,0xd,0x1f0,temp_v6,temp_v5,0x1f);
        temp_v7 = FUN_001834a4(0xd,499);
        FUN_00180310(0,*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,1,3,0x24,
                     temp_v39);
      }
      else {
        FUN_001835b4(2,0xd,5,temp_v6,temp_v5,0x1f);
        temp_v7 = FUN_001834a4(0xd,0x26);
        FUN_00180310(0,*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,1,2,0x24,
                     temp_v39);
      }
      temp_v7 = temp_v34 + 0x4b00;
      temp_v26 = (unsigned long long)temp_v25;
      temp_v8 = temp_v15 + 0x3e00;
      temp_v18 = 0;
      temp_v11 = 1;
      do {
        while (temp_v10 = 0, temp_v11 == 2) {
          temp_v11 = 3;
        }
        temp_v13 = (int)*(short *)(temp_v15 + 0x4210);
        if (temp_v13 != -1) {
          if (temp_v13 != -2) {
            if (-1 < temp_v13) {
              temp_v13 = gameGetSlotRecord(temp_v13);
              temp_v2 = *(unsigned short *)(temp_v13 + 0x60);
              temp_v10 = (unsigned int)temp_v2;
            }
          }
          else {
            temp_v13 = btlMainGetUnk14();
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v13 + 0x60);
          }
        }
        else {
          temp_v13 = gameGetPlayerData();
          temp_v2 = *(unsigned short *)(temp_v13 + 0x5e);
          temp_v10 = (unsigned int)temp_v2;
        }
        if ((temp_v10 & (1 << (temp_v11 & 0xff))) != 0) {
          if (temp_v11 == 4) {
            temp_v0 = *(char *)(temp_v7 + 0x54);
            temp_v13 = FUN_001834a4(0xd,temp_v18 * 2 + 0x27);
            *(short *)(temp_v15 + 0x4b6e) = *(short *)(temp_v13 + 8) + (short)temp_v6;
            *(short *)(temp_v15 + 0x4b78) = *(short *)(temp_v13 + 10) + (short)temp_v5;
            if (temp_v0 != '\0') {
              jobGetScalarValue();
              if ((temp_v11 == 4) && (0 < *(short *)(temp_v8 + 0x44))) {
                VectorSignedToFloat((int)*(short *)(temp_v8 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_001a1ee0();
              }
              temp_v13 = FUN_001834a4(0xd,temp_v18 * 2 + 0x28);
              efctCallRoutineWithSpeedOverride(*(short *)(temp_v13 + 8) + temp_v6,*(short *)(temp_v13 + 10) + temp_v5,0x24);
              temp_v13 = FUN_001834a4(0xd,temp_v18 * 2 + 0x27);
              effectDispatchSelector((int)(short)temp_v11,*(short *)(temp_v13 + 8) + temp_v6,
                           *(short *)(temp_v13 + 10) + temp_v5,0x24);
            }
          }
          else {
            jobGetScalarValue();
            if ((temp_v11 == 4) && (0 < *(short *)(temp_v8 + 0x44))) {
              VectorSignedToFloat((int)*(short *)(temp_v8 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_001a1ee0();
            }
            temp_v13 = FUN_001834a4(0xd,temp_v18 * 2 + 0x28);
            efctCallRoutineWithSpeedOverride(*(short *)(temp_v13 + 8) + temp_v6,*(short *)(temp_v13 + 10) + temp_v5,0x24);
            temp_v13 = FUN_001834a4(0xd,temp_v18 * 2 + 0x27);
            effectDispatchSelector((int)(short)temp_v11,*(short *)(temp_v13 + 8) + temp_v6,
                         *(short *)(temp_v13 + 10) + temp_v5,0x24);
          }
          temp_v18 = (temp_v18 + 1) & 0xffff;
          if (temp_v18 >= 6) break;
        }
        temp_v11 = temp_v11 + 1;
      } while ((int)temp_v11 < 0xe);
      temp_v5 = g_renderCtx;
      piVar10 = (int *)(g_renderCtx + 0x1318);
      temp_v6 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = 0;
      if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v6 != 0) {
        (**(romwright_code **)(temp_v5 + 0x1334))();
        *(unsigned char *)(temp_v5 + 0x1330) = 0;
      }
      FUN_00183bb0();
    }
    if ((*(char *)(temp_v47 + 0xe5) != '\0') &&
       (*(int *)(param_1 + temp_v16 * 4 + 0x4aec) - 0x1dU < 0xc)) {
      efctSetSpeed();
      temp_v6 = FUN_001834a4(0xd,temp_v16 + 0x52);
      temp_v5 = g_renderCtx;
      temp_v15 = packNibblesAndByte(6,1,0);
      piVar10 = (int *)(temp_v5 + 0x12b8);
      temp_v7 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v15;
      if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v7 != temp_v15) {
        (**(romwright_code **)(temp_v5 + 0x12d4))();
        *(unsigned char *)(temp_v5 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0xd,0x4f,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0x2e);
      FUN_001835b4(2,0xd,0x4e,(int)*(short *)(temp_v6 + 8),*(short *)(temp_v6 + 10) - temp_v28,0x2e);
      temp_v5 = g_renderCtx;
      piVar10 = (int *)(g_renderCtx + 0x1318);
      temp_v15 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = 3;
      if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v15 != 3) {
        (**(romwright_code **)(temp_v5 + 0x1334))();
        *(unsigned char *)(temp_v5 + 0x1330) = 0;
      }
      FUN_0035ae58((int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),
                   (int)**(short **)(temp_v6 + 0xc),(*(short **)(temp_v6 + 0xc))[1] - temp_v28,1);
      temp_v5 = g_renderCtx;
      temp_v15 = packNibblesAndByte(6,1,0);
      piVar10 = (int *)(temp_v5 + 0x12b8);
      temp_v7 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v15;
      if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v7 != temp_v15) {
        (**(romwright_code **)(temp_v5 + 0x12d4))();
        *(unsigned char *)(temp_v5 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0xd,0x50,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0x2e);
      FUN_001835b4(2,0xd,0x51,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0x2e);
      temp_v5 = g_renderCtx;
      piVar10 = (int *)(g_renderCtx + 0x1318);
      temp_v6 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = 0;
      if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v6 != 0) {
        (**(romwright_code **)(temp_v5 + 0x1334))();
        *(unsigned char *)(temp_v5 + 0x1330) = 0;
      }
      temp_v5 = g_renderCtx;
      temp_v6 = packNibblesAndByte(6,7,0);
      piVar10 = (int *)(temp_v5 + 0x12b8);
      temp_v15 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v6;
      if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v15 != temp_v6) {
        (**(romwright_code **)(temp_v5 + 0x12d4))();
        *(unsigned char *)(temp_v5 + 0x12d0) = 0;
      }
    }
    efctSetSpeed();
    temp_v24 = (float)temp_v26;
    temp_v16 = temp_v16 + 1;
  } while (temp_v16 < 4);
  piVar10 = (int *)(param_1 + 0x3880);
  temp_v3 = param_1 + 0x1344;
  if (*temp_v37 != 0x1f) {
    temp_v3 = *piVar10;
  }
  if (*temp_v37 == 0x1f || temp_v3 == 0x1f) {
    efctSetSpeed();
    FUN_001835b4(2,8,0x106,0,0xffffffc6,0x33);
    efctSetSpeed();
  }
  temp_v3 = saveSlotFindSelected();
  if ((temp_v3 != 0) && (*(int *)(param_1 + 0x4bac) == 0)) {
    if (*(short *)(temp_v3 + 0x62) != 0) {
      temp_v11 = *(unsigned int *)(temp_v38 + 0x188);
      if ((int)temp_v11 < 1) {
        temp_v4 = 0;
      }
      else {
        temp_v20 = *(float *)(temp_v38 + 0x19c) * 0.5f;
        if ((temp_v11 & 1) != 0) {
          temp_v20 = -temp_v20;
        }
        temp_v4 = (int)temp_v20;
        temp_v20 = (float)VectorSignedToFloat(0xf - temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = temp_v20 * 1.5707964f * 0.06666667f * 40.743664f;
        FUN_001a1ee0();
        *(float *)(temp_v38 + 0x19c) = (temp_v24 - temp_v20) * 8.0f;
      }
      if (((*temp_v37 == 0x1f) && (*(int *)(*piVar6 + 0x4d68) != 0)) &&
         (temp_v16 = saveSlotFindSelected(), temp_v16 != *(int *)(*piVar6 + 0x4d68))) {
        temp_v24 = 0.5f;
      }
      if ((temp_v51 == 0) && (*temp_v43 != 4)) {
        temp_v24 = 0.5f;
      }
      if (param_5 != 0) {
        temp_v24 = 0.5f;
      }
      efctSetSpeed();
      if (temp_v50 != 0) {
        temp_v16 = FUN_001834a4(0xd,0x71);
      }
      else {
        temp_v16 = FUN_001834a4(0xd,0x70);
      }
      temp_v5 = *piVar6;
      FUN_003eb200();
      if (temp_v5 != 0) {
        temp_v5 = vec2GetXInt();
        temp_v6 = temp_v5 + temp_v4 + (int)*(short *)(temp_v16 + 8);
        temp_v5 = vec2GetYInt(param_1 + 0x96c);
        temp_v4 = temp_v5 + temp_v4 + (int)*(short *)(temp_v16 + 10);
      }
      else {
        temp_v5 = vec2GetXInt();
        temp_v6 = temp_v5 + temp_v4 + (int)*(short *)(temp_v16 + 8);
        temp_v5 = vec2GetYInt(param_1 + 0x7c8);
        temp_v4 = temp_v5 + temp_v4 + (int)*(short *)(temp_v16 + 10);
      }
      temp_v16 = vec2GetXInt(temp_v42);
      temp_v6 = temp_v6 + temp_v16;
      temp_v16 = vec2GetYInt(temp_v42);
      temp_v16 = temp_v16 + temp_v4;
      temp_v5 = temp_v16 - temp_v28;
      FUN_001835b4(2,0xd,0x5e,temp_v6,temp_v5,0x38);
      temp_v4 = *temp_v37;
      temp_v19 = temp_v4 != 0x1f;
      if (temp_v19) {
        temp_v4 = *piVar10;
      }
      if (!temp_v19 || temp_v4 == 0x1f) {
        efctSetSpeed();
        FUN_001835b4(2,0xd,0x5e,temp_v6,temp_v5,0x38);
        efctSetSpeed();
      }
      FUN_001835b4(2,0xd,0x5f,temp_v6,temp_v5,0x3d);
      FUN_001835b4(2,0xd,0x60,temp_v6,temp_v5,0x3d);
      FUN_001835b4(2,0xd,0x61,temp_v6,temp_v5,0x3d);
      FUN_001835b4(2,0xd,0x62,temp_v6,temp_v5,0x3d);
      temp_v4 = FUN_003e4978();
      if (temp_v4 != 0) {
        FUN_001835b4(2,0xd,99,temp_v6,temp_v5,0x3d);
      }
      else {
        FUN_001835b4(2,0xd,0x1e9,temp_v6,temp_v5,0x3d);
      }
      FUN_001835b4(2,0xd,100,temp_v6,temp_v5,0x42);
      FUN_001835b4(2,0xd,0x65,temp_v6,temp_v5,0x42);
      temp_v4 = FUN_001834a4(0xd,0x1db);
      FUN_001835b4(2,0xd,4000,*(short *)(temp_v4 + 8) + temp_v6,
                   (*(short *)(temp_v4 + 10) + temp_v16) - temp_v28,0x42);
      temp_v4 = FUN_003e4978();
      if (temp_v4 != 0) {
        FUN_003c2690(param_1,temp_v6,temp_v16,temp_v28);
      }
      temp_v12 = recordGetScaledMaximum(temp_v3);
      temp_v4 = 0;
      if (*(char *)(temp_v38 + 0xdc) != '\0') {
        if (*(char *)(temp_v38 + 0x129) == '\0') {
          temp_v4 = *(int *)(temp_v38 + 0xf4);
        }
        if (*(char *)(temp_v38 + 0x124) == '\0') {
          temp_v4 = -temp_v4;
        }
      }
      FUN_00183788((int)*(short *)(param_1 + 0x41fa),temp_v12,temp_v4,*(unsigned int *)(temp_v38 + 0x11c),
                   0xd,0x66,0x69,0x68,0x67,temp_v6,temp_v5,0x47,0);
      temp_v4 = FUN_001834a4(0xd,0x6f);
      if ((*(unsigned short *)(temp_v3 + 0x60) & 2) != 0) {
        markerKindGetColor(1);
        drawSetColorFromRGBA8();
      }
      FUN_0018152c((int)*(short *)(temp_v3 + 0x62),*(short *)(temp_v4 + 8) + temp_v6,
                   (*(short *)(temp_v4 + 10) + temp_v16) - temp_v28,0x42,0);
      FUN_00183bb0();
      temp_v11 = (unsigned int)*(unsigned short *)(temp_v3 + 300);
      FUN_0016432c(temp_v11);
      textFormatBuffer(temp_v32,temp_v11);
      temp_v4 = FUN_001834a4(0xd,0x6e);
      temp_v20 = 0.0f;
      VectorSignedToFloat((*(short *)(temp_v4 + 10) + temp_v16) - temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3
                         );
      VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xff,temp_v32);
      temp_v4 = *temp_v37;
      temp_v19 = temp_v4 != 0x1f;
      if (temp_v19) {
        temp_v4 = *piVar10;
      }
      if (!temp_v19 || temp_v4 == 0x1f) {
        FUN_0034ea70(param_1);
        if (*(char *)(temp_v41 + 0xb5) != '\0') {
          if ((int)temp_v24 >= 0x3f800000) {
            efctSetSpeed();
          }
          temp_v3 = g_renderCtx;
          temp_v4 = packNibblesAndByte(6,1,0);
          piVar6 = (int *)(temp_v3 + 0x12b8);
          temp_v16 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v4;
          if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v16 != temp_v4) {
            (**(romwright_code **)(temp_v3 + 0x12d4))();
            *(unsigned char *)(temp_v3 + 0x12d0) = 0;
          }
          FUN_00164b5c(2,0xd,0xc,0,0,0x5b);
          temp_v3 = g_renderCtx;
          temp_v4 = packNibblesAndByte(6,7,0);
          piVar6 = (int *)(temp_v3 + 0x12b8);
          temp_v16 = piVar6[*piVar6 + 2];
          piVar6[*piVar6 + 2] = temp_v4;
          if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v16 != temp_v4) {
            (**(romwright_code **)(temp_v3 + 0x12d4))();
            *(unsigned char *)(temp_v3 + 0x12d0) = 0;
          }
          efctSetSpeed();
        }
        else {
          temp_v24 = *(float *)(param_1 + 0x1364);
          if (temp_v24 > temp_v20) {
            efctSetSpeed();
            temp_v16 = vec2GetXInt(param_1 + 0x1344);
            FUN_001835b4(2,0xd,0x1b4,temp_v16,0,0x51);
            temp_v5 = FUN_001834a4(0xd,0x1b9);
            temp_v4 = g_renderCtx;
            piVar10 = (int *)(g_renderCtx + 0x1318);
            temp_v6 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = 3;
            if (*(char *)(temp_v4 + 0x1330) != '\0' || temp_v6 != 3) {
              (**(romwright_code **)(temp_v4 + 0x1334))(3);
              *(unsigned char *)(temp_v4 + 0x1330) = 0;
            }
            FUN_0035ae58(*(short *)(temp_v5 + 8) + temp_v16,(int)*(short *)(temp_v5 + 10),
                         (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1],1);
            temp_v5 = FUN_001834a4(0xd,0x1ba);
            temp_v4 = *(int *)(*piVar6 + 0x4d68);
            if (*(int *)(*piVar6 + 0x4d68) == 0) {
              temp_v4 = temp_v3;
            }
            temp_v11 = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
            FUN_00184310();
            devilDispatchTextureResource((int)(short)(*(short *)(temp_v11 + 0x9c) + 1),*(short *)(temp_v5 + 8) + temp_v16,
                         (int)*(short *)(temp_v5 + 10),0x54,0);
            temp_v3 = g_renderCtx;
            piVar6 = (int *)(g_renderCtx + 0x1318);
            temp_v5 = piVar6[*piVar6 + 2];
            piVar6[*piVar6 + 2] = 0;
            if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v5 != 0) {
              (**(romwright_code **)(temp_v3 + 0x1334))(0);
              *(unsigned char *)(temp_v3 + 0x1330) = 0;
            }
            FUN_00164b5c(2,0xd,10,temp_v16,0,0x56);
            if ((int)temp_v24 >= 0x3f800000) {
              efctSetSpeed();
            }
            temp_v3 = g_renderCtx;
            temp_v5 = packNibblesAndByte(6,1,0);
            piVar6 = (int *)(temp_v3 + 0x12b8);
            temp_v6 = piVar6[*piVar6 + 2];
            piVar6[*piVar6 + 2] = temp_v5;
            if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
              (**(romwright_code **)(temp_v3 + 0x12d4))();
              *(unsigned char *)(temp_v3 + 0x12d0) = 0;
            }
            temp_v3 = partySlotMatchesSelected(temp_v4);
            if (temp_v3 != 0) {
              FUN_00164b5c(2,0xd,0xc,0,0,0x5b);
            }
            FUN_00164b5c(2,0xd,0xb,temp_v16,0,0x5b);
            temp_v3 = g_renderCtx;
            temp_v4 = packNibblesAndByte(6,7,0);
            piVar6 = (int *)(temp_v3 + 0x12b8);
            temp_v16 = piVar6[*piVar6 + 2];
            piVar6[*piVar6 + 2] = temp_v4;
            if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v16 != temp_v4) {
              (**(romwright_code **)(temp_v3 + 0x12d4))();
              *(unsigned char *)(temp_v3 + 0x12d0) = 0;
            }
            efctSetSpeed();
          }
        }
      }
    }
    efctSetSpeed();
  }
  temp_v3 = 0x71;
  temp_v4 = 0;
  temp_v35[0] = 0x46;
  temp_v35[1] = 0x47;
  temp_v35[2] = 0x48;
  temp_v35[3] = 0x49;
  temp_v35[4] = 0x71;
  do {
    if (*(char *)(param_1 + temp_v4 + 0x41b8) != '\0') {
      temp_v5 = FUN_001834a4(0xd,temp_v35[temp_v4]);
      temp_v16 = g_renderCtx;
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar6 = (int *)(temp_v16 + 0x12b8);
      temp_v15 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v6;
      if (*(char *)(temp_v16 + 0x12d0) != '\0' || temp_v15 != temp_v6) {
        (**(romwright_code **)(temp_v16 + 0x12d4))();
        *(unsigned char *)(temp_v16 + 0x12d0) = 0;
      }
      temp_v16 = param_1 + temp_v4 * 4;
      FUN_003a6404(*(unsigned int *)(temp_v16 + 0x41d4),*(unsigned int *)(temp_v16 + 0x41c0));
      drawSetColorFromRGBA8();
      temp_v16 = g_renderCtx;
      temp_v12 = 2000;
      piVar6 = (int *)(g_renderCtx + 0x1318);
      if (temp_v4 == 4) {
        temp_v12 = 0x7d1;
      }
      temp_v6 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = 3;
      if (*(char *)(temp_v16 + 0x1330) != '\0' || temp_v6 != 3) {
        (**(romwright_code **)(temp_v16 + 0x1334))();
        *(unsigned char *)(temp_v16 + 0x1330) = 0;
      }
      if (temp_v50 != 0) {
        temp_v3 = temp_v28;
      }
      temp_v16 = (int)(*(short **)(temp_v5 + 0xc))[1];
      if (temp_v50 != 0) {
        temp_v16 = temp_v16 - temp_v3;
      }
      else {
        temp_v16 = temp_v16 - 0x28;
      }
      FUN_0035ae58((int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),
                   (int)**(short **)(temp_v5 + 0xc),temp_v16,1);
      FUN_001835b4(2,0xd,temp_v12,(int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),0xe7);
      temp_v16 = g_renderCtx;
      piVar6 = (int *)(g_renderCtx + 0x1318);
      temp_v5 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = 0;
      if (*(char *)(temp_v16 + 0x1330) != '\0' || temp_v5 != 0) {
        (**(romwright_code **)(temp_v16 + 0x1334))();
        *(unsigned char *)(temp_v16 + 0x1330) = 0;
      }
      FUN_00183bb0();
      temp_v16 = g_renderCtx;
      temp_v5 = packNibblesAndByte(6,7,0);
      piVar6 = (int *)(temp_v16 + 0x12b8);
      temp_v6 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v5;
      if (*(char *)(temp_v16 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
        (**(romwright_code **)(temp_v16 + 0x12d4))();
        *(unsigned char *)(temp_v16 + 0x12d0) = 0;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 5);
  return;
}

} /* extern "C" */
