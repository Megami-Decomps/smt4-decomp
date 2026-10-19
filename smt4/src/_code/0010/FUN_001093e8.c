/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001093e8` (_code @ 0x1093e8, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfab0. */
/* Supplied declaration required: FUN_002bfadc. */
extern int FUN_002bff10(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned int FUN_001093e8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_002c08f0();
  temp_v2 = FUN_002bff10(0);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v1 + 0xf2d) = 1;
  }
  else {
    temp_v3 = temp_v1 + 0xf00;
    if (*(char *)(temp_v1 + 0xf28) != '\0') {
      temp_v4 = *(char *)(temp_v1 + 0xf2c) == '\0';
      if (temp_v4) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0xf2d);
      }
      if (temp_v4 && temp_v3 == 0) {
        FUN_002c39a4(DAT_0044ea00);
        *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x14) = 0x200;
        *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x18) = 0x200;
        temp_v0 = 0;
        FUN_002bfadc(0,*(unsigned int *)(temp_v1 + 8));
        *(unsigned char *)(temp_v1 + 0xf2a) = temp_v0;
        FUN_002bfab0(*(unsigned int *)(temp_v1 + 8),*(unsigned int *)(temp_v1 + 8));
        *(int *)(*(int *)(temp_v1 + 8) + 0x14) = *(int *)(*(int *)(temp_v1 + 8) + 0x14) >> 1;
        *(int *)(*(int *)(temp_v1 + 8) + 0x18) = *(int *)(*(int *)(temp_v1 + 8) + 0x18) >> 1;
        *(unsigned char *)(temp_v1 + 0xf2c) = 1;
      }
    }
  }
  return 0;
}
