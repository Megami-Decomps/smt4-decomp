/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fad8` (_code @ 0x36fad8, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_002a4334; /* 0x2a4334 */
extern int FUN_002a4488(); /* 0x2a4488 */
extern unsigned char LAB_0036fc7c; /* 0x36fc7c */
extern unsigned char LAB_0036fc94; /* 0x36fc94 */
extern unsigned char LAB_0036fcac; /* 0x36fcac */
extern unsigned int *DAT_0057f3bc; /* 0x57f3bc */
extern int DAT_0057f3c4; /* 0x57f3c4 */
extern unsigned int DAT_0057f430; /* 0x57f430 */
extern unsigned int DAT_0057f434; /* 0x57f434 */
extern unsigned char DAT_0057f438; /* 0x57f438 */

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
extern int FUN_00341940(unsigned int);


void FUN_0036fad8(unsigned char param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  if (DAT_0057f3bc == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x18,1);
    DAT_0057f3bc = puVar1;
  }
  puVar1 = DAT_0057f3bc;
  *DAT_0057f3bc = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = &LAB_0036fc7c;
  FUN_0014e38c(&LAB_0036fc7c,3,0,0,FUN_002a4488,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0036fc94,0x85,0,0,&LAB_002a4334,0,0,puVar2);
  FUN_0015155c(&LAB_0036fcac,0xe1,0,0,&LAB_002a4334,0,0,*puVar1);
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)((int)puVar1 + 0x15) = param_1;
  temp_v0 = FUN_00341940(0x35);
  if (temp_v0 != 0) {
    DAT_0057f3c4 = DAT_0057f3c4 + 1;
  }
  else {
    FUN_0013f1b8(0x35,0);
    DAT_0057f3c4 = 0;
  }
  temp_v0 = FUN_0018206c(DAT_0057f430,DAT_0057f434);
  if (temp_v0 == 0) {
    FUN_001acf98(DAT_0057f430,DAT_0057f434);
    DAT_0057f438 = 1;
  }
  puVar1[2] = 0;
  return;
}
