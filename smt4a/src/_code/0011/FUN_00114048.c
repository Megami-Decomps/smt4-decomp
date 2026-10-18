/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114048` (_code @ 0x114048, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055962c; /* 0x55962c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e9318(unsigned int *);
/* Supplied declaration required: FUN_002fedf4. */
/* Supplied declaration required: FUN_002fee58. */
extern int FUN_002fee88(int *, int *);
/* Supplied declaration required: FUN_002fee98. */


unsigned long long
FUN_00114048(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_0055962c;
  temp_v1 = *(int *)(param_1[7] + 8);
  uStack_10 = param_4;
  while( 1 ) {
    temp_v2 = param_1[7];
    temp_v0 = FUN_002fee88(&temp_v1,&temp_v2);
    if (temp_v0 == 0) break;
    if (*(int *)(temp_v1 + 0x14) != 0) {
      temp_v0 = *(int *)(temp_v1 + 0x14) + 0x28;
      FUN_002fedf4(temp_v0);
      temp_v0 = temp_v0 - 0x24;
      FUN_002fedf4(temp_v0);
      FUN_002e6e14(temp_v0 - 4);
    }
    FUN_002fee58(&temp_v1);
  }
  piVar3 = (int *)(param_1 + 3);
  temp_v2 = param_1[7];
  temp_v1 = *(int *)(temp_v2 + 8);
  FUN_002fee98(&uStack_10,piVar3,&temp_v1,&temp_v2);
  temp_v0 = param_1[7];
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 8);
    temp_v2 = temp_v0;
    FUN_002fee98(&uStack_10,piVar3,&temp_v1,&temp_v2);
    temp_v0 = param_1[7];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[4];
    param_1[4] = temp_v0;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
  }
  temp_v0 = FUN_002e9318(param_1 + 1);
  return romwright_piece_4_4(temp_v1,temp_v0 - 4);
}
