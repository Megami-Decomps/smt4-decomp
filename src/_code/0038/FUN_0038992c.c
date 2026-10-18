/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038992c` (_code @ 0x38992c, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002958a0(void);
extern int FUN_002a17d4(unsigned int);
extern int FUN_002a7094(unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002b087c. */
extern int FUN_002b8b44(void);


unsigned int FUN_0038992c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  param_2 = param_2 & 0xffff;
  FUN_002b087c();
  temp_v0 = *(short *)(param_2 + 0x88);
  temp_v1 = FUN_002958a0();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002a17d4(DAT_00432fc8);
    if (temp_v1 != 0) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_002b8b44();
    if (temp_v1 != 0) {
      return 1;
    }
    temp_v1 = FUN_002a7094(param_1,0x16,temp_v0 + 1);
    if ((temp_v1 != 0) && (*(char *)(temp_v1 + 0xd) != '\0')) {
      return 1;
    }
  }
  return 0;
}
