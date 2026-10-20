/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca914` (_code @ 0x3ca914, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effPartCreate(void);
int FUN_00399768(int, int);
int FUN_003ba614(...);

extern unsigned int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf0; /* 0x59dbf0 */
extern int DAT_0059dbf4; /* 0x59dbf4 */
extern int DAT_0059dc00; /* 0x59dc00 */
extern unsigned char *DAT_0059dc18; /* 0x59dc18 */
extern unsigned int DAT_0059e664; /* 0x59e664 */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern unsigned int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned char DAT_00634c50; /* 0x634c50 */

/* Supplied declaration required: effPartCreate. */
/* Supplied declaration required: FUN_00399768. */
/* Supplied declaration required: FUN_003ba614. */


unsigned int FUN_003ca914(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0059dc00 != 0) {
    FUN_003ba614(DAT_0059dbf0,3);
    DAT_0059dbf0 = 0;
    if (DAT_0059dc00 != 0) {
      FUN_00399768(DAT_0059dc00,3);
      DAT_0059dc00 = 0;
    }
  }
  temp_v0 = DAT_0059dbf4;
  if (DAT_0059dbf4 != 0) {
    FUN_003ba614(DAT_0059dbf4,3);
  }
  effPartCreate();
  DAT_0059dbf4 = temp_v0;
  DAT_0059e664 = 0;
  DAT_0059dbec = 0;
  DAT_0059e9b4 = 0;
  DAT_00634c50 = 0;
  DAT_0059dc18 = &DAT_0059e9a8;
  return 0;
}

} /* extern "C" */
