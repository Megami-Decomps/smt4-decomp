/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00213bc8` (_code @ 0x213bc8, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(int *);
int FUN_001883b0(unsigned int *, unsigned char **, int);
int FUN_00195fc8(void);
int FUN_002e3c44(unsigned char **, int, int, int *);
int FUN_0042230c(unsigned int *, unsigned int *, unsigned int *);
int FUN_00425aa0(unsigned char *);
int FUN_00425ab0(unsigned char *, unsigned int *, unsigned int *);
int FUN_00513d64(unsigned int *, unsigned int, unsigned int *);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp238; /* 0x238: local_238 */
} param_1_stack;

extern unsigned int DAT_00588024; /* 0x588024 */
extern unsigned int DAT_00617e58; /* 0x617e58 */
extern unsigned char DAT_00617e70; /* 0x617e70 */
extern unsigned int DAT_00617f18; /* 0x617f18 */
extern unsigned char DAT_00617f40; /* 0x617f40 */
extern int DAT_00617f4c; /* 0x617f4c */
extern unsigned int DAT_006184a0; /* 0x6184a0 */
extern unsigned int DAT_00618500; /* 0x618500 */
extern unsigned int DAT_00618504; /* 0x618504 */
extern unsigned int DAT_00618508; /* 0x618508 */
extern unsigned int DAT_0061850c; /* 0x61850c */
extern unsigned int DAT_00618510; /* 0x618510 */
extern unsigned int DAT_00618514; /* 0x618514 */

/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_002e3c44. */
/* Supplied declaration required: FUN_0042230c. */
extern unsigned int FUN_00422648(unsigned int *);
/* Supplied declaration required: FUN_00425aa0. */
/* Supplied declaration required: FUN_00425ab0. */
/* Supplied declaration required: FUN_00513d64. */


void FUN_00213bc8(int param_1)

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
  puVar5 = &DAT_00618504;
  temp_v3 = 0;
  temp_v4 = 0;
  refIsNullOrZero(&temp_v3);
  while ((temp_v0 = FUN_00100836(param_1,0x105,(unsigned int *)&temp_v3), temp_v0 != 0 &&
         (puVar2 = (unsigned short *)ppuVar4, FUN_002e3c44(ppuVar4,param_1,temp_v0,&temp_v3),
         puVar2 != (unsigned short *)0x0))) {
    ppuVar4 = (unsigned char **)((int)ppuVar4 + 2);
    param_1 = param_1 + temp_v0;
  }
  *(unsigned short *)ppuVar4 = 0;
  DAT_00618510 = 0;
  DAT_00618514 = 0;
  DAT_00618508 = 0;
  DAT_0061850c = 0;
  FUN_001883b0(&DAT_00618504,&temp_v2,1);
  if ((int)puVar5 < 0) {
    FUN_00195fc8();
  }
  FUN_0042230c(&DAT_006184a0,&DAT_00618500,&DAT_00617e58);
  temp_v1 = FUN_00422648(&DAT_006184a0);
  FUN_00513d64(&DAT_00588024,temp_v1,&DAT_006184a0);
  temp_v2 = &DAT_00617e70;
  puStack_234 = &DAT_00617f18;
  FUN_00425ab0(&DAT_00617f40,&DAT_00617e58,&DAT_00588024);
  do {
    FUN_00425aa0(&DAT_00617f40);
  } while (DAT_00617f4c != 7 && DAT_00617f4c != 1);
  return;
}

} /* extern "C" */
