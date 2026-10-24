/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa18c` (_code @ 0x2fa18c, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9b30(unsigned int, int, unsigned int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e9b30. */


unsigned long long FUN_002fa18c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v1;
  
  temp_v1 = 0x80010001;
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v0 = _ZN12OnlineResultC1ERKj((unsigned int *)&uStack_18,(unsigned int *)&temp_v1);
  FUN_002e9b30(param_1,3,temp_v0,0);
  return romwright_piece_4_4(uStack_14,uStack_18);
}

} /* extern "C" */
