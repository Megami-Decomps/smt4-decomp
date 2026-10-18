/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2e9c` (_code @ 0x1c2e9c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short DAT_005c1d34; /* 0x5c1d34 */

/* Supplied declaration required: FUN_001d0754. */


unsigned int FUN_001c2e9c(int param_1,unsigned char *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = *(char *)(param_1 + 0x50) != '\0';
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = *(int *)(param_2 + 0x10);
  }
  if (temp_v1 && temp_v0 != 0) {
    *(int *)(param_1 + 0x60) = temp_v0;
    *(unsigned char *)(param_1 + 0x7c) = *param_2;
    *(unsigned int *)(param_1 + 0x80) = *(unsigned int *)(param_2 + 4);
    *(unsigned char *)(param_1 + 0xc) = 1;
    *(unsigned char *)(param_1 + 0x57) = 0;
    *(short *)(param_1 + 0x21f8) = DAT_005c1d34;
    DAT_005c1d34 = DAT_005c1d34 + 1;
    *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x30) = *(unsigned int *)(param_2 + 8);
    *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x34) = *(unsigned int *)(param_2 + 0xc);
    *(int *)(*(int *)(param_1 + 0x60) + 0x10) = param_1;
    *(int *)(*(int *)(param_1 + 0x60) + 0x18) = param_1 + 0x88;
    *(unsigned char *)(*(int *)(param_1 + 0x60) + 0x1c) = *(unsigned char *)(param_1 + 0xf0);
    *(unsigned char *)(*(int *)(param_1 + 0x60) + 0x26) = *(unsigned char *)(param_1 + 0xf1);
    *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x28) = *(unsigned int *)(param_1 + 0xf4);
    *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x2c) = *(unsigned int *)(param_1 + 0xf8);
    *(unsigned short *)(*(int *)(param_1 + 0x60) + 0x24) = *(unsigned short *)(param_1 + 0x21f8);
    FUN_001d0754(*(unsigned int *)(param_1 + 0x60));
    return 1;
  }
  return 0;
}
