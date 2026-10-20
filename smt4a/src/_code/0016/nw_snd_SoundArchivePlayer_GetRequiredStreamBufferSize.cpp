/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize` (_code @ 0x16000c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_001784b0(unsigned int, unsigned char *);


int nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [16];
  int temp_v3;
  
  temp_v0 = FUN_001784b0(param_2,temp_v2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = temp_v3;
  }
  return temp_v1 * 0xa000;
}

} /* extern "C" */
