/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ac90` (_code @ 0x24ac90, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(unsigned int);

extern int g_mapIf; /* 0x447a78 */

/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_0024ac90(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = g_mapIf;
  puVar2 = (unsigned char *)(g_mapIf + 0xcc50);
  asdMdlManagerDestroy(*(unsigned int *)(g_mapIf + 0xcc6c));
  *(unsigned int *)(temp_v0 + 0xcc6c) = 0;
  *puVar2 = 0;
  return;
}

} /* extern "C" */
