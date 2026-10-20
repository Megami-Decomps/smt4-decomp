/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b3c4` (_code @ 0x32b3c4, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(int *);
int FUN_002bb5a4(unsigned int *, unsigned char **, int);
int FUN_002c52f8(void);
int FUN_002c618c(unsigned char **, int, int, int *);
int FUN_0034dddc(unsigned int *, unsigned int *, unsigned int *);
int FUN_00351488(unsigned char *);
int FUN_00351498(unsigned char *, unsigned int *, unsigned int *);
int FUN_003f66f0(unsigned int *, unsigned int, unsigned int *);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp238; /* 0x238: local_238 */
} param_1_stack;

extern unsigned int DAT_0044d024; /* 0x44d024 */
extern unsigned int DAT_004c3a38; /* 0x4c3a38 */
extern unsigned char DAT_004c3a50; /* 0x4c3a50 */
extern unsigned int DAT_004c3af8; /* 0x4c3af8 */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern int DAT_004c3b2c; /* 0x4c3b2c */
extern unsigned int DAT_004c4080; /* 0x4c4080 */
extern unsigned int DAT_004c40e0; /* 0x4c40e0 */
extern unsigned int DAT_004c40e4; /* 0x4c40e4 */
extern unsigned int DAT_004c40e8; /* 0x4c40e8 */
extern unsigned int DAT_004c40ec; /* 0x4c40ec */
extern unsigned int DAT_004c40f0; /* 0x4c40f0 */
extern unsigned int DAT_004c40f4; /* 0x4c40f4 */

extern int FUN_002b90c8(int, unsigned int, unsigned int *);
/* Supplied declaration required: refIsNullOrZero. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_002c618c. */
/* Supplied declaration required: FUN_0034dddc. */
extern unsigned int FUN_0034e134(unsigned int *);
/* Supplied declaration required: FUN_00351488. */
/* Supplied declaration required: FUN_00351498. */
/* Supplied declaration required: FUN_003f66f0. */


void FUN_0032b3c4(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned char **ppuVar4;
  unsigned int *puVar5;
  unsigned char *temp_v2;
  unsigned int *puStack_234;
  int temp_v3;
  unsigned int temp_v4;
  
  ppuVar4 = &temp_v2;
  puVar5 = &DAT_004c40e4;
  temp_v3 = 0;
  temp_v4 = 0;
  refIsNullOrZero(&temp_v3);
  while ((temp_v0 = FUN_002b90c8(param_1,0x105,(unsigned int *)&temp_v3), temp_v0 != 0 &&
         (puVar2 = (unsigned short *)ppuVar4, FUN_002c618c(ppuVar4,param_1,temp_v0,&temp_v3),
         puVar2 != (unsigned short *)0x0))) {
    ppuVar4 = (unsigned char **)((int)ppuVar4 + 2);
    param_1 = param_1 + temp_v0;
  }
  *(unsigned short *)ppuVar4 = 0;
  DAT_004c40f0 = 0;
  DAT_004c40f4 = 0;
  DAT_004c40e8 = 0;
  DAT_004c40ec = 0;
  FUN_002bb5a4(&DAT_004c40e4,&temp_v2,1);
  if ((int)puVar5 < 0) {
    FUN_002c52f8();
  }
  FUN_0034dddc(&DAT_004c4080,&DAT_004c40e0,&DAT_004c3a38);
  temp_v1 = FUN_0034e134(&DAT_004c4080);
  FUN_003f66f0(&DAT_0044d024,temp_v1,&DAT_004c4080);
  temp_v2 = &DAT_004c3a50;
  puStack_234 = &DAT_004c3af8;
  FUN_00351498(&DAT_004c3b20,&DAT_004c3a38,&DAT_0044d024);
  do {
    FUN_00351488(&DAT_004c3b20);
  } while (DAT_004c3b2c != 7 && DAT_004c3b2c != 1);
  return;
}

} /* extern "C" */
