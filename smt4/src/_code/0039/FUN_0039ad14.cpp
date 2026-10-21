/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ad14` (_code @ 0x39ad14, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002319c0(void);
int FUN_0039b648(int);
int naviUpdateDragCapture(int);
int NaviMain_SetCursorPos(int, float *);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f934; /* 0x49f934 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002319c0. */
/* Supplied declaration required: FUN_0039b648. */
/* Supplied declaration required: naviUpdateDragCapture. */
/* Supplied declaration required: NaviMain_SetCursorPos. */


unsigned int FUN_0039ad14(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  if (((*(unsigned int *)(param_1 + 0x10) & 0x1000) == 0) &&
     ((g_gameState != 0x13 || ((DAT_0049f920 != 6 && (DAT_0049f920 != 7 && DAT_0049f920 != 8))))))
  {
    if ((*(unsigned int *)(param_1 + 0x10) & 0x10) != 0) {
      temp_v0 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = temp_v0;
      FUN_002319c0();
      if (((temp_v0 != 0) && (DAT_0049f934 == '\0')) ||
         (temp_v0 = *(int *)(param_1 + 0x18), temp_v0 >= 0x10)) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xffffffef;
      }
      else {
        temp_v2 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v1 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c)) * temp_v1 * 0.06666667f +
                   *(float *)(param_1 + 0x1c);
        temp_v4 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x20)) * temp_v2 * 0.06666667f +
                   *(float *)(param_1 + 0x20);
        NaviMain_SetCursorPos(param_1 + 0x162,&temp_v3);
      }
    }
    FUN_0039b648(param_1);
    naviUpdateDragCapture(param_1);
    return 0;
  }
  return 0;
}

} /* extern "C" */
