/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f8bc` (_code @ 0x36f8bc, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(...);
int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_001acf98(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_002a3f54; /* 0x2a3f54 */
extern int FUN_002a41a0(...); /* 0x2a41a0 */
extern unsigned char LAB_0036fa88; /* 0x36fa88 */
extern unsigned char LAB_0036fa9c; /* 0x36fa9c */
extern unsigned char LAB_0036fab4; /* 0x36fab4 */
extern unsigned int *DAT_0057f3b8; /* 0x57f3b8 */
extern int DAT_0057f3c4; /* 0x57f3c4 */
extern unsigned char DAT_0057f3e8; /* 0x57f3e8 */

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
extern int FUN_00341940(unsigned int);


void FUN_0036f8bc(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0057f3b8 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x20,1);
    DAT_0057f3b8 = puVar1;
  }
  puVar1 = DAT_0057f3b8;
  *DAT_0057f3b8 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar2 = &LAB_0036fa88;
  FUN_0014e38c(&LAB_0036fa88,3,0,0,FUN_002a41a0,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0036fa9c,0x85,0,0,&LAB_002a3f54,0,0,puVar2);
  FUN_0015155c(&LAB_0036fab4,0xe1,0,0,&LAB_002a3f54,0,0,*puVar1);
  puVar1[6] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x3f800000;
  puVar1[5] = 0;
  temp_v2 = DAT_0057f3b8[6];
  if (temp_v2 < 6) {
    temp_v0 = FUN_00341940(0x35);
    if (temp_v0 != 0) {
      DAT_0057f3c4 = DAT_0057f3c4 + 1;
    }
    else {
      FUN_0013f1b8(0x35,0);
      DAT_0057f3c4 = 0;
    }
    temp_v0 = temp_v2 * 0xc;
    temp_v1 = FUN_0018206c(*(unsigned int *)(&DAT_0057f3e8 + temp_v2 * 0xc),
                         *(unsigned int *)(temp_v0 + 0x57f3ec));
    if (temp_v1 == 0) {
      FUN_001acf98(*(unsigned int *)(&DAT_0057f3e8 + temp_v2 * 0xc),*(unsigned int *)(temp_v0 + 0x57f3ec));
      *(unsigned char *)(temp_v0 + 0x57f3f0) = 1;
    }
  }
  return;
}

} /* extern "C" */
