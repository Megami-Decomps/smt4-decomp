/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330ac8` (_code @ 0x330ac8, 0x488 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00240d88(...);
int fadeObjectResetIfActive(int);
int vec2GetXInt(...);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, unsigned int, unsigned int, int);
int efctSetSpeed(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int uiDrawRotatingLoadingGrid(...);
int SBORROW4(int, int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_screenStateWork; /* 0x43dd90 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00240d88. */
/* Supplied declaration required: fadeObjectResetIfActive. */
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: uiDrawRotatingLoadingGrid. */


unsigned int FUN_00330ac8(void)

{
/* irregular: 11 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  char *pcVar10;
  unsigned char temp_v8;
  
  temp_v1 = g_screenStateWork;
  if (*(int *)(g_screenStateWork + 4) == 0) {
    return 0;
  }
  FUN_002c39a4(g_titleScene);
  temp_v7 = g_titleScene;
  temp_v2 = FUN_002c5d80(1,0);
  piVar8 = (int *)(temp_v7 + 0x124c);
  temp_v5 = *piVar8;
  temp_v6 = piVar8[temp_v5 + 2];
  *piVar8 = temp_v5 + 1;
  piVar8[temp_v5 + 3] = temp_v2;
  if (*(char *)(temp_v7 + 0x1264) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v7 + 0x1268))();
    *(unsigned char *)(temp_v7 + 0x1264) = 0;
  }
  temp_v7 = g_titleScene;
  temp_v0 = *(short *)(g_screenStateWork + 0x1e);
  if (temp_v0 == 2) {
    temp_v2 = 0x28f;
  }
  else {
    temp_v2 = 0;
    if (temp_v0 == 3 || temp_v0 == 4) {
      temp_v2 = 0x311;
    }
  }
  if (*(char *)(temp_v1 + 0x20) != '\0') {
    temp_v6 = *(int *)(temp_v1 + 4);
    temp_v8 = SBORROW4(temp_v6,3);
    temp_v5 = temp_v6 - 3;
    if (temp_v6 < 4) {
      temp_v8 = SBORROW4(*(int *)(temp_v1 + 8),temp_v2);
      temp_v5 = *(int *)(temp_v1 + 8) - temp_v2;
    }
    if (temp_v5 < 0 == temp_v8) {
      temp_v5 = packNibblesAndByte(6,1,0);
      piVar8 = (int *)(temp_v7 + 0x12ac);
      temp_v6 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v5;
      if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
        (**(romwright_code **)(temp_v7 + 0x12c8))();
        *(unsigned char *)(temp_v7 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x24,0x204,0,0,0x5b);
      temp_v7 = g_titleScene;
      temp_v5 = packNibblesAndByte(6,7,0);
      piVar8 = (int *)(temp_v7 + 0x12ac);
      temp_v6 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v5;
      if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
        (**(romwright_code **)(temp_v7 + 0x12c8))();
        *(unsigned char *)(temp_v7 + 0x12c4) = 0;
      }
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x205,0,0,0x60);
      efctSetSpeed();
    }
  }
  temp_v3 = vec2GetXInt(temp_v1 + 0x2c8);
  temp_v4 = vec2GetYInt(temp_v1 + 0x2c8);
  FUN_002bf380(2,0x24,1,temp_v3,temp_v4,0x65);
  FUN_002bf288(2,0x24,0x206,temp_v3,temp_v4,0x65);
  temp_v0 = *(short *)(temp_v1 + 0x1e);
  pcVar10 = (char *)0x0;
  if (temp_v0 == 2) {
    pcVar10 = (char *)0x4033b0;
  }
  else if (temp_v0 == 3) {
    pcVar10 = (char *)0x4033c0;
  }
  else if (temp_v0 == 4) {
    pcVar10 = "A\xa0ÍĘĬŨŲƮŀ";
  }
  temp_v7 = 0;
  do {
    if (*(int *)(temp_v1 + 4) >= 3) {
      if (*(int *)(temp_v1 + 4) < 4) {
        if (*(int *)(temp_v1 + 8) < (int)(*(unsigned short *)(pcVar10 + temp_v7 * 4) - 5)) {
          FUN_00240d88(temp_v7,0);
        }
        else if ((int)(*(unsigned short *)((int)(pcVar10 + temp_v7 * 4) + 2) + 5) > *(int *)(temp_v1 + 8)) {
          FUN_00240d88(temp_v7,1,0);
        }
        else {
          FUN_00240d88(temp_v7,0,1);
        }
      }
      else {
        FUN_00240d88(temp_v7,0,1);
      }
    }
    else {
      FUN_00240d88(temp_v7,0);
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  fadeObjectResetIfActive(temp_v1 + 0x840);
  if (*(int *)(temp_v1 + 4) < 3) {
    temp_v3 = vec2GetXInt();
    temp_v4 = vec2GetYInt(temp_v1 + 0x4f8);
    FUN_002bf288(2,0x24,0x21d,temp_v3,temp_v4,0x79);
  }
  else if (*(int *)(temp_v1 + 4) >= 4) {
    temp_v3 = vec2GetXInt();
    temp_v4 = vec2GetYInt(temp_v1 + 0x584);
    if (*(char *)(temp_v1 + 0x20) != '\0') {
      temp_v7 = *(int *)(temp_v1 + 8);
      if (temp_v7 % 0x14 >= 11) {
        FUN_002bf288(2,0x24,0x21f,0,0,0x79);
      }
    }
    else {
      FUN_002bf288(2,0x24,0x21e,temp_v3,temp_v4,0x79);
    }
  }
  else if ((*(char *)(temp_v1 + 0x20) != '\0') && (temp_v7 = *(int *)(temp_v1 + 8), temp_v7 >= temp_v2)) {
    if (temp_v7 % 0x14 >= 11) {
      FUN_002bf288(2,0x24,0x21f,0,0,0x79);
    }
  }
  else {
    FUN_002bf288(2,0x24,0x21d,0,0,0x79);
    uiDrawRotatingLoadingGrid(0x220,*(unsigned int *)(temp_v1 + 0x78));
  }
  temp_v1 = g_titleScene;
  piVar8 = (int *)(g_titleScene + 0x124c);
  temp_v7 = *piVar8;
  temp_v2 = piVar8[temp_v7 + 2];
  *piVar8 = temp_v7 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar8[temp_v7 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return 0;
}

} /* extern "C" */
