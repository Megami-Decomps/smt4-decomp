/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212120` (_code @ 0x212120, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effectSpawnDefaultArguments(unsigned int);
int FUN_00296ae8(unsigned int, int, unsigned int, int, int, int, unsigned int);
int timerStart(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int g_infoWin; /* 0x43e128 */

/* Supplied declaration required: effectSpawnDefaultArguments. */
/* Supplied declaration required: FUN_00296ae8. */
extern int fileSectionGetData(int, unsigned int, unsigned int);
/* Supplied declaration required: timerStart. */
extern int vec2GetXInt(int);
extern int FUN_002cf11c(void);


void FUN_00212120(unsigned int param_1)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float in_s0;
  
  temp_v1 = FUN_002cf11c();
  temp_v2 = fileSectionGetData(temp_v1,param_1,0);
  temp_v0 = g_infoWin;
  if (temp_v2 != 0) {
    *(unsigned char *)(g_infoWin + 0x21) = 0;
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v0 + 0x21) = 1;
      FUN_00296ae8(*(unsigned int *)(temp_v0 + 0x1b8),3,0xffffffff,0,3,temp_v1,param_1);
      effectSpawnDefaultArguments(*(unsigned int *)(temp_v0 + 0x1b8));
      if ((int)in_s0 >= 0x441d8001) {
        *(unsigned char *)(temp_v0 + 0x22) = 1;
        *(int *)(temp_v0 + 0x14) = (int)in_s0;
      }
      else {
        *(unsigned char *)(temp_v0 + 0x22) = 0;
      }
      timerStart(temp_v0 + 0xd0,2,0);
      temp_v1 = vec2GetXInt(temp_v0 + 0xd0);
      *(int *)(temp_v0 + 0x18) = temp_v1;
      *(int *)(temp_v0 + 0x1c) = temp_v1 + *(int *)(temp_v0 + 0x14) + 0x2a;
      if (*(int *)(temp_v0 + 8) == 3) {
        *(unsigned int *)(temp_v0 + 8) = 2;
      }
      *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
    }
    temp_v0 = g_infoWin;
    temp_v1 = g_infoWin + 0x44;
    *(unsigned int *)(g_infoWin + 8) = 1;
    timerStart(temp_v1,0);
    *(unsigned char *)(temp_v0 + 0x23) = 1;
    *(unsigned char *)(temp_v0 + 0x20) = 1;
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  }
  return;
}

} /* extern "C" */
