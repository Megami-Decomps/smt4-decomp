/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002702dc` (_code @ 0x2702dc, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

extern unsigned char g_mapCollision; /* 0x446fe8 */
extern unsigned int DAT_00446fec; /* 0x446fec */
extern unsigned int DAT_00446ff0; /* 0x446ff0 */
extern unsigned int DAT_00446ff4; /* 0x446ff4 */
extern unsigned int DAT_00446ff8; /* 0x446ff8 */
extern unsigned int DAT_00446ffc; /* 0x446ffc */
extern int DAT_00447000; /* 0x447000 */
extern int DAT_00447004; /* 0x447004 */
extern int DAT_00447008; /* 0x447008 */
extern int DAT_0044700c; /* 0x44700c */

/* Supplied declaration required: asdMemFree. */


void FUN_002702dc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00447000 != 0) {
    asdMemFree();
    DAT_00447000 = 0;
  }
  if (DAT_00447004 != 0) {
    asdMemFree();
    DAT_00447004 = 0;
  }
  if (DAT_00447008 != 0) {
    asdMemFree();
    DAT_00447008 = 0;
  }
  if (DAT_0044700c != 0) {
    asdMemFree();
    DAT_0044700c = 0;
  }
  DAT_00446fec = 0;
  DAT_00446ff0 = 0;
  DAT_00446ff4 = 0;
  DAT_00446ff8 = 0;
  DAT_00446ffc = 0;
  g_mapCollision = 0;
  return;
}

} /* extern "C" */
