/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ca58` (_code @ 0x29ca58, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int statusCameraDestroy(void);
int mdlPartsRelease(void);
int FUN_00293e78(int, int *);
int lmapSceneSetUnk134(int);
int asdModelSlotRelease(int);
int timerStart(int, int, int);
int FUN_002bee58(int, int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char DAT_0044e142; /* 0x44e142 */
extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: statusCameraDestroy. */
/* Supplied declaration required: mdlPartsRelease. */
/* Supplied declaration required: FUN_00293e78. */
/* Supplied declaration required: lmapSceneSetUnk134. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: asdModelSlotRelease. */
extern int lmapMainIsRunning(void);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_0029ca58(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  unsigned int uStack_18;
  
  temp_v0 = DAT_0044e144;
  if (*(int *)(DAT_0044e144 + 0x12dc) == 3) {
    return;
  }
  if (*(char *)(DAT_0044e144 + 0x1e67) == '\x03' || *(char *)(DAT_0044e144 + 0x1e67) == '\t') {
    temp_v1 = lmapSceneGetScript();
    if (temp_v1 != 0) {
      if (*(int *)(temp_v0 + 0x1e80) != 0) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0x1e84);
        uStack_18 = *(unsigned int *)(temp_v0 + 0x1e8c);
        temp_v4 = *(float *)(temp_v0 + 0x1e88) + 1000.0f;
        FUN_00293e78(*(int *)(temp_v0 + 0x1e80),&temp_v3);
        lmapSceneSetUnk134(1);
        if (*(int *)(temp_v0 + 0x1e80) != 0) {
          statusCameraDestroy();
        }
      }
    }
    else if (*(int *)(temp_v0 + 0x1e80) != 0) {
      mdlPartsRelease();
      temp_v1 = lmapMainIsRunning();
      if (temp_v1 == 0) {
        asdModelSlotRelease(0);
      }
      if (DAT_0044e142 != '\0') {
        piVar3 = *(int **)(temp_v0 + 0x1e80);
        if (piVar3 != (int *)0x0) {
          (**(romwright_code **)(*piVar3 + 4))();
          if (*(int *)(temp_v0 + 0x1e80) != 0) {
            statusCameraDestroy();
          }
        }
      }
      else if (*(int *)(temp_v0 + 0x1e80) != 0) {
        statusCameraDestroy();
      }
    }
  }
  timerStart(temp_v0 + 0x38c,5,0);
  FUN_002bee58(temp_v0 + 0x418,3);
  FUN_002bee58(temp_v0 + 0x4a4,3);
  FUN_002bee58(temp_v0 + 0x530,3);
  timerStart(temp_v0 + 0x5bc,5,0);
  timerStart(temp_v0 + 0x648,5,0);
  timerStart(temp_v0 + 0x6d4,5,0);
  FUN_002bee58(temp_v0 + 0x760,3);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c;
    timerStart(temp_v2 + 0x7ec,5,0);
    timerStart(temp_v2 + 0xd64,5,0);
    temp_v2 = DAT_0044e144;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  *(unsigned int *)(DAT_0044e144 + 0x10) = 0;
  *(unsigned int *)(temp_v2 + 0x12dc) = 2;
  return;
}

} /* extern "C" */
