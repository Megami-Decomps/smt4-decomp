/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d2b8` (_code @ 0x37d2b8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int scrSetResult(int);

extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037d2b8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  puVar1 = (unsigned short *)gameGetPlayerData();
  temp_v0 = (unsigned int)*puVar1;
  temp_v1 = 0;
  FUN_00192608();
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(temp_v0 + 0x7c);
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
