/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111b04` (_code @ 0x111b04, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineJobSetStateDone(int);
int FUN_002fd49c(int, int);
int FUN_002fd51c(int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int _ZN12OnlineResultC1ERKj(int *, unsigned int *);
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002fd49c. */
/* Supplied declaration required: FUN_002fd51c. */


unsigned long long FUN_00111b04(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v1;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v1 = param_4;
  FUN_002fd49c(param_1,0);
  if (*(char *)(param_1 + 0x1bc) == '\0') {
    temp_v1 = 0x80050002;
  }
  else {
    temp_v1 = 0x8068000b;
  }
  temp_v0 = _ZN12OnlineResultC1ERKj(&iStack_18,(unsigned int *)&temp_v1);
  FUN_002fd51c(param_1,3,temp_v0);
  onlineJobSetStateDone(param_1);
  return romwright_piece_4_4(uStack_14,iStack_18);
}

} /* extern "C" */
