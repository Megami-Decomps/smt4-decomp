/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c3fc` (_code @ 0x39c3fc, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct MapNaviDisplay;

extern "C" {

int pointConvertToFloat(...);
void mapNaviDisplayLoadMap(MapNaviDisplay*, int);
int FUN_002316e8(void);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_002b8ee0(int, int);
int FUN_002bf818(int);
int naviMainSetCurrentMap(int, unsigned int);
int FUN_0039f860(int, int);

/* Supplied declaration required: pointConvertToFloat. */
/* Supplied declaration required: FUN_002316e8. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf818. */
/* Supplied declaration required: naviMainSetCurrentMap. */
/* Supplied declaration required: FUN_0039f860. */


void FUN_0039c3fc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if ((*(unsigned int *)(param_1 + 0x10) & 8) != 0) {
    temp_v3 = param_1 + 0x8d4;
    if (*(char *)(param_1 + 0x5b) != '\0') {
      if (*(char *)(param_1 + 0x5b) == '\x01') {
        FUN_002bf818(temp_v3);
        FUN_002bf818(param_1 + 0x960);
        temp_v3 = param_1 + 0x198;
        FUN_002b8ee0(temp_v3,0);
        if (*(char *)(param_1 + 0x222) != '\0') {
          pointConvertToFloat(param_1 + 0x164,0);
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xffffeff7;
        }
        else {
          temp_v1 = vec2GetYInt(temp_v3);
          temp_v2 = vec2GetXInt(temp_v3);
          pointConvertToFloat(param_1 + 0x164,temp_v2,temp_v1);
        }
        *(unsigned char *)(param_1 + 0x5a8c) = 1;
        *(unsigned char *)(param_1 + 0x5a8d) = 1;
        return;
      }
    }
    else {
      FUN_002bf818(temp_v3);
      temp_v4 = param_1 + 0x224;
      temp_v0 = FUN_002bf818(temp_v4);
      if (temp_v0 != 0) {
        naviMainSetCurrentMap(param_1 + 0x162,*(unsigned int *)(param_1 + 0x5c));
        FUN_0039f860(param_1 + 0x162,0);
        *(unsigned int *)(param_1 + 0x18) = 0;
        if (*(int *)(param_1 + 0x5c) >= 100) {
          *(unsigned char *)(param_1 + 0xc) = 0;
          FUN_002316e8();
        }
        else {
          *(unsigned char *)(param_1 + 0xc) = 1;
          mapNaviDisplayLoadMap((MapNaviDisplay*)param_1,*(int *)(param_1 + 0x5c));
        }
        uiSpriteSetImageKeyframe(temp_v3,2,0);
        *(unsigned char *)(param_1 + 0x5b) = 1;
      }
      temp_v1 = vec2GetYInt(temp_v4);
      temp_v2 = vec2GetXInt(temp_v4);
      pointConvertToFloat(param_1 + 0x164,temp_v2,temp_v1);
      *(unsigned char *)(param_1 + 0x5a8c) = 1;
      *(unsigned char *)(param_1 + 0x5a8d) = 1;
    }
  }
  return;
}

} /* extern "C" */
