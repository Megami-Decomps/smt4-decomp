/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f814` (_code @ 0x36f814, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0036b6cc. */
extern int FUN_003c3ec4(void);


unsigned int FUN_0036f814(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    temp_v1 = 0x7b6;
    FUN_00192550();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(temp_v1 + 0x54);
    }
    if (temp_v1 == 0 || temp_v0 == 0) {
      return 1;
    }
    FUN_0036b6cc();
  }
  temp_v1 = FUN_003c3ec4();
  if (temp_v1 != 0) {
    return 1;
  }
  return 0;
}
