/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b1b4` (_code @ 0x10b1b4, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfc88. */
extern unsigned char FUN_002bfcb4(unsigned int, unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


unsigned char FUN_0010b1b4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c0ac8();
  if (((*(char *)(temp_v1 + 0xf60) != '\0') && (*(char *)(temp_v1 + 0xf63) == '\0')) &&
     (*(char *)(temp_v1 + 0xf99) != '\0')) {
    FUN_002c3ba8(DAT_0044ea00);
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x18) = 0x200;
    temp_v0 = FUN_002bfcb4(0,*(unsigned int *)(temp_v1 + 4));
    *(unsigned char *)(temp_v1 + 0xf62) = temp_v0;
    FUN_002bfc88(*(unsigned int *)(temp_v1 + 4),*(unsigned int *)(temp_v1 + 4));
    *(int *)(*(int *)(temp_v1 + 4) + 0x14) = *(int *)(*(int *)(temp_v1 + 4) + 0x14) >> 1;
    *(int *)(*(int *)(temp_v1 + 4) + 0x18) = *(int *)(*(int *)(temp_v1 + 4) + 0x18) >> 1;
    *(unsigned char *)(temp_v1 + 0xf63) = 1;
    return 0;
  }
  return 0;
}
