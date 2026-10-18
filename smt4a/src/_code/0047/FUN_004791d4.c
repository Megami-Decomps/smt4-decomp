/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004791d4` (_code @ 0x4791d4, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00479334; /* 0x479334 */
extern int DAT_00570260; /* 0x570260 */
extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
extern unsigned int FUN_0016a0f0(unsigned int);
/* Supplied declaration required: FUN_0016ccb4. */
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned char *);
/* Supplied declaration required: FUN_001d0fcc. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_00441f48(void);
/* Supplied declaration required: FUN_00441f54. */
/* Supplied declaration required: FUN_004788dc. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004791d4(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [16];
  unsigned char temp_v7 [4];
  unsigned int temp_v8 [3];
  
  temp_v0 = FUN_00441f48();
  if (temp_v0 != 0) {
    FUN_00441f54();
  }
  FUN_001d0fcc(temp_v5,DAT_00570280);
  FUN_0016ccb4(DAT_00570260 + 0x80);
  temp_v5[0] = 0;
  puVar2 = (unsigned int *)FUN_001b5acc(temp_v6);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = temp_v8;
  FUN_001b57a8(puVar3,0);
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
  FUN_004788dc(param_1);
  FUN_0014384c(0x2f);
  temp_v0 = 0;
  do {
    FUN_0014afd0(0x2f,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  pcVar5 = "addon/aoc_scr.bf";
  FUN_0013c174("addon/aoc_scr.bf",temp_v7,0);
  *(char **)(param_1 + 0x350) = pcVar5;
  temp_v1 = FUN_0016a0f0(0x40);
  *(unsigned int *)(param_1 + 0x354) = temp_v1;
  temp_v0 = *(int *)(param_1 + 0x350);
  FUN_00275bc8(temp_v0,temp_v1);
  *(int *)(param_1 + 0x358) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(int **)(param_1 + 0x208) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
    *(unsigned int *)(param_1 + 0x208) = 0;
  }
  temp_v0 = DAT_00570260;
  *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
  *(unsigned char *)(temp_v0 + 0xd50) = 2;
  FUN_002e6354(param_1 + 0x1130,0x80);
  rt_memcpy_w(param_1 + 0x1130,&LAB_00479334,0x23);
  return;
}
