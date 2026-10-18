/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320c64` (_code @ 0x320c64, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0024b280(); /* 0x24b280 */
extern unsigned char LAB_002deb98; /* 0x2deb98 */
extern unsigned char LAB_00320d64; /* 0x320d64 */
extern int DAT_00570260; /* 0x570260 */
extern unsigned int *DAT_00570264; /* 0x570264 */
extern unsigned int DAT_00570268; /* 0x570268 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015f258. */
/* Supplied declaration required: FUN_00163060. */


unsigned int FUN_00320c64(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_00570264 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x5f4,1);
    DAT_00570264 = puVar1;
  }
  puVar1 = DAT_00570264;
  DAT_00570268 = 0;
  *(unsigned char *)(DAT_00570264 + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  FUN_0015f258(puVar1 + 3);
  puVar1[0x17c] = 0;
  puVar2 = &LAB_00320d64;
  FUN_0014e38c(&LAB_00320d64,4,0,0,FUN_0024b280,&LAB_002deb98,0);
  puVar1 = DAT_00570264;
  *DAT_00570264 = (unsigned int)puVar2;
  *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
  return *puVar1;
}
