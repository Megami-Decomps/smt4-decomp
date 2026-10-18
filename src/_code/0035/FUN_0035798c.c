/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035798c` (_code @ 0x35798c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004656ca; /* 0x4656ca */
extern unsigned char DAT_004656cb; /* 0x4656cb */
extern unsigned char DAT_004656ce; /* 0x4656ce */

/* Supplied declaration required: FUN_0011bc90. */
extern int FUN_0011c754(void);
/* Supplied declaration required: FUN_001466bc. */
/* Supplied declaration required: FUN_002c5fbc. */
/* Supplied declaration required: FUN_00358f34. */
/* Supplied declaration required: FUN_003591a8. */
/* Supplied declaration required: FUN_003591e4. */


void FUN_0035798c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_00358f34();
  temp_v1 = (unsigned int)DAT_004656ca;
  if ((temp_v1 == 0) && (FUN_003591e4(), -1 < (int)temp_v1)) {
    FUN_003591a8();
    temp_v2 = FUN_0011c754();
    if (-1 < temp_v2) {
      DAT_004656cb = 1;
      FUN_002c5fbc();
      temp_v0 = (unsigned char)temp_v2;
      FUN_0011bc90();
      DAT_004656ce = temp_v0;
      FUN_001466bc();
      DAT_004656ca = 1;
    }
  }
  return;
}
