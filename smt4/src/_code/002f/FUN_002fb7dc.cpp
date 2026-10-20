/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb7dc` (_code @ 0x2fb7dc, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002664d8(int);
int FUN_00266584(unsigned int);
int FUN_002666a0(int, int, unsigned int);
int FUN_00266a2c(void);
int FUN_002702dc(void);
int FUN_0027b2b4(unsigned int, unsigned int);
int FUN_00281784(void);
int FUN_002d508c(int);
int VectorSignedToFloat(int, int);

extern int g_lmapMainState; /* 0x447060 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned char DAT_0049f934; /* 0x49f934 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002664d8. */
/* Supplied declaration required: FUN_00266584. */
/* Supplied declaration required: FUN_002666a0. */
/* Supplied declaration required: FUN_00266a2c. */
/* Supplied declaration required: FUN_002702dc. */
/* Supplied declaration required: FUN_0027b2b4. */
/* Supplied declaration required: FUN_00281784. */
/* Supplied declaration required: FUN_002d508c. */


unsigned int FUN_002fb7dc(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int in_fpscr;
  float temp_v5;
  
  temp_v0 = g_lmapMainState;
  switch(*(unsigned int *)(g_lmapMainState + 0x18)) {
  case 0:
    puVar6 = (unsigned int *)(g_lmapMainState + 0x28);
    temp_v3 = *(unsigned int *)(g_lmapScene + 0x1c);
    temp_v4 = *(unsigned int *)(g_lmapScene + 0x20);
    temp_v1 = *(unsigned int *)(g_lmapScene + 0x24);
    *(unsigned int *)(g_lmapMainState + 0x20) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v4;
    *puVar6 = temp_v1;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x34) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x30) = 0x44480000;
    *(unsigned int *)(temp_v0 + 0xdc) = 0;
    *(unsigned char *)(temp_v0 + 0xe0) = 1;
    *(unsigned int *)(temp_v0 + 0x48) = 99;
    DAT_0049f920 = 99;
    FUN_002702dc();
    FUN_0027b2b4(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x48));
    *(unsigned int *)(temp_v0 + 0x18) = 1;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    break;
  case 1:
    FUN_002d508c(g_lmapMainState);
    temp_v2 = *(int *)(temp_v0 + 0x1c) + 1;
    *(int *)(temp_v0 + 0x1c) = temp_v2;
    temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(g_lmapScene + 0x20) =
         *(float *)(temp_v0 + 0x24) +
         (*(float *)(temp_v0 + 0x30) - *(float *)(temp_v0 + 0x24)) * temp_v5 * 0.033333335f;
    if (*(int *)(temp_v0 + 0x1c) >= 0x1e) {
      DAT_0049f934 = 0;
      DAT_0049fb46 = 1;
      *(unsigned int *)(temp_v0 + 0xdc) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0xe0) = 1;
      *(unsigned int *)(temp_v0 + 0x18) = 2;
    }
    break;
  case 2:
    FUN_002d508c(g_lmapMainState);
    break;
  case 5:
    *(unsigned int *)(g_lmapMainState + 0x90) = 0x43480000;
    FUN_00266a2c();
    temp_v0 = g_lmapMainState;
    *(unsigned char *)(g_lmapMainState + 0xb) = 0;
    *(unsigned int *)(temp_v0 + 0xec) = *(unsigned int *)(temp_v0 + 0xec) & 0xfffffffd;
    FUN_00281784();
    FUN_00266584(*(unsigned int *)(temp_v0 + 0x40));
    FUN_002666a0(temp_v0 + 0xec,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
    FUN_002664d8(temp_v0 + 0xec);
    DAT_0049f934 = 0;
    DAT_0049fb46 = 1;
  }
  return 0;
}

} /* extern "C" */
