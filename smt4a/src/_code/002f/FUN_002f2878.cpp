/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2878` (_code @ 0x2f2878, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(...);
int FUN_002f3f72(int *, int *, int *, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f3f72. */


unsigned long long FUN_002f2878(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  temp_v2 = param_1[4];
  temp_v1 = param_2;
  if (temp_v2 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    uStack_10 = param_4;
    FUN_002f3f72(&uStack_10,param_1,&temp_v1,&temp_v2);
    temp_v0 = param_1[4];
    *(int *)(temp_v0 + 0xc) = param_1[1];
    param_1[1] = temp_v0;
    while (piVar2 = (int *)*param_1, piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
  }
  return romwright_piece_4_4(temp_v1,param_1);
}

} /* extern "C" */
