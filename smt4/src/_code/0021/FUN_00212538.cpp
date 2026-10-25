/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212538` (_code @ 0x212538, 0x16a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_002512c4(...);
int fadeObjectResetIfActive(...);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int textFormatBuffer(...);
int FUN_002c0944(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c1b64(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

int CONCAT44(...);
int FUN_0025117c(...);
int FUN_0025141c(...);
int FUN_00251d98(...);
int objectPartRunUnlessLocked(...);
int FUN_002bed3c(void);
int vec2GetYInt(...);
int vec2GetXInt(...);
int FUN_002bf380(int, int, int, unsigned int, unsigned int, int);
int efctSetSpeed(void);
int renderCtxSelectStereoLayout(int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
} void_stack;

extern unsigned char LAB_00213184; /* 0x213184 */
extern int g_partyPanel; /* 0x43dcf0 */
extern int g_titleScene; /* 0x44ea00 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_001c36b8(void);
/* Supplied declaration required: FUN_0025117c. */
/* Supplied declaration required: FUN_002512c4. */
/* Supplied declaration required: FUN_0025141c. */
/* Supplied declaration required: FUN_00251d98. */
extern int FUN_00252180(unsigned int);
/* Supplied declaration required: fadeObjectResetIfActive. */
extern int ifTouchGetSelectionModeForRegion(int);
/* Supplied declaration required: objectPartRunUnlessLocked. */
extern int FUN_0029efa8(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: FUN_002bf380. */
extern int asdTMTexTableEntryAt(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: renderCtxSelectStereoLayout. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned int FUN_00212538(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 23 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  int aiStack_13c [28];
  unsigned int temp_v18 [27];
  unsigned char temp_v19 [60];
  
  temp_v1 = g_partyPanel;
  temp_v14 = 0x3f80000000000000;
  if (g_partyPanel == 0) {
    return 0;
  }
  temp_v2 = *(int *)(g_partyPanel + 0x1c);
  if (temp_v2 != 0x17) {
    if (temp_v2 == 0xb) {
      return 0;
    }
    if ((temp_v2 == 0xd) && (*(int *)(g_partyPanel + 0x24) != 8)) {
      return 0;
    }
  }
  else if (*(int *)(g_partyPanel + 0x18) >= 5) {
    return 0;
  }
  if (((*(short *)(g_partyPanel + 0x2e8) == 8) || (*(short *)(g_partyPanel + 0x2e8) == 7)) &&
     (*(char *)(g_partyPanel + 0x322) != '\0')) {
    return 0;
  }
  renderCtxSelectStereoLayout(g_titleScene);
  temp_v2 = g_titleScene;
  temp_v3 = FUN_002c5d80(1,0);
  piVar10 = (int *)(temp_v2 + 0x124c);
  temp_v6 = *piVar10;
  temp_v7 = piVar10[temp_v6 + 2];
  *piVar10 = temp_v6 + 1;
  piVar10[temp_v6 + 3] = temp_v3;
  if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v7 != temp_v3) {
    (**(romwright_code **)(temp_v2 + 0x1268))();
    *(unsigned char *)(temp_v2 + 0x1264) = 0;
  }
  temp_v16 = 0x3f000000;
  if (*(char *)(temp_v1 + 0x42) != '\0') {
    temp_v2 = temp_v1 + 0x4c8;
    temp_v4 = vec2GetXInt();
    temp_v5 = vec2GetYInt(temp_v2);
    FUN_002bf380(2,0x19,3,temp_v4,temp_v5,0x5b);
    temp_v3 = 0;
    do {
      temp_v6 = FUN_00252180(*(unsigned int *)(temp_v1 + 0x6c8));
      if (temp_v6 != 0) {
        temp_v5 = 0;
        temp_v4 = temp_v5;
      }
      else {
        temp_v4 = vec2GetXInt(temp_v2);
        temp_v5 = vec2GetYInt(temp_v2);
      }
      FUN_0025141c(*(unsigned int *)(temp_v1 + temp_v3 * 4 + 0x6c8),temp_v4,temp_v5);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v3 = 0;
    temp_v2 = gameGetSlotTable();
    if (*(char *)(temp_v2 + 0x910b) != '\0') {
      do {
        temp_v2 = temp_v1 + (temp_v3 % 4) * 0x8c;
        temp_v4 = vec2GetXInt(temp_v2 + 0x298);
        temp_v5 = vec2GetYInt(temp_v2 + 0x298);
        FUN_0025141c(*(unsigned int *)(temp_v1 + temp_v3 * 4 + 0x6d8),temp_v4,temp_v5);
        temp_v3 = temp_v3 + 1;
        temp_v2 = gameGetSlotTable();
      } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x910b));
    }
    temp_v2 = FUN_00252180(*(unsigned int *)(temp_v1 + 0x6c8));
    if (temp_v2 == 0) {
      switch(*(unsigned int *)(temp_v1 + 0x1c)) {
      case 4:
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || temp_v0 == '\x02') {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_0025117c(temp_v2,temp_v4,temp_v5,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        temp_v2 = objectPartRunUnlessLocked(temp_v1 + 0x8dc);
        FUN_0025117c(temp_v2,temp_v4,temp_v5,0x79,1);
        break;
      case 6:
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || (temp_v0 == '\x02' || temp_v0 == '\x03')) {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_0025117c(temp_v2,temp_v4,temp_v5,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        temp_v2 = objectPartRunUnlessLocked();
        temp_v3 = FUN_0029efa8(temp_v1 + 0x9a4);
        temp_v2 = temp_v2 + temp_v3 * 4 + 4;
        FUN_0025117c(temp_v2,temp_v4,temp_v5,0x79,1);
        break;
      case 8:
      case 0xd:
        if (*(char *)(temp_v1 + 0x66c) == '\x05' || *(char *)(temp_v1 + 0x66c) == '\x06') {
          temp_v3 = 0;
          temp_v2 = temp_v3;
          do {
            temp_v6 = temp_v1 + temp_v3 * 4;
            if ((*(char *)(*(int *)(temp_v6 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v6 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_0025117c(temp_v3,temp_v4,temp_v5,0x79,0);
              temp_v2 = 1;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 4);
          if (temp_v2 == 0) {
            temp_v2 = 0;
            do {
              temp_v3 = temp_v1 + temp_v2 * 4;
              if ((*(char *)(*(int *)(temp_v3 + 0x6d8) + 0x20) == '\0') &&
                 (*(int *)(*(int *)(temp_v3 + 0x6d8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
                FUN_0025117c(temp_v2 + 4,temp_v4,temp_v5,0x79,0);
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 3);
          }
        }
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || temp_v0 == '\x02') {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_0025117c(temp_v2,temp_v4,temp_v5,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        temp_v2 = objectPartRunUnlessLocked();
        temp_v3 = FUN_0029efa8(temp_v1 + 0xa6c);
        FUN_0025117c(temp_v2 + temp_v3 * 4,temp_v4,temp_v5,0x79,1);
        break;
      case 10:
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 4;
          if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
             (*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x23) == '\0')) {
            FUN_0025117c(temp_v2,temp_v4,temp_v5,0x79,1);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 4);
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 4;
          if ((*(char *)(*(int *)(temp_v3 + 0x6d8) + 0x20) == '\0') &&
             (*(char *)(*(int *)(temp_v3 + 0x6d8) + 0x23) == '\0')) {
            FUN_0025117c(temp_v2 + 4,temp_v4,temp_v5,0x79,1);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x18);
        break;
      case 0x13:
        if (*(char *)(temp_v1 + 0x66c) != '\x05' && *(char *)(temp_v1 + 0x66c) != '\x06')
        goto LAB_00213b6c;
        temp_v3 = 0;
        temp_v2 = temp_v3;
        do {
          temp_v6 = temp_v1 + temp_v3 * 4;
          if ((*(char *)(*(int *)(temp_v6 + 0x6c8) + 0x20) == '\0') &&
             (*(int *)(*(int *)(temp_v6 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
            FUN_0025117c(temp_v3,temp_v4,temp_v5,0x79,0);
            temp_v2 = 1;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 4);
        if (temp_v2 == 0) {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6d8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6d8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_0025117c(temp_v2 + 4,temp_v4,temp_v5,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 3);
        }
      }
    }
  }
  else {
    temp_v2 = 0;
    do {
      temp_v6 = temp_v1 + temp_v2 * 0x8c;
      temp_v3 = vec2GetXInt(temp_v6 + 0x298);
      aiStack_13c[temp_v2] = temp_v3;
      temp_v4 = vec2GetYInt(temp_v6 + 0x298);
      temp_v18[temp_v2] = temp_v4;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v4 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
    temp_v14 = romwright_piece_4_4(temp_v4,temp_v4);
    efctSetSpeed();
    temp_v2 = g_titleScene;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar10 = (int *)(temp_v2 + 0x12ac);
    temp_v6 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v3;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v6 != temp_v3) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    temp_v2 = 0;
    do {
      temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v13 = temp_v12;
      if (*(char *)(temp_v1 + temp_v2 + 0x678) == '\0') {
        temp_v13 = (float)temp_v16;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v13) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v12,temp_v13);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0x6c8),0,aiStack_13c[temp_v2],temp_v18[temp_v2]
                  );
      temp_v3 = g_titleScene;
      temp_v13 = (float)temp_v16;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v2 = packNibblesAndByte(6,7,0);
    temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
    piVar10 = (int *)(temp_v3 + 0x12ac);
    temp_v6 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v2;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v6 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v15 = temp_v12;
    efctSetSpeed();
    temp_v2 = 0;
    do {
      temp_v11 = temp_v15;
      if (*(char *)(temp_v1 + temp_v2 + 0x678) == '\0') {
        temp_v11 = temp_v13;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 == temp_v11) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v12 = temp_v11;
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0x6c8),1,aiStack_13c[temp_v2],temp_v18[temp_v2]
                  );
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v14 = CONCAT44(temp_v13,temp_v15);
    efctSetSpeed();
    temp_v2 = 0;
    do {
      temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v13 = temp_v15;
      if (*(char *)(temp_v1 + temp_v2 + 0x678) == '\0') {
        temp_v13 = temp_v12;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v13) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v12,temp_v13);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0x6c8),2,aiStack_13c[temp_v2],temp_v18[temp_v2]
                  );
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    FUN_002bed3c();
    temp_v14 = CONCAT44((int)((unsigned long long)temp_v14 >> 0x20),temp_v15);
    efctSetSpeed();
    temp_v2 = 0;
    do {
      temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v13 = temp_v15;
      if (*(char *)(temp_v1 + temp_v2 + 0x678) == '\0') {
        temp_v13 = temp_v12;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v13) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v12,temp_v13);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0x6c8),3,aiStack_13c[temp_v2],temp_v18[temp_v2]
                  );
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v14 = CONCAT44((int)((unsigned long long)temp_v14 >> 0x20),temp_v15);
    efctSetSpeed();
    temp_v17 = (unsigned long long)(unsigned int)temp_v15;
    temp_v2 = 0;
    do {
      temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v13 = (float)temp_v17;
      if (*(char *)(temp_v1 + temp_v2 + 0x678) == '\0') {
        temp_v13 = temp_v12;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v13) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v12,temp_v13);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0x6c8),4,aiStack_13c[temp_v2],temp_v18[temp_v2]
                  );
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v2 = 0;
    do {
      FUN_0025141c(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0x6c8),aiStack_13c[temp_v2],temp_v18[temp_v2]);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v3 = *(int *)(temp_v1 + 0x2c);
    temp_v2 = temp_v3 * 0xc;
    temp_v9 = temp_v2 + 0xc;
    if ((int)temp_v9 >= 0x19) {
      temp_v9 = 0x18;
    }
    temp_v6 = gameGetSlotTable();
    if ((int)(unsigned int)*(unsigned char *)(temp_v6 + 0x910b) < (int)temp_v9) {
      temp_v6 = gameGetSlotTable();
      temp_v9 = (unsigned int)*(unsigned char *)(temp_v6 + 0x910b);
    }
    temp_v4 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
    for (temp_v6 = temp_v2; temp_v6 < (int)temp_v9; temp_v6 = temp_v6 + 1) {
      if (*(int *)(temp_v1 + 0x1c) != 3) {
        temp_v10 = temp_v1 + (temp_v6 % 4) * 0x8c;
        temp_v7 = vec2GetXInt(temp_v10 + 0x298);
        aiStack_13c[temp_v6] = temp_v7;
        temp_v4 = vec2GetYInt(temp_v10 + 0x298);
        temp_v18[temp_v6] = temp_v4;
      }
      else {
        temp_v7 = vec2GetXInt(temp_v1 + 0x180);
        aiStack_13c[temp_v6] = temp_v7;
        temp_v4 = vec2GetYInt(temp_v1 + 0x180);
        temp_v18[temp_v6] = temp_v4;
      }
      if (*(int *)(temp_v1 + 0x1c) == 2) {
        temp_v7 = FUN_001c36b8();
        aiStack_13c[temp_v6] = temp_v7 + aiStack_13c[temp_v6];
      }
      temp_v4 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
    }
    temp_v14 = romwright_piece_4_4(temp_v4,(int)temp_v17);
    efctSetSpeed();
    temp_v7 = g_titleScene;
    temp_v10 = packNibblesAndByte(6,1,0);
    piVar10 = (int *)(temp_v7 + 0x12ac);
    temp_v8 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v10;
    temp_v6 = temp_v2;
    if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v8 != temp_v10) {
      (**(romwright_code **)(temp_v7 + 0x12c8))();
      *(unsigned char *)(temp_v7 + 0x12c4) = 0;
    }
    for (; temp_v7 = g_titleScene, temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20), temp_v6 < (int)temp_v9;
        temp_v6 = temp_v6 + 1) {
      temp_v12 = (float)temp_v17;
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0x73c) == 0) {
        temp_v12 = temp_v13;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v12) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v13,temp_v12);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),0,aiStack_13c[temp_v6],temp_v18[temp_v6]
                  );
    }
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar10 = (int *)(temp_v7 + 0x12ac);
    temp_v10 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = temp_v6;
    if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v10 != temp_v6) {
      (**(romwright_code **)(temp_v7 + 0x12c8))();
      *(unsigned char *)(temp_v7 + 0x12c4) = 0;
    }
    temp_v14 = CONCAT44(temp_v13,(int)temp_v17);
    efctSetSpeed();
    temp_v6 = temp_v2;
    while( 1 ) {
      temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
      if ((int)temp_v9 <= temp_v6) break;
      temp_v12 = (float)temp_v17;
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0x73c) == 0) {
        temp_v12 = temp_v13;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v12) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v13,temp_v12);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),1,aiStack_13c[temp_v6],temp_v18[temp_v6]
                  );
      temp_v6 = temp_v6 + 1;
    }
    temp_v14 = CONCAT44(temp_v13,(float)temp_v17);
    efctSetSpeed();
    for (temp_v6 = temp_v2; temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20), temp_v6 < (int)temp_v9;
        temp_v6 = temp_v6 + 1) {
      temp_v12 = (float)temp_v17;
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0x73c) == 0) {
        temp_v12 = temp_v13;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v12) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v13,temp_v12);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),2,aiStack_13c[temp_v6],temp_v18[temp_v6]
                  );
    }
    FUN_002bed3c();
    temp_v14 = CONCAT44(temp_v13,(int)temp_v17);
    efctSetSpeed();
    temp_v6 = temp_v2;
    while( 1 ) {
      temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
      if ((int)temp_v9 <= temp_v6) break;
      temp_v12 = (float)temp_v17;
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0x73c) == 0) {
        temp_v12 = temp_v13;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v12) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v13,temp_v12);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),3,aiStack_13c[temp_v6],temp_v18[temp_v6]
                  );
      temp_v6 = temp_v6 + 1;
    }
    temp_v14 = CONCAT44(temp_v13,(float)temp_v17);
    efctSetSpeed();
    for (temp_v6 = temp_v2; temp_v7 = temp_v2, temp_v6 < (int)temp_v9; temp_v6 = temp_v6 + 1) {
      temp_v12 = (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v13 = (float)temp_v17;
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0x73c) == 0) {
        temp_v13 = temp_v12;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v14 == temp_v13) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v14 = CONCAT44(temp_v12,temp_v13);
        efctSetSpeed();
      }
      FUN_00251d98(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),4,aiStack_13c[temp_v6],temp_v18[temp_v6]
                  );
    }
    for (; temp_v7 < (int)temp_v9; temp_v7 = temp_v7 + 1) {
      FUN_0025141c(*(unsigned int *)(temp_v1 + temp_v7 * 4 + 0x6d8),aiStack_13c[temp_v7],temp_v18[temp_v7]);
    }
    if (*(unsigned char *)(temp_v1 + 0x66c) < 2) {
      efctSetSpeed();
    }
    temp_v6 = vec2GetXInt();
    temp_v7 = vec2GetYInt(temp_v1 + 0x4c8);
    FUN_002bf288(2,0x19,0x1e,temp_v6,temp_v7,0x97);
    FUN_002bf288(2,0x19,0x1f,temp_v6,temp_v7,0x97);
    FUN_002bf288(2,0x19,0x20,temp_v6,temp_v7,0x97);
    FUN_002bf288(2,0x19,0x21,temp_v6,temp_v7,0x97);
    FUN_002bf288(2,0x19,0x22,temp_v6,temp_v7,0x97);
    FUN_002bf288(2,0x19,0x23,temp_v6,temp_v7,0x97);
    FUN_002bf288(2,0x19,0x28,temp_v6,temp_v7,0x9c);
    drawSetColorFromRGBA8(0xf49800ff);
    temp_v10 = gameGetSlotTable();
    textFormatBuffer(temp_v19,&LAB_00213184,*(unsigned char *)(temp_v10 + 0x910b));
    temp_v10 = asdTMTexTableEntryAt(0x19,0x2a);
    FUN_002bdf94(2,*(short *)(temp_v10 + 8) + temp_v6,*(short *)(temp_v10 + 10) + temp_v7,0,2,0x9c,
                 temp_v19);
    textFormatBuffer(temp_v19,&LAB_00213184,*(unsigned int *)(temp_v1 + 0x28));
    temp_v10 = asdTMTexTableEntryAt(0x19,0x2c);
    FUN_002bdf94(2,*(short *)(temp_v10 + 8) + temp_v6,*(short *)(temp_v10 + 10) + temp_v7,1,2,0x9c,
                 temp_v19);
    FUN_002bed3c();
    if (*(int *)(temp_v1 + 0x30) >= 2) {
      temp_v4 = 0x24;
      temp_v10 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v1 + 0x6b4));
      if (temp_v10 == 1 || temp_v10 == 2) {
        temp_v4 = 0x26;
      }
      temp_v10 = vec2GetXInt(temp_v1 + 0x68);
      temp_v8 = vec2GetYInt(temp_v1 + 0x68);
      FUN_002bf288(2,0x19,temp_v4,temp_v6 + temp_v10,temp_v8 + temp_v7,0xa6);
      temp_v4 = 0x25;
      temp_v10 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v1 + 0x6b6));
      if (temp_v10 == 1 || temp_v10 == 2) {
        temp_v4 = 0x27;
      }
      temp_v10 = vec2GetXInt(temp_v1 + 0xf4);
      temp_v8 = vec2GetYInt(temp_v1 + 0xf4);
      FUN_002bf288(2,0x19,temp_v4,temp_v6 + temp_v10,temp_v7 + temp_v8,0xa6);
    }
    efctSetSpeed();
    temp_v6 = FUN_00252180(*(unsigned int *)(temp_v1 + 0x6c8));
    if (temp_v6 == 0) {
      switch(*(unsigned int *)(temp_v1 + 0x1c)) {
      case 4:
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || temp_v0 == '\x02') {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_002512c4(temp_v2,0,0,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        temp_v3 = objectPartRunUnlessLocked(temp_v1 + 0x8dc);
        FUN_002512c4(temp_v3,0,0,0xab,1);
        break;
      case 6:
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || (temp_v0 == '\x02' || temp_v0 == '\x03')) {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_002512c4(temp_v2,0,0,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        temp_v2 = objectPartRunUnlessLocked(temp_v1 + 0x940);
        temp_v3 = FUN_0029efa8(temp_v1 + 0x940);
        temp_v3 = temp_v2 + temp_v3 * 4 + 4;
        FUN_002512c4(temp_v3,0,0,0xab,1);
        break;
      case 8:
      case 0xd:
        if (*(char *)(temp_v1 + 0x66c) == '\x05' || *(char *)(temp_v1 + 0x66c) == '\x06') {
          temp_v7 = 0;
          temp_v6 = temp_v7;
          do {
            temp_v10 = temp_v1 + temp_v7 * 4;
            if ((*(char *)(*(int *)(temp_v10 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v10 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_002512c4(temp_v7,0,0,0x79,0);
              temp_v6 = 1;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 4);
          if (temp_v6 == 0) {
            for (; temp_v2 < (int)temp_v9; temp_v2 = temp_v2 + 1) {
              temp_v6 = temp_v1 + temp_v2 * 4;
              if ((*(char *)(*(int *)(temp_v6 + 0x6d8) + 0x20) == '\0') &&
                 (*(int *)(*(int *)(temp_v6 + 0x6d8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
                FUN_002512c4(temp_v2 + temp_v3 * -0xc + 4,0,0,0x79,0);
              }
            }
          }
        }
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || temp_v0 == '\x02') {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v3 + 0x6c8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_002512c4(temp_v2,0,0,0x79,0);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        temp_v3 = objectPartRunUnlessLocked();
        temp_v2 = FUN_0029efa8(temp_v1 + 0xa08);
        temp_v3 = temp_v3 + temp_v2 * 4;
        FUN_002512c4(temp_v3,0,0,0xab,1);
        break;
      case 10:
        temp_v3 = 0;
        do {
          temp_v6 = temp_v1 + temp_v3 * 4;
          if ((*(char *)(*(int *)(temp_v6 + 0x6c8) + 0x20) == '\0') &&
             (*(char *)(*(int *)(temp_v6 + 0x6c8) + 0x23) == '\0')) {
            FUN_002512c4(temp_v3,0,0,0xab,1);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 4);
        temp_v3 = 0;
        do {
          temp_v6 = temp_v1 + (temp_v3 + temp_v2) * 4;
          if ((*(char *)(*(int *)(temp_v6 + 0x6d8) + 0x20) == '\0') &&
             (*(char *)(*(int *)(temp_v6 + 0x6d8) + 0x23) == '\0')) {
            FUN_002512c4(temp_v3 + 4,0,0,0xab,1);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0xc);
        break;
      case 0x13:
        if (*(char *)(temp_v1 + 0x66c) != '\x05' && *(char *)(temp_v1 + 0x66c) != '\x06')
        goto LAB_00213b6c;
        temp_v7 = 0;
        temp_v6 = temp_v7;
        do {
          temp_v10 = temp_v1 + temp_v7 * 4;
          if ((*(char *)(*(int *)(temp_v10 + 0x6c8) + 0x20) == '\0') &&
             (*(int *)(*(int *)(temp_v10 + 0x6c8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
            FUN_002512c4(temp_v7,0,0,0x79,0);
            temp_v6 = 1;
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
        if (temp_v6 == 0) {
          for (; temp_v2 < (int)temp_v9; temp_v2 = temp_v2 + 1) {
            temp_v6 = temp_v1 + temp_v2 * 4;
            if ((*(char *)(*(int *)(temp_v6 + 0x6d8) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v6 + 0x6d8) + 0x34) == (int)*(short *)(temp_v1 + 0x38))) {
              FUN_002512c4(temp_v2 + temp_v3 * -0xc + 4,0,0,0x79,0);
            }
          }
        }
      }
    }
  }
  if (*(int *)(temp_v1 + 0x1c) == 0xe) {
    temp_v2 = *(int *)(temp_v1 + 0x18);
    if (temp_v2 < 8) {
      temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = temp_v13 * 0.075f;
    }
    else {
      temp_v13 = 0.6f;
      if (temp_v2 >= 0x20) {
        temp_v13 = (float)VectorSignedToFloat(temp_v2 - 0x20,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = 0.6f - temp_v13 * 0.075f;
        if (temp_v13 < 0.0f) {
          temp_v13 = 0.0f;
        }
      }
    }
    FUN_002c1b64(g_titleScene,0);
    temp_v4 = VectorFloatToUnsigned(temp_v13 * 255.0f,3);
    FUN_002c0944(temp_v4,temp_v4);
    temp_v2 = g_titleScene;
    if (*(int *)(temp_v1 + 0x18) >= 9) {
      temp_v3 = packNibblesAndByte(6,1,0);
      piVar10 = (int *)(temp_v2 + 0x12ac);
      temp_v6 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v3;
      if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v6 != temp_v3) {
        (**(romwright_code **)(temp_v2 + 0x12c8))();
        *(unsigned char *)(temp_v2 + 0x12c4) = 0;
      }
      fadeObjectResetIfActive(temp_v1 + 0x554);
      fadeObjectResetIfActive(temp_v1 + 0x5e0);
      temp_v1 = g_titleScene;
      temp_v2 = packNibblesAndByte(6,7,0);
      piVar10 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
  }
LAB_00213b6c:
  temp_v1 = g_titleScene;
  piVar10 = (int *)(g_titleScene + 0x124c);
  temp_v2 = *piVar10;
  temp_v3 = piVar10[temp_v2 + 2];
  *piVar10 = temp_v2 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != piVar10[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return 0;
}

} /* extern "C" */
