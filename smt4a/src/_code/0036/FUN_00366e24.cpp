/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00366e24` (_code @ 0x366e24, 0x66c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002342b8(void);
int FUN_00313648(unsigned int);

int FUN_0013c1ec(...);
int FUN_0014af98(void);
int sysPlaySe(int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00233e10(int, unsigned int);
int FUN_00246014(void);
int mapIfOverlayRelease(void);
int FUN_002dae68(void);
int FUN_002e364c(int);
int FUN_00303460(int);
int mapIfReleaseSlot3(void);
int FUN_00324e38(unsigned int);
int FUN_00325ba4(int, int, int, int *, float [7], unsigned int);
int FUN_00327ee8(void);
int FUN_003d2150(int);
int FUN_003d4ed8(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f164c; /* 0x5f164c */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned int DAT_005f16bc; /* 0x5f16bc */
extern unsigned char DAT_005f185a; /* 0x5f185a */

/* Supplied declaration required: FUN_0013c1ec. */
extern unsigned int FUN_00145868(void);
/* Supplied declaration required: FUN_0014af98. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: FUN_00246014. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: mapIfOverlayRelease. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: mapIfReleaseSlot3. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00325ba4. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);


void FUN_00366e24(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float fStack_3c;
  unsigned int uStack_38;
  float temp_v10 [7];
  
  temp_v0 = FUN_00145868();
  if (*(int *)(g_lmapScene + 4) < 10) {
    FUN_002dae68();
    temp_v2 = g_lmapScene;
    *(float *)(g_lmapScene + 0x1c) =
         *(float *)(g_lmapScene + 0x1c) +
         (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
    *(float *)(temp_v2 + 0x20) =
         *(float *)(temp_v2 + 0x20) +
         (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) * 0.16666667f;
    *(float *)(temp_v2 + 0x24) =
         *(float *)(temp_v2 + 0x24) +
         (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) * 0.33333334f;
  }
  temp_v2 = g_lmapScene;
  temp_v1 = *(int *)(g_lmapScene + 4);
  temp_v8 = 0x40000000;
  temp_v7 = 0.0f;
  temp_v4 = 180.0f;
  if (temp_v1 != 0xb) {
    if (temp_v1 < 0xb) {
      temp_v5 = 0.017453292f;
      if (temp_v1 != 0) {
        if (temp_v1 != 1) {
          if (temp_v1 != 2) {
            if (temp_v1 == 10) {
              temp_v2 = *(int *)(g_lmapScene + 8) + 1;
              *(int *)(g_lmapScene + 8) = temp_v2;
              if (temp_v2 == 1) {
                if ((g_gameState != 0x26) && (g_gameState != 0x1a)) {
                  FUN_003d4ed8(0x10002bb);
                }
                FUN_00324e38(0xffffffff);
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_0014af98();
                FUN_0013c1ec();
                FUN_003d2150(0x10002e7);
                FUN_0013c1ec(temp_v0);
              }
              temp_v2 = g_lmapScene;
              if (*(int *)(g_lmapScene + 8) == 2) {
                *(unsigned int *)(g_lmapScene + 0x54) = 0x10;
                *(float *)(temp_v2 + 0x58) = temp_v7;
                mapIfReleaseSlot3();
                temp_v2 = g_lmapScene;
                DAT_005f185a = 0;
                puVar5 = (unsigned int *)(g_lmapScene + 0x1c);
                *(unsigned int *)(g_lmapScene + 0x4c) = *(unsigned int *)(g_lmapScene + 0x50);
                temp_v0 = *(unsigned int *)(temp_v2 + 0x2c);
                temp_v8 = *(unsigned int *)(temp_v2 + 0x30);
                *puVar5 = *(unsigned int *)(temp_v2 + 0x28);
                *(unsigned int *)(temp_v2 + 0x20) = temp_v0;
                *(unsigned int *)(temp_v2 + 0x24) = temp_v8;
                *(int *)(temp_v2 + 4) = *(int *)(temp_v2 + 4) + 1;
                if (g_gameState == 0x26 || g_gameState == 0x1a) {
                  FUN_003d4ed8(0x10000f7);
                }
                *(unsigned int *)(g_lmapScene + 8) = 0;
              }
            }
          }
          else {
            *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
            FUN_00233e10(1,DAT_005f16ac);
            temp_v1 = FUN_004d0584();
            temp_v2 = g_lmapScene;
            if (temp_v1 != 0) {
              *(unsigned int *)(g_lmapScene + 4) = 10;
              *(unsigned int *)(temp_v2 + 8) = 0;
              if (DAT_005f164c == 0) {
                temp_v0 = 3;
              }
              else {
                temp_v0 = 4;
              }
              *(unsigned int *)(DAT_005806a4 + 0xc) = temp_v0;
              temp_v9 = *(unsigned int *)(temp_v2 + 0x28);
              fStack_3c = *(float *)(temp_v2 + 0x2c);
              uStack_38 = *(unsigned int *)(temp_v2 + 0x30);
              FUN_00325ba4(2,10,0x66,&temp_v9,temp_v10,0xffffffff);
              temp_v2 = g_lmapScene;
              temp_v10[0] = temp_v10[0] + temp_v4;
              if (temp_v10[0] < temp_v7) {
                temp_v10[0] = temp_v10[0] + 360.0f;
              }
              if ((int)temp_v10[0] >= 0x43b40001) {
                temp_v10[0] = temp_v10[0] - 360.0f;
              }
              *(float *)(g_lmapScene + 0x50) = temp_v10[0];
              *(unsigned int *)(temp_v2 + 0x28) = temp_v9;
              *(float *)(temp_v2 + 0x2c) = fStack_3c;
              *(unsigned int *)(temp_v2 + 0x30) = uStack_38;
              temp_v7 = (temp_v10[0] + temp_v4) * temp_v5;
              *(float *)(temp_v2 + 0x2c) = fStack_3c - 142.0f;
              FUN_001bc124();
              temp_v2 = g_lmapScene;
              temp_v6 = 35.0f;
              *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v7 * 35.0f;
              temp_v5 = (*(float *)(temp_v2 + 0x50) + temp_v4) * temp_v5;
              FUN_001bbf0c();
              *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v5 * temp_v6;
            }
            else {
              temp_v2 = padButtonIsPressed(5);
              if ((temp_v2 != 0) || (temp_v2 = FUN_004d0554(), temp_v2 != 0)) {
                temp_v2 = DAT_005806a4;
                *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
                *(unsigned int *)(temp_v2 + 0xb0) = 0;
                FUN_00303460(0);
                temp_v2 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 0x54) = 0;
                *(unsigned int *)(temp_v2 + 0x58) = 0x40a00000;
                FUN_00233e10(0,DAT_005f16ac);
                mapIfReleaseSlot3();
                temp_v2 = g_lmapScene;
                *(unsigned int *)(g_lmapScene + 4) = 0x5a;
                *(unsigned int *)(temp_v2 + 8) = 0;
              }
            }
          }
        }
        else {
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v2 = g_lmapScene;
          if (*(int *)(g_lmapScene + 8) >= 3) {
            temp_v1 = *(int *)(g_lmapScene + 4);
            *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
            *(unsigned int *)(temp_v2 + 0x58) = temp_v8;
            *(int *)(temp_v2 + 4) = temp_v1 + 1;
            *(unsigned int *)(temp_v2 + 8) = 0;
          }
        }
      }
      else {
        *(unsigned int *)(g_lmapScene + 0x54) = 0;
        *(unsigned int *)(temp_v2 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v2 + 0x6c) = 0;
        temp_v8 = DAT_005f16b8;
        temp_v0 = DAT_005f16b4;
        *(unsigned int *)(temp_v2 + 0x28) = DAT_005f16b0;
        *(unsigned int *)(temp_v2 + 0x2c) = temp_v0;
        *(unsigned int *)(temp_v2 + 0x30) = temp_v8;
        *(unsigned int *)(temp_v2 + 0x50) = DAT_005f16bc;
        FUN_00303460(0xc);
        *(unsigned int *)(DAT_005806a4 + 0xb0) = 0xfffffffd;
        sysPlaySe(0xdd);
        FUN_00233e10(1,DAT_005f16ac);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00246014();
        temp_v2 = g_lmapScene;
        *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
        *(unsigned int *)(temp_v2 + 8) = 0;
      }
    }
    else {
      if (temp_v1 == 0xc) {
        temp_v0 = 0xe;
      }
      else {
        if (temp_v1 == 0x5a) {
          *(unsigned int *)(g_lmapScene + 4) = 0x5b;
          *(unsigned int *)(temp_v2 + 8) = 0;
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        if (temp_v1 == 0x5b) {
          mapIfOverlayRelease();
          temp_v2 = g_lmapScene;
          *(int *)(g_lmapScene + 4) = *(int *)(g_lmapScene + 4) + 1;
          *(unsigned int *)(temp_v2 + 8) = 0;
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        if ((temp_v1 != 0x5c) ||
           (temp_v2 = *(int *)(g_lmapScene + 8) + 1, *(int *)(g_lmapScene + 8) = temp_v2, temp_v2 < 4))
        {
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        temp_v0 = 1;
      }
      FUN_00313648(temp_v0);
    }
  }
  else {
    temp_v3 = *(int *)(g_lmapScene + 8) + 1;
    *(unsigned int *)(g_lmapScene + 8) = temp_v3;
    temp_v5 = *(float *)(temp_v2 + 0x2c) - 2.0f;
    *(float *)(temp_v2 + 0x2c) = temp_v5;
    *(unsigned int *)(temp_v2 + 0x1c) = *(unsigned int *)(temp_v2 + 0x28);
    *(float *)(temp_v2 + 0x20) = temp_v5;
    *(unsigned int *)(temp_v2 + 0x24) = *(unsigned int *)(temp_v2 + 0x30);
    if ((g_gameState != 0x26) && (g_gameState != 0x1a)) {
      if ((temp_v3 == 1 || temp_v3 == 0xb) || (temp_v3 == 0x1c || temp_v3 == 0x29)) {
        FUN_003d4ed8((temp_v3 & 3) + 0x10002bb);
        FUN_00324e38(0xffffffff);
      }
    }
    else if ((temp_v3 == 1 || temp_v3 == 0xb) || (temp_v3 == 0x1c || temp_v3 == 0x29)) {
      FUN_00324e38(0xffffffff);
    }
    if (*(int *)(g_lmapScene + 8) == 0x1e) {
      FUN_002342b8();
    }
    if ((*(int *)(g_lmapScene + 8) >= 0x1f) && (temp_v2 = mapIfHasSelection(), temp_v2 == 0)) {
      mapIfOverlayRelease();
      temp_v2 = DAT_005806a4;
      *(float *)(DAT_005806a4 + 0x18) = *(float *)(g_lmapScene + 0x50) + temp_v4;
      *(unsigned int *)(temp_v2 + 0xb0) = 0;
      FUN_00303460(0);
      temp_v2 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x54) = 0;
      *(float *)(temp_v2 + 0x58) = temp_v7;
      *(int *)(temp_v2 + 4) = *(int *)(temp_v2 + 4) + 1;
      *(unsigned int *)(temp_v2 + 8) = 0;
    }
  }
  FUN_002e364c(g_lmapScene + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
