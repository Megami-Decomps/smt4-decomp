/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e84fc` (_code @ 0x4e84fc, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004e5b5c(int *);
int SBORROW4(...);

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_004e5b5c. */
extern int FUN_004e9ae8(int *, int *, int, unsigned int);
extern int btlUnitGet(int *);


void FUN_004e84fc(int *param_1)

{
/* irregular: irregular input(s): in_OV; 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned short *puVar3;
  short *psVar4;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char in_OV;
  unsigned char temp_v5;
  int aiStack_1d8 [109];
  
  temp_v1 = 0;
  temp_v2 = 0x6d;
  temp_v4 = 10000;
  puVar2 = *(unsigned int **)(*param_1 + 0x1ffc);
  puVar3 = (unsigned short *)((int)puVar2 + 0x27a);
  psVar4 = (short *)((int)puVar2 + 0x6e);
  do {
    temp_v5 = (*puVar2 & DAT_00571190) != 0 || (puVar2[1] & DAT_00571194) != 0;
    temp_v0 = 0;
    temp_v3 = 0;
    if (temp_v5) {
      temp_v3 = (unsigned int)*puVar3;
      in_OV = SBORROW4(temp_v4,temp_v3);
      temp_v0 = temp_v4 - temp_v3;
    }
    if ((temp_v5 && temp_v4 != temp_v3) && temp_v0 < 0 == (unsigned char)in_OV) {
      aiStack_1d8[temp_v1] = (int)*psVar4;
      temp_v4 = (unsigned int)*puVar3;
      temp_v1 = temp_v1 + 1;
    }
    in_OV = SBORROW4(temp_v2,1);
    temp_v2 = temp_v2 - 1;
    puVar2 = puVar2 + 0x102;
    puVar3 = puVar3 + 0x204;
    psVar4 = psVar4 + 0x204;
  } while (temp_v2 != 0);
  temp_v1 = 0;
  temp_v2 = 0x6d;
  puVar2 = *(unsigned int **)(*param_1 + 0x1ffc);
  puVar3 = (unsigned short *)((int)puVar2 + 0x27a);
  psVar4 = (short *)((int)puVar2 + 0x6e);
  do {
    if (((*puVar2 & DAT_00571190) != 0 || (puVar2[1] & DAT_00571194) != 0) && (*puVar3 == temp_v4)) {
      aiStack_1d8[temp_v1] = (int)*psVar4;
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
    puVar2 = puVar2 + 0x102;
    puVar3 = puVar3 + 0x204;
    psVar4 = psVar4 + 0x204;
  } while (temp_v2 != 0);
  temp_v1 = FUN_004e9ae8(param_1,aiStack_1d8,temp_v1,1);
  if (temp_v1 == 0) {
    FUN_004e5b5c(param_1);
    return;
  }
  temp_v1 = FUN_001633a0((temp_v1 - 1U) & 0xffff);
  temp_v2 = btlUnitGet(param_1);
  *(unsigned char *)(aiStack_1d8[temp_v1] + temp_v2 + 0x38) = 1;
  return;
}

} /* extern "C" */
