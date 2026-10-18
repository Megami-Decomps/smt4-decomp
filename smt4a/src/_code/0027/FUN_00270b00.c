/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270b00` (_code @ 0x270b00, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_00619520; /* 0x619520 */
extern unsigned int DAT_00619524; /* 0x619524 */
extern unsigned int DAT_00619528; /* 0x619528 */
extern unsigned int DAT_0061952c; /* 0x61952c */
extern unsigned int DAT_00619538; /* 0x619538 */

extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_00280f98. */


unsigned int FUN_00270b00(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      if (((&DAT_00619538)[temp_v0 * 8] & 2) != 0 && ((&DAT_00619538)[temp_v0 * 8] & 0x30) != 0) {
        FUN_00280f98((&DAT_0061951c)[temp_v0 * 8],0);
        (&DAT_00619528)[temp_v0 * 8] = 0;
        (&DAT_00619520)[temp_v0 * 8] = 0;
        (&DAT_00619524)[temp_v0 * 8] = 0;
        (&DAT_0061952c)[temp_v0 * 8] = 0;
        *(unsigned int *)(temp_v0 * 0x20 + 0x619534) = 0;
        *(unsigned int *)(temp_v0 * 0x20 + 0x619530) = 0;
        temp_v1 = 1;
        (&DAT_00619538)[temp_v0 * 8] = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return temp_v1;
}
