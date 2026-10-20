/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020e5f0` (_code @ 0x20e5f0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0016007c(...);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0020e698; /* 0x20e698 */
extern int FUN_002681b0(...); /* 0x2681b0 */
extern unsigned char LAB_002ef9ec; /* 0x2ef9ec */
extern unsigned int *DAT_00588e2c; /* 0x588e2c */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0016007c. */
extern int *FUN_00408770(void);


void FUN_0020e5f0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int *piVar4;
  
  puVar1 = (unsigned int *)0x10;
  FUN_0016007c();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[2] = 0;
    *(unsigned char *)(puVar1 + 1) = 0;
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  puVar2 = &LAB_0020e698;
  DAT_00588e2c = puVar1;
  FUN_0014e38c(&LAB_0020e698,4,0,0,FUN_002681b0,&LAB_002ef9ec,0);
  *puVar1 = (unsigned int)puVar2;
  temp_v0 = 0xc;
  FUN_0016007c();
  piVar4 = (int *)0x0;
  if (temp_v0 != 0) {
    piVar4 = (int *)FUN_00408770();
  }
  puVar1[2] = (unsigned int)piVar4;
  (**(romwright_code **)(*piVar4 + 8))();
  *(unsigned char *)(puVar1 + 1) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  return;
}

} /* extern "C" */
