/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027461c` (_code @ 0x27461c, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cd4(void);
int mathPositionHeadingDegrees(void);
int controllerSetDestination(int, int);
int controllerSetRotationEulerDegrees(int);
int FUN_003fe86c(int, int, int);

extern int g_lmapView; /* 0x5806a4 */
extern int g_mapHakai; /* 0x581038 */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_003fe86c. */
extern int slots4FGetActiveValue(int);


void FUN_0027461c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  
  temp_v6 = *(float *)(g_lmapView + 0x50);
  mathPositionHeadingDegrees();
  temp_v3 = 0;
  temp_v10 = 0x42480000;
  temp_v8 = 0x428c000000000000;
  do {
    temp_v4 = g_mapHakai + temp_v3 * 0x54;
    temp_v5 = *(char *)(temp_v4 + 0x5c) != '\0';
    temp_v2 = 0;
    if (temp_v5) {
      temp_v2 = *(int *)(temp_v4 + 0x60);
    }
    if (temp_v5 && temp_v2 != 3) {
      if (*(char *)(temp_v4 + 0x84) != '\0') {
        temp_v2 = *(int *)(temp_v4 + 0x88);
      }
      else {
        temp_v2 = *(int *)(g_mapHakai + *(int *)(temp_v4 + 0x90) * 0x20 + *(short *)(temp_v4 + 0xac) * 4
                        + 0x20);
      }
      temp_v2 = *(int *)(temp_v2 + 4);
      temp_v0 = *(unsigned int *)(temp_v2 + 4);
      if (DAT_005f161f != '\0') {
        if ((temp_v0 & 1) == 0) {
          *(unsigned int *)(temp_v2 + 4) = temp_v0 | 3;
        }
      }
      else {
        if ((temp_v0 & 1) != 0) {
          *(unsigned int *)(temp_v2 + 4) = temp_v0 & 0xfffffffc;
        }
        if ((*(short *)(temp_v4 + 0xac) == 2) && ((*(unsigned int *)(temp_v2 + 4) & 1) == 0)) {
          temp_v9 = (float)temp_v10;
          temp_v7 = temp_v6;
          mathPositionHeadingDegrees();
          if (*(int *)(g_lmapView + 0xb0) == -1) {
            temp_v9 = (float)((unsigned long long)temp_v8 >> 0x20);
          }
          temp_v6 = temp_v7;
          FUN_002b5cd4();
          if ((temp_v7 <= -temp_v9) || (temp_v9 <= temp_v7)) {
            *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
          }
        }
        if (*(char *)(temp_v4 + 0x7c) != '\0') {
          controllerSetDestination(temp_v2,temp_v4 + 0x68);
          controllerSetRotationEulerDegrees(temp_v2);
          temp_v1 = slots4FGetActiveValue(temp_v2);
          if (temp_v1 != *(int *)(temp_v4 + 0x78)) {
            FUN_003fe86c(temp_v2,*(int *)(temp_v4 + 0x78),2);
          }
          *(unsigned char *)(temp_v4 + 0x7c) = 0;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x10);
  return;
}

} /* extern "C" */
