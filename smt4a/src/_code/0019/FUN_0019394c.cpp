/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019394c` (_code @ 0x19394c, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a063c(...);
int FUN_001a748c(int, unsigned int, int);
int FUN_001a78ec(...);
int FUN_001a7af4(int *, int *, unsigned short *);
int FUN_001a7e84(int *, unsigned int *, int);

extern unsigned int *FUN_001a04e0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a063c. */
/* Supplied declaration required: FUN_001a748c. */
extern unsigned int *FUN_001a76fc(int, int);
/* Supplied declaration required: FUN_001a78ec. */
/* Supplied declaration required: FUN_001a7af4. */
/* Supplied declaration required: FUN_001a7e84. */


void FUN_0019394c(int *param_1,unsigned int *param_2,unsigned short *param_3,int *param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  if ((*param_3 & 1) != 0) {
    temp_v0 = *param_4 + (unsigned int)param_3[0x10] * 0x278;
    temp_v2 = temp_v0 + 4;
    FUN_001a7e84(param_1,param_2,temp_v2);
    FUN_001a7af4(param_1,param_4,param_3);
    *(unsigned char *)(temp_v0 + 0x191) = *(unsigned char *)(*param_1 + 6) & 1;
    *(char *)(temp_v0 + 0x192) = (char)((*(unsigned char *)(*param_1 + 6) & 2) >> 1);
    *(char *)(temp_v0 + 0x193) = (char)((*(unsigned char *)(*param_1 + 6) & 4) >> 2);
    *(char *)(temp_v0 + 0x194) = (char)((*(unsigned char *)(*param_1 + 6) & 8) >> 3);
    *(char *)(temp_v0 + 0x195) = (char)((*(unsigned char *)(*param_1 + 6) & 0x10) >> 4);
    *(unsigned char *)(temp_v0 + 0x188) = *(unsigned char *)(*param_1 + 0xa4) & 0xf;
    *(unsigned char *)(temp_v0 + 0x189) = *(unsigned char *)(*param_1 + 0xa5);
    *(unsigned char *)(temp_v0 + 0x18b) = *(unsigned char *)(*param_1 + 0xa6);
    *(unsigned char *)(temp_v0 + 0x18c) = *(unsigned char *)(*param_1 + 0xa7);
    temp_v0 = temp_v2;
    FUN_001a748c(temp_v2,*param_2,1);
    puVar2 = (unsigned int *)FUN_001a76fc(temp_v2,temp_v0);
    if ((*param_3 & 0x20) != 0) {
      puVar2 = (unsigned int *)FUN_001a78ec(param_4 + 0x2f,puVar2);
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0xf004e;
      puVar2 = puVar2 + 2;
    }
    *param_2 = (unsigned int)puVar2;
  }
  else {
    puVar2 = (unsigned int *)FUN_001a04e0(*param_2,1);
    *param_2 = (unsigned int)puVar2;
    if ((*param_3 & 0x20) != 0) {
      temp_v1 = FUN_001a78ec(param_4 + 0x2f);
      *param_2 = temp_v1;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0xf004e;
      *param_2 = (unsigned int)(puVar2 + 2);
    }
  }
  FUN_001a063c(param_2,*(unsigned int *)(*param_1 + 200),*(int *)(*param_1 + 0xcc) << 2);
  FUN_001a063c(param_2,param_1[4],param_1[5] << 2);
  FUN_001a063c(param_2,*(unsigned int *)(param_3 + 0xa0),*(int *)(param_3 + 0xa2) << 2);
  FUN_001a063c(param_2,*(unsigned int *)(param_3 + 0xa4),*(int *)(param_3 + 0xa6) << 2);
  FUN_001a063c(param_2,*(unsigned int *)(param_3 + 0xa8),*(int *)(param_3 + 0xaa) << 2);
  return;
}

} /* extern "C" */
