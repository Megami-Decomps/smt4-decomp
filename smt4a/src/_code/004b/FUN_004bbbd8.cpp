/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bbbd8` (_code @ 0x4bbbd8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);

/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_004bb80c(void);


unsigned int FUN_004bbbd8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_004bb80c();
  if (temp_v0 != 0) {
    temp_v2 = 0;
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v2 * 2 + 0x14);
      if (((temp_v1 != 0) && (FUN_0019cac4(), temp_v1 != 0)) && ((*(unsigned short *)(temp_v1 + 2) & 0x8000) != 0)
         ) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
  }
  return 0;
}

} /* extern "C" */
