/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281814` (_code @ 0x281814, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0031d890(void);
int FUN_003447a0(void);
int campCecViewDestroy(void);

/* Supplied declaration required: sysPlaySe. */
extern int campCecViewExists(void);
extern int campCecViewIsDone(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_003447a0. */
/* Supplied declaration required: campCecViewDestroy. */


unsigned int FUN_00281814(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = campCecViewExists();
  if (temp_v0 != 0) {
    temp_v0 = campCecViewIsDone();
    if (temp_v0 != 0) {
      campCecViewDestroy();
      sysPlaySe(0x10d);
      *(unsigned int *)(param_1 + 0x144) = 1;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      FUN_0031d890();
      temp_v1 = 3;
    }
  }
  else {
    FUN_003447a0();
  }
  return temp_v1;
}

} /* extern "C" */
