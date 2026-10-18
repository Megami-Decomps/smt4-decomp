/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd004` (_code @ 0x2bd004, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0013def0(unsigned int);
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_002e07f4(void);
extern int FUN_0031d270(void);
/* Supplied declaration required: FUN_0035d88c. */
extern int FUN_0036fe58(void);
/* Supplied declaration required: FUN_0037de3c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_002bd004(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0xcc);
  if (temp_v0 != 0) {
    if (((temp_v0 != 1) && (temp_v0 == 2)) && (temp_v0 = FUN_002e07f4(), temp_v0 != 0)) {
      *(unsigned int *)(temp_v1 + 0xcc) = 0;
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
      *(unsigned int *)(temp_v1 + 0xcc) = 2;
      return 0;
    }
    temp_v0 = FUN_00224880(*(unsigned int *)(temp_v1 + 0x98));
    if (temp_v0 == 2) {
      if (*(int *)(temp_v1 + 0x9c) != 0) {
        FUN_003fd63c(*(int *)(temp_v1 + 0x9c),1);
      }
      FUN_002852f0(0);
      FUN_0019c364(*(unsigned int *)(temp_v1 + 0x98));
      *(unsigned int *)(temp_v1 + 0x98) = 0;
      FUN_0019a5a0(*(unsigned int *)(temp_v1 + 0x90));
      *(unsigned int *)(temp_v1 + 0x90) = 0;
      FUN_0019a5a0(*(unsigned int *)(temp_v1 + 0x94));
      *(unsigned int *)(temp_v1 + 0x94) = 0;
      return 1;
    }
  }
  return 0;
}
