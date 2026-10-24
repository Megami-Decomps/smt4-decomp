/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c23b0` (_code @ 0x1c23b0, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6694(unsigned int, int);
int FUN_001cc6c0(unsigned int, int);
int FUN_001d0b28(unsigned int, int);

extern unsigned int _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
/* Supplied declaration required: FUN_001b6694. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001cc6c0. */
/* Supplied declaration required: FUN_001d0b28. */


void FUN_001c23b0(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(unsigned char *)(param_1 + 0xf) = 1;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      temp_v0 = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
      FUN_001d0b28(temp_v0,param_1 + 0x50);
      *(unsigned char *)(param_1 + 0xa2) = 0;
    }
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(unsigned char *)(param_1 + 0xd) = 0;
    }
  }
  *(unsigned int *)(param_1 + 0x6c) = *param_2;
  *(unsigned char *)(param_1 + 0x70) = *(unsigned char *)(param_2 + 1);
  *(unsigned int *)(param_1 + 0x74) = param_2[2];
  *(unsigned int *)(param_1 + 100) = *param_3;
  *(unsigned int *)(param_1 + 0x68) = param_3[1];
  *(unsigned char *)(param_1 + 0x5f) = *(unsigned char *)(param_3 + 2);
  *(unsigned char *)(param_1 + 0xa0) = 3;
  *(unsigned char *)(param_1 + 0xc) = 1;
  temp_v0 = FUN_001c35d8();
  FUN_001cc6c0(temp_v0,param_1 + 0x44);
  temp_v0 = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
  FUN_001b6694(temp_v0,param_1 + 0x50);
  *(unsigned char *)(param_1 + 0xa2) = 1;
  return;
}

} /* extern "C" */
