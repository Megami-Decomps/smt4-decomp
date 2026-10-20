/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d9b0` (_code @ 0x28d9b0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022097c(void);
int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);

extern unsigned char LAB_0028da20; /* 0x28da20 */
extern unsigned char LAB_0028da30; /* 0x28da30 */
extern signed char DAT_0043da29; /* 0x43da29 */
extern int DAT_0043da30; /* 0x43da30 */
extern int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_0022097c. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */
extern int FUN_002c5c04(unsigned char *);


void FUN_0028d9b0(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0043da29 < '\x01') {
    asdTMTexTableLoadSprites(0x12);
    FUN_002c58c8(0x12,0);
    FUN_0022097c();
    if (DAT_0043da30 == 0) {
      DAT_0043da30 = FUN_002c5c04(&LAB_0028da20);
    }
    if (DAT_0043da34 == 0) {
      DAT_0043da34 = FUN_002c5c04(&LAB_0028da30);
    }
  }
  DAT_0043da29 = DAT_0043da29 + '\x01';
  return;
}

} /* extern "C" */
