/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a3e8` (_code @ 0x10a3e8, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfc88. */
extern unsigned char FUN_002bfcb4(unsigned int, unsigned int);
extern int FUN_002c00e8(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


unsigned int FUN_0010a3e8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_002c0ac8();
  temp_v2 = FUN_002c00e8(0);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v1 + 0xf65) = 1;
  }
  else {
    temp_v3 = temp_v1 + 0xf00;
    if ((*(char *)(temp_v1 + 0xf60) != '\0') && (*(char *)(temp_v1 + 0xf64) == '\0')) {
      temp_v4 = *(char *)(temp_v1 + 0xf65) == '\0';
      if (temp_v4) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0xf99);
      }
      if (temp_v4 && temp_v3 == 0) {
        FUN_002c3ba8(DAT_0044ea00);
        *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x14) = 0x200;
        *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x18) = 0x200;
        temp_v0 = FUN_002bfcb4(0,*(unsigned int *)(temp_v1 + 8));
        *(unsigned char *)(temp_v1 + 0xf62) = temp_v0;
        FUN_002bfc88(*(unsigned int *)(temp_v1 + 8),*(unsigned int *)(temp_v1 + 8));
        *(int *)(*(int *)(temp_v1 + 8) + 0x14) = *(int *)(*(int *)(temp_v1 + 8) + 0x14) >> 1;
        *(int *)(*(int *)(temp_v1 + 8) + 0x18) = *(int *)(*(int *)(temp_v1 + 8) + 0x18) >> 1;
        *(unsigned char *)(temp_v1 + 0xf64) = 1;
      }
    }
  }
  return 0;
}
