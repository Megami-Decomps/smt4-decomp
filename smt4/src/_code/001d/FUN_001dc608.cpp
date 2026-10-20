/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc608` (_code @ 0x1dc608, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026b9bc(void);
int FUN_0028a368(int);
int FUN_0028a924(int, int, unsigned int);
int buttonHelpSetPreset(int);
int FUN_002d747c(void);
int campCecViewDestroy(void);

extern int campCecViewExists(void);
extern int campCecViewIsDone(void);
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002d747c. */
/* Supplied declaration required: campCecViewDestroy. */


unsigned int FUN_001dc608(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = campCecViewExists();
  if (temp_v0 != 0) {
    temp_v0 = campCecViewIsDone();
    if (temp_v0 != 0) {
      campCecViewDestroy();
      buttonHelpSetPreset(3);
      *(unsigned int *)(param_1 + 0xd2c) = 6;
      *(unsigned int *)(param_1 + 0xd34) = 0;
      FUN_0026b9bc();
      FUN_0028a924(1,0,0xffffffff);
      FUN_0028a368(1);
      temp_v1 = 2;
    }
  }
  else {
    FUN_002d747c();
  }
  return temp_v1;
}

} /* extern "C" */
