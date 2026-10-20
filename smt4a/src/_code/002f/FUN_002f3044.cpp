/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3044` (_code @ 0x2f3044, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_00301490(void);


unsigned long long FUN_002f3044(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 4);
  temp_v2 = 0;
  do {
    if (*(int *)(temp_v2 * 4 + param_1 + 0x34) == 0) break;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  temp_v0 = FUN_002e760a(0x40);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00301490();
  }
  *(unsigned int *)(temp_v2 * 4 + param_1 + 0x34) = temp_v1;
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,temp_v1);
}

} /* extern "C" */
