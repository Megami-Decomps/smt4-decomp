/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf464` (_code @ 0x2bf464, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadSprites(int);
int FUN_0014afd0(int, int);
int asdLoadFileSyncDefault(void);
int FUN_00318794(void);

extern unsigned char LAB_002bf4d4; /* 0x2bf4d4 */
extern unsigned char LAB_002bf4e4; /* 0x2bf4e4 */
extern signed char DAT_0057f0c5; /* 0x57f0c5 */
extern unsigned char *DAT_0057f0cc; /* 0x57f0cc */
extern unsigned char *DAT_0057f0d0; /* 0x57f0d0 */

/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: FUN_00318794. */


void FUN_002bf464(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  
  if (DAT_0057f0c5 < '\x01') {
    asdTMTexTableLoadSprites(10);
    FUN_0014afd0(10,0);
    FUN_00318794();
    if (DAT_0057f0cc == (unsigned char *)0x0) {
      puVar1 = &LAB_002bf4d4;
      asdLoadFileSyncDefault();
      DAT_0057f0cc = puVar1;
    }
    if (DAT_0057f0d0 == (unsigned char *)0x0) {
      puVar1 = &LAB_002bf4e4;
      asdLoadFileSyncDefault();
      DAT_0057f0d0 = puVar1;
    }
  }
  DAT_0057f0c5 = DAT_0057f0c5 + '\x01';
  return;
}

} /* extern "C" */
