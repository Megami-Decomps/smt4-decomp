/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb674` (_code @ 0x2eb674, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00270f70(unsigned int *);

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_mapMain; /* 0x447e28 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern unsigned int DAT_0049f9b0; /* 0x49f9b0 */
extern unsigned int DAT_0049f9b4; /* 0x49f9b4 */
extern unsigned int DAT_0049f9b8; /* 0x49f9b8 */
extern signed char DAT_0049fba0; /* 0x49fba0 */
extern unsigned char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern unsigned int DAT_0049fc34; /* 0x49fc34 */
extern unsigned int DAT_0049fc38; /* 0x49fc38 */
extern unsigned int DAT_0049fc3c; /* 0x49fc3c */
extern unsigned int DAT_0049fc40; /* 0x49fc40 */
extern unsigned int DAT_0049fc44; /* 0x49fc44 */
extern unsigned int DAT_0049fc48; /* 0x49fc48 */
extern unsigned int DAT_0049fc4c; /* 0x49fc4c */
extern unsigned int DAT_0049fc50; /* 0x49fc50 */

/* Supplied declaration required: FUN_00270f70. */


void FUN_002eb674(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_mapMain;
  if (DAT_0049fba0 != '\0') {
    DAT_0049fba0 = '\0';
  }
  else {
    FUN_00270f70(&DAT_0049f9b0);
    DAT_0049fc14 = 1;
    DAT_0049fc18 = *(unsigned int *)(temp_v0 + 0x2c);
    DAT_0049fc1c = *(unsigned int *)(temp_v0 + 0x30);
    DAT_0049fc20 = DAT_0049f924;
    DAT_0049fc24 = *(unsigned int *)(g_lmapScene + 0x1c);
    DAT_0049fc28 = *(unsigned int *)(g_lmapScene + 0x20);
    DAT_0049fc2c = *(unsigned int *)(g_lmapScene + 0x24);
    DAT_0049fc30 = *(unsigned int *)(g_lmapScene + 0x4c);
    DAT_0049fc34 = *(unsigned int *)(DAT_004474f4 + 0x18);
    DAT_0049fc38 = *(unsigned int *)(temp_v0 + 0x2c);
    DAT_0049fc3c = *(unsigned int *)(temp_v0 + 0x30);
    DAT_0049fc40 = DAT_0049f9b0;
    DAT_0049fc44 = DAT_0049f9b4;
    DAT_0049fc48 = DAT_0049f9b8;
    DAT_0049fc4c = DAT_0049f9ac;
    DAT_0049fc50 = DAT_0049f9ac;
  }
  return;
}

} /* extern "C" */
