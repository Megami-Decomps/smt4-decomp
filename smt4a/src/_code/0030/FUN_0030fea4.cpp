/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fea4` (_code @ 0x30fea4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int streamReaderSeek(int, int);
int _ZN18OnlineResultRecordaSERKS_(int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: streamReaderSeek. */
extern unsigned int _ZN12OnlineResultC1ERKj(int *, unsigned int *, unsigned int, int);
/* Supplied declaration required: _ZN18OnlineResultRecordaSERKS_. */


unsigned long long FUN_0030fea4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v1;
  
  temp_v1 = 0x10001;
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v0 = _ZN12OnlineResultC1ERKj(&iStack_18,(unsigned int *)&temp_v1,param_3,param_1);
  _ZN18OnlineResultRecordaSERKS_(param_1 + 0x10,temp_v0);
  streamReaderSeek(param_1,4);
  return romwright_piece_4_4(uStack_14,iStack_18);
}

} /* extern "C" */
