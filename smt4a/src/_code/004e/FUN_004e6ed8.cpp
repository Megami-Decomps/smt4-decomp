/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e6ed8` (_code @ 0x4e6ed8, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_004e9ae8(int *, int *, int, unsigned int);
extern int FUN_004ee568(int *);


/* WARNING: Type propagation algorithm not settling */

void FUN_004e6ed8(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  short *psVar3;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int aiStack_1dc [110];
  
  temp_v0 = 0;
  temp_v2 = 0;
  temp_v1 = 0x6d;
  puVar1 = *(unsigned int **)(*param_1 + 0x1ffc);
  puVar2 = puVar1 + 0x96;
  psVar3 = (short *)((int)puVar1 + 0x6e);
  do {
    if (((*puVar1 & DAT_00571190) != 0 || (puVar1[1] & DAT_00571194) != 0) &&
       ((int)temp_v2 <= (int)*puVar2)) {
      aiStack_1dc[temp_v0 + 1] = (int)*psVar3;
      temp_v2 = *puVar2;
      temp_v0 = temp_v0 + 1;
    }
    temp_v1 = temp_v1 - 1;
    puVar1 = puVar1 + 0x102;
    puVar2 = puVar2 + 0x102;
    psVar3 = psVar3 + 0x204;
  } while (temp_v1 != 0);
  if (param_2 != 0) {
    temp_v0 = FUN_004e9ae8(param_1,aiStack_1dc + 1,temp_v0,1);
  }
  temp_v1 = FUN_004ee568(param_1);
  *(unsigned char *)(aiStack_1dc[temp_v0] + temp_v1 + 0x38) = 1;
  return;
}

} /* extern "C" */
