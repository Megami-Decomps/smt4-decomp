/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036b6cc` (_code @ 0x36b6cc, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdOperatorNew(...);
int sysPlaySe(...);
int FUN_0019de98(...);
int FUN_002c7ce8(...);
int FUN_002c7e6c(...);
int FUN_002c8538(...);
int FUN_002c85b0(...);
int FUN_00342010(...);
int objBMarkAndInit20D4(...);
int stateHolderMarkAndInit2588(...);
int FUN_003f881c(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00358f28; /* 0x358f28 */
extern int FUN_00387308(...); /* 0x387308 */
extern unsigned int *DAT_00588c48; /* 0x588c48 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdOperatorNew. */
extern unsigned short FUN_00167f08(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: objBMarkAndInit20D4. */
/* Supplied declaration required: stateHolderMarkAndInit2588. */
/* Supplied declaration required: FUN_003f881c. */


/* WARNING: Removing unreachable block (ram,0x0036b774) */

void FUN_0036b6cc(unsigned short param_1)

{
/* irregular: 14 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  char *pcVar3;
  
  puVar2 = (unsigned int *)0x44;
  asdOperatorNew();
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
  asdProcessCreateSimple("ArousalSkill PROC",4,0,0,&LAB_00358f28,FUN_00387308,0);
  *puVar2 = (unsigned int)pcVar3;
  puVar2[0xd] = 0xffffffff;
  *(unsigned short *)(puVar2 + 0xe) = param_1;
  *(unsigned short *)((int)puVar2 + 0x3a) = 0;
  *(unsigned char *)(puVar2 + 0x10) = 1;
  FUN_003f881c(0x25,0);
  temp_v0 = FUN_00167f08();
  *(unsigned short *)((int)puVar2 + 0x42) = temp_v0;
  FUN_002c7e6c();
  FUN_002c85b0(0);
  FUN_002c7ce8(0);
  FUN_002c8538(0);
  objBMarkAndInit20D4();
  stateHolderMarkAndInit2588();
  FUN_00342010();
  sysPlaySe(0xf4);
  FUN_0019de98(0,0xf4f4f4ff);
  puVar2[4] = 0;
  puVar2[2] = 1;
  puVar2[3] = 0;
  return;
}

} /* extern "C" */
