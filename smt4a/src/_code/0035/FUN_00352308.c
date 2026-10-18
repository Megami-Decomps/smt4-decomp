/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352308` (_code @ 0x352308, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005f0ca8; /* 0x5f0ca8 */
extern unsigned int DAT_005f0ce4; /* 0x5f0ce4 */
extern unsigned char DAT_005f0cf9; /* 0x5f0cf9 */
extern unsigned int DAT_005f0cfc; /* 0x5f0cfc */
extern unsigned int DAT_005f0d00; /* 0x5f0d00 */
extern unsigned int DAT_005f0d04; /* 0x5f0d04 */
extern unsigned int DAT_005f0d08; /* 0x5f0d08 */
extern unsigned int DAT_005f0d0c; /* 0x5f0d0c */
extern unsigned int DAT_005f0d10; /* 0x5f0d10 */

extern int FUN_0018719c(unsigned int);


void FUN_00352308(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5 */
  int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  
  temp_v0 = FUN_0018719c(0x4d0);
  if (temp_v0 != 0) {
    DAT_005f0cf9 = 1;
    DAT_005f0cfc = in_s0;
    DAT_005f0d00 = in_s1;
    DAT_005f0d04 = in_s2;
    DAT_005f0d08 = in_s3;
    DAT_005f0d0c = in_s4;
    DAT_005f0d10 = in_s5;
    temp_v0 = FUN_0018719c(0x4d0);
    if (temp_v0 != 0) {
      DAT_005f0ca8 = 0xb;
      DAT_005f0ce4 = 0;
    }
  }
  return;
}
