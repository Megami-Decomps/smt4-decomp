/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002758d8` (_code @ 0x2758d8, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int g_gameState; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned int DAT_0049f930; /* 0x49f930 */

extern unsigned char *gameGetMapBlock(void);


void FUN_002758d8(void)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned char temp_v2;
  
  puVar3 = (unsigned char *)gameGetMapBlock();
  temp_v2 = DAT_0049f930;
  *puVar3 = (char)DAT_0049f930;
  temp_v0 = (unsigned char)g_gameState;
  if (temp_v2 == 1) {
    puVar3[1] = temp_v0;
    puVar3[2] = (char)DAT_0049f920;
    *(unsigned int *)(puVar3 + 0xdd8) = DAT_0049f924;
    temp_v1 = g_lmapScene;
    *(unsigned int *)(puVar3 + 4) = *(unsigned int *)(g_lmapScene + 0x1c);
    *(unsigned int *)(puVar3 + 8) = *(unsigned int *)(temp_v1 + 0x20);
    *(unsigned int *)(puVar3 + 0xc) = *(unsigned int *)(temp_v1 + 0x24);
    *(unsigned int *)(puVar3 + 0x10) = *(unsigned int *)(temp_v1 + 0x50);
    *(unsigned int *)(puVar3 + 0x14) = *(unsigned int *)(DAT_004474f4 + 0x18);
    return;
  }
  if (temp_v2 != 2) {
    if (temp_v2 == 3) {
      puVar3[1] = temp_v0;
      puVar3[2] = (char)DAT_0049f920;
      *(unsigned int *)(puVar3 + 0xdd8) = 0xffffffff;
    }
    return;
  }
  puVar3[1] = temp_v0;
  puVar3[2] = (char)DAT_0049f920;
  *(unsigned int *)(puVar3 + 0xdd8) = DAT_0049f924;
  temp_v1 = g_lmapScene;
  *(unsigned int *)(puVar3 + 4) = *(unsigned int *)(g_lmapScene + 0x1c);
  *(unsigned int *)(puVar3 + 8) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(puVar3 + 0xc) = *(unsigned int *)(temp_v1 + 0x24);
  return;
}

} /* extern "C" */
