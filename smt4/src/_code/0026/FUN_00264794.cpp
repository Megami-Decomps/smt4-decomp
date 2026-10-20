/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00264794` (_code @ 0x264794, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_lmapMainState; /* 0x447060 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern unsigned int DAT_0049fc38; /* 0x49fc38 */
extern unsigned int DAT_0049fc3c; /* 0x49fc3c */
extern unsigned int DAT_0049fc40; /* 0x49fc40 */
extern unsigned int DAT_0049fc44; /* 0x49fc44 */
extern unsigned int DAT_0049fc48; /* 0x49fc48 */
extern unsigned int DAT_0049fc4c; /* 0x49fc4c */


void FUN_00264794(void)

{
  DAT_0049fc14 = 1;
  DAT_0049fc18 = *(unsigned int *)(g_lmapMainState + 0x40);
  DAT_0049fc1c = *(unsigned int *)(g_lmapMainState + 0x48);
  DAT_0049fc20 = DAT_0049f924;
  DAT_0049fc24 = *(unsigned int *)(g_lmapScene + 0x1c);
  DAT_0049fc28 = *(unsigned int *)(g_lmapScene + 0x20);
  DAT_0049fc2c = *(unsigned int *)(g_lmapScene + 0x24);
  DAT_0049fc30 = *(unsigned int *)(g_lmapScene + 0x4c);
  DAT_0049fc38 = *(unsigned int *)(g_lmapMainState + 0x40);
  DAT_0049fc3c = *(unsigned int *)(g_lmapMainState + 0x48);
  DAT_0049fc40 = *(unsigned int *)(g_lmapScene + 0x1c);
  DAT_0049fc44 = *(unsigned int *)(g_lmapScene + 0x20);
  DAT_0049fc48 = *(unsigned int *)(g_lmapScene + 0x24);
  DAT_0049fc4c = *(unsigned int *)(g_lmapScene + 0x4c);
  return;
}

} /* extern "C" */
