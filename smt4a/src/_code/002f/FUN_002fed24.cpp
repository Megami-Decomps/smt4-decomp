/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fed24` (_code @ 0x2fed24, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int FUN_002e6e5c(int *);

extern unsigned char DAT_005592b4; /* 0x5592b4 */
extern int DAT_0062e58c; /* 0x62e58c */
extern int DAT_0062e590; /* 0x62e590 */
extern unsigned int DAT_0062e594; /* 0x62e594 */
extern int DAT_0062e598; /* 0x62e598 */
extern unsigned char DAT_0062e59c; /* 0x62e59c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002e9520(unsigned int *);
extern int wordRefsDiffer_002fa114(unsigned int *, unsigned int *);


unsigned long long
FUN_002fed24(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_005592b4;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v1 = FUN_002e9520(param_1 + 3);
  temp_v3 = temp_v1 - 0xc;
  *(unsigned int *)(temp_v1 + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v1 + 0x14) = 0;
  *(unsigned int *)(temp_v1 + 8) = 0xffffffff;
  FUN_002e6e34(&uStack_18,&DAT_0062e59c);
  temp_v2 = wordRefsDiffer_002fa114((unsigned int *)&DAT_0062e58c,&DAT_0062e594);
  temp_v0 = temp_v3;
  if (temp_v2 != 0) {
    *(int *)(DAT_0062e590 + 4) = temp_v3;
    *(int *)(temp_v1 - 4) = DAT_0062e590;
    temp_v0 = DAT_0062e58c;
  }
  DAT_0062e58c = temp_v0;
  DAT_0062e598 = DAT_0062e598 + 1;
  DAT_0062e590 = temp_v3;
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,temp_v3);
}

} /* extern "C" */
