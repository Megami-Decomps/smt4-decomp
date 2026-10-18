/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390250` (_code @ 0x390250, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_003903b0; /* 0x3903b0 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00126edc. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002a150c. */
extern unsigned int FUN_002b49d8(unsigned int);
extern unsigned int *FUN_002bad80(unsigned char *, unsigned int);
extern unsigned int *FUN_002bb09c(unsigned char *);
/* Supplied declaration required: FUN_002bcf58. */
extern unsigned int FUN_002c32f0(char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */
extern int FUN_00361b70(void);
/* Supplied declaration required: FUN_00361b7c. */
/* Supplied declaration required: FUN_0038f950. */


void FUN_00390250(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [16];
  unsigned char temp_v7 [4];
  unsigned char temp_v8 [12];
  
  temp_v0 = FUN_00361b70();
  if (temp_v0 != 0) {
    FUN_00361b7c();
  }
  FUN_002a150c(temp_v5,DAT_00433158);
  FUN_00126edc(DAT_00432fc8 + 0x80);
  temp_v5[0] = 0;
  puVar2 = (unsigned int *)FUN_002bb09c(temp_v6);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = (unsigned int *)FUN_002bad80(temp_v8,0);
  temp_v1 = *puVar3;
  temp_v2 = puVar3[1];
  *puVar2 = temp_v1;
  puVar2[1] = temp_v2;
  temp_v3 = puVar2[2];
  temp_v4 = puVar2[3];
  *(unsigned int *)(param_1 + 0x210) = puVar2[-1];
  *(unsigned int *)(param_1 + 0x214) = temp_v1;
  *(unsigned int *)(param_1 + 0x218) = temp_v2;
  *(unsigned int *)(param_1 + 0x21c) = temp_v3;
  *(unsigned int *)(param_1 + 0x220) = temp_v4;
  FUN_0038f950(param_1);
  FUN_002c4e28(0x3a);
  temp_v0 = 0;
  do {
    FUN_002c5ab8(0x3a,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v1 = FUN_002c32f0("addon/aoc_scr.bf",temp_v7,0);
  *(unsigned int *)(param_1 + 0x350) = temp_v1;
  temp_v1 = FUN_002b49d8(0x41);
  *(unsigned int *)(param_1 + 0x354) = temp_v1;
  temp_v0 = *(int *)(param_1 + 0x350);
  FUN_002972f8(temp_v0,temp_v1);
  *(int *)(param_1 + 0x358) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(int **)(param_1 + 0x208) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
    *(unsigned int *)(param_1 + 0x208) = 0;
  }
  temp_v0 = DAT_00432fc8;
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  *(unsigned char *)(temp_v0 + 0xd50) = 2;
  FUN_002c4b30(param_1 + 0x1130,0x80);
  FUN_002bcf58(param_1 + 0x1130,&LAB_003903b0,0x23);
  return;
}
