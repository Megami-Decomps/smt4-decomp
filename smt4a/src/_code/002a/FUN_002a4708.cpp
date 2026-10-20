/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4708` (_code @ 0x2a4708, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, int, int);
int taskCreateDraw(...);
int asdOperatorNew(void);
int FUN_0049d140(...);
int FUN_0049d3f0(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_002840fc; /* 0x2840fc */
extern unsigned char LAB_002a47f4; /* 0x2a47f4 */
extern unsigned char LAB_002a4804; /* 0x2a4804 */
extern unsigned char LAB_002a4810; /* 0x2a4810 */
extern unsigned char LAB_002a4820; /* 0x2a4820 */
extern unsigned char LAB_002c2b88; /* 0x2c2b88 */
extern unsigned char LAB_002c2bac; /* 0x2c2bac */
extern unsigned int *DAT_0057f240; /* 0x57f240 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_0049d140. */
/* Supplied declaration required: FUN_0049d3f0. */


void FUN_002a4708(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x478;
  asdOperatorNew();
  puVar2 = &LAB_002a47f4;
  DAT_0057f240 = puVar1;
  asdProcessCreateSimple(&LAB_002a47f4,4,0,0,&LAB_002840fc,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_002a4804,0x7e,0,0,&LAB_002c2bac,0,0,puVar2);
  taskCreateDraw(&LAB_002a4810,0xda,0,0,&LAB_002c2bac,0,0,*puVar1);
  taskCreateDraw(&LAB_002a4820,0xeb,0,0,&LAB_002c2b88,0,0,*puVar1);
  FUN_0049d3f0(puVar1);
  puVar1[0x11b] = 0;
  FUN_0049d140(puVar1,2,0);
  return;
}

} /* extern "C" */
