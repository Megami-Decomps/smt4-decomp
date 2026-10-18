/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036773c` (_code @ 0x36773c, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420f04; /* 0x420f04 */

extern int *FUN_002b5498(int, int *, unsigned int, int *);


int * FUN_0036773c(int *param_1,int *param_2)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,0x168,4);
  piVar2 = (int *)0x0;
  if (temp_v0 != 0) {
    piVar2 = (int *)FUN_002b5498(temp_v0,param_2,0,param_1);
    *piVar2 = (int)&DAT_00420f04;
    *(char *)(piVar2 + 0x52) = (char)param_1[4];
    *(unsigned char *)((int)piVar2 + 0x149) = *(unsigned char *)((int)param_1 + 0x11);
    *(unsigned char *)((int)piVar2 + 0x14a) = *(unsigned char *)((int)param_1 + 0x12);
    piVar2[0x53] = param_1[5];
    temp_v0 = param_1[1];
    temp_v1 = param_1[2];
    temp_v2 = param_1[3];
    temp_v3 = param_1[4];
    temp_v4 = param_1[5];
    piVar2[0x54] = *param_1;
    piVar2[0x55] = temp_v0;
    piVar2[0x56] = temp_v1;
    piVar2[0x57] = temp_v2;
    piVar2[0x58] = temp_v3;
    piVar2[0x59] = temp_v4;
  }
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2,param_2);
  return piVar2;
}
