/* NON_MATCHING: romwright 0.5.0 decompilation of `sequenceRequestDeferEx` (_code @ 0x254434, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004937a0; /* 0x4937a0 */
extern unsigned int DAT_004937a4; /* 0x4937a4 */
extern unsigned int DAT_004937a8; /* 0x4937a8 */
extern unsigned int DAT_004937ac; /* 0x4937ac */
extern unsigned int DAT_004937b0; /* 0x4937b0 */
extern unsigned int DAT_004937b4; /* 0x4937b4 */
extern unsigned int DAT_004937b8; /* 0x4937b8 */
extern unsigned int DAT_004937bc; /* 0x4937bc */
extern unsigned int DAT_004937c0; /* 0x4937c0 */


void sequenceRequestDeferEx(unsigned int param_1,unsigned int *param_2)

{
  DAT_004937a0 = 1;
  DAT_004937ac = *param_2;
  DAT_004937b0 = param_2[1];
  DAT_004937b4 = param_2[2];
  DAT_004937b8 = param_2[3];
  DAT_004937bc = param_2[4];
  DAT_004937c0 = param_2[5];
  DAT_004937a4 = param_1;
  DAT_004937a8 = 0xffffffff;
  return;
}

} /* extern "C" */
