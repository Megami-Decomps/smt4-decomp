/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f798` (_code @ 0x30f798, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0062e684; /* 0x62e684 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002eeb88(unsigned int);
extern int *FUN_002eeb90(unsigned int, unsigned int);


unsigned long long FUN_0030f798(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,&DAT_0062e6a0);
  if ((param_1 == 0) ||
     ((temp_v0 = FUN_002eeb88(DAT_0062e684), param_1 < temp_v0 &&
      (piVar2 = (int *)FUN_002eeb90(DAT_0062e684,param_1), *piVar2 != 0)))) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,temp_v1);
}
