/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ea8fc` (_code @ 0x1ea8fc, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001e960c(...); /* 0x1e960c */
extern unsigned char LAB_001ea9e8; /* 0x1ea9e8 */
extern unsigned char LAB_001ea9f8; /* 0x1ea9f8 */
extern unsigned char LAB_002ca6e0; /* 0x2ca6e0 */
extern unsigned char LAB_002ca6f8; /* 0x2ca6f8 */
extern unsigned char LAB_002f4b34; /* 0x2f4b34 */
extern unsigned int *DAT_0044e110; /* 0x44e110 */

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_001ea8fc(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x14,1);
  DAT_0044e110 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_001ea9e8;
  FUN_002c5788(&LAB_001ea9e8,2,0,0,FUN_001e960c,&LAB_002ca6e0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_001ea9f8,0xe6,0,0,&LAB_002ca6f8,&LAB_002f4b34,0,puVar2);
  return;
}

} /* extern "C" */
