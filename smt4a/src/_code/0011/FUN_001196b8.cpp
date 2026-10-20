/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001196b8` (_code @ 0x1196b8, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(int *, int);
int FUN_002f674e(void);
int FUN_003054f0(int, int *);

typedef int romwright_code(...);
extern unsigned char LAB_00119734; /* 0x119734 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea3c0(int *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f674e. */
/* Supplied declaration required: FUN_003054f0. */
extern int *FUN_003055cc(unsigned int);


unsigned long long FUN_001196b8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (*(int *)(param_1 + 0x30c) != 0) {
    FUN_002e7232();
    *(unsigned int *)(param_1 + 0x30c) = 0;
  }
  if (*(char *)(param_1 + 0x98) != '\x02') {
    if (*(int *)(param_1 + 0x314) != 0) {
      FUN_002f674e();
      *(unsigned int *)(param_1 + 0x314) = 0;
    }
    FUN_002ea41e(&iStack_20,param_1 + 0x88);
    FUN_003054f0(param_1,&iStack_20);
    return romwright_piece_4_4(uStack_1c,iStack_20);
  }
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x2c) =
       *(unsigned int *)(param_1 + 0x314);
  piVar1 = (int *)FUN_003055cc(*(unsigned int *)(param_1 + 0x198));
  (**(romwright_code **)(*piVar1 + 0xc))(piVar1,*(unsigned int *)(*(int *)(param_1 + 0x198) + 0x78));
  temp_v0 = FUN_002ea3c0(&iStack_20,0x119171,0,&LAB_00119734);
  FUN_002ea3d0(param_1,temp_v0);
  return romwright_piece_4_4(uStack_1c,iStack_20);
}

} /* extern "C" */
