/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c75c0` (_code @ 0x2c75c0, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdOperatorNew(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_002681b0(...); /* 0x2681b0 */
extern unsigned char LAB_002a60c8; /* 0x2a60c8 */
extern unsigned char LAB_002ef9ec; /* 0x2ef9ec */
extern unsigned char LAB_002efa8c; /* 0x2efa8c */
extern unsigned int *DAT_00588e2c; /* 0x588e2c */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */


void FUN_002c75c0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  puVar1 = (unsigned int *)0x10;
  asdOperatorNew();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[2] = 0;
    *(unsigned char *)(puVar1 + 1) = 0;
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  pcVar2 = "SAVELOAD_UI C";
  DAT_00588e2c = puVar1;
  asdProcessCreateSimple("SAVELOAD_UI C",4,0,0,FUN_002681b0,&LAB_002ef9ec,0);
  *puVar1 = (unsigned int)pcVar2;
  taskCreateDraw("SAVELOAD_UI UD",0x83,0,0,&LAB_002a60c8,0,0,pcVar2);
  taskCreateDraw("SAVELOAD_UI UDD",0xdf,0,0,&LAB_002a60c8,0,0,*puVar1);
  taskCreateDraw("SAVELOAD_UI D",0xec,0,0,&LAB_002efa8c,0,0,*puVar1);
  return;
}

} /* extern "C" */
