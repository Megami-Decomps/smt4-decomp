/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a19c` (_code @ 0x11a19c, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int, unsigned int);
int FUN_002ea974(unsigned char [104]);
int FUN_002ea9dc(unsigned char [104]);
int FUN_002ee5b8(int, unsigned char [104]);

typedef int romwright_code(...);
extern unsigned char LAB_0011a1f0; /* 0x11a1f0 */

extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002ee5b8. */
extern int *FUN_003055cc(unsigned int);


void FUN_0011a19c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [104];
  unsigned char temp_v2 [16];
  
  piVar1 = (int *)FUN_003055cc(*(unsigned int *)(param_1 + 0x6c));
  (**(romwright_code **)(*piVar1 + 0x10))();
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x78) + 0x2c) = 0;
  (**(romwright_code **)(**(int **)(param_1 + 0x6c) + 0x10))();
  FUN_002ea974(temp_v1);
  FUN_002ee5b8(*(int *)(param_1 + 0x6c) + 0xb0,temp_v1);
  temp_v0 = FUN_002ea3c0(temp_v2,0x11a01d,0,&LAB_0011a1f0);
  FUN_002ea3d0(param_1,temp_v0);
  FUN_002ea9dc(temp_v1);
  return;
}

} /* extern "C" */
