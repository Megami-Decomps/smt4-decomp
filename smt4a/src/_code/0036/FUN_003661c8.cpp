/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003661c8` (_code @ 0x3661c8, 0xc3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x32];
    unsigned char f005f162e; /* 0x032 */
    u8 pad033[0x1d];
    int f005f164c; /* 0x050 */
    u8 pad054[0x50];
    unsigned int f005f16a0; /* 0x0a4 */
    unsigned int f005f16a4; /* 0x0a8 */
    unsigned int f005f16a8; /* 0x0ac */
    unsigned int f005f16ac; /* 0x0b0 */
    unsigned int f005f16b0; /* 0x0b4 */
    unsigned int f005f16b4; /* 0x0b8 */
    unsigned int f005f16b8; /* 0x0bc */
    unsigned int f005f16bc; /* 0x0c0 */
    u8 pad0c4[0x19a];
    unsigned char f005f185a; /* 0x25e */
};
extern GameStateView g_gameState;


int soundVolumeSettingSet(...);
int FUN_0014af98(void);
int sysPlaySe(int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00233e10(...);
int FUN_00246014(void);
int FUN_002d1f40(...);
int FUN_00317af8(...);
int FUN_00324e38(...);
int FUN_00352308(void);
int FUN_003b5714(unsigned int, unsigned int, unsigned int);
int sysPlayVoice(...);
int VectorSignedToFloat(...);

int FUN_002342b8(void);
int mapIfOverlayRelease(void);
int mapEaseSceneHeading(void);
int FUN_002e364c(...);
int FUN_00303460(...);
int mapIfReleaseSlot3(void);
int mapSetSceneState(...);
int FUN_00327ee8(void);
int FUN_0033abd4(void);
int FUN_003d4ed8(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */












/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: soundVolumeSettingSet. */
extern unsigned int soundVolumeSettingGet(void);
/* Supplied declaration required: FUN_0014af98. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: FUN_00246014. */
extern int mapIfHasSelection(void);
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: mapIfOverlayRelease. */
/* Supplied declaration required: mapEaseSceneHeading. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: mapIfReleaseSlot3. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: FUN_00352308. */
extern int dataTableGetRecord23(void);
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


void FUN_003661c8(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 24 native warning(s); review required */
  float *pfVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10 [11];
  
  temp_v0 = soundVolumeSettingGet();
  if (*(int *)(g_lmapScene + 4) < 10) {
    mapEaseSceneHeading();
    temp_v1 = g_lmapScene;
    *(float *)(g_lmapScene + 0x1c) =
         *(float *)(g_lmapScene + 0x1c) +
         (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) * 0.33333334f;
    *(float *)(temp_v1 + 0x20) =
         *(float *)(temp_v1 + 0x20) +
         (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f;
    *(float *)(temp_v1 + 0x24) =
         *(float *)(temp_v1 + 0x24) +
         (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f;
  }
  temp_v1 = g_lmapScene;
  temp_v4 = 0x10002c4;
  temp_v2 = *(int *)(g_lmapScene + 4);
  temp_v6 = 0.017453292f;
  temp_v7 = 0x40000000;
  if (temp_v2 != 0x10) {
    if (temp_v2 >= 0x10) {
      if (temp_v2 == 0x36) {
        mapIfReleaseSlot3();
        temp_v2 = g_lmapScene;
        *(unsigned int *)(g_lmapScene + 0x68) = 0;
        temp_v1 = g_lmapView;
        *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(temp_v2 + 0x50);
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
        FUN_00303460(0);
        temp_v1 = g_lmapScene;
        temp_v2 = *(int *)(temp_v1 + 4);
        *(int *)(temp_v1 + 4) = temp_v2 + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        FUN_002e364c(g_lmapScene + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v2 < 0x37) {
        if (temp_v2 == 0x32) {
          g_gameState.f005f185a = 0;
          *(unsigned int *)(g_lmapView + 0xc) = 2;
          *(unsigned int *)(temp_v1 + 0x54) = 5;
          *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
          *(float *)(temp_v1 + 0xb4) = *(float *)(temp_v1 + 0xa4) - *(float *)(temp_v1 + 0x20);
          *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xa8) - *(float *)(temp_v1 + 0x24);
          *(float *)(temp_v1 + 0xb0) = (*(float *)(temp_v1 + 0xa0) - *(float *)(temp_v1 + 0x1c)) * 0.025f;
          *(float *)(temp_v1 + 0xb4) = *(float *)(temp_v1 + 0xb4) * 0.025f;
          *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) * 0.025f;
          temp_v1 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0xbc) = 0;
          temp_v2 = *(int *)(temp_v1 + 4);
          *(int *)(temp_v1 + 4) = temp_v2 + 1;
          *(unsigned int *)(temp_v1 + 8) = 0;
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        if (temp_v2 == 0x33) {
          temp_v1 = *(int *)(g_lmapScene + 8) + 1;
          *(int *)(g_lmapScene + 8) = temp_v1;
          if (temp_v1 < 0x15) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          FUN_0033abd4();
          switch(g_gameState.f005f162e) {
          case 0:
            FUN_003d4ed8(temp_v4);
            break;
          case 1:
            temp_v4 = 0x10002c6;
            FUN_003d4ed8(temp_v4);
            break;
          case 2:
            temp_v4 = 0x10002c8;
            FUN_003d4ed8(temp_v4);
            break;
          case 3:
            temp_v4 = 0x10002ca;
            FUN_003d4ed8(temp_v4);
            break;
          case 4:
            temp_v4 = 0x10002cc;
            FUN_003d4ed8(temp_v4);
            break;
          case 5:
            temp_v4 = 0x10002d9;
            FUN_003d4ed8(temp_v4);
          }
          goto LAB_00366704;
        }
        if (temp_v2 != 0x34) {
          if (temp_v2 != 0x35) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          pfVar1 = (float *)(g_lmapScene + 0x20);
          temp_v2 = *(int *)(g_lmapScene + 0xbc);
          temp_v6 = *(float *)(g_lmapScene + 0x68) - 2.0f;
          *(float *)(g_lmapScene + 0x68) = temp_v6;
          *(float *)(temp_v1 + 0x20) = *pfVar1 + temp_v6;
          if (temp_v2 < 0x28) {
            *(int *)(temp_v1 + 0xbc) = temp_v2 + 1;
            *(float *)(temp_v1 + 0x1c) = *(float *)(temp_v1 + 0x1c) + *(float *)(temp_v1 + 0xb0);
            *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0xb8);
          }
          temp_v2 = *(int *)(temp_v1 + 8) + 1;
          *(int *)(temp_v1 + 8) = temp_v2;
          if (temp_v2 == 0x1e) {
            FUN_002342b8();
          }
          if ((*(int *)(g_lmapScene + 8) < 0x1f) || (temp_v1 = mapIfHasSelection(), temp_v1 != 0)) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          FUN_002342b8();
          temp_v2 = *(int *)(g_lmapScene + 4);
          temp_v1 = g_lmapScene;
        }
        else {
          pfVar1 = (float *)(g_lmapScene + 0x20);
          temp_v3 = *(int *)(g_lmapScene + 0xbc);
          temp_v6 = *(float *)(g_lmapScene + 0x68) - 2.0f;
          *(float *)(g_lmapScene + 0x68) = temp_v6;
          *(float *)(temp_v1 + 0x20) = *pfVar1 + temp_v6;
          if (temp_v3 < 0x28) {
            *(int *)(temp_v1 + 0xbc) = temp_v3 + 1;
            *(float *)(temp_v1 + 0x1c) = *(float *)(temp_v1 + 0x1c) + *(float *)(temp_v1 + 0xb0);
            *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0xb8);
          }
          *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
          if (temp_v6 <= 0.0f) {
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
        }
      }
      else {
        if (temp_v2 == 0x37) {
          *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
          mapIfOverlayRelease();
          mapSetSceneState(0xc);
          FUN_002e364c(g_lmapScene + 0x28);
          FUN_00327ee8();
          return;
        }
        if (temp_v2 != 0x5a) {
          if (temp_v2 != 0x5b) {
            if ((temp_v2 != 0x5c) ||
               (temp_v1 = *(int *)(g_lmapScene + 8) + 1, *(int *)(g_lmapScene + 8) = temp_v1,
               temp_v1 < 4)) {
              FUN_002e364c(g_lmapScene + 0x28);
              FUN_00327ee8();
              return;
            }
            temp_v0 = 1;
            mapSetSceneState(temp_v0);
            FUN_002e364c(g_lmapScene + 0x28);
            FUN_00327ee8();
            return;
          }
          mapIfOverlayRelease();
          temp_v1 = g_lmapScene;
          temp_v2 = *(int *)(temp_v1 + 4);
        }
      }
      *(int *)(temp_v1 + 4) = temp_v2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      FUN_002e364c(g_lmapScene + 0x28);
      FUN_00327ee8();
      return;
    }
    switch(temp_v2) {
    case 0:
      *(unsigned int *)(g_lmapScene + 0x54) = 0;
      *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
      *(unsigned char *)(temp_v1 + 0x6c) = 0;
      temp_v4 = g_gameState.f005f16b8;
      temp_v0 = g_gameState.f005f16b4;
      *(unsigned int *)(temp_v1 + 0x28) = g_gameState.f005f16b0;
      *(unsigned int *)(temp_v1 + 0x2c) = temp_v0;
      *(unsigned int *)(temp_v1 + 0x30) = temp_v4;
      *(unsigned int *)(temp_v1 + 0x50) = g_gameState.f005f16bc;
      FUN_00303460(0xc);
      *(unsigned int *)(g_lmapView + 0xb0) = 0xfffffffd;
      sysPlaySe(0xdd);
      FUN_00233e10(1,g_gameState.f005f16ac);
      FUN_001bc124();
      FUN_001bbf0c();
      FUN_00246014();
      temp_v1 = g_lmapScene;
      temp_v2 = *(int *)(temp_v1 + 4);
      *(int *)(temp_v1 + 4) = temp_v2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      break;
    case 1:
      *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
      FUN_00233e10(1,g_gameState.f005f16ac);
      temp_v1 = g_lmapScene;
      if (*(int *)(g_lmapScene + 8) >= 3) {
        temp_v2 = *(int *)(g_lmapScene + 4);
        *(unsigned int *)(g_lmapScene + 0x54) = 0x1d;
        *(unsigned int *)(temp_v1 + 0x58) = temp_v7;
        *(int *)(temp_v1 + 4) = temp_v2 + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
      }
      break;
    case 2:
      *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
      FUN_00233e10(1,g_gameState.f005f16ac);
      temp_v1 = FUN_004d0584();
      if (temp_v1 != 0) {
        FUN_003b5714(g_gameState.f005f16a0,g_gameState.f005f16a4,g_gameState.f005f16a8);
        temp_v2 = dataTableGetRecord23();
        temp_v1 = g_lmapScene;
        if (g_gameState.f005f164c != 0) {
          temp_v5 = *(float *)(g_lmapScene + 0x50) * temp_v6;
          FUN_001bc124();
          temp_v1 = g_lmapScene;
          temp_v8 = 250.0f;
          *(float *)(g_lmapScene + 0xa0) = *(float *)(g_lmapScene + 0x28) + temp_v5 * 250.0f;
          *(float *)(temp_v1 + 0xa4) = *(float *)(temp_v1 + 0x2c) - 500.0f;
          temp_v6 = *(float *)(temp_v1 + 0x50) * temp_v6;
          FUN_001bbf0c();
          temp_v1 = g_lmapScene;
          *(float *)(g_lmapScene + 0xa8) = *(float *)(g_lmapScene + 0x30) + temp_v6 * temp_v8;
          *(unsigned int *)(temp_v1 + 0xac) = *(unsigned int *)(temp_v1 + 0x50);
          *(unsigned int *)(temp_v1 + 4) = 0x32;
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
        else {
          temp_v0 = VectorSignedToFloat((int)*(short *)(temp_v2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(g_lmapScene + 0xa0) = temp_v0;
          temp_v0 = VectorSignedToFloat((int)*(short *)(temp_v2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v1 + 0xa4) = temp_v0;
          temp_v0 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v1 + 0xa8) = temp_v0;
          temp_v0 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v1 + 0xac) = temp_v0;
          *(unsigned int *)(temp_v1 + 4) = 10;
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
      }
      else {
        temp_v1 = padButtonIsPressed(5);
        if ((temp_v1 != 0) || (temp_v1 = inputIsQuestMenuPressed(), temp_v1 != 0)) {
          temp_v1 = g_lmapView;
          *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
          *(unsigned int *)(temp_v1 + 0xb0) = 0;
          FUN_00303460(0);
          temp_v1 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 0x54) = 0;
          *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
          FUN_00233e10(0,g_gameState.f005f16ac);
          mapIfReleaseSlot3();
          temp_v1 = g_lmapScene;
          *(unsigned int *)(g_lmapScene + 4) = 0x5a;
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
      }
      break;
    case 10:
      g_gameState.f005f185a = 0;
      *(unsigned int *)(g_lmapView + 0xc) = 1;
      *(unsigned int *)(temp_v1 + 0x54) = 5;
      *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
      temp_v6 = *(float *)(temp_v1 + 0xa0) - *(float *)(temp_v1 + 0x1c);
      *(float *)(temp_v1 + 0xb0) = temp_v6;
      *(float *)(temp_v1 + 0xb4) = *(float *)(temp_v1 + 0xa4) - *(float *)(temp_v1 + 0x20);
      *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xa8) - *(float *)(temp_v1 + 0x24);
      *(float *)(temp_v1 + 0xb0) = temp_v6 * 0.025f;
      *(float *)(temp_v1 + 0xb4) = *(float *)(temp_v1 + 0xb4) * 0.025f;
      *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) * 0.025f;
      temp_v1 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0xbc) = 0;
      temp_v2 = *(int *)(temp_v1 + 4);
      *(int *)(temp_v1 + 4) = temp_v2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      break;
    case 0xb:
      temp_v1 = *(int *)(g_lmapScene + 8) + 1;
      *(int *)(g_lmapScene + 8) = temp_v1;
      if (temp_v1 < 0x15) break;
      FUN_0033abd4();
      switch(g_gameState.f005f162e) {
      case 0:
        FUN_003d4ed8(temp_v4);
        break;
      case 1:
        temp_v4 = 0x10002c6;
        FUN_003d4ed8(temp_v4);
        break;
      case 2:
        temp_v4 = 0x10002c8;
        FUN_003d4ed8(temp_v4);
        break;
      case 3:
        temp_v4 = 0x10002ca;
        FUN_003d4ed8(temp_v4);
        break;
      case 4:
        temp_v4 = 0x10002cc;
        FUN_003d4ed8(temp_v4);
        break;
      case 5:
        temp_v4 = 0x10002d9;
        FUN_003d4ed8(temp_v4);
        break;
      default:
      }
LAB_00366704:
      FUN_00324e38(0xffffffff);
      FUN_001bc124();
      FUN_001bbf0c();
      FUN_0014af98();
      soundVolumeSettingSet();
      sysPlayVoice(0x10002e5);
      soundVolumeSettingSet(temp_v0);
      temp_v1 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x68) = 0x41700000;
      *(float *)(temp_v1 + 0x20) = *(float *)(temp_v1 + 0x20) + 15.0f;
      temp_v2 = *(int *)(temp_v1 + 4);
      *(int *)(temp_v1 + 4) = temp_v2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      break;
    case 0xc:
      pfVar1 = (float *)(g_lmapScene + 0x20);
      temp_v2 = *(int *)(g_lmapScene + 0xbc);
      temp_v6 = *(float *)(g_lmapScene + 0x68) - 2.0f;
      *(float *)(g_lmapScene + 0x68) = temp_v6;
      *(float *)(temp_v1 + 0x20) = *pfVar1 + temp_v6;
      if (temp_v2 < 0x28) {
        *(int *)(temp_v1 + 0xbc) = temp_v2 + 1;
        *(float *)(temp_v1 + 0x1c) = *(float *)(temp_v1 + 0x1c) + *(float *)(temp_v1 + 0xb0);
        *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0xb8);
      }
      *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
      if (0.0f < temp_v6) {
        *(unsigned int *)(temp_v1 + 4) = 0xd;
        *(unsigned int *)(temp_v1 + 8) = 0;
      }
      break;
    case 0xd:
      pfVar1 = (float *)(g_lmapScene + 0x20);
      temp_v2 = *(int *)(g_lmapScene + 0xbc);
      temp_v6 = *(float *)(g_lmapScene + 0x68) - 2.0f;
      *(float *)(g_lmapScene + 0x68) = temp_v6;
      temp_v6 = *pfVar1 + temp_v6;
      *(float *)(temp_v1 + 0x20) = temp_v6;
      if (temp_v2 < 0x28) {
        *(int *)(temp_v1 + 0xbc) = temp_v2 + 1;
        *(float *)(temp_v1 + 0x1c) = *(float *)(temp_v1 + 0x1c) + *(float *)(temp_v1 + 0xb0);
        *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0xb8);
      }
      temp_v5 = *(float *)(temp_v1 + 0xa4);
      *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
      if (temp_v6 < temp_v5) {
        temp_v0 = *(unsigned int *)(temp_v1 + 0xa0);
        temp_v4 = *(unsigned int *)(temp_v1 + 0xa8);
        *(unsigned int *)(temp_v1 + 0x1c) = temp_v0;
        *(float *)(temp_v1 + 0x20) = temp_v5;
        *(unsigned int *)(temp_v1 + 0x24) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x28) = temp_v0;
        *(float *)(temp_v1 + 0x2c) = temp_v5;
        *(unsigned int *)(temp_v1 + 0x30) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x34) = temp_v0;
        *(float *)(temp_v1 + 0x38) = temp_v5;
        *(unsigned int *)(temp_v1 + 0x3c) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x40) = temp_v0;
        *(float *)(temp_v1 + 0x44) = temp_v5;
        *(unsigned int *)(temp_v1 + 0x48) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x68) = 0;
        *(unsigned int *)(temp_v1 + 0x54) = 7;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
        *(unsigned int *)(temp_v1 + 4) = 0xe;
        *(unsigned int *)(temp_v1 + 8) = 0;
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00352308();
      }
      break;
    case 0xe:
      temp_v1 = *(int *)(g_lmapScene + 8) + 1;
      *(int *)(g_lmapScene + 8) = temp_v1;
      if (temp_v1 == 1) {
        mapIfReleaseSlot3();
        temp_v1 = g_lmapView;
        *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapScene + 0x50);
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
        FUN_00303460(0);
        *(unsigned char *)(g_lmapView + 0xa8) = 1;
      }
      if (*(int *)(g_lmapScene + 8) == 3) {
        FUN_0033abd4();
        switch(g_gameState.f005f162e) {
        case 0:
          temp_v4 = 0x10002c5;
          FUN_003d4ed8(temp_v4);
          break;
        case 1:
          temp_v4 = 0x10002c7;
          FUN_003d4ed8(temp_v4);
          break;
        case 2:
          temp_v4 = 0x10002c9;
          FUN_003d4ed8(temp_v4);
          break;
        case 3:
          temp_v4 = 0x10002cb;
          FUN_003d4ed8(temp_v4);
          break;
        case 4:
          temp_v4 = 0x10002cd;
          FUN_003d4ed8(temp_v4);
          break;
        case 5:
          temp_v4 = 0x10002da;
          FUN_003d4ed8(temp_v4);
          break;
        default:
        }
LAB_00366a74:
        FUN_00324e38(0xffffffff);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_0014af98();
        soundVolumeSettingSet();
        sysPlayVoice(0x10002e6);
        soundVolumeSettingSet(temp_v0);
      }
      if (*(int *)(g_lmapScene + 8) != 6) break;
      if (*(int *)(g_lmapScene + 0xbc) >= 0x24) {
        temp_v0 = 0x1e;
        temp_v4 = 0x14;
      }
      else {
        temp_v0 = 0xf;
        temp_v4 = 10;
      }
      FUN_002d1f40(temp_v4,temp_v0,0);
      temp_v2 = *(int *)(g_lmapScene + 4);
      temp_v1 = g_lmapScene;
      *(int *)(temp_v1 + 4) = temp_v2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      break;
    case 0xf:
      mapIfOverlayRelease();
      temp_v1 = g_lmapScene;
      temp_v2 = *(int *)(temp_v1 + 4);
      *(int *)(temp_v1 + 4) = temp_v2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
    }
  }
  else {
    temp_v1 = *(int *)(g_lmapScene + 8) + 1;
    *(int *)(g_lmapScene + 8) = temp_v1;
    if ((temp_v1 < 0x12) ||
       ((((FUN_00317af8(&temp_v9,temp_v10,0), temp_v9 < 0xbf000001 && ((int)temp_v9 < 0x3f000001)
          ) && (temp_v10[0] < 0xbf000001)) &&
        (((int)temp_v10[0] < 0x3f000001 && (*(int *)(g_lmapScene + 8) < 0x1f)))))) {
      FUN_002e364c(g_lmapScene + 0x28);
      FUN_00327ee8();
      return;
    }
    *(unsigned int *)(g_lmapScene + 0x58) = 0x40a00000;
    temp_v0 = 0xc;
    mapSetSceneState(temp_v0);
  }
  FUN_002e364c(g_lmapScene + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
