/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c940` (_code @ 0x28c940, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(unsigned char *, int, int, int, unsigned char *, unsigned char *, unsigned int *);
int FUN_0015155c(...);
int FUN_00163060(int, int, int, int, int);
int FUN_00180008(int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0028ca70; /* 0x28ca70 */
extern unsigned char LAB_0028ca84; /* 0x28ca84 */
extern unsigned char LAB_0028ca94; /* 0x28ca94 */
extern unsigned char LAB_002981dc; /* 0x2981dc */
extern unsigned char LAB_002dec44; /* 0x2dec44 */
extern unsigned char LAB_00328460; /* 0x328460 */
extern unsigned char LAB_003284c4; /* 0x3284c4 */
extern unsigned int *DAT_0057f0bc; /* 0x57f0bc */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00180008. */


void FUN_0028c940(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  FUN_00180008(0);
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x20,1);
  DAT_0057f0bc = puVar1;
  *(unsigned char *)((int)puVar1 + 0xd) = 0;
  *(unsigned char *)((int)puVar1 + 0x15) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar1[4] = 1;
  *(unsigned char *)(puVar1 + 5) = 1;
  puVar2 = &LAB_0028ca70;
  FUN_0014e38c(&LAB_0028ca70,4,0,0,&LAB_002981dc,&LAB_00328460,puVar1);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_0028ca84;
  FUN_0015155c(&LAB_0028ca84,0x71,1,0,&LAB_002dec44,0,DAT_0057f0bc,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  puVar2 = &LAB_0028ca94;
  FUN_0015155c(&LAB_0028ca94,0xea,1,0,&LAB_003284c4,0,DAT_0057f0bc,*puVar1);
  puVar1[2] = (unsigned int)puVar2;
  return;
}

} /* extern "C" */
