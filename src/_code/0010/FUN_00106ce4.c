/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106ce4` (_code @ 0x106ce4, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e598; /* 0x44e598 */
extern unsigned int DAT_004719e8; /* 0x4719e8 */

extern int FUN_0010f564(void);
/* Supplied declaration required: FUN_0010f5b8. */
extern int FUN_0010fdc0(unsigned int *, char *);
extern int FUN_0010fe28(void);
/* Supplied declaration required: FUN_002c14f4. */
/* Supplied declaration required: FUN_002c5fbc. */


void FUN_00106ce4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e598 == '\0') {
    FUN_0010f5b8();
    FUN_002c5fbc();
    temp_v0 = FUN_0010f564();
    if (-1 < temp_v0) {
      temp_v0 = FUN_0010fdc0(&DAT_004719e8,"nim:aoc");
      if ((-1 < temp_v0) && (temp_v0 = FUN_0010fe28(), -1 < temp_v0)) {
        temp_v0 = 0;
      }
      if (-1 < temp_v0) {
        temp_v0 = 0;
      }
    }
    if (temp_v0 < 0) {
      FUN_002c14f4(temp_v0,0x106d3c);
    }
    DAT_0044e598 = '\x01';
  }
  return;
}
