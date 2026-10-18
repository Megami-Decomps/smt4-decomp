/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003532a8` (_code @ 0x3532a8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00353310; /* 0x353310 */
extern unsigned char LAB_00353314; /* 0x353314 */
extern unsigned char LAB_00353320; /* 0x353320 */
extern unsigned char LAB_00353334; /* 0x353334 */
extern unsigned char LAB_0035333c; /* 0x35333c */
extern unsigned char LAB_00353340; /* 0x353340 */

/* Supplied declaration required: FUN_003531e8. */


unsigned int FUN_003532a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0xe0e13884;
    }
    FUN_003531e8(&LAB_0035333c,&LAB_00353334,&LAB_00353320,&LAB_00353314,&LAB_00353310);
  }
  else {
    FUN_003531e8(&LAB_0035333c,&LAB_00353334,&LAB_00353320,&LAB_00353340,&LAB_00353310);
  }
  return 0;
}
