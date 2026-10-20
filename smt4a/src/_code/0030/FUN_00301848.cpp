/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301848` (_code @ 0x301848, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_0015155c(...);
int FUN_0016007c(void);
int FUN_0022677c(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_002e5900; /* 0x2e5900 */
extern unsigned char LAB_0030199c; /* 0x30199c */
extern unsigned char LAB_003019b0; /* 0x3019b0 */
extern unsigned char LAB_003019c8; /* 0x3019c8 */
extern unsigned char LAB_0033092c; /* 0x33092c */
extern unsigned char LAB_00330934; /* 0x330934 */
extern unsigned char LAB_00330954; /* 0x330954 */
extern unsigned char LAB_00330978; /* 0x330978 */
extern int DAT_0057f658; /* 0x57f658 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_0022677c. */
extern int FUN_004cee68(void);


void FUN_00301848(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  temp_v0 = 0x5a0;
  FUN_0016007c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_004cee68();
  }
  DAT_0057f658 = temp_v1;
  if (param_1 != (unsigned int *)0x0) {
    *(unsigned int *)(temp_v1 + 0x548) = *param_1;
    *(unsigned int *)(temp_v1 + 0x54c) = param_1[1];
    *(unsigned int *)(temp_v1 + 0x550) = param_1[2];
    *(unsigned int *)(temp_v1 + 0x554) = param_1[3];
    *(unsigned char *)(temp_v1 + 8) = 0;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 8) = 1;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    FUN_0022677c(0,0xff);
    FUN_0022677c(1,0xff);
  }
  puVar3 = &LAB_0030199c;
  FUN_0014e38c(&LAB_0030199c,4,0,0,&LAB_002e5900,0,0);
  *(unsigned char **)(temp_v1 + 4) = puVar3;
  FUN_0015155c(&LAB_003019b0,0x75,0,0,&LAB_00330934,0,0,puVar3);
  FUN_0015155c(&LAB_003019b0,0x77,0,0,&LAB_00330954,0,0,*(unsigned int *)(temp_v1 + 4));
  FUN_0015155c(&LAB_003019b0,0xd3,0,0,&LAB_00330978,0,0,*(unsigned int *)(temp_v1 + 4));
  FUN_0015155c(&LAB_003019c8,0xeb,0,0,&LAB_0033092c,0,0,*(unsigned int *)(temp_v1 + 4));
  return;
}

} /* extern "C" */
