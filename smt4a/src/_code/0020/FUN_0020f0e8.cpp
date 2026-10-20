/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f0e8` (_code @ 0x20f0e8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int FUN_0020214c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0020f114; /* 0x20f114 */
extern unsigned char *DAT_005821c8; /* 0x5821c8 */
extern unsigned int DAT_005821dc; /* 0x5821dc */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_0020214c. */


void FUN_0020f0e8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_0020f114;
  FUN_0020214c();
  DAT_005821dc = 0;
  DAT_005821c8 = puVar1;
  asdTMTexTableLoadTmx(0x2d,0);
  return;
}

} /* extern "C" */
