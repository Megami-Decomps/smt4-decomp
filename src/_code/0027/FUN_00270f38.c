/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270f38` (_code @ 0x270f38, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289a18. */
extern int FUN_00289a28(void);
/* Supplied declaration required: FUN_00289a38. */
extern int FUN_00289a48(void);
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002c1f28(void);
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_00270f38(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0xc4);
  if (temp_v0 != 0) {
    if (((temp_v0 != 1) && (temp_v0 == 2)) && (temp_v0 = FUN_00289924(), temp_v0 != 0)) {
      *(unsigned int *)(temp_v1 + 0xc4) = 0;
    }
  }
  else {
    temp_v0 = FUN_002c2bd0(0);
    if (((temp_v0 != 3) || (temp_v0 = FUN_002c2bd0(1), temp_v0 != 3)) &&
       (temp_v0 = FUN_00289a48(), temp_v0 != 0)) {
      FUN_00289a38(0);
    }
    temp_v0 = FUN_00289a28();
    if (temp_v0 != 0) {
      FUN_00289a18(0);
      FUN_00289a38(0);
    }
    temp_v0 = FUN_00289a48();
    if ((temp_v0 != 0) && (temp_v0 = FUN_002c1f28(), temp_v0 == 0)) {
      FUN_002a0678(0,5);
      FUN_002a0678(1,5);
      FUN_00289a38(0);
      *(unsigned int *)(temp_v1 + 0xc4) = 2;
      return 0;
    }
    temp_v0 = FUN_0019dfbc(*(unsigned int *)(temp_v1 + 0x94));
    if (temp_v0 == 2) {
      if (*(int *)(temp_v1 + 0x98) != 0) {
        FUN_002899c4(*(int *)(temp_v1 + 0x98),1);
      }
      FUN_0028df0c(0);
      FUN_002a755c(*(unsigned int *)(temp_v1 + 0x94));
      *(unsigned int *)(temp_v1 + 0x94) = 0;
      FUN_002c4360(*(unsigned int *)(temp_v1 + 0x8c));
      *(unsigned int *)(temp_v1 + 0x8c) = 0;
      FUN_002c4360(*(unsigned int *)(temp_v1 + 0x90));
      *(unsigned int *)(temp_v1 + 0x90) = 0;
      return 1;
    }
  }
  return 0;
}
