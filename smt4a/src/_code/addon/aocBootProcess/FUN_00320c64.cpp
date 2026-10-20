/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320c64` (_code @ 0x320c64, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int FUN_0015f258(...);
int asdMemoryAllocTracked(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0024b280(...); /* 0x24b280 */
extern unsigned char LAB_002deb98; /* 0x2deb98 */
extern unsigned char LAB_00320d64; /* 0x320d64 */
extern int g_aocMain; /* 0x570260 */
extern unsigned int *g_aocBoot; /* 0x570264 */
extern unsigned int DAT_00570268; /* 0x570268 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_0015f258. */
/* Supplied declaration required: asdMemoryAllocTracked. */


unsigned int FUN_00320c64(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (g_aocBoot == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x5f4,1);
    g_aocBoot = puVar1;
  }
  puVar1 = g_aocBoot;
  DAT_00570268 = 0;
  *(unsigned char *)(g_aocBoot + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  FUN_0015f258(puVar1 + 3);
  puVar1[0x17c] = 0;
  puVar2 = &LAB_00320d64;
  asdProcessCreateSimple(&LAB_00320d64,4,0,0,FUN_0024b280,&LAB_002deb98,0);
  puVar1 = g_aocBoot;
  *g_aocBoot = (unsigned int)puVar2;
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  return *puVar1;
}

} /* extern "C" */
