/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b880` (_code @ 0x23b880, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_0023b834. */
/* Supplied declaration required: FUN_0023b934. */
/* Supplied declaration required: FUN_0023bc5c. */
/* Supplied declaration required: FUN_0023bcfc. */
/* Supplied declaration required: FUN_002af630. */
extern unsigned int FUN_002bc300(int);
/* Supplied declaration required: FUN_002bc9d8. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_0023b880(int param_1,unsigned int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v4;
  unsigned int *temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
    temp_v4 = 0;
    temp_v5 = (unsigned int *)0x0;
    temp_v6 = 0;
    temp_v4 = FUN_002bc300(*(int *)(param_1 + 0x48) + param_3 * 2);
    temp_v6 = 0;
    temp_v5 = param_4;
    FUN_0023b934(param_1,param_1 + 0x4c,&temp_v4);
    return;
  }
  temp_v0 = (int)param_4 << 1;
  temp_v1 = temp_v0;
  puVar8 = param_4;
  FUN_0023b834(temp_v0);
  FUN_002c5ff4(temp_v1,*(int *)(param_1 + 0x48) + param_3 * 2,temp_v0);
  temp_v2 = FUN_002bc300(temp_v1);
  *(unsigned int *)(param_1 + 0x7dc) = temp_v2;
  *(unsigned int **)(param_1 + 0x7e0) = param_4;
  *(unsigned char *)(param_1 + 0x7e4) = 0;
  puVar7 = (unsigned int *)(param_1 + 0x4c);
  FUN_002bc9d8(0x208,&temp_v7);
  *puVar8 = 0x100;
  puVar8[1] = 0x20229;
  puVar8[2] = 0x300;
  puVar8[3] = 0x2025e;
  puVar8[4] = 1;
  puVar8[5] = 0xf025f;
  puVar6 = puVar8 + 8;
  puVar8[6] = 0x100;
  puVar8[7] = 0x30253;
  temp_v3 = 0;
  do {
    if (puVar7[temp_v3 * 0x1c + 0x58] != 0) {
      *puVar6 = 0;
      puVar6[1] = (temp_v3 * 3 + 0x203) | 0x802f0000;
      puVar5 = puVar6 + 3;
      puVar6[2] = 0;
      *puVar5 = 0;
    }
    else {
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      *puVar5 = (temp_v3 * 3 + 0x205) | 0xf0000;
    }
    puVar6 = puVar5 + 1;
    if ((char)puVar7[temp_v3 * 5 + 0x1a8] != '\0') {
      *puVar6 = temp_v3;
      puVar5[2] = 0x803f0232;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar6 = puVar5 + 7;
      puVar5[6] = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 0xc);
  if (*puVar7 == 0) {
    puVar5 = puVar7;
    FUN_0023bcfc(puVar7,param_1 + 0x50);
    *puVar7 = ((int)puVar5 + (-4 - (int)puVar7)) >> 2;
  }
  FUN_002bcf58(puVar6,param_1 + 0x50,*puVar7 << 2);
  puVar5 = puVar7;
  FUN_0023bc5c(puVar7,puVar6 + *puVar7,(unsigned int *)(param_1 + 0x7dc));
  temp_v3 = 0;
  do {
    if (puVar7[temp_v3 * 0x1c + 0x58] != 0) {
      *puVar5 = 0;
      puVar5[1] = (temp_v3 * 3 + 0x203) | 0x802f0000;
      puVar6 = puVar5 + 3;
      puVar5[2] = 0;
      *puVar6 = 0;
    }
    else {
      puVar6 = puVar5 + 1;
      *puVar5 = 0;
      *puVar6 = (temp_v3 * 3 + 0x205) | 0xf0000;
    }
    puVar5 = puVar6 + 1;
    if ((char)puVar7[temp_v3 * 5 + 0x1a8] != '\0') {
      *puVar5 = temp_v3;
      puVar6[2] = 0x803f0232;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar5 = puVar6 + 7;
      puVar6[6] = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 0xc);
  FUN_002af630(((int)puVar5 - (int)puVar8) & 0xfffffffc);
  return;
}
