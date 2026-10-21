/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303710` (_code @ 0x303710, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(unsigned char *, int);
int FUN_0014f0dc(unsigned char *, int, int, int);
int FUN_001523b8(unsigned char *, int);
int FUN_0036b824(unsigned char *);

extern int g_lmapView; /* 0x5806a4 */
extern unsigned char g_localCamera; /* 0x5f10cc */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_0036b824. */


void FUN_00303710(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = g_lmapView;
  temp_v2 = 0;
  *(unsigned int *)(g_lmapView + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  temp_v0 = g_lmapView;
  *(unsigned int *)(g_lmapView + 0x44) = 0;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  temp_v0 = g_lmapView;
  *(unsigned int *)(g_lmapView + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0x43960000;
  *(unsigned int *)(temp_v0 + 0x40) = 0x43960000;
  temp_v0 = g_lmapView;
  puVar3 = (unsigned int *)(g_lmapView + 0x48);
  temp_v1 = *(unsigned int *)(g_lmapView + 0x4c);
  *(unsigned int *)(g_lmapView + 0x5c) = *(unsigned int *)(g_lmapView + 0x44);
  *(unsigned int *)(temp_v0 + 0x60) = *puVar3;
  *(unsigned int *)(temp_v0 + 100) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
  *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x40);
  FUN_0013c884(&g_localCamera,1);
  FUN_0014f0dc(&g_localCamera,g_lmapView + 0x38,g_lmapView + 0x44,g_lmapView + 0x20);
  FUN_001523b8(&g_localCamera,1);
  FUN_0036b824(&g_localCamera);
  temp_v0 = g_lmapView;
  *(unsigned char **)(*(int *)(g_lmapView + 0x314) + 0xc) = &g_localCamera;
  *(unsigned int *)(temp_v0 + 0xa0) = 0x43fa0000;
  *(unsigned int *)(temp_v0 + 0xa4) = temp_v2;
  *(unsigned char *)(temp_v0 + 0xa8) = 1;
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  return;
}

} /* extern "C" */
