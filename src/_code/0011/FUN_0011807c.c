/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011807c` (_code @ 0x11807c, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00118170; /* 0x118170 */
extern unsigned char LAB_00118180; /* 0x118180 */
extern unsigned char LAB_0011818c; /* 0x11818c */
extern unsigned char LAB_001250fc; /* 0x1250fc */
extern int FUN_00125d88(); /* 0x125d88 */
extern int FUN_00126344(); /* 0x126344 */
extern unsigned int *DAT_0044e2e8; /* 0x44e2e8 */

/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0011807c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x90,1);
  DAT_0044e2e8 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_002be7fc(puVar1 + 4,&LAB_00118170,"May  1 2013");
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_00118180;
  FUN_002c5978(&LAB_00118180,2,0,0,&LAB_001250fc,FUN_00126344,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_0011818c,0x73,0,0,FUN_00125d88,0,0,puVar2);
  return;
}
