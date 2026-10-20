/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3c34` (_code @ 0x1b3c34, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4a08(...);
int FUN_002c5300(...);
int FUN_002c5788(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_001b3d10; /* 0x1b3d10 */
extern unsigned char LAB_001b3d20; /* 0x1b3d20 */
extern unsigned char LAB_001c0400; /* 0x1c0400 */
extern int FUN_001e981c(...); /* 0x1e981c */
extern unsigned char LAB_0020fea8; /* 0x20fea8 */
extern unsigned int *DAT_00446d78; /* 0x446d78 */

/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_001b3c34(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_002c5300(0x10000,0x100,0,0xc,1);
  DAT_00446d78 = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar2 = &LAB_001b3d10;
  FUN_002c5788(&LAB_001b3d10,2,0,0,&LAB_001c0400,&LAB_0020fea8,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_001b3d20,0x84,0,0,FUN_001e981c,0,0,puVar2);
  return;
}

} /* extern "C" */
