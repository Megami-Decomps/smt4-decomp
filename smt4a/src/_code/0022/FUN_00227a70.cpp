/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227a70` (_code @ 0x227a70, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

extern unsigned char g_mapCollision; /* 0x580204 */
extern unsigned char DAT_00580205; /* 0x580205 */
extern unsigned int DAT_00580208; /* 0x580208 */
extern unsigned int DAT_0058020c; /* 0x58020c */
extern unsigned int DAT_00580210; /* 0x580210 */
extern unsigned int DAT_00580214; /* 0x580214 */
extern unsigned int DAT_00580218; /* 0x580218 */
extern int DAT_0058021c; /* 0x58021c */
extern int DAT_00580220; /* 0x580220 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */

/* Supplied declaration required: asdMemFree. */


void FUN_00227a70(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0058021c != 0) {
    asdMemFree();
    DAT_0058021c = 0;
  }
  if (DAT_00580220 != 0) {
    asdMemFree();
    DAT_00580220 = 0;
  }
  if (DAT_00580224 != 0) {
    asdMemFree();
    DAT_00580224 = 0;
  }
  if (DAT_00580228 != 0) {
    asdMemFree();
    DAT_00580228 = 0;
  }
  DAT_00580208 = 0;
  DAT_0058020c = 0;
  DAT_00580210 = 0;
  DAT_00580214 = 0;
  DAT_00580218 = 0;
  g_mapCollision = 0;
  DAT_00580205 = 0;
  return;
}

} /* extern "C" */
