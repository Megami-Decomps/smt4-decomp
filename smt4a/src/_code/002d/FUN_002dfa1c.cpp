/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfa1c` (_code @ 0x2dfa1c, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int scrScriptProcessDestroy(unsigned int);
int FUN_002852f0(int);
int FUN_0035d88c(int);
int FUN_0037de3c(int);
int FUN_003d54f8(int, int);
int FUN_003fd63c(int, int);

extern int FUN_0013def0(unsigned int);
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_002e07f4(void);
extern int FUN_0031d270(void);
/* Supplied declaration required: FUN_0035d88c. */
extern int FUN_0036fe58(void);
/* Supplied declaration required: FUN_0037de3c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_002dfa1c(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0x9354);
  if (temp_v0 != 0) {
    if (((temp_v0 != 1) && (temp_v0 == 2)) && (temp_v0 = FUN_002e07f4(), temp_v0 != 0)) {
      *(unsigned int *)(temp_v1 + 0x9354) = 0;
    }
  }
  else {
    temp_v0 = FUN_0013def0(0);
    if (((temp_v0 != 3) || (temp_v0 = FUN_0013def0(1), temp_v0 != 3)) &&
       (temp_v0 = FUN_0031d270(), temp_v0 != 0)) {
      FUN_0035d88c(0);
    }
    temp_v0 = FUN_0036fe58();
    if (temp_v0 != 0) {
      FUN_0037de3c(0);
      FUN_0035d88c(0);
    }
    temp_v0 = FUN_0031d270();
    if ((temp_v0 != 0) && (temp_v0 = FUN_00162ea4(), temp_v0 == 0)) {
      FUN_003d54f8(0,5);
      FUN_003d54f8(1,5);
      FUN_0035d88c(0);
      *(unsigned int *)(temp_v1 + 0x9354) = 2;
      return 0;
    }
    temp_v0 = FUN_00224880(*(unsigned int *)(temp_v1 + 0xa34));
    if (temp_v0 == 2) {
      if (*(int *)(temp_v1 + 0xa38) != 0) {
        FUN_003fd63c(*(int *)(temp_v1 + 0xa38),1);
      }
      FUN_002852f0(0);
      scrScriptProcessDestroy(*(unsigned int *)(temp_v1 + 0xa34));
      *(unsigned int *)(temp_v1 + 0xa34) = 0;
      asdMemFree(*(unsigned int *)(temp_v1 + 0xa2c));
      *(unsigned int *)(temp_v1 + 0xa2c) = 0;
      asdMemFree(*(unsigned int *)(temp_v1 + 0xa30));
      *(unsigned int *)(temp_v1 + 0xa30) = 0;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
