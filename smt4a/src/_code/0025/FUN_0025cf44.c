/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cf44` (_code @ 0x25cf44, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0057f114; /* 0x57f114 */

extern int FUN_0018206c(unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a2210. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_0034248c. */


unsigned int FUN_0025cf44(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f114;
  if (((DAT_0057f114 != 0) && (temp_v1 = FUN_00341940(0x2e), temp_v1 != 0)) &&
     (temp_v1 = FUN_0018206c(0x2e,0), temp_v1 != 0)) {
    temp_v1 = FUN_001834a4(0x2e,0x97);
    FUN_0034248c(*(unsigned int *)(temp_v0 + 0x174),DAT_0057f114 + 0x40,temp_v0 + 0x178,0,0);
    FUN_002a2210(*(unsigned int *)(temp_v0 + 0x174),DAT_0057f114 + 0x40,temp_v0 + 0x18c,
                 (int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),0);
  }
  return 0;
}
