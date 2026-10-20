/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdb20` (_code @ 0x2fdb20, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

/* Supplied declaration required: FUN_001ad9b4. */
extern unsigned int FUN_00418584(unsigned short);


void FUN_002fdb20(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00418584(*param_1);
  temp_v1 = FUN_00418584(*param_2);
  if (((temp_v0 & ~temp_v1) == 0) && ((temp_v1 & ~temp_v0) == 0)) {
    temp_v0 = (unsigned int)*param_1;
    FUN_001ad9b4();
    temp_v1 = (unsigned int)*param_2;
    FUN_001ad9b4();
    if ((temp_v0 != 0) && (temp_v1 != 0)) {
      if (*(char *)(temp_v0 + 6) != '\x06') {
        if (*(char *)(temp_v1 + 6) == '\x06') {
          return;
        }
      }
      else if (*(char *)(temp_v1 + 6) != '\x06') {
        return;
      }
      FUN_001ad9b4();
      FUN_001ad9b4();
    }
  }
  return;
}

} /* extern "C" */
