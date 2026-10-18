/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024a6b0` (_code @ 0x24a6b0, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0024a804; /* 0x24a804 */
extern unsigned int DAT_00433278; /* 0x433278 */
extern unsigned char DAT_00478000; /* 0x478000 */

extern unsigned char *FUN_002522e0(int, unsigned int);
/* Supplied declaration required: FUN_002522f8. */
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_0024a6b0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0;
  int temp_v1;
  
  FUN_002c4938(&DAT_00478000 + DAT_00433278 * 0x148,0x148);
  temp_v1 = DAT_00433278 * 0x148 + 0x478001;
  FUN_002522f8(temp_v1,0x1f,&LAB_0024a804,param_1);
  puVar1 = (unsigned char *)FUN_002522e0(temp_v1,0x2e);
  if (puVar1 != (unsigned char *)0x0) {
    *puVar1 = 0;
  }
  temp_v0 = DAT_00433278;
  temp_v1 = DAT_00433278 * 0x148;
  *(unsigned char *)(temp_v1 + 0x478136) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478135) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478134) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47812e) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47812d) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47812c) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478126) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478125) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478124) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47811e) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47811d) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47811c) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478116) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478115) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478114) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47810e) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47810d) = 0xff;
  *(unsigned char *)(temp_v1 + 0x47810c) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478106) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478105) = 0xff;
  *(unsigned char *)(temp_v1 + 0x478104) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780fe) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780fd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780fc) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780f6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780f5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780f4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780ee) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780ed) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780ec) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780e6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780e5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780e4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780de) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780dd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780dc) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780d6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780d5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780d4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780ce) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780cd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780cc) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780c6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780c5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780c4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780be) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780bd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x4780bc) = 0xff;
  DAT_00433278 = DAT_00433278 + 1;
  return temp_v0;
}
