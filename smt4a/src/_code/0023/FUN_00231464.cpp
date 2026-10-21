/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231464` (_code @ 0x231464, 0xec bytes) from smt4a.cxi.
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

extern int jobDestroyGlobal(...); /* 0x2e5b68 */
extern unsigned char LAB_002e5ba0; /* 0x2e5ba0 */
extern unsigned char LAB_00330a58; /* 0x330a58 */
extern unsigned char LAB_00330a60; /* 0x330a60 */
extern unsigned int *DAT_0057f678; /* 0x57f678 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */


void FUN_00231464(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  puVar1 = (unsigned int *)0x3c;
  asdOperatorNew();
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *(unsigned char *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  pcVar2 = "GAME_OVER_BASE PROC";
  DAT_0057f678 = puVar1;
  asdProcessCreateSimple("GAME_OVER_BASE PROC",4,0,0,&LAB_002e5ba0,jobDestroyGlobal,0);
  *puVar1 = (unsigned int)pcVar2;
  taskCreateDraw("GAME_OVER UL",0x7e,0,0,&LAB_00330a60,0,0,pcVar2);
  taskCreateDraw("GAME_OVER UR",0xda,0,0,&LAB_00330a60,0,0,*puVar1);
  taskCreateDraw("GAME_OVER DD",0xeb,0,0,&LAB_00330a58,0,0,*puVar1);
  return;
}

} /* extern "C" */
