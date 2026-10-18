/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511a74` (_code @ 0x511a74, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_005c0ab0; /* 0x5c0ab0 */
extern unsigned int DAT_005c0ab4; /* 0x5c0ab4 */
extern unsigned int DAT_005c0ab8; /* 0x5c0ab8 */
extern unsigned int DAT_00643080; /* 0x643080 */
extern unsigned int DAT_0064308c; /* 0x64308c */

/* Supplied declaration required: FUN_00188b60. */


void FUN_00511a74(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_00643080 = 0;
  FUN_00188b60(&DAT_00643080);
  DAT_0064308c = 0;
  FUN_00188b60(&DAT_0064308c,&LAB_0042ce3c,0x100000);
  DAT_005c0ab0 = 0;
  DAT_005c0ab4 = 0;
  DAT_005c0ab8 = 0;
  return;
}
