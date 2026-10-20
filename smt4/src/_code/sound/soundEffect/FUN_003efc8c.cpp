/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efc8c` (_code @ 0x3efc8c, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00378d80(unsigned char *);
int FUN_00379274(unsigned char *, unsigned int *, int);

extern unsigned int DAT_0044e0f0; /* 0x44e0f0 */
extern unsigned int DAT_0044e0f4; /* 0x44e0f4 */
extern unsigned char DAT_004c5484; /* 0x4c5484 */
extern unsigned int DAT_004c54e4; /* 0x4c54e4 */
extern unsigned int DAT_004c54e8; /* 0x4c54e8 */
extern unsigned int DAT_004c54ec; /* 0x4c54ec */
extern unsigned char DAT_004c54f0; /* 0x4c54f0 */
extern unsigned char DAT_004c54f4; /* 0x4c54f4 */
extern unsigned int DAT_004c5604; /* 0x4c5604 */
extern unsigned int DAT_004c5608; /* 0x4c5608 */
extern unsigned int DAT_004c560c; /* 0x4c560c */
extern unsigned int DAT_004c5610; /* 0x4c5610 */
extern unsigned int DAT_004c5614; /* 0x4c5614 */
extern unsigned int *DAT_004c5618; /* 0x4c5618 */
extern unsigned int DAT_004c561c; /* 0x4c561c */
extern unsigned int DAT_004c5620; /* 0x4c5620 */
extern unsigned char DAT_004c5624; /* 0x4c5624 */
extern unsigned char DAT_004c5625; /* 0x4c5625 */
extern unsigned int DAT_004c5628; /* 0x4c5628 */
extern unsigned int DAT_004c562c; /* 0x4c562c */
extern unsigned int DAT_004c5630; /* 0x4c5630 */
extern unsigned int DAT_004d4668; /* 0x4d4668 */

/* Supplied declaration required: FUN_00378d80. */
/* Supplied declaration required: FUN_00379274. */


void FUN_003efc8c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *(unsigned int *)(param_3 + 8) = 0xffffffff;
  *(unsigned int *)(param_3 + 0xc) = 0xffffffff;
  DAT_0044e0f0 = 0;
  DAT_0044e0f4 = 0;
  FUN_00378d80(&DAT_004c5484);
  temp_v0 = 0x3ecccccd;
  temp_v1 = 0x3f000000;
  DAT_004c54e4 = 0xfa;
  DAT_004c54e8 = 0x3ecccccd;
  DAT_004c54ec = 0x3f000000;
  DAT_004c54f0 = 0;
  FUN_00379274(&DAT_004c54f4,&DAT_004c54e8,0x100000);
  DAT_004c5604 = 0x3c;
  DAT_004c5608 = 4000;
  DAT_004c560c = 100;
  DAT_004c5610 = temp_v1;
  DAT_004c5614 = temp_v0;
  DAT_004c5618 = &DAT_004d4668;
  DAT_004c561c = 0x3f19999a;
  DAT_004c5620 = temp_v0;
  DAT_004c5624 = 0;
  DAT_004c5625 = 0;
  DAT_004c5628 = 0xbe0;
  DAT_004c562c = 0xe60;
  DAT_004c5630 = 0x820;
  return;
}

} /* extern "C" */
