/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b064` (_code @ 0x22b064, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int buttonHelpSetPreset(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int flagBitIsSet(unsigned int);
/* Supplied declaration required: buttonHelpSetPreset. */
extern int gameFlagIsSet(unsigned int);


void FUN_0022b064(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = gameFlagIsSet(0x11);
  if (temp_v1 != 0) {
    temp_v1 = gameFlagIsSet(0x16);
    if (temp_v1 != 0) {
      temp_v1 = gameFlagIsSet(0x40c);
      if (temp_v1 != 0) {
        temp_v1 = flagBitIsSet(0x76);
        temp_v0 = *(short *)(param_1 + 0x3c);
        if (temp_v1 != 0) {
          if (temp_v0 == 4) {
            buttonHelpSetPreset(0xe8);
            return;
          }
          if (temp_v0 != 3) {
            buttonHelpSetPreset(0x43);
            return;
          }
          buttonHelpSetPreset(0xe9);
          return;
        }
      }
      else {
        temp_v0 = *(short *)(param_1 + 0x3c);
      }
      if (temp_v0 != 4) {
        if (temp_v0 != 3) {
          buttonHelpSetPreset(0x41);
          return;
        }
        buttonHelpSetPreset(0xe9);
        return;
      }
    }
    else if (*(short *)(param_1 + 0x3c) != 4) {
      buttonHelpSetPreset(0xd3);
      return;
    }
  }
  else if (*(short *)(param_1 + 0x3c) != 4) {
    buttonHelpSetPreset(0x40);
    return;
  }
  buttonHelpSetPreset(0xe8);
  return;
}

} /* extern "C" */
