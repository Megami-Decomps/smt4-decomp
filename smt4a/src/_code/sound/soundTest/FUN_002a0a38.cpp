/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0a38` (_code @ 0x2a0a38, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0029ef78(...); /* 0x29ef78 */
extern unsigned char LAB_002a0b28; /* 0x2a0b28 */
extern unsigned char LAB_002a0b38; /* 0x2a0b38 */
extern unsigned char LAB_0032afe4; /* 0x32afe4 */
extern unsigned char LAB_0032affc; /* 0x32affc */
extern unsigned char LAB_0037a114; /* 0x37a114 */
extern unsigned int *DAT_00588fc8; /* 0x588fc8 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */


void FUN_002a0a38(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x14,1);
  DAT_00588fc8 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_002a0b28;
  asdProcessCreateSimple(&LAB_002a0b28,4,0,0,FUN_0029ef78,&LAB_0032afe4,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_002a0b38,0xea,0,0,&LAB_0032affc,&LAB_0037a114,0,puVar2);
  return;
}

} /* extern "C" */
