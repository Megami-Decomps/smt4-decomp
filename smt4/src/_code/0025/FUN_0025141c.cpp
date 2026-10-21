/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025141c` (_code @ 0x25141c, 0x974 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025765c(...);
int FUN_0026242c(int);
int FUN_00269bf0(int);
int FUN_002888a8(...);
int FUN_00288ddc(...);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int textFormatBuffer(...);
int FUN_002be90c(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int FUN_0033c1bc(...);

typedef struct fn_0025141c_arg0 fn_0025141c_arg0;
struct fn_0025141c_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x17];
    int field_0x1c; /* +0x1c */
    byte field_0x20; /* +0x20 */
    byte field_0x21; /* +0x21 */
    byte field_0x22; /* +0x22 */
    byte field_0x23; /* +0x23 */
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
    unsigned char pad_0x26[0x1];
    byte field_0x27; /* +0x27 */
    byte field_0x28; /* +0x28 */
    byte field_0x29; /* +0x29 */
    unsigned char pad_0x2a[0x2];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x8];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x3];
    byte field_0x48; /* +0x48 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned char LAB_00251798; /* 0x251798 */
extern unsigned char LAB_00251c04; /* 0x251c04 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0025765c. */
/* Supplied declaration required: FUN_0026242c. */
/* Supplied declaration required: FUN_00269bf0. */
/* Supplied declaration required: FUN_002888a8. */
extern int isLowThreshold(int, int);
/* Supplied declaration required: FUN_00288ddc. */
extern int gameGetUnitRecord(void);
extern unsigned int categoryGetColor(int);
extern int gameGetPlayerData(void);
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be90c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0033c1bc. */


void FUN_0025141c(fn_0025141c_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 16 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned char temp_v16 [32];
  unsigned char temp_v17 [44];
  
  temp_v9 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v8 = 0;
  temp_v7 = 0;
  param_2 = param_1->field_0x2c + param_2;
  param_3 = param_1->field_0x30 + param_3;
  temp_v14 = 0;
  if ((int)param_1->field_0x34 < 0) {
    temp_v7 = gameGetPlayerData();
    temp_v2 = FUN_002bd1fc();
    textFormatBuffer(temp_v17,&LAB_00251798,temp_v2);
    temp_v12 = (unsigned int)*(unsigned char *)(temp_v7 + 0x76);
    temp_v9 = -1;
    temp_v13 = (int)*(short *)(temp_v7 + 0x2c);
    temp_v8 = (int)*(short *)(temp_v7 + 0x2a);
    FUN_0026242c(temp_v7);
    temp_v3 = gameGetPlayerData();
    temp_v14 = (int)*(short *)(temp_v3 + 0x1e);
    temp_v15 = FUN_00288ddc((int)(short)temp_v7,0xffffffff);
  }
  else {
    temp_v3 = gameGetUnitRecord();
    if (temp_v3 != 0) {
      temp_v2 = FUN_002bd068(*(unsigned short *)(temp_v3 + 0x46));
      textFormatBuffer(temp_v17,&LAB_00251798,temp_v2);
      temp_v12 = (unsigned int)*(unsigned char *)(temp_v3 + 0x48);
      temp_v13 = (int)*(short *)(temp_v3 + 0x2c);
      temp_v8 = (int)*(short *)(temp_v3 + 0x2a);
      temp_v9 = (int)*(short *)(temp_v3 + 0x46);
      temp_v7 = temp_v3;
      FUN_00269bf0(temp_v3);
      temp_v14 = (int)*(short *)(temp_v3 + 0x10);
      temp_v15 = FUN_00288ddc((int)(short)temp_v7,temp_v9);
    }
  }
  efctSetSpeed();
  if (param_1->field_0x22 != 0) {
    temp_v0 = param_1->field_0x25;
    temp_v10 = temp_v0 == 0;
    if (temp_v10) {
      temp_v0 = param_1->field_0x27;
    }
    if (!temp_v10 || temp_v0 != 0) {
      FUN_002bf288(2,0x19,0x3e,param_2,param_3,0x65);
    }
    temp_v3 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar8 = (int *)(temp_v3 + 0x12ac);
    temp_v6 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v4;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v6 != temp_v4) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0x19,0x3d,param_2,param_3,0x6a);
    temp_v3 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,7,0);
    piVar8 = (int *)(temp_v3 + 0x12ac);
    temp_v6 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v4;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v6 != temp_v4) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    if (param_1->field_0x20 != 0) {
      if (param_1->field_0x21 == 0) {
        efctSetSpeed();
        return;
      }
      temp_v11 = 0x6f;
      temp_v2 = 0x4d;
      FUN_002bf288(2,0x19,temp_v2,param_2,param_3,temp_v11);
    }
    else {
      temp_v2 = 0xffffffff;
      if (param_1->field_0x23 == 0) {
        if ((int)param_1->field_0x34 < 0) {
          temp_v3 = gameGetPlayerData();
          temp_v1 = *(unsigned short *)(temp_v3 + 0x72);
        }
        else {
          temp_v3 = gameGetUnitRecord();
          temp_v1 = *(unsigned short *)(temp_v3 + 0x44);
        }
        temp_v5 = 1;
        temp_v3 = 0;
        do {
          if (((unsigned int)temp_v1 & (1 << (temp_v5 & 0xff))) != 0) {
            if (param_1->field_0x1c == temp_v3) {
              temp_v2 = categoryGetColor((int)(short)temp_v5);
              break;
            }
            temp_v3 = temp_v3 + 1;
          }
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < 0xb);
      }
      drawSetColorFromRGBA8(temp_v2);
      if (param_1->field_0x23 != 0) {
        efctSetSpeed();
      }
      temp_v3 = FUN_002bf4f8(0x19,0x51);
      uiDrawDemonIcon(temp_v9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a,0);
      FUN_002bed3c();
      efctSetSpeed();
      FUN_002bf288(2,0x19,0x40,param_2,param_3,0x6f);
      if (param_1->field_0x28 != 0) {
        FUN_002bf288(2,0x19,0x95,param_2,param_3,0x79);
      }
      else if (param_1->field_0x23 != 0) {
        FUN_002bf288(2,0x19,0x4b,param_2,param_3,0x79);
      }
      else if (param_1->field_0x24 != 0) {
        FUN_002bf288(2,0x19,0x4c,param_2,param_3,0x79);
      }
      else if (param_1->field_0x29 != 0) {
        FUN_002bf288(2,0x19,0x97,param_2,param_3,0x79);
      }
      else {
        FUN_002bf288(2,0x19,0x3f,param_2,param_3,0x6f);
        drawSetColorFromRGBA8(0x292929ff);
        textFormatBuffer(temp_v16,&LAB_00251c04,temp_v12);
        temp_v9 = FUN_002bf4f8(0x19,0x53);
        FUN_002bdf94(1,*(short *)(temp_v9 + 8) + param_2,*(short *)(temp_v9 + 10) + param_3,1,2,0x79,
                     temp_v16);
        FUN_002bed3c();
        FUN_002bf380(2,0x19,2,param_2,param_3,0x6f);
        FUN_002be90c(temp_v8,temp_v7,*(unsigned int *)&param_1->field_0x40,0,0x19,0x44,0x47,0x45,0x46,
                     param_2,param_3,0x74,0);
        FUN_002888a8(temp_v13,temp_v14,*(unsigned int *)&param_1->field_0x44,0,0x19,0x48,0x4a,0x49,
                     param_2,param_3,0x75,0);
        FUN_0033c1bc(param_1,param_2,param_3);
        temp_v7 = g_titleScene;
        if (param_1->field_0x48 != 0) {
          temp_v8 = packNibblesAndByte(6,1,0);
          piVar8 = (int *)(temp_v7 + 0x12ac);
          temp_v9 = piVar8[*piVar8 + 2];
          piVar8[*piVar8 + 2] = temp_v8;
          if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
            (**(romwright_code **)(temp_v7 + 0x12c8))();
            *(unsigned char *)(temp_v7 + 0x12c4) = 0;
          }
          FUN_0025765c(*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1[1].field_0x4);
          drawSetColorFromRGBA8();
          FUN_002bf288(2,0x19,0x7d1,param_2,param_3,0x79);
          FUN_002bed3c();
          temp_v7 = g_titleScene;
          temp_v8 = packNibblesAndByte(6,7,0);
          piVar8 = (int *)(temp_v7 + 0x12ac);
          temp_v9 = piVar8[*piVar8 + 2];
          piVar8[*piVar8 + 2] = temp_v8;
          if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
            (**(romwright_code **)(temp_v7 + 0x12c8))();
            *(unsigned char *)(temp_v7 + 0x12c4) = 0;
          }
        }
      }
    }
  }
  else {
    if (param_1->field_0x20 != 0) {
      efctSetSpeed();
      return;
    }
    if (param_1->field_0x28 != 0) {
      FUN_002bf288(2,0x19,0x94,param_2,param_3,0x79);
    }
    else if (param_1->field_0x23 != 0) {
      FUN_002bf288(2,0x19,0xc,param_2,param_3,0x79);
    }
    else if (param_1->field_0x24 != 0) {
      FUN_002bf288(2,0x19,0xd,param_2,param_3,0x79);
    }
    else {
      if (param_1->field_0x29 != 0) {
        temp_v2 = 0x96;
        temp_v11 = 0x79;
        FUN_002bf288(2,0x19,temp_v2,param_2,param_3,temp_v11);
        efctSetSpeed();
        return;
      }
      FUN_002bf288(2,0x19,4,param_2,param_3,0x6f);
      FUN_002be90c(temp_v8,temp_v7,*(unsigned int *)&param_1->field_0x40,0,0x19,5,8,6,7,param_2,param_3,
                   0x74,0);
      FUN_002888a8(temp_v13,temp_v14,*(unsigned int *)&param_1->field_0x44,0,0x19,9,0xb,10,param_2,
                   param_3,0x75,0);
      temp_v7 = isLowThreshold((int)(short)temp_v8,(int)(short)temp_v7);
      if (temp_v7 != 0) {
        temp_v2 = 0xdc0f14ff;
        drawSetColorFromRGBA8(temp_v2);
      }
      else if (temp_v15 != 0) {
        temp_v2 = 0x6ef0ffff;
        drawSetColorFromRGBA8(temp_v2);
      }
      textFormatBuffer(temp_v16,&LAB_00251c04,temp_v8);
      temp_v7 = FUN_002bf4f8(0x19);
      FUN_002bdf94(2,*(short *)(temp_v7 + 8) + param_2,*(short *)(temp_v7 + 10) + param_3,1,4,0x79,
                   temp_v16);
      FUN_002bed3c();
      textFormatBuffer(temp_v16,&LAB_00251c04,temp_v13);
      temp_v7 = FUN_002bf4f8(0x19,0x1d);
      FUN_002bdf94(2,*(short *)(temp_v7 + 8) + param_2,*(short *)(temp_v7 + 10) + param_3,1,4,0x79,
                   temp_v16);
      FUN_0033c1bc(param_1,param_2,param_3);
      temp_v7 = g_titleScene;
      if (param_1->field_0x48 != 0) {
        temp_v8 = packNibblesAndByte(6,1,0);
        piVar8 = (int *)(temp_v7 + 0x12ac);
        temp_v9 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v8;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
        FUN_0025765c(*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1[1].field_0x4);
        drawSetColorFromRGBA8();
        FUN_002bf288(2,0x19,2000,param_2,param_3,0x79);
        FUN_002bed3c();
        temp_v7 = g_titleScene;
        temp_v8 = packNibblesAndByte(6,7,0);
        piVar8 = (int *)(temp_v7 + 0x12ac);
        temp_v9 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v8;
        if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
          (**(romwright_code **)(temp_v7 + 0x12c8))();
          *(unsigned char *)(temp_v7 + 0x12c4) = 0;
        }
      }
    }
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
