/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002817ac` (_code @ 0x2817ac, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0031d890(void);
int FUN_00344348(int);
int FUN_0037bd00(void);

/* Supplied declaration required: sysPlaySe. */
extern int campCecRecvExists(void);
extern int campCecRecvIsDone(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_00344348. */
/* Supplied declaration required: FUN_0037bd00. */


unsigned int FUN_002817ac(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = campCecRecvExists();
  if (temp_v0 != 0) {
    temp_v0 = campCecRecvIsDone();
    if (temp_v0 != 0) {
      FUN_0037bd00();
      sysPlaySe(0x10d);
      *(unsigned int *)(param_1 + 0x144) = 1;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      FUN_0031d890();
      temp_v1 = 3;
    }
  }
  else {
    FUN_00344348(0);
  }
  return temp_v1;
}

} /* extern "C" */
