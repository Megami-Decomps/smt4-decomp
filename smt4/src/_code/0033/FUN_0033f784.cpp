/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f784` (_code @ 0x33f784, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(char [10], int, int, unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001e16cc; /* 0x1e16cc */
extern int DAT_0043e3b0; /* 0x43e3b0 */
extern char s___e222_01_0043e3c8[10]; /* 0x43e3c8 */

/* Supplied declaration required: FUN_0027f3dc. */


void FUN_0033f784(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043e3b0 != 0) {
    return;
  }
  temp_v0 = 0;
  do {
    DAT_0043e3b0 = temp_v0;
    if (*(short *)(temp_v0 * 0x10 + 0x43e3d4) < 0) break;
    DAT_0043e3b0 = temp_v0 + 1;
    *(short *)(temp_v0 * 0x10 + 0x43e3d6) = (short)temp_v0;
    temp_v0 = DAT_0043e3b0;
  } while (DAT_0043e3b0 < 0x7fa);
  FUN_0027f3dc(s___e222_01_0043e3c8,DAT_0043e3b0,0x10,&LAB_001e16cc);
  return;
}

} /* extern "C" */
