/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275558` (_code @ 0x275558, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int distSpatial(void);
int asd3dSoundActorIsPlaying(void);
int FUN_003d5000(...);

extern int g_lmapView; /* 0x5806a4 */
extern int DAT_005821a0; /* 0x5821a0 */

/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: asd3dSoundActorIsPlaying. */
extern unsigned int FUN_003d4ed8(unsigned int);
/* Supplied declaration required: FUN_003d5000. */


void FUN_00275558(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  if ((*(char *)(DAT_005821a0 + 8) == '\0') && (temp_v3 = 0, 0 < *(int *)(DAT_005821a0 + 4))) {
    temp_v7 = 50.0f;
    do {
      temp_v4 = DAT_005821a0 + temp_v3 * 0x20;
      if ((*(char *)(temp_v4 + 0xc) != '\0') && (*(short *)(temp_v4 + 0x1c) == 1)) {
        temp_v6 = *(float *)(*(int *)(temp_v4 + 0x10) * 4 - 0x3a7ea8c);
        temp_v5 = *(float *)(g_lmapView + 0x50);
        distSpatial();
        if (*(int *)(temp_v4 + 0x18) != 0) {
          temp_v1 = *(int *)(temp_v4 + 0x14);
          if (temp_v5 > temp_v6 + temp_v7) {
            FUN_003d5000();
            *(unsigned int *)(temp_v4 + 0x18) = 0;
            *(unsigned short *)(temp_v4 + 0x1e) = 0;
            *(unsigned int *)(temp_v4 + 0x14) = 0;
          }
          else {
            asd3dSoundActorIsPlaying();
            if ((temp_v1 == 0) &&
               (temp_v0 = *(short *)(temp_v4 + 0x1e) + 1, *(short *)(temp_v4 + 0x1e) = temp_v0, temp_v0 >= 9))
            {
              FUN_003d5000(*(unsigned int *)(temp_v4 + 0x14));
              *(unsigned int *)(temp_v4 + 0x18) = 0;
              *(unsigned short *)(temp_v4 + 0x1e) = 0;
            }
          }
        }
        else if (temp_v5 < temp_v6) {
          temp_v2 = FUN_003d4ed8(*(unsigned int *)(temp_v4 + 0x10));
          *(unsigned int *)(temp_v4 + 0x14) = temp_v2;
          *(unsigned int *)(temp_v4 + 0x18) = 1;
          *(unsigned short *)(temp_v4 + 0x1e) = 0;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(DAT_005821a0 + 4));
  }
  return;
}

} /* extern "C" */
