/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039587c` (_code @ 0x39587c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005e1f4c; /* 0x5e1f4c */
extern unsigned int DAT_005e1f50; /* 0x5e1f50 */
extern unsigned int DAT_005e1f54; /* 0x5e1f54 */
extern unsigned int DAT_005e1f58; /* 0x5e1f58 */
extern unsigned int DAT_005e1f5c; /* 0x5e1f5c */
extern unsigned int DAT_005e1f60; /* 0x5e1f60 */
extern unsigned int DAT_005e1f64; /* 0x5e1f64 */
extern unsigned int DAT_005e1f68; /* 0x5e1f68 */
extern unsigned int DAT_005e1f6c; /* 0x5e1f6c */


void FUN_0039587c(unsigned int param_1,unsigned int *param_2)

{
  DAT_005e1f4c = 1;
  DAT_005e1f58 = *param_2;
  DAT_005e1f5c = param_2[1];
  DAT_005e1f60 = param_2[2];
  DAT_005e1f64 = param_2[3];
  DAT_005e1f68 = param_2[4];
  DAT_005e1f6c = param_2[5];
  DAT_005e1f50 = param_1;
  DAT_005e1f54 = 0xffffffff;
  return;
}

} /* extern "C" */
