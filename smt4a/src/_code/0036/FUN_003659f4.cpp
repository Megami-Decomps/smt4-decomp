/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003659f4` (_code @ 0x3659f4, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int distSpatial(void);
int FUN_003d4ed8(int);

extern int g_mapIf; /* 0x58103c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_003d4ed8. */


void FUN_003659f4(void)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_s0;
  unsigned long long temp_v4;
  
  temp_v0 = g_mapIf;
  temp_v2 = 0;
  temp_v4 = (unsigned long long)in_s0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 0x194;
    if (((*(char *)(temp_v3 + 0x1dc) != '\0') &&
        (((temp_v1 = *(int *)(temp_v3 + 0x1f0), temp_v1 == 0x1d || temp_v1 == 0x31 ||
          (temp_v1 == 0x1e || temp_v1 == 0x1f)) || ((temp_v1 == 0x30 || temp_v1 == 0x22) || temp_v1 == 0x23)))
        ) && (*(int *)(temp_v3 + 0x1e0) == 6)) {
      temp_v1 = (int)temp_v4;
      distSpatial();
      if (temp_v1 < 0x41200000) {
        if ((*(signed char *)((unsigned char *)&g_gameState + 0x18)) == '\0') {
          if (!(*(int *)(temp_v3 + 0x1f0) == 0x31 || *(int *)(temp_v3 + 0x1f0) == 0x30)) {
            FUN_003d4ed8(0x10002ab);
          }
          else {
            FUN_003d4ed8(0x10002ab);
          }
        }
        *(unsigned int *)(temp_v3 + 0x1e0) = 7;
        *(unsigned short *)(temp_v3 + 0x208) = 0;
        return;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x80);
  return;
}

} /* extern "C" */
