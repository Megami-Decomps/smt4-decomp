/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269cc8` (_code @ 0x269cc8, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001e4640; /* 0x1e4640 */
extern unsigned char LAB_0020ec04; /* 0x20ec04 */
extern unsigned char LAB_00269df4; /* 0x269df4 */
extern unsigned char LAB_00269e08; /* 0x269e08 */
extern unsigned char LAB_00269e18; /* 0x269e18 */
extern unsigned char LAB_002c9d40; /* 0x2c9d40 */
extern unsigned char LAB_002c9da4; /* 0x2c9da4 */
extern unsigned int *DAT_0043da10; /* 0x43da10 */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00269cc8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  FUN_002c583c(0);
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x20,1);
  DAT_0043da10 = puVar1;
  *(unsigned char *)((int)puVar1 + 0xd) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar1[4] = 1;
  *(unsigned char *)(puVar1 + 5) = 1;
  puVar2 = &LAB_00269df4;
  FUN_002c5978(&LAB_00269df4,2,0,0,&LAB_001e4640,&LAB_002c9d40,puVar1);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_00269e08;
  FUN_002c4c00(&LAB_00269e08,0x6f,1,0,&LAB_0020ec04,0,DAT_0043da10,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  puVar2 = &LAB_00269e18;
  FUN_002c4c00(&LAB_00269e18,0xe6,1,0,&LAB_002c9da4,0,DAT_0043da10,*puVar1);
  puVar1[2] = (unsigned int)puVar2;
  return;
}
