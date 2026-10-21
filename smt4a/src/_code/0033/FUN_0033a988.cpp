/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a988` (_code @ 0x33a988, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1610; /* 0x5f1610 */

extern unsigned char *gameFlagsGetBlock(void);


void FUN_0033a988(void)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned char temp_v2;
  
  puVar3 = (unsigned char *)gameFlagsGetBlock();
  temp_v2 = DAT_005f1610;
  *puVar3 = (char)DAT_005f1610;
  temp_v0 = (unsigned char)g_gameState;
  if (temp_v2 == 1) {
    puVar3[1] = temp_v0;
    puVar3[2] = (char)DAT_005f1600;
    *(unsigned int *)(puVar3 + 0xe0c) = DAT_005f1604;
    temp_v1 = g_lmapScene;
    *(unsigned int *)(puVar3 + 4) = *(unsigned int *)(g_lmapScene + 0x1c);
    *(unsigned int *)(puVar3 + 8) = *(unsigned int *)(temp_v1 + 0x20);
    *(unsigned int *)(puVar3 + 0xc) = *(unsigned int *)(temp_v1 + 0x24);
    *(unsigned int *)(puVar3 + 0x10) = *(unsigned int *)(temp_v1 + 0x50);
    *(unsigned int *)(puVar3 + 0x14) = *(unsigned int *)(g_lmapView + 0x18);
    return;
  }
  if (temp_v2 != 2) {
    if (temp_v2 == 3) {
      puVar3[1] = temp_v0;
      puVar3[2] = (char)DAT_005f1600;
      *(unsigned int *)(puVar3 + 0xe0c) = 0xffffffff;
    }
    return;
  }
  puVar3[1] = temp_v0;
  puVar3[2] = (char)DAT_005f1600;
  *(unsigned int *)(puVar3 + 0xe0c) = DAT_005f1604;
  temp_v1 = g_lmapScene;
  *(unsigned int *)(puVar3 + 4) = *(unsigned int *)(g_lmapScene + 0x1c);
  *(unsigned int *)(puVar3 + 8) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(puVar3 + 0xc) = *(unsigned int *)(temp_v1 + 0x24);
  return;
}

} /* extern "C" */
