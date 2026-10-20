/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270cc8` (_code @ 0x270cc8, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(int, int);
int FUN_002897b0(int);
int FUN_002897d0(int);
int FUN_0028dc68(int);
int FUN_002a03d8(int, int);
int scrScriptProcessDestroy(unsigned int);
int asdMemFree(unsigned int);

extern int FUN_0019e0c0(unsigned int);
extern int FUN_002896bc(void);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_002897b0. */
extern int FUN_002897c0(void);
/* Supplied declaration required: FUN_002897d0. */
extern int FUN_002897e0(void);
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int FUN_002c1d5c(void);
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: asdMemFree. */


unsigned int FUN_00270cc8(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0xc4);
  if (temp_v0 != 0) {
    if (((temp_v0 != 1) && (temp_v0 == 2)) && (temp_v0 = FUN_002896bc(), temp_v0 != 0)) {
      *(unsigned int *)(temp_v1 + 0xc4) = 0;
    }
  }
  else {
    temp_v0 = FUN_002c2a04(0);
    if (((temp_v0 != 3) || (temp_v0 = FUN_002c2a04(1), temp_v0 != 3)) &&
       (temp_v0 = FUN_002897e0(), temp_v0 != 0)) {
      FUN_002897d0(0);
    }
    temp_v0 = FUN_002897c0();
    if (temp_v0 != 0) {
      FUN_002897b0(0);
      FUN_002897d0(0);
    }
    temp_v0 = FUN_002897e0();
    if ((temp_v0 != 0) && (temp_v0 = FUN_002c1d5c(), temp_v0 == 0)) {
      FUN_002a03d8(0,5);
      FUN_002a03d8(1,5);
      FUN_002897d0(0);
      *(unsigned int *)(temp_v1 + 0xc4) = 2;
      return 0;
    }
    temp_v0 = FUN_0019e0c0(*(unsigned int *)(temp_v1 + 0x94));
    if (temp_v0 == 2) {
      if (*(int *)(temp_v1 + 0x98) != 0) {
        gameFlagSetValue(*(int *)(temp_v1 + 0x98),1);
      }
      FUN_0028dc68(0);
      scrScriptProcessDestroy(*(unsigned int *)(temp_v1 + 0x94));
      *(unsigned int *)(temp_v1 + 0x94) = 0;
      asdMemFree(*(unsigned int *)(temp_v1 + 0x8c));
      *(unsigned int *)(temp_v1 + 0x8c) = 0;
      asdMemFree(*(unsigned int *)(temp_v1 + 0x90));
      *(unsigned int *)(temp_v1 + 0x90) = 0;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
