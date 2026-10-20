/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011817c` (_code @ 0x11817c, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0011826c; /* 0x11826c */
extern unsigned char LAB_0011827c; /* 0x11827c */
extern unsigned char LAB_00118288; /* 0x118288 */
extern unsigned char LAB_001251d8; /* 0x1251d8 */
extern int FUN_00125e64(...); /* 0x125e64 */
extern int FUN_00126420(...); /* 0x126420 */
extern unsigned int *DAT_0044e2e8; /* 0x44e2e8 */

/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */


void FUN_0011817c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x90,1);
  DAT_0044e2e8 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_002be624(puVar1 + 4,&LAB_0011826c,"Jun 10 2013");
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_0011827c;
  asdProcessCreateSimple(&LAB_0011827c,2,0,0,&LAB_001251d8,FUN_00126420,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_00118288,0x73,0,0,FUN_00125e64,0,0,puVar2);
  return;
}

} /* extern "C" */
