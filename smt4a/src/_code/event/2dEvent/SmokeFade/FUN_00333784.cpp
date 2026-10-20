/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333784` (_code @ 0x333784, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(...);
int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_001acf98(...);
int FUN_002804b0(...);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_0023ad60; /* 0x23ad60 */
extern int FUN_0023af68(...); /* 0x23af68 */
extern unsigned char LAB_00333958; /* 0x333958 */
extern unsigned char LAB_0033396c; /* 0x33396c */
extern unsigned char LAB_00333984; /* 0x333984 */
extern unsigned int *DAT_0057f47c; /* 0x57f47c */
extern unsigned int DAT_0057f480; /* 0x57f480 */
extern unsigned int DAT_0057f484; /* 0x57f484 */

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_002804b0. */
extern int FUN_00341940(unsigned int);


void FUN_00333784(unsigned int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  
  if (DAT_0057f47c == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x28,1);
    DAT_0057f47c = puVar1;
  }
  puVar1 = DAT_0057f47c;
  *DAT_0057f47c = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = &LAB_00333958;
  FUN_0014e38c(&LAB_00333958,3,0,0,FUN_0023af68,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0033396c,0x86,0,0,&LAB_0023ad60,0,0,puVar2);
  FUN_0015155c(&LAB_00333984,0xe2,0,0,&LAB_0023ad60,0,0,*puVar1);
  puVar1[6] = 0;
  puVar1[3] = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  puVar1[8] = 0x3f800000;
  puVar1[7] = 0x3f800000;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_00341940((&DAT_0057f480)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_0013f1b8((&DAT_0057f480)[temp_v1 * 3],0);
      *(unsigned char *)(temp_v1 * 0xc + 0x57f489) = 1;
    }
    temp_v0 = FUN_0018206c((&DAT_0057f480)[temp_v1 * 3],(&DAT_0057f484)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_001acf98((&DAT_0057f480)[temp_v1 * 3],(&DAT_0057f484)[temp_v1 * 3]);
      *(unsigned char *)(temp_v1 * 0xc + 0x57f488) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_002804b0(0x3339a4,puVar1 + 2,0);
  return;
}

} /* extern "C" */
