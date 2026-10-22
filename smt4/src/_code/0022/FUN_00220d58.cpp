/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220d58` (_code @ 0x220d58, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int statusCameraHandleControls(unsigned int);
int buttonHelpSetPreset(int);
int FUN_002bf810(int);
int FUN_002bff6c(int, int, int, int, int);
int FUN_002ebfbc(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int buttonHelpHasEnabledEntryForId(unsigned int);
extern int FUN_0026f024(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: statusCameraHandleControls. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonRepeat(unsigned int);
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf810. */
extern int padIsButtonPressed(unsigned int);
/* Supplied declaration required: FUN_002bff6c. */
/* Supplied declaration required: FUN_002ebfbc. */


unsigned int FUN_00220d58(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = 0;
  temp_v1 = FUN_002bf4f8(0x39,0x97);
  temp_v2 = (int)*(short *)(temp_v1 + 8);
  FUN_002bff6c(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
               (int)(*(short **)(temp_v1 + 0xc))[1],0);
  if (temp_v2 != 0) {
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  }
  else {
    temp_v2 = (int)*(short *)(temp_v1 + 8);
    FUN_002bff6c(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                 (int)(*(short **)(temp_v1 + 0xc))[1],3);
    if ((temp_v2 != 0) && (*(int *)(param_1 + 0x118) - 1U < 0xf)) {
      temp_v0 = 1;
    }
    *(unsigned int *)(param_1 + 0x118) = 0;
  }
  temp_v1 = padIsButtonPressed(0);
  if ((temp_v1 != 0) || (temp_v1 = buttonHelpHasEnabledEntryForId(1), temp_v1 != 0)) {
    *(unsigned int *)(param_1 + 0x110) = 2;
    FUN_002bf810(0x100016d);
    buttonHelpSetPreset(0xe2);
    temp_v3 = 2;
  }
  else {
    temp_v1 = padIsButtonPressed(1);
    if ((temp_v1 != 0) || (temp_v1 = buttonHelpHasEnabledEntryForId(2), temp_v1 != 0)) {
      *(unsigned int *)(param_1 + 0x110) = 8;
      FUN_002bf810(0x100016e);
      temp_v3 = 2;
    }
    else {
      temp_v1 = padIsButtonRepeat(10);
      if ((temp_v1 != 0) || (temp_v1 = buttonHelpHasEnabledEntryForId(4), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x127) != '\0') {
          *(unsigned char *)(param_1 + 0x127) = 0;
        }
        else {
          *(unsigned char *)(param_1 + 0x127) = 1;
        }
        *(unsigned int *)(param_1 + 0x20) = 0;
        *(unsigned int *)(param_1 + 0x18) = 0x14a;
        FUN_002bf810(0x100016d);
      }
      else if (temp_v0) {
        FUN_002bf810(0x100016d);
        temp_v3 = 2;
        *(unsigned int *)(param_1 + 0x110) = 2;
      }
    }
  }
  if (*(char *)(param_1 + 0x127) != '\0') {
    temp_v1 = FUN_0026f024(param_1 + 0x18,0x14a,0,4,*(unsigned int *)(param_1 + 0x20),1);
    if (temp_v1 != 0) {
      *(unsigned char *)(param_1 + 0x24) = 1;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  statusCameraHandleControls(*(unsigned int *)(param_1 + 4));
  FUN_002ebfbc(param_1 + 0x78);
  return temp_v3;
}

} /* extern "C" */
