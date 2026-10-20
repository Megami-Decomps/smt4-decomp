/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116934` (_code @ 0x116934, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea974(...);
int FUN_00302ee0(unsigned int *, int);

extern unsigned char DAT_00559da4; /* 0x559da4 */

/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_00302ee0. */
extern int FUN_00302f28(int);


int FUN_00116934(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00559da4;
  *(unsigned char *)(param_1 + 1) = 1;
  temp_v0 = FUN_002ea974(param_1 + 2);
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  FUN_00302ee0((unsigned int *)(temp_v0 + 0x68),1);
  temp_v1 = *(int *)(temp_v0 + 0x70);
  *(int *)(temp_v0 + 0x70) = temp_v1 + 0xc;
  *(int *)(temp_v0 + 0x78) = temp_v1;
  *(int *)temp_v1 = temp_v1;
  *(int *)(*(int *)(temp_v0 + 0x78) + 4) = *(int *)(temp_v0 + 0x78);
  temp_v0 = FUN_002ea974(temp_v0 + 0x80);
  temp_v0 = FUN_00302f28(temp_v0 + 0x68);
  return temp_v0 - 0xf0;
}

} /* extern "C" */
