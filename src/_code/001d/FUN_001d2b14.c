/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2b14` (_code @ 0x1d2b14, 0x260 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001d2df4; /* 0x1d2df4 */
extern unsigned char LAB_001d2e04; /* 0x1d2e04 */
extern int FUN_001d3d40(); /* 0x1d3d40 */
extern int FUN_001fd950(); /* 0x1fd950 */
extern unsigned char LAB_0021edd4; /* 0x21edd4 */
extern unsigned char LAB_002d4fdc; /* 0x2d4fdc */
extern unsigned int *DAT_00447060; /* 0x447060 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */

/* Supplied declaration required: FUN_001b3ca0. */
/* Supplied declaration required: FUN_00280d30. */
extern int FUN_002c2b1c(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_00396534. */


void FUN_001d2b14(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar6;
  unsigned char *puVar7;
  
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x4f04,1);
  DAT_00447060 = puVar2;
  temp_v0 = FUN_002c2b1c();
  FUN_00280d30(1);
  *(unsigned char *)((int)puVar2 + 9) = 0;
  *(unsigned char *)((int)puVar2 + 10) = 0;
  *(unsigned char *)((int)puVar2 + 0xb) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar1 = DAT_00447060;
  if (DAT_00447060[0x33] != 0) {
    DAT_00447060[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
  }
  puVar2[0x32] = 0x3f800000;
  puVar2[0x31] = 0x3f800000;
  puVar2[0x10] = 0x65;
  *(unsigned short *)(puVar2 + 0x13) = 0;
  *(unsigned short *)((int)puVar2 + 0x4e) = 0;
  puVar2[0x12] = 1;
  temp_v2 = DAT_00447e88;
  *(unsigned int *)(DAT_00447e88 + 0x1c) = 0xc40a8000;
  *(unsigned int *)(temp_v2 + 0x20) = 0x3c23d70a;
  *(unsigned int *)(temp_v2 + 0x24) = 0xc5956000;
  *(unsigned int *)(temp_v2 + 0x28) = 0xc40a8000;
  *(unsigned int *)(temp_v2 + 0x2c) = 0x3c23d70a;
  *(unsigned int *)(temp_v2 + 0x30) = 0xc5956000;
  *(unsigned int *)(temp_v2 + 0x34) = 0xc40a8000;
  *(unsigned int *)(temp_v2 + 0x4c) = 0x43340000;
  *(unsigned int *)(temp_v2 + 0x50) = 0x43340000;
  *(unsigned int *)(temp_v2 + 0x38) = 0x3c23d70a;
  *(unsigned int *)(temp_v2 + 0x3c) = 0xc5956000;
  *(unsigned int *)(temp_v2 + 0x15c) = 0x447a0000;
  *(unsigned int *)(temp_v2 + 0x160) = 0x453b8000;
  puVar2[0x265] = 0;
  FUN_00396534(puVar2 + 0x3b);
  puVar2[0x37] = 0;
  *(unsigned char *)(puVar2 + 0x38) = 0;
  puVar2[0x280] = 0;
  puVar2[0x281] = 0;
  puVar2[0x282] = 0;
  puVar2[0x13ab] = 0;
  puVar2[0x13ac] = 0x42c80000;
  puVar2[0x13ad] = 0x469c4000;
  puVar2[0x13ae] = 0x41200000;
  puVar2[0x269] = 0;
  puVar2[0x26a] = 0;
  puVar2[0x26b] = 0;
  puVar2[0x26c] = 0;
  puVar2[0x26d] = 0;
  puVar2[0x26e] = 0;
  puVar2[0x279] = 0;
  puVar2[0x27a] = 0;
  puVar2[0x27b] = 0;
  puVar2[0x27c] = 0;
  puVar2[0x283] = 0;
  puVar2[0x2a5] = 0;
  puVar2[0x2a6] = 0;
  puVar2[0x2a7] = 0;
  temp_v1 = 0;
  *(unsigned char *)(puVar2 + 0x2a4) = 0;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v1 + 2;
    puVar2[temp_v2 + 0x284] = 0;
    puVar2[temp_v2 + 0x285] = 0;
    temp_v2 = temp_v2 + 2;
  } while (temp_v1 < 0x20);
  temp_v1 = 0x80;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned char *)((int)puVar2 + temp_v2 * 0x88 + 0xb31) = 0;
    *(unsigned char *)((int)puVar2 + temp_v2 * 0x88 + 0xb32) = 0;
    temp_v2 = temp_v2 + 1;
  } while (temp_v1 != 0);
  *(unsigned char *)(puVar2 + 0x264) = 0;
  *(unsigned char *)(puVar2 + 0x268) = 0;
  puVar2[0x13c0] = 0;
  *(unsigned char *)((int)puVar2 + 0xe1) = 0;
  puVar2[0x39] = 0x38;
  puVar2[0x3a] = 0x42200000;
  FUN_001b3ca0();
  *(unsigned char *)(temp_v0 + 0x790) = 0;
  DAT_0049fb47 = 0;
  *(unsigned char *)(puVar2 + 2) = 0;
  puVar6 = &LAB_001d2df4;
  FUN_002c5978(&LAB_001d2df4,2,0,0,FUN_001d3d40,&LAB_0021edd4,0);
  *puVar2 = (unsigned int)puVar6;
  puVar7 = &LAB_001d2e04;
  FUN_002c4c00(&LAB_001d2e04,0x70,0,0,FUN_001fd950,&LAB_002d4fdc,0,puVar6);
  puVar2[1] = (unsigned int)puVar7;
  return;
}
