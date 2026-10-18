/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100f9c` (_code @ 0x100f9c, 0x2c bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

extern unsigned int DAT_00101064; /* 0x101064 */
extern int DAT_00101068; /* 0x101068 */
extern int DAT_0010106c; /* 0x10106c */
extern unsigned int DAT_00101070; /* 0x101070 */
extern int DAT_00101074; /* 0x101074 */


unsigned int FUN_00100f9c(unsigned int param_1)

{
  if ((int)param_1 >= 0x2f0) {
    if ((int)param_1 < DAT_00101068) {
      return DAT_00101064;
    }
    param_1 = (int)((param_1 + DAT_0010106c) * 0x10000) >> 0x10;
  }
  if (DAT_00101070 <= param_1) {
    return DAT_00101064;
  }
  return (unsigned int)*(unsigned short *)(DAT_00101074 + 0x100fc6 + param_1 * 2);
}
