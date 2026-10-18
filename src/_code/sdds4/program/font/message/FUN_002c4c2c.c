/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4c2c` (_code @ 0x2c4c2c, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_00114374(); /* 0x114374 */
extern int FUN_00116954(); /* 0x116954 */
extern unsigned char LAB_002c4dfc; /* 0x2c4dfc */
extern unsigned char LAB_002c4e08; /* 0x2c4e08 */

/* Supplied declaration required: FUN_001182c0. */
/* Supplied declaration required: FUN_002bc2c4. */
/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


/* WARNING: Removing unreachable block (ram,0x002c58e0) */

void FUN_002c4c2c(void)

{
/* irregular: 10 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  
  piVar1 = (int *)FUN_002c4b84(0x100,0x100,0,0xa3c,1);
  FUN_002c4b30(piVar1,0xa3c);
  *(unsigned char *)((int)piVar1 + 0xa11) = 0x14;
  FUN_002bc2c4();
  temp_v0 = FUN_002bda1c(0);
  piVar1[1] = temp_v0;
  FUN_002bda10(temp_v0,0x320202ff);
  FUN_001182c0(piVar1[1],3,0xffffffff);
  FUN_002bda00(piVar1[1],0,0x646464ff);
  *(unsigned char *)(piVar1 + 2) = 0;
  *(unsigned char *)(piVar1 + 0xd) = 0;
  *(unsigned char *)((int)piVar1 + 0x35) = 0;
  *(unsigned char *)((int)piVar1 + 0xa26) = 1;
  *(unsigned char *)((int)piVar1 + 0x32) = 0;
  *(unsigned char *)((int)piVar1 + 0x7d) = 0;
  *(unsigned char *)((int)piVar1 + 0x7e) = 0;
  *(unsigned char *)((int)piVar1 + 0x33) = 0;
  piVar1[0x28e] = -2;
  puVar3 = &LAB_002c4dfc;
  FUN_002c5978(&LAB_002c4dfc,2,0,0,FUN_00114374,0,piVar1);
  *piVar1 = (int)puVar3;
  puVar4 = &LAB_002c4e08;
  FUN_002c4c00(&LAB_002c4e08,0x81,0,0,FUN_00116954,0,piVar1,puVar3);
  temp_v0 = *piVar1;
  *(unsigned char **)(temp_v0 + 0x18) = puVar4;
  *(unsigned char *)(temp_v0 + 2) = 1;
  return;
}
