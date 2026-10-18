/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d624` (_code @ 0x31d624, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e58; /* 0x447e58 */
extern int DAT_00447e70; /* 0x447e70 */
extern int DAT_0044cd88; /* 0x44cd88 */
extern int DAT_0049fae0; /* 0x49fae0 */
extern short DAT_0049fb96; /* 0x49fb96 */
extern short DAT_0049fb98; /* 0x49fb98 */

extern int FUN_002c87d0(void);


void FUN_0031d624(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (int)DAT_0049fb96;
  temp_v0 = FUN_002c87d0();
  DAT_0049fae0 = temp_v1 - (*(int *)(DAT_00447e58 + 8) +
                         (temp_v0 + *(int *)(DAT_0044cd88 + 0x10) + *(int *)(DAT_00447e70 + 0x10)) / 3
                         );
  if (DAT_0049fae0 < DAT_0049fb98) {
    DAT_0049fae0 = (int)DAT_0049fb98;
  }
  return;
}
