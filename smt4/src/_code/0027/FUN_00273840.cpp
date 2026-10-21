/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273840` (_code @ 0x273840, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int commonBgReset(void);
int FUN_002757a8(void);
int FUN_00275bc8(void);
int FUN_00289880(void);
int buttonHelpSetPreset(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_gameState; /* 0x49f91c */
extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: commonBgReset. */
/* Supplied declaration required: FUN_002757a8. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int gameFlagIsSet(unsigned int);
extern int lmapMainGetFlag(void);
extern int NaviMain_IsMapOpen(void);


void FUN_00273840(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if (DAT_0049fb6d == '\0') {
      DAT_0049fb6d = 1;
      FUN_00275bc8();
      FUN_00289880();
      buttonHelpSetPreset(0x90);
      return;
    }
    return;
  }
  if (DAT_0049fb6d != '\0') {
    DAT_0049fb6d = '\0';
    temp_v0 = gameFlagIsSet(0x16);
    if (temp_v0 != 0) {
      commonBgReset();
    }
    else {
      FUN_00289880();
    }
  }
  else {
    temp_v0 = NaviMain_IsMapOpen();
    if (temp_v0 == 0) {
      if (g_gameState != 0x65) {
        if (g_gameState < 100) {
          if (g_gameState == 0x24) {
            buttonHelpSetPreset(0xd1);
            return;
          }
          temp_v0 = gameFlagIsSet(0x16);
          if (temp_v0 != 0) {
            buttonHelpSetPreset(0x3f);
            return;
          }
          buttonHelpSetPreset(0xd9);
          return;
        }
      }
      else {
        temp_v0 = lmapMainGetFlag();
        if (temp_v0 != 0) {
          buttonHelpSetPreset(0xde);
          return;
        }
      }
      buttonHelpSetPreset(0xd0);
      return;
    }
  }
  FUN_002757a8();
  return;
}

} /* extern "C" */
