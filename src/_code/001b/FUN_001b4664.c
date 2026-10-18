/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4664` (_code @ 0x1b4664, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420420; /* 0x420420 */
extern unsigned int *DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049fa98; /* 0x49fa98 */
extern unsigned int DAT_0049fa9c; /* 0x49fa9c */
extern unsigned int DAT_0049faa0; /* 0x49faa0 */
extern unsigned int DAT_0049faa4; /* 0x49faa4 */
extern unsigned int DAT_0049faa8; /* 0x49faa8 */
extern unsigned short DAT_0049fab0; /* 0x49fab0 */
extern unsigned char DAT_0049fab4; /* 0x49fab4 */
extern unsigned char DAT_0049fab5; /* 0x49fab5 */
extern unsigned char DAT_0049fab6; /* 0x49fab6 */
extern unsigned char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fac4; /* 0x49fac4 */
extern unsigned int DAT_0049fac8; /* 0x49fac8 */
extern unsigned int DAT_0049facc; /* 0x49facc */
extern unsigned int DAT_0049fad0; /* 0x49fad0 */

extern unsigned int *FUN_00294a98(void);
/* Supplied declaration required: FUN_002c23f8. */


void FUN_001b4664(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  
  puVar2 = DAT_00447e88;
  temp_v1 = 0;
  puVar3 = DAT_00447e88 + 0x12;
  *DAT_00447e88 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(unsigned char *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  puVar2[7] = 0x41200000;
  puVar2[8] = 0;
  puVar2[9] = 0x41200000;
  puVar2[10] = puVar2[7];
  puVar2[0xb] = 0;
  puVar2[0xc] = 0x41200000;
  puVar2[0x10] = puVar2[7];
  puVar2[0x11] = 0;
  *puVar3 = 0x41200000;
  puVar2[0x13] = 0xc2b40000;
  puVar2[0x14] = 0xc2b40000;
  puVar2[0x1a] = 0;
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
  temp_v0 = 0x100;
  FUN_002c23f8();
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_00294a98();
    *puVar2 = (unsigned int)&DAT_00420420;
  }
  puVar3 = DAT_00447e88;
  DAT_00447e88[0x65] = (unsigned int)puVar2;
  *(unsigned char *)(puVar3 + 0x66) = 0;
  puVar3[0x67] = 0;
  puVar3[0x68] = 0;
  puVar3[0x69] = 0;
  puVar3[0x6a] = 0;
  puVar3[0x6b] = 0;
  puVar3[0x6c] = 0;
  *(unsigned short *)(puVar3 + 0x6d) = 0;
  *(unsigned short *)((int)puVar3 + 0x1b6) = 0;
  *(unsigned short *)(puVar3 + 0x6e) = 0;
  puVar3[0x59] = 0;
  puVar3[0x62] = 0;
  puVar3[0x5d] = 0;
  puVar3[0x5e] = 0;
  puVar3[0x5f] = 0;
  *(unsigned char *)(puVar3 + 0x60) = 0;
  *(unsigned char *)((int)puVar3 + 0x181) = 0;
  *(unsigned char *)((int)puVar3 + 0x182) = 0;
  *(unsigned char *)((int)puVar3 + 0x183) = 0;
  *(unsigned char *)(puVar3 + 0x61) = 0;
  puVar3[99] = 0xffffffff;
  puVar3[0x5c] = 0;
  puVar3[100] = 0;
  DAT_0049fa98 = 0;
  DAT_0049fa9c = temp_v1;
  DAT_0049faa0 = temp_v1;
  DAT_0049faa4 = temp_v1;
  DAT_0049faa8 = temp_v1;
  DAT_0049fab0 = 0;
  DAT_0049fab4 = 0;
  DAT_0049fab5 = 0;
  DAT_0049fab6 = 0;
  DAT_0049fabc = 0;
  DAT_0049fac0 = 0;
  DAT_0049fac4 = temp_v1;
  DAT_0049fac8 = temp_v1;
  DAT_0049facc = temp_v1;
  DAT_0049fad0 = temp_v1;
  return;
}
