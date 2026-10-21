/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf8e4` (_code @ 0x2cf8e4, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019af70(...);
int distSpatial(void);
int mapRenderApplySecondary(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_lmapScene; /* 0x581288 */
extern int DAT_005f0ca8; /* 0x5f0ca8 */
extern signed char DAT_005f0d34; /* 0x5f0d34 */
extern signed char DAT_005f161c; /* 0x5f161c */
extern signed char DAT_005f161d; /* 0x5f161d */

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019af70. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: mapRenderApplySecondary. */


void FUN_002cf8e4(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = gameFlagIsSet(0x4d0);
  if ((temp_v1 != 0) && (DAT_005f161c == '\0')) {
    temp_v0 = DAT_005f161d;
    if (DAT_005f161d == '\0') {
      temp_v0 = DAT_005f0d34;
    }
    if ((DAT_005f161d == '\0' && temp_v0 == '\0') && (DAT_005f0ca8 == 8 || DAT_005f0ca8 == 9)) {
      mapRenderApplySecondary();
      temp_v1 = *(int *)(g_lmapScene + 0x1c);
      distSpatial();
      if (temp_v1 < 0x43c80000) {
        temp_v2 = 0xef6c3eff;
        temp_v3 = 0xfe0b22ff;
      }
      else if (temp_v1 < 0x44480000) {
        temp_v2 = 0xfbc30dff;
        temp_v3 = 0xff6c2bff;
      }
      else if (temp_v1 < 0x44960000) {
        temp_v2 = 0xfff2c0ff;
        temp_v3 = 0xffd52dff;
      }
      else {
        temp_v3 = 0x2db5ffff;
        temp_v2 = 0xffffffff;
      }
      FUN_0019af70(temp_v2,temp_v3,temp_v2,temp_v3);
      FUN_0019af70(0xff,0xff,0xff);
      return;
    }
  }
  return;
}

} /* extern "C" */
