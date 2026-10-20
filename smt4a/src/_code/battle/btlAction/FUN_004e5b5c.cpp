/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5b5c` (_code @ 0x4e5b5c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_001633a0(short);
extern short FUN_004e9ae8(int *, int *, int, unsigned int);
extern int btlUnitGet(int *);


void FUN_004e5b5c(int *param_1)

{
  short temp_v0;
  unsigned int *puVar2;
  short *psVar3;
  int temp_v1;
  int temp_v2;
  int aiStack_1d0 [110];
  
  temp_v1 = 0;
  temp_v2 = 0x6d;
  puVar2 = *(unsigned int **)(*param_1 + 0x1ffc);
  psVar3 = (short *)((int)puVar2 + 0x6e);
  do {
    if ((puVar2[1] & DAT_00571194) != 0 || (*puVar2 & DAT_00571190) != 0) {
      aiStack_1d0[temp_v1] = (int)*psVar3;
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
    puVar2 = puVar2 + 0x102;
    psVar3 = psVar3 + 0x204;
  } while (temp_v2 != 0);
  temp_v0 = FUN_004e9ae8(param_1,aiStack_1d0,temp_v1,0);
  temp_v1 = FUN_001633a0(temp_v0 - 1);
  temp_v2 = btlUnitGet(param_1);
  *(unsigned char *)(aiStack_1d0[temp_v1] + temp_v2 + 0x38) = 1;
  return;
}

} /* extern "C" */
