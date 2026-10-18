/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundStartable_StartSound` (_code @ 0x2bcc14, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long
nw_snd_SoundStartable_StartSound(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  *(int *)(param_1 * 2) = param_2;
  return romwright_piece_4_4(param_4,param_1 + param_2 * 2);
}
