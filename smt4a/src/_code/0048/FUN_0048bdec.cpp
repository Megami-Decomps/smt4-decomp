/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048bdec` (_code @ 0x48bdec, 0x2a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_00167458(int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int dialogClose(int);
int FUN_002d22c0(int);
int FUN_0048821c(int, unsigned int);
int FUN_0048a378(int);
int FUN_0048d248(int, unsigned int);
int naviMainSetCurrentMap(int, unsigned int);
int FUN_00492ac8(int, int);
int pointConvertToFloat(...);

extern unsigned char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: dialogClose. */
/* Supplied declaration required: FUN_002d22c0. */
/* Supplied declaration required: FUN_0048821c. */
/* Supplied declaration required: FUN_0048a378. */
/* Supplied declaration required: FUN_0048d248. */
/* Supplied declaration required: naviMainSetCurrentMap. */
/* Supplied declaration required: FUN_00492ac8. */
extern unsigned int FUN_00492c84(int);
/* Supplied declaration required: pointConvertToFloat. */


void FUN_0048bdec(int param_1)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  unsigned char *puVar6;
  int temp_v4;
  
  if ((*(unsigned int *)(param_1 + 0x10) & 8) != 0) {
    temp_v0 = *(char *)(param_1 + 0x5e);
    temp_v4 = param_1 + 0xf88;
    puVar5 = (unsigned char *)(param_1 + 0x7b90);
    puVar6 = (unsigned char *)(param_1 + 0x7b91);
    if (temp_v0 != '\0') {
      if (temp_v0 == '\x01') {
        temp_v1 = param_1 + 0x4cc;
        naviMainSetCurrentMap(temp_v1,*(unsigned int *)(param_1 + 0x60));
        FUN_00492ac8(temp_v1,0);
        FUN_0048821c(param_1,*(unsigned int *)(param_1 + 0x60));
        uiSpriteSetImageKeyframe(temp_v4,2,0);
        if (DAT_005f1a5e != '\0') {
          DAT_005f1a5e = 0;
          *(char *)(param_1 + 100) = (char)*(unsigned int *)(param_1 + 0x20510);
          *puVar5 = 1;
          *puVar6 = 1;
        }
        else {
          DAT_005f1a5e = 1;
          temp_v2 = FUN_00492c84(temp_v1);
          FUN_0048d248(param_1,temp_v2);
        }
        FUN_0048a378(param_1);
        if (*(char *)(param_1 + 0x20644) != '\0') {
          *(char *)(param_1 + 100) = (char)*(unsigned int *)(param_1 + 0x20510);
          *puVar5 = 1;
          *puVar6 = 1;
          FUN_002d22c0(0);
          dialogClose(1);
          *(unsigned char *)(param_1 + 0x20644) = 0;
          FUN_0048a378(param_1);
          DAT_005f1a5c = 0;
        }
        *(unsigned char *)(param_1 + 0x5e) = 2;
        return;
      }
      if (temp_v0 == '\x02') {
        FUN_00163aa4(temp_v4);
        FUN_00163aa4(param_1 + 0x1014);
        temp_v4 = param_1 + 0x504;
        FUN_00167458(temp_v4,0);
        if (*(char *)(param_1 + 0x58e) != '\0') {
          if (*(int *)(param_1 + 0x60) >= 101) {
            *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffdffff;
          }
          pointConvertToFloat(param_1 + 0x4d0,0);
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xffffeff7;
        }
        else {
          temp_v2 = vec2GetYInt(temp_v4);
          temp_v3 = vec2GetXInt(temp_v4);
          pointConvertToFloat(param_1 + 0x4d0,temp_v3,temp_v2);
        }
        *puVar5 = 1;
        *puVar6 = 1;
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0x20644) != '\0') {
        temp_v1 = 0;
        do {
          FUN_00163aa4(param_1 + temp_v1 * 0x8c + 0xc40);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
        FUN_00163aa4(param_1 + 0x112c);
        FUN_00163aa4(param_1 + 0x10a0);
      }
      FUN_00163aa4(temp_v4);
      temp_v1 = param_1 + 0x590;
      temp_v4 = FUN_00163aa4(temp_v1);
      if (temp_v4 != 0) {
        *(unsigned char *)(param_1 + 0x5e) = 1;
      }
      temp_v2 = vec2GetYInt(temp_v1);
      temp_v3 = vec2GetXInt(temp_v1);
      pointConvertToFloat(param_1 + 0x4d0,temp_v3,temp_v2);
      *puVar5 = 1;
      *puVar6 = 1;
    }
  }
  return;
}

} /* extern "C" */
