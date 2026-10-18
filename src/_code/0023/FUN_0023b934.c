/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b934` (_code @ 0x23b934, 0x1e8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0023bc5c. */
/* Supplied declaration required: FUN_0023bcfc. */
/* Supplied declaration required: FUN_002af630. */
/* Supplied declaration required: FUN_002bc9d8. */
/* Supplied declaration required: FUN_002bcf58. */


void FUN_0023b934(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *temp_v1;
  
  temp_v1 = param_4;
  FUN_002bc9d8(0x208,&temp_v1);
  puVar1 = temp_v1;
  *temp_v1 = 0x100;
  temp_v1[1] = 0x20229;
  temp_v1[2] = 0x300;
  temp_v1[3] = 0x2025e;
  temp_v1[4] = 1;
  temp_v1[5] = 0xf025f;
  puVar4 = temp_v1 + 8;
  temp_v1[6] = 0x100;
  temp_v1[7] = 0x30253;
  temp_v0 = 0;
  do {
    if (param_2[temp_v0 * 0x1c + 0x58] != 0) {
      *puVar4 = 0;
      puVar4[1] = (temp_v0 * 3 + 0x203) | 0x802f0000;
      puVar3 = puVar4 + 3;
      puVar4[2] = 0;
      *puVar3 = 0;
    }
    else {
      puVar3 = puVar4 + 1;
      *puVar4 = 0;
      *puVar3 = (temp_v0 * 3 + 0x205) | 0xf0000;
    }
    puVar4 = puVar3 + 1;
    if ((char)param_2[temp_v0 * 5 + 0x1a8] != '\0') {
      *puVar4 = temp_v0;
      puVar3[2] = 0x803f0232;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar4 = puVar3 + 7;
      puVar3[6] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xc);
  temp_v1 = puVar4;
  if (*param_2 == 0) {
    puVar3 = param_2;
    FUN_0023bcfc(param_2,param_2 + 1);
    *param_2 = ((int)puVar3 + (-4 - (int)param_2)) >> 2;
  }
  FUN_002bcf58(puVar4,param_2 + 1,*param_2 << 2);
  temp_v1 = puVar4 + *param_2;
  puVar4 = param_2;
  FUN_0023bc5c(param_2,temp_v1,param_3);
  temp_v0 = 0;
  do {
    if (param_2[temp_v0 * 0x1c + 0x58] != 0) {
      *puVar4 = 0;
      puVar4[1] = (temp_v0 * 3 + 0x203) | 0x802f0000;
      puVar3 = puVar4 + 3;
      puVar4[2] = 0;
      *puVar3 = 0;
    }
    else {
      puVar3 = puVar4 + 1;
      *puVar4 = 0;
      *puVar3 = (temp_v0 * 3 + 0x205) | 0xf0000;
    }
    puVar4 = puVar3 + 1;
    if ((char)param_2[temp_v0 * 5 + 0x1a8] != '\0') {
      *puVar4 = temp_v0;
      puVar3[2] = 0x803f0232;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar4 = puVar3 + 7;
      puVar3[6] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xc);
  temp_v1 = puVar4;
  FUN_002af630(((int)puVar4 - (int)puVar1) & 0xfffffffc);
  return;
}
