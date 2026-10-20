/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243d90` (_code @ 0x243d90, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAlloc(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00243e6c; /* 0x243e6c */
extern unsigned char LAB_00243e7c; /* 0x243e7c */
extern unsigned char LAB_0025c7e4; /* 0x25c7e4 */
extern int FUN_0029f188(...); /* 0x29f188 */
extern unsigned char LAB_002e0548; /* 0x2e0548 */
extern unsigned int *DAT_0057ffbc; /* 0x57ffbc */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAlloc. */


void FUN_00243d90(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x18,1);
  DAT_0057ffbc = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar2 = &LAB_00243e6c;
  asdProcessCreateSimple(&LAB_00243e6c,4,0,0,&LAB_0025c7e4,&LAB_002e0548,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_00243e7c,0x89,0,0,FUN_0029f188,0,0,puVar2);
  return;
}

} /* extern "C" */
