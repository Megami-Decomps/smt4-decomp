/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c6034` (_code @ 0x3c6034, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0016007c(...);
int FUN_001681cc(...);
int FUN_0019de98(...);
int FUN_002c7ce8(...);
int FUN_002c7e6c(...);
int FUN_002c8538(...);
int FUN_002c85b0(...);
int FUN_00342010(...);
int FUN_0038b6bc(...);
int FUN_003b7314(...);
int FUN_003f881c(...);

extern unsigned char LAB_00358f28; /* 0x358f28 */
extern int FUN_00387308(...); /* 0x387308 */
extern unsigned int *DAT_00588c48; /* 0x588c48 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0016007c. */
extern unsigned short FUN_00167f08(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_0038b6bc. */
/* Supplied declaration required: FUN_003b7314. */
/* Supplied declaration required: FUN_003f881c. */


void FUN_003c6034(int param_1,unsigned short param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  char *pcVar3;
  
  puVar2 = (unsigned int *)0x44;
  FUN_0016007c();
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(unsigned char *)(puVar2 + 0x10) = 0;
  }
  pcVar3 = "ArousalSkill PROC";
  DAT_00588c48 = puVar2;
  FUN_0014e38c("ArousalSkill PROC",4,0,0,&LAB_00358f28,FUN_00387308,0);
  *puVar2 = (unsigned int)pcVar3;
  puVar2[0xd] = param_1;
  *(unsigned short *)(puVar2 + 0xe) = param_2;
  if (param_1 < 0) {
    pcVar3 = (char *)0x1;
  }
  *(unsigned short *)((int)puVar2 + 0x3a) = 0;
  if (param_1 < 0) {
    *(char *)(puVar2 + 0x10) = (char)(int)pcVar3;
  }
  else {
    *(unsigned char *)(puVar2 + 0x10) = 0;
  }
  FUN_003f881c(0x25,0);
  temp_v0 = FUN_00167f08();
  *(unsigned short *)((int)puVar2 + 0x42) = temp_v0;
  FUN_002c7e6c();
  FUN_002c85b0(0);
  FUN_002c7ce8(0);
  FUN_002c8538(0);
  FUN_0038b6bc();
  FUN_003b7314();
  FUN_00342010();
  FUN_001681cc(0xf4);
  FUN_0019de98(0,0xf4f4f4ff);
  puVar2[4] = 0;
  puVar2[2] = 1;
  puVar2[3] = 0;
  return;
}

} /* extern "C" */
