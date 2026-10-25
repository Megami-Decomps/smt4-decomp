/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155ca8` (_code @ 0x155ca8, 0x584 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164168(...);
int efctSetSpeed(void);
int renderPopStateStacks(void);
int FUN_00168e00(int, int, int, int);
int asdTMTexTableEntryAt(...);
int renderCtxCalculateStereoParallax(int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int g_infoWin; /* 0x57f574 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164168. */
extern int btlMainIsRunning(void);
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: renderPopStateStacks. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


char FUN_00155ca8(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned char temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v1 = g_infoWin;
  temp_v10 = *(int *)(g_infoWin + 8) == 0;
  temp_v0 = '\0';
  if (!temp_v10) {
    temp_v0 = *(char *)(g_infoWin + 0x30);
  }
  if (temp_v10 || temp_v0 == '\0') {
    return temp_v0;
  }
  FUN_00157558(g_renderCtx);
  temp_v3 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar11 = (int *)(temp_v3 + 0x1258);
  temp_v6 = *piVar11;
  temp_v7 = piVar11[temp_v6 + 2];
  *piVar11 = temp_v6 + 1;
  piVar11[temp_v6 + 3] = temp_v2;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v7 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  temp_v2 = vec2GetXInt(temp_v1 + 0x54);
  temp_v12 = 0.25f;
  temp_v11 = temp_v12;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v2 = temp_v2 + (int)temp_v12;
  temp_v3 = vec2GetYInt(temp_v1 + 0x54);
  temp_v6 = vec2GetXInt(temp_v1 + 0xe0);
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v6 = temp_v6 + (int)temp_v11;
  if (*(char *)(temp_v1 + 0x32d) != '\0') {
    temp_v2 = vec2GetXInt(temp_v1 + 0x54);
    temp_v6 = vec2GetXInt(temp_v1 + 0xe0);
  }
  if (*(int *)(temp_v1 + 0x20) == 2) {
    temp_v7 = *(int *)(temp_v1 + 0x2c);
    temp_v4 = 5000;
    temp_v5 = temp_v4;
    if (temp_v7 != 0xae) {
      if (temp_v7 == 0xb0) {
        temp_v5 = 6000;
      }
      else if (temp_v7 == 0xaf) {
        temp_v5 = 7000;
      }
      else if (temp_v7 == 0xad) {
        temp_v5 = 9000;
      }
      else if (temp_v7 == 0xb3) {
        temp_v5 = 10000;
      }
      else {
        if ((temp_v7 == 0xb1 || temp_v7 == 0xbf) || temp_v7 == 0xc0) {
          temp_v4 = 12000;
        }
        temp_v5 = temp_v4;
        if (((temp_v7 != 0xb1 && temp_v7 != 0xbf) && temp_v7 != 0xc0) && (temp_v5 = 13000, temp_v7 != 0xb2)) {
          if (temp_v7 == 5) {
            temp_v5 = 14000;
          }
          else if (temp_v7 != 0xb9) {
            if (temp_v7 == 0xba) {
              temp_v5 = 11000;
            }
            else if (temp_v7 == 0xbb) {
              temp_v5 = 15000;
            }
            else {
              temp_v5 = temp_v4;
              if (temp_v7 == 6) {
                temp_v5 = 16000;
              }
            }
          }
          else {
            temp_v7 = btlMainIsRunning();
            if (temp_v7 != 0) {
              temp_v5 = 17000;
            }
          }
        }
      }
    }
    efctSetSpeed();
    FUN_001835b4(2,0x1b,temp_v5,temp_v2 + temp_v6 + 2,0,0x15);
    efctSetSpeed();
  }
  efctSetSpeed();
  FUN_001835b4(2,8,0x87,temp_v2,temp_v3,0x15);
  FUN_001835b4(2,8,0x88,temp_v2,temp_v3,0x15);
  efctSetSpeed();
  if (*(char *)(temp_v1 + 0x31) != '\0') {
    temp_v7 = asdTMTexTableEntryAt(8,0x87);
    efctSetSpeed();
    temp_v6 = g_renderCtx;
    temp_v10 = 0;
    if (*(int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1318) * 4 + 0x1320) == 3) {
      temp_v9 = g_renderCtx + 0x1318 + *(int *)(g_renderCtx + 0x1318) * 4;
      temp_v8 = *(int *)(temp_v9 + 8);
      *(unsigned int *)(temp_v9 + 8) = 0;
      if (*(char *)(temp_v6 + 0x1330) != '\0' || temp_v8 != 0) {
        (**(romwright_code **)(temp_v6 + 0x1334))();
        *(unsigned char *)(temp_v6 + 0x1330) = 0;
      }
      temp_v10 = 1;
    }
    FUN_00168e00(*(short *)(temp_v7 + 8) + temp_v2,*(short *)(temp_v7 + 10) + temp_v3,
                 (int)**(short **)(temp_v7 + 0xc),(int)(*(short **)(temp_v7 + 0xc))[1]);
    temp_v6 = asdTMTexTableEntryAt(8,0x89);
    if (*(char *)(temp_v1 + 0x33) != '\0') {
      FUN_00164168(*(unsigned int *)(temp_v1 + 0x328),*(short *)(temp_v6 + 8) + temp_v2,
                   *(short *)(temp_v6 + 10) + temp_v3,0xc9,6,0);
    }
    else {
      FUN_00164168(*(unsigned int *)(temp_v1 + 0x328),
                   (int)*(short *)(temp_v6 + 8) + *(int *)(temp_v1 + 0x18) + temp_v2,
                   *(short *)(temp_v6 + 10) + temp_v3,0xc9,6,0);
      if (*(char *)(temp_v1 + 0x32) != '\0') {
        FUN_00164168(*(unsigned int *)(temp_v1 + 0x328),
                     (int)*(short *)(temp_v6 + 8) + *(int *)(temp_v1 + 0x1c) + temp_v2,
                     *(short *)(temp_v6 + 10) + temp_v3,0xc9,6,0);
      }
    }
    temp_v6 = g_renderCtx;
    if (temp_v10) {
      piVar11 = (int *)(g_renderCtx + 0x1318);
      temp_v7 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = 3;
      if (*(char *)(temp_v6 + 0x1330) != '\0' || temp_v7 != 3) {
        (**(romwright_code **)(temp_v6 + 0x1334))();
        *(unsigned char *)(temp_v6 + 0x1330) = 0;
      }
    }
    renderPopStateStacks();
    efctSetSpeed();
  }
  efctSetSpeed();
  FUN_001835b4(2,8,0x86,temp_v2,temp_v3,0x1f);
  temp_v6 = *(int *)(temp_v1 + 0x20);
  if (temp_v6 != 0) {
    if (temp_v6 != 1) {
      if (temp_v6 != 2) {
        if (temp_v6 == 3) {
          asdTMTexTableEntryAt(8,0x89);
          FUN_001835b4(2,8,0x102,temp_v2,temp_v3,0x1f);
        }
      }
      else if (*(char *)(temp_v1 + 0x32c) != '\0') {
        FUN_001835b4(2,8,0x102,temp_v2,temp_v3,0x1f);
      }
      else {
        FUN_001835b4(2,8,0x18c,temp_v2,temp_v3,0x1f);
      }
    }
    else {
      FUN_001835b4(2,8,0x18b,temp_v2,temp_v3,0x1f);
    }
  }
  else {
    FUN_001835b4(2,8,0x102,temp_v2,temp_v3,0x1f);
  }
  efctSetSpeed();
  temp_v1 = g_renderCtx;
  piVar11 = (int *)(g_renderCtx + 0x1258);
  temp_v3 = *piVar11;
  temp_v2 = piVar11[temp_v3 + 2];
  *piVar11 = temp_v3 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar11[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  return '\0';
}

} /* extern "C" */
