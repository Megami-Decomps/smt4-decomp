/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00175cd8` (_code @ 0x175cd8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001913f8(); /* 0x1913f8 */
extern unsigned char LAB_00191418; /* 0x191418 */
extern unsigned char LAB_00191434; /* 0x191434 */
extern unsigned char LAB_00191494; /* 0x191494 */
extern unsigned char LAB_00191498; /* 0x191498 */
extern unsigned char *DAT_00646618; /* 0x646618 */
extern unsigned char *DAT_0064661c; /* 0x64661c */
extern unsigned char *DAT_00646620; /* 0x646620 */
extern unsigned char *DAT_00646624; /* 0x646624 */
extern romwright_code *DAT_00646628; /* 0x646628 */

/* Supplied declaration required: FUN_002e6354. */


void FUN_00175cd8(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e6354(&DAT_00646618,0x200);
  DAT_00646618 = &LAB_00191498;
  DAT_0064661c = &LAB_00191434;
  DAT_00646620 = &LAB_00191494;
  DAT_00646624 = &LAB_00191418;
  DAT_00646628 = FUN_001913f8;
  return;
}
