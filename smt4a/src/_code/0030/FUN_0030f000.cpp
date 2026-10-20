/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f000` (_code @ 0x30f000, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_0059935c; /* 0x59935c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002ee96a(unsigned int *, unsigned int);


long long FUN_0030f000(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  puVar2 = (unsigned int *)**(unsigned int **)((*(int *)((unsigned char *)&DAT_0059935c + 0x1c)) + 0x10);
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  while( 1 ) {
    if (puVar2 == *(unsigned int **)((*(int *)((unsigned char *)&DAT_0059935c + 0x1c)) + 0x10)) {
      return (unsigned long long)uStack_20 << 0x20;
    }
    (**(romwright_code **)(*(int *)puVar2[2] + 0xc))(&uStack_20);
    temp_v0 = FUN_002ee96a(&uStack_20,param_2);
    FUN_002e9318(&uStack_20);
    if (temp_v0 != 0) break;
    puVar2 = (unsigned int *)*puVar2;
  }
  return romwright_piece_4_4(uStack_20,puVar2[2]);
}

} /* extern "C" */
