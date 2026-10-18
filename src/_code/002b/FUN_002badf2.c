/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002badf2` (_code @ 0x2badf2, 0x2 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam000000d4; /* 0xd4 */
extern unsigned int uRam000000d8; /* 0xd8 */
extern unsigned int uRam000000dc; /* 0xdc */
extern unsigned int uRam000000e0; /* 0xe0 */
extern unsigned int uRam000000e4; /* 0xe4 */
extern unsigned char uRam000004e8; /* 0x4e8 */
extern unsigned char uRam000004e9; /* 0x4e9 */
extern unsigned int uRam000004ec; /* 0x4ec */
extern unsigned int uRam000004f0; /* 0x4f0 */

/* Supplied declaration required: FUN_002c3178. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002badf2(void)

{
/* irregular: 3 native warning(s); review required */
  uRam000000d4 = 0;
  uRam000000d8 = 0;
  uRam000000dc = 0;
  uRam000000e0 = 0;
  uRam000000e4 = 0;
  uRam000004e8 = 1;
  uRam000004e9 = 1;
  uRam000004f0 = 0;
  uRam000004ec = 0;
  FUN_002c3178(0x4f4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
