/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3b30` (_code @ 0x1b3b30, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_001b3c0c; /* 0x1b3c0c */
extern unsigned char LAB_001b3c1c; /* 0x1b3c1c */
extern unsigned char LAB_001c0300; /* 0x1c0300 */
extern int FUN_001e9728(); /* 0x1e9728 */
extern unsigned char LAB_0020fd44; /* 0x20fd44 */
extern unsigned int *DAT_00446d78; /* 0x446d78 */

/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001b3b30(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_002c54f0(0x10000,0x100,0,0xc,1);
  DAT_00446d78 = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar2 = &LAB_001b3c0c;
  FUN_002c5978(&LAB_001b3c0c,2,0,0,&LAB_001c0300,&LAB_0020fd44,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001b3c1c,0x84,0,0,FUN_001e9728,0,0,puVar2);
  return;
}
