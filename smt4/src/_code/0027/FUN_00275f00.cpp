/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275f00` (_code @ 0x275f00, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int buttonHelpSetPreset(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_gameState; /* 0x49f91c */

/* Supplied declaration required: buttonHelpSetPreset. */
extern int gameFlagIsSet(unsigned int);
extern int lmapMainGetFlag(void);


void FUN_00275f00(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
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

} /* extern "C" */
