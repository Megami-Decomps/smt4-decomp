/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ea808` (_code @ 0x1ea808, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001e9518(); /* 0x1e9518 */
extern unsigned char LAB_001ea8f8; /* 0x1ea8f8 */
extern unsigned char LAB_001ea908; /* 0x1ea908 */
extern unsigned char LAB_002ca68c; /* 0x2ca68c */
extern unsigned char LAB_002ca6a4; /* 0x2ca6a4 */
extern unsigned char LAB_002f4aec; /* 0x2f4aec */
extern unsigned int *DAT_0044e110; /* 0x44e110 */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001ea808(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x14,1);
  DAT_0044e110 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_001ea8f8;
  FUN_002c5978(&LAB_001ea8f8,2,0,0,FUN_001e9518,&LAB_002ca68c,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001ea908,0xe6,0,0,&LAB_002ca6a4,&LAB_002f4aec,0,puVar2);
  return;
}
