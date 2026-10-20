/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4748` (_code @ 0x3c4748, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a358(...);
int FUN_0022a3a8(...);
int FUN_0025c2ec(unsigned int, int);
int asdListBoxAddItems(void);
int FUN_0025c58c(unsigned int, int, int);
int FUN_00262914(unsigned int, unsigned char *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c49a0; /* 0x3c49a0 */
extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_0022a358. */
/* Supplied declaration required: FUN_0022a3a8. */
/* Supplied declaration required: FUN_0025c2ec. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */


void FUN_003c4748(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  FUN_0025c58c(temp_v0,0x73,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  asdListBoxAddItems();
  FUN_0025c2ec(*(unsigned int *)(param_1 + 0x10),1);
  FUN_00262914(*(unsigned int *)(param_1 + 0x10),&LAB_003c49a0);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),0,0xfffffc19,999);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),1,0xfffffc19,999);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),2,0xfffffc19,999);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),3,*(unsigned int *)(DAT_004398d4 + 0x40),0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),4,*(unsigned int *)(DAT_004398d4 + 0x44),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),5,*(unsigned int *)(DAT_004398d4 + 0x48),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),6,*(unsigned int *)(DAT_004398d4 + 0x4c),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),7,*(unsigned int *)(DAT_004398d4 + 0x50),0,10000,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),8,*(unsigned int *)(DAT_004398d4 + 0x54),0,10000,0);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),9,0,10);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),10,*(unsigned int *)(DAT_004398d4 + 0x5c),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xb,*(unsigned int *)(DAT_004398d4 + 0x60),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xc,*(unsigned int *)(DAT_004398d4 + 100),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xd,*(unsigned int *)(DAT_004398d4 + 0x68),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xe,*(unsigned int *)(DAT_004398d4 + 0x6c),0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xf,*(unsigned int *)(DAT_004398d4 + 0x70),0,0xff,0);
  return;
}

} /* extern "C" */
