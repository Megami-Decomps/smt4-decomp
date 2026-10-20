/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e774` (_code @ 0x22e774, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_00184758(...);
int FUN_00184c00(int, int, int);
int FUN_001aeafc(void);
int FUN_0020b6d4(...);
int statusCameraDestroy(void);
int FUN_003857b4(int);
int linkHolderRunAll(unsigned int, int *);
int FUN_003e5c00(void);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0056fcc0; /* 0x56fcc0 */
extern signed char DAT_00588fd2; /* 0x588fd2 */
extern int DAT_00588fd4; /* 0x588fd4 */

extern int lmapMainIsRunning(void);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_0020b6d4. */
/* Supplied declaration required: statusCameraDestroy. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: FUN_003857b4. */
/* Supplied declaration required: linkHolderRunAll. */
/* Supplied declaration required: FUN_003e5c00. */


void FUN_0022e774(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned int uStack_20;
  
  temp_v0 = DAT_00588fd4;
  if (*(int *)(DAT_00588fd4 + 0x1368) == 4) {
    return;
  }
  if (*(char *)(DAT_00588fd4 + 0x2018) == '\x03' || *(char *)(DAT_00588fd4 + 0x2018) == '\n') {
    temp_v1 = lmapSceneGetScript();
    if (temp_v1 != 0) {
      if (*(int *)(temp_v0 + 0x2034) != 0) {
        temp_v4 = *(unsigned int *)(temp_v0 + 0x2038);
        temp_v5 = *(float *)(temp_v0 + 0x203c) + 1000.0f;
        uStack_20 = *(unsigned int *)(temp_v0 + 0x2040);
        linkHolderRunAll(*(unsigned int *)(temp_v0 + 0x2034),&temp_v4);
        FUN_003857b4(1);
        if (*(int *)(temp_v0 + 0x2034) != 0) {
          statusCameraDestroy();
        }
      }
    }
    else if (*(int *)(temp_v0 + 0x2034) != 0) {
      FUN_003e5c00();
      temp_v1 = lmapMainIsRunning();
      if (temp_v1 != 0) {
        *(unsigned char *)(*(int *)(DAT_0056fcc0 + 0x14) + 0xc4) = *(unsigned char *)(temp_v0 + 0x20e6);
      }
      else {
        *(unsigned char *)(*(int *)(DAT_0056fcc0 + 0x14) + 0xc4) = *(unsigned char *)(temp_v0 + 0x20e6);
        FUN_001aeafc();
      }
      if (DAT_00588fd2 != '\0') {
        if (*(int **)(temp_v0 + 0x2034) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(temp_v0 + 0x2034) + 4))();
          if (*(int *)(temp_v0 + 0x2034) != 0) {
            statusCameraDestroy();
          }
        }
      }
      else if (*(int *)(temp_v0 + 0x2034) != 0) {
        statusCameraDestroy();
      }
    }
  }
  FUN_00184758(temp_v0 + 0x418,5,0);
  FUN_001846d0(temp_v0 + 0x4a4,3);
  FUN_001846d0(temp_v0 + 0x530,3);
  FUN_001846d0(temp_v0 + 0x5bc,3);
  FUN_00184758(temp_v0 + 0x648,5,0);
  FUN_001846d0(temp_v0 + 0x6d4,3);
  FUN_001846d0(temp_v0 + 0x760,3);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c;
    temp_v3 = temp_v2 + 0x7ec;
    FUN_00184758(temp_v3,0x11,0);
    FUN_00184c00(temp_v3,0xe,0);
    FUN_00184758(temp_v2 + 0xd64,5,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  if (*(char *)(temp_v0 + 0x2017) == '\x05') {
    FUN_00184758(temp_v0 + 0x12dc,5,0);
  }
  FUN_0020b6d4(3);
  return;
}

} /* extern "C" */
