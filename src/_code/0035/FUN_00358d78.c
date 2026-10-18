/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358d78` (_code @ 0x358d78, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656d0; /* 0x4656d0 */
extern signed char DAT_004656d1; /* 0x4656d1 */
extern signed char DAT_004656d3; /* 0x4656d3 */
extern signed char DAT_004656d4; /* 0x4656d4 */
extern unsigned int DAT_004e62b4; /* 0x4e62b4 */

/* Supplied declaration required: FUN_002390e4. */
/* Supplied declaration required: FUN_00239b84. */
/* Supplied declaration required: FUN_0024f07c. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_00358d78(int param_1)

{
/* irregular: 5 native warning(s); review required */
  *(unsigned int *)(param_1 + 4) = 0;
  if (DAT_004656d0 != '\0') {
    FUN_002390e4(param_1,0);
  }
  FUN_002c3aa8(&DAT_004e62b4);
  if (DAT_004656d3 != '\0') {
    FUN_00239b84(*(unsigned int *)(param_1 + 0x3a8));
    DAT_004656d3 = '\0';
  }
  FUN_002c3a24(&DAT_004e62b4);
  FUN_002c3aa8(&DAT_004e62b4);
  if (DAT_004656d4 != '\0') {
    FUN_00239b84(*(unsigned int *)(param_1 + 0x558));
    DAT_004656d4 = '\0';
  }
  FUN_002c3a24(&DAT_004e62b4);
  if (DAT_004656d1 != '\0') {
    FUN_0024f07c(0);
    DAT_004656d1 = '\0';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(unsigned char *)(param_1 + 8) = 0;
  }
  return 0;
}
