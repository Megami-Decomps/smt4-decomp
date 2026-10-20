/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002496b8` (_code @ 0x2496b8, 0x288 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);

extern unsigned char DAT_00557c60; /* 0x557c60 */
extern unsigned int *g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f17ac; /* 0x5f17ac */
extern unsigned int DAT_005f17b0; /* 0x5f17b0 */
extern unsigned int DAT_005f17b4; /* 0x5f17b4 */
extern unsigned int DAT_005f17b8; /* 0x5f17b8 */
extern unsigned int DAT_005f17bc; /* 0x5f17bc */
extern unsigned short DAT_005f17c4; /* 0x5f17c4 */
extern unsigned char DAT_005f17c8; /* 0x5f17c8 */
extern unsigned char DAT_005f17c9; /* 0x5f17c9 */
extern unsigned char DAT_005f17ca; /* 0x5f17ca */
extern unsigned char DAT_005f17d0; /* 0x5f17d0 */
extern unsigned int DAT_005f17d4; /* 0x5f17d4 */
extern unsigned int DAT_005f17d8; /* 0x5f17d8 */
extern unsigned int DAT_005f17dc; /* 0x5f17dc */
extern unsigned int DAT_005f17e0; /* 0x5f17e0 */
extern unsigned int DAT_005f17e4; /* 0x5f17e4 */
extern unsigned char DAT_005f19d4; /* 0x5f19d4 */
extern unsigned int DAT_005f19d8; /* 0x5f19d8 */
extern unsigned int DAT_005f19dc; /* 0x5f19dc */
extern unsigned int DAT_005f19e0; /* 0x5f19e0 */
extern unsigned int DAT_005f19e4; /* 0x5f19e4 */
extern unsigned short DAT_005f19e8; /* 0x5f19e8 */

/* Supplied declaration required: asdOperatorNew. */
extern unsigned int *FUN_003e5d10(void);


void FUN_002496b8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  puVar2 = g_lmapScene;
  temp_v2 = 0;
  puVar3 = g_lmapScene + 10;
  *g_lmapScene = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(unsigned char *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  puVar2[7] = 0x41200000;
  puVar2[8] = 0;
  puVar2[9] = 0x41200000;
  temp_v1 = puVar2[7];
  puVar2[0xc] = 0x41200000;
  *puVar3 = temp_v1;
  puVar2[0xb] = 0;
  puVar2[0x12] = 0x41200000;
  puVar2[0x13] = 0xc2b40000;
  puVar2[0x14] = 0xc2b40000;
  puVar2[0x1a] = 0;
  puVar2[0x10] = temp_v1;
  puVar2[0x11] = 0;
  *(unsigned char *)(puVar2 + 0x1b) = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0x40a00000;
  *(unsigned char *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  *(unsigned char *)(puVar2 + 0x22) = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x57] = 0x42c80000;
  puVar2[0x58] = 0x447a0000;
  *(unsigned char *)(puVar2 + 0x4d) = 1;
  temp_v0 = 0x130;
  asdOperatorNew();
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_003e5d10();
    *puVar2 = (unsigned int)&DAT_00557c60;
  }
  puVar3 = g_lmapScene;
  g_lmapScene[0x6a] = (unsigned int)puVar2;
  *(unsigned char *)(puVar3 + 0x6b) = 0;
  puVar3[0x6c] = 0;
  puVar3[0x6d] = 0;
  puVar3[0x6e] = 0;
  puVar3[0x6f] = 0;
  puVar3[0x70] = 0;
  puVar3[0x71] = 0;
  *(unsigned short *)(puVar3 + 0x72) = 0;
  *(unsigned short *)((int)puVar3 + 0x1ca) = 0;
  *(unsigned short *)(puVar3 + 0x73) = 0;
  puVar3[0x5c] = 0;
  *(unsigned short *)((int)puVar3 + 0x19a) = 0;
  *(unsigned short *)(puVar3 + 0x67) = 0;
  puVar3[0x5d] = 0;
  puVar3[0x5e] = 0;
  puVar3[0x5f] = 0;
  puVar3[0x61] = 0;
  puVar3[0x62] = 0;
  puVar3[0x60] = 0;
  puVar3[99] = 0;
  puVar3[100] = 0;
  *(unsigned char *)(puVar3 + 0x65) = 0;
  *(unsigned char *)((int)puVar3 + 0x195) = 0;
  *(unsigned char *)((int)puVar3 + 0x196) = 0;
  *(unsigned char *)((int)puVar3 + 0x197) = 0;
  *(unsigned char *)(puVar3 + 0x66) = 0;
  puVar3[0x5b] = 0;
  puVar3[0x68] = 0xffffffff;
  puVar3[0x69] = 0;
  puVar3[0x75] = 0;
  puVar3[0x79] = temp_v2;
  puVar3[0x7a] = temp_v2;
  puVar3[0x7b] = temp_v2;
  puVar3[0x7f] = temp_v2;
  puVar3[0x80] = temp_v2;
  puVar3[0x81] = temp_v2;
  puVar3[0x7c] = temp_v2;
  puVar3[0x7d] = temp_v2;
  puVar3[0x7e] = temp_v2;
  puVar3[0x76] = temp_v2;
  puVar3[0x77] = temp_v2;
  puVar3[0x78] = temp_v2;
  puVar3[0x82] = temp_v2;
  puVar3[0x83] = temp_v2;
  puVar3[0x84] = temp_v2;
  puVar3[0x74] = 0;
  *(unsigned char *)(puVar3 + 0x85) = 0;
  *(unsigned char *)(puVar3 + 0x89) = 0;
  puVar3[0x8a] = 0;
  *(unsigned char *)(puVar3 + 0x8b) = 0;
  puVar3[0x8c] = 0;
  puVar3[0x8e] = 0;
  *(unsigned char *)(puVar3 + 0x8f) = 0;
  *(unsigned char *)((int)puVar3 + 0x23d) = 0;
  puVar3[0x90] = temp_v2;
  puVar3[0x91] = temp_v2;
  puVar3[0x9a] = 0;
  puVar3[0x9b] = 0;
  puVar3[0x9c] = 0;
  puVar3[0x87] = temp_v2;
  puVar3[0x9d] = 0;
  puVar3[0x9e] = 0;
  puVar3[0x9f] = 0;
  puVar3[0x92] = 0;
  puVar3[0x93] = 0;
  puVar3[0x94] = 0;
  puVar3[0x98] = temp_v2;
  puVar3[0x99] = 0;
  DAT_005f17ac = 0;
  DAT_005f17c4 = 0;
  DAT_005f17c8 = 0;
  DAT_005f17c9 = 0;
  DAT_005f17ca = 0;
  DAT_005f17d0 = 0;
  DAT_005f17d4 = 0;
  DAT_005f19d4 = 0;
  DAT_005f19e8 = 0;
  DAT_005f17b0 = temp_v2;
  DAT_005f17b4 = temp_v2;
  DAT_005f17b8 = temp_v2;
  DAT_005f17bc = temp_v2;
  DAT_005f17d8 = temp_v2;
  DAT_005f17dc = temp_v2;
  DAT_005f17e0 = temp_v2;
  DAT_005f17e4 = temp_v2;
  DAT_005f19d8 = temp_v2;
  DAT_005f19dc = temp_v2;
  DAT_005f19e0 = temp_v2;
  DAT_005f19e4 = temp_v2;
  puVar3[0xa0] = 0;
  puVar3[0xa1] = 0;
  puVar3[0xa2] = 0;
  puVar3[0xa3] = 0;
  puVar3[0x95] = temp_v2;
  puVar3[0x96] = temp_v2;
  puVar3[0x97] = temp_v2;
  *(unsigned char *)(puVar3 + 0xa4) = 0;
  *(unsigned char *)((int)puVar3 + 0x291) = 0;
  return;
}

} /* extern "C" */
