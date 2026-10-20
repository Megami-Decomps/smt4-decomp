/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00277b5c` (_code @ 0x277b5c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254e10(int);

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_00254e10. */
extern int FUN_00285574(void);


void FUN_00277b5c(int param_1,unsigned short param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00447a78;
  if (((param_1 != 0x24) &&
      ((temp_v1 = FUN_00285574(), temp_v1 != 1 || (temp_v1 = FUN_00254e10(0x29), temp_v1 != 1)))) &&
     ((param_1 == 0x18 || ((param_1 >= 100 || (temp_v1 = FUN_00254e10(param_1), temp_v1 != 1)))))) {
    *(unsigned short *)(temp_v0 + 0xccb8) = 1;
    *(unsigned short *)(temp_v0 + 0xccba) = 0;
    *(short *)(temp_v0 + 0xccbc) = (short)param_1;
    *(unsigned short *)(temp_v0 + 0xccbe) = param_2;
  }
  return;
}

} /* extern "C" */
