/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050fa7c` (_code @ 0x50fa7c, 0x2c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570df0; /* 0x570df0 */
extern unsigned int DAT_00570df4; /* 0x570df4 */
extern unsigned int DAT_00570df8; /* 0x570df8 */
extern unsigned int DAT_00570dfc; /* 0x570dfc */
extern unsigned int DAT_00570e08; /* 0x570e08 */
extern unsigned int DAT_00570e10; /* 0x570e10 */
extern unsigned int DAT_00570e14; /* 0x570e14 */
extern unsigned int DAT_00570e40; /* 0x570e40 */
extern unsigned int DAT_00570e44; /* 0x570e44 */
extern unsigned int DAT_00570e48; /* 0x570e48 */
extern unsigned int DAT_00570e4c; /* 0x570e4c */
extern unsigned int DAT_00570e50; /* 0x570e50 */
extern unsigned int DAT_00570e54; /* 0x570e54 */
extern unsigned int DAT_00570e58; /* 0x570e58 */
extern unsigned int DAT_00570e60; /* 0x570e60 */
extern unsigned int DAT_00570e64; /* 0x570e64 */
extern unsigned int DAT_00570e7c; /* 0x570e7c */
extern unsigned int DAT_00570e80; /* 0x570e80 */
extern unsigned int DAT_00570e84; /* 0x570e84 */
extern unsigned int DAT_00570e88; /* 0x570e88 */
extern unsigned int DAT_00570e94; /* 0x570e94 */
extern unsigned int DAT_00570ebc; /* 0x570ebc */
extern unsigned int DAT_00570ec0; /* 0x570ec0 */
extern unsigned int DAT_00570ec4; /* 0x570ec4 */
extern unsigned int DAT_00570ec8; /* 0x570ec8 */
extern unsigned int DAT_00570ed4; /* 0x570ed4 */
extern unsigned int DAT_00570edc; /* 0x570edc */
extern unsigned int DAT_00570ee0; /* 0x570ee0 */
extern unsigned int DAT_00570efc; /* 0x570efc */
extern unsigned int DAT_00570f00; /* 0x570f00 */
extern unsigned int DAT_00570f04; /* 0x570f04 */
extern unsigned int DAT_00570f08; /* 0x570f08 */
extern unsigned int DAT_00570f14; /* 0x570f14 */
extern unsigned int DAT_00570f1c; /* 0x570f1c */
extern unsigned int DAT_00570f20; /* 0x570f20 */
extern unsigned int DAT_00570f24; /* 0x570f24 */
extern unsigned int DAT_00570f28; /* 0x570f28 */
extern unsigned int DAT_00570f2c; /* 0x570f2c */
extern unsigned int DAT_00570f30; /* 0x570f30 */
extern unsigned int DAT_00570f3c; /* 0x570f3c */
extern unsigned int DAT_00570f44; /* 0x570f44 */
extern unsigned int DAT_00570f48; /* 0x570f48 */
extern unsigned int DAT_00570f58; /* 0x570f58 */
extern unsigned int DAT_00570f5c; /* 0x570f5c */
extern unsigned int DAT_00570f60; /* 0x570f60 */
extern unsigned int DAT_00570f64; /* 0x570f64 */
extern unsigned int DAT_00570f70; /* 0x570f70 */
extern unsigned int DAT_00570f78; /* 0x570f78 */
extern unsigned int DAT_00570f7c; /* 0x570f7c */
extern unsigned int DAT_00570f98; /* 0x570f98 */
extern unsigned int DAT_00570f9c; /* 0x570f9c */
extern unsigned int DAT_00570fa0; /* 0x570fa0 */
extern unsigned int DAT_00570fa4; /* 0x570fa4 */
extern unsigned int DAT_00570fb0; /* 0x570fb0 */
extern unsigned int DAT_00570fb8; /* 0x570fb8 */
extern unsigned int DAT_00570fbc; /* 0x570fbc */
extern unsigned int DAT_00570fd8; /* 0x570fd8 */
extern unsigned int DAT_00570fdc; /* 0x570fdc */
extern unsigned int DAT_00570fe0; /* 0x570fe0 */
extern unsigned int DAT_00570fe4; /* 0x570fe4 */
extern unsigned int DAT_00570ff0; /* 0x570ff0 */
extern unsigned int DAT_00570ff8; /* 0x570ff8 */
extern unsigned int DAT_00570ffc; /* 0x570ffc */
extern unsigned int DAT_00571018; /* 0x571018 */
extern unsigned int DAT_0057101c; /* 0x57101c */
extern unsigned int DAT_00571020; /* 0x571020 */
extern unsigned int DAT_00571024; /* 0x571024 */
extern unsigned int DAT_00571030; /* 0x571030 */
extern unsigned int DAT_00571038; /* 0x571038 */
extern unsigned int DAT_0057103c; /* 0x57103c */
extern unsigned int DAT_00571058; /* 0x571058 */
extern unsigned int DAT_0057105c; /* 0x57105c */
extern unsigned int DAT_00571060; /* 0x571060 */
extern unsigned int DAT_00571064; /* 0x571064 */
extern unsigned int DAT_00571070; /* 0x571070 */
extern unsigned int DAT_00571078; /* 0x571078 */
extern unsigned int DAT_0057107c; /* 0x57107c */
extern unsigned int DAT_00571098; /* 0x571098 */
extern unsigned int DAT_0057109c; /* 0x57109c */
extern unsigned int DAT_005710a0; /* 0x5710a0 */
extern unsigned int DAT_005710a4; /* 0x5710a4 */
extern unsigned int DAT_005710b0; /* 0x5710b0 */
extern unsigned int DAT_005710b8; /* 0x5710b8 */
extern unsigned int DAT_005710bc; /* 0x5710bc */

extern unsigned int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_0050fa7c(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = 0x3f800000;
  DAT_00570df0 = 0;
  DAT_00570df4 = 0;
  DAT_00570df8 = 0x3f800000;
  DAT_00570dfc = 0x3f800000;
  DAT_00570e08 = packNibblesAndByte(6,1,0);
  DAT_00570e14 = 0x3b03126f;
  DAT_00570e40 = 0x3ed3f7cf;
  DAT_00570e50 = 0x3f53f7cf;
  DAT_00570e10 = temp_v0;
  DAT_00570e44 = temp_v0;
  DAT_00570e48 = temp_v0;
  DAT_00570e4c = temp_v1;
  DAT_00570e54 = temp_v1;
  DAT_00570e58 = packNibblesAndByte(6,7,0);
  DAT_00570e60 = 0x38d1b717;
  DAT_00570e64 = 0x3a03126f;
  DAT_00570e7c = temp_v0;
  DAT_00570e80 = temp_v0;
  DAT_00570e84 = temp_v1;
  DAT_00570e88 = temp_v1;
  DAT_00570e94 = packNibblesAndByte(6,1,0);
  DAT_00570ebc = temp_v0;
  DAT_00570ec0 = temp_v0;
  DAT_00570ec4 = temp_v1;
  DAT_00570ec8 = temp_v1;
  DAT_00570ed4 = packNibblesAndByte(6,1,0);
  DAT_00570edc = 0xbd8f5c29;
  DAT_00570ee0 = 0x3d23d70a;
  DAT_00570efc = temp_v0;
  DAT_00570f00 = temp_v0;
  DAT_00570f04 = temp_v1;
  DAT_00570f08 = temp_v1;
  DAT_00570f14 = packNibblesAndByte(6,1,0);
  DAT_00570f20 = 0x3a83126f;
  DAT_00570f1c = temp_v0;
  DAT_00570f24 = temp_v0;
  DAT_00570f28 = temp_v0;
  DAT_00570f2c = temp_v1;
  DAT_00570f30 = temp_v1;
  DAT_00570f3c = packNibblesAndByte(6,1,0);
  DAT_00570f48 = 0x3b83126f;
  DAT_00570f44 = temp_v0;
  DAT_00570f58 = temp_v0;
  DAT_00570f5c = temp_v0;
  DAT_00570f60 = temp_v1;
  DAT_00570f64 = temp_v1;
  DAT_00570f70 = packNibblesAndByte(6,7,0);
  DAT_00570f78 = temp_v0;
  DAT_00570f7c = temp_v0;
  DAT_00570f98 = temp_v0;
  DAT_00570f9c = temp_v0;
  DAT_00570fa0 = temp_v1;
  DAT_00570fa4 = temp_v1;
  DAT_00570fb0 = packNibblesAndByte(6,7,0);
  DAT_00570fb8 = temp_v0;
  DAT_00570fbc = temp_v0;
  DAT_00570fd8 = temp_v0;
  DAT_00570fdc = temp_v0;
  DAT_00570fe0 = temp_v1;
  DAT_00570fe4 = temp_v1;
  DAT_00570ff0 = packNibblesAndByte(6,1,0);
  DAT_00570ff8 = temp_v0;
  DAT_00570ffc = temp_v0;
  DAT_00571018 = temp_v0;
  DAT_0057101c = temp_v0;
  DAT_00571020 = temp_v1;
  DAT_00571024 = temp_v1;
  DAT_00571030 = packNibblesAndByte(5,0,1);
  DAT_00571038 = temp_v0;
  DAT_0057103c = temp_v0;
  DAT_00571058 = temp_v0;
  DAT_0057105c = temp_v0;
  DAT_00571060 = temp_v1;
  DAT_00571064 = temp_v1;
  DAT_00571070 = packNibblesAndByte(6,7,0);
  DAT_00571078 = temp_v0;
  DAT_0057107c = temp_v0;
  DAT_00571098 = temp_v0;
  DAT_0057109c = temp_v0;
  DAT_005710a0 = temp_v1;
  DAT_005710a4 = temp_v1;
  DAT_005710b0 = packNibblesAndByte(6,1,0);
  DAT_005710b8 = temp_v0;
  DAT_005710bc = temp_v0;
  return;
}

} /* extern "C" */
