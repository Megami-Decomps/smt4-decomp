/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109ed8` (_code @ 0x109ed8, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

extern unsigned char FUN_002bfcb4(unsigned int, unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


unsigned int FUN_00109ed8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c0ac8();
  if ((*(char *)(temp_v1 + 0xf9a) != '\0') && (*(char *)(temp_v1 + 0xf9c) == '\0')) {
    FUN_002c3ba8(DAT_0044ea00);
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x18) = 0x200;
    temp_v0 = FUN_002bfcb4(0,*(unsigned int *)(temp_v1 + 4));
    *(unsigned char *)(temp_v1 + 0xf9b) = temp_v0;
    *(unsigned char *)(temp_v1 + 0xf9c) = 1;
    return 0;
  }
  return 0;
}
