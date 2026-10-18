/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224730` (_code @ 0x224730, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0021a36c(unsigned int);
/* Supplied declaration required: FUN_00281e20. */
/* Supplied declaration required: FUN_002a399c. */
/* Supplied declaration required: FUN_002a3d50. */
/* Supplied declaration required: FUN_002a51dc. */
extern int FUN_002c0ac8(void);
extern int FUN_002f302c(unsigned int);


unsigned int FUN_00224730(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  if (*(int *)(temp_v0 + 4) != 0) {
    if (*(int *)(temp_v0 + 4) == 1) {
      FUN_00281e20(*(unsigned int *)(temp_v0 + 0xc));
      temp_v0 = FUN_002f302c(*(unsigned int *)(temp_v0 + 0xc));
      if (temp_v0 != 0) {
        return 0xffffffff;
      }
    }
  }
  else {
    temp_v1 = *(int *)(temp_v0 + 8);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 4) = 1;
      FUN_002a51dc();
      *(int *)(temp_v0 + 0xc) = temp_v1;
      FUN_002a3d50();
      FUN_002a399c(*(unsigned int *)(temp_v0 + 0xc));
      temp_v2 = FUN_0021a36c(*(unsigned int *)(temp_v0 + 0xc));
      *(unsigned int *)(temp_v0 + 0x18) = temp_v2;
      *(unsigned char *)(temp_v0 + 0x10) = 1;
    }
  }
  return 0;
}
