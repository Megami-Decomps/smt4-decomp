/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e6fb0` (_code @ 0x4e6fb0, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_004e9ae8(int *, int *, int, unsigned int);
extern int FUN_004ee568(int *);


/* WARNING: Type propagation algorithm not settling */

void FUN_004e6fb0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  short *psVar4;
  int temp_v1;
  unsigned int temp_v2;
  int aiStack_1dc [111];
  
  temp_v0 = 0;
  temp_v2 = 100000000;
  puVar1 = *(unsigned int **)(*param_1 + 0x1ffc);
  temp_v1 = 0x6d;
  puVar2 = puVar1 + 0x96;
  psVar4 = (short *)((int)puVar1 + 0x6e);
  do {
    if (((*puVar1 & DAT_00571190) != 0 || (puVar1[1] & DAT_00571194) != 0) &&
       ((int)*puVar2 <= (int)temp_v2)) {
      aiStack_1dc[temp_v0 + 1] = (int)*psVar4;
      temp_v2 = *puVar2;
      temp_v0 = temp_v0 + 1;
    }
    temp_v1 = temp_v1 - 1;
    puVar1 = puVar1 + 0x102;
    puVar2 = puVar2 + 0x102;
    psVar4 = psVar4 + 0x204;
  } while (temp_v1 != 0);
  temp_v0 = FUN_004e9ae8(param_1,aiStack_1dc + 1,temp_v0,1);
  temp_v1 = FUN_004ee568(param_1);
  *(unsigned char *)(aiStack_1dc[temp_v0] + temp_v1 + 0x38) = 1;
  return;
}
