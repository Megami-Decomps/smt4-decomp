/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb7a0` (_code @ 0x2fb7a0, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447060; /* 0x447060 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned char DAT_0049f934; /* 0x49f934 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00266704. */
/* Supplied declaration required: FUN_002667b0. */
/* Supplied declaration required: FUN_002668cc. */
/* Supplied declaration required: FUN_00266c58. */
/* Supplied declaration required: FUN_0027054c. */
/* Supplied declaration required: FUN_0027b524. */
/* Supplied declaration required: FUN_002819f4. */
/* Supplied declaration required: FUN_002d4fe0. */


unsigned int FUN_002fb7a0(void)

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
  
  temp_v0 = DAT_00447060;
  switch(*(unsigned int *)(DAT_00447060 + 0x18)) {
  case 0:
    puVar6 = (unsigned int *)(DAT_00447060 + 0x28);
    temp_v3 = *(unsigned int *)(DAT_00447e88 + 0x1c);
    temp_v4 = *(unsigned int *)(DAT_00447e88 + 0x20);
    temp_v1 = *(unsigned int *)(DAT_00447e88 + 0x24);
    *(unsigned int *)(DAT_00447060 + 0x20) = temp_v3;
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
    FUN_0027054c();
    FUN_0027b524(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x48));
    *(unsigned int *)(temp_v0 + 0x18) = 1;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    break;
  case 1:
    FUN_002d4fe0(DAT_00447060);
    temp_v2 = *(int *)(temp_v0 + 0x1c) + 1;
    *(int *)(temp_v0 + 0x1c) = temp_v2;
    temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_00447e88 + 0x20) =
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
    FUN_002d4fe0(DAT_00447060);
    break;
  case 5:
    *(unsigned int *)(DAT_00447060 + 0x90) = 0x43480000;
    FUN_00266c58();
    temp_v0 = DAT_00447060;
    *(unsigned char *)(DAT_00447060 + 0xb) = 0;
    *(unsigned int *)(temp_v0 + 0xec) = *(unsigned int *)(temp_v0 + 0xec) & 0xfffffffd;
    FUN_002819f4();
    FUN_002667b0(*(unsigned int *)(temp_v0 + 0x40));
    FUN_002668cc(temp_v0 + 0xec,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
    FUN_00266704(temp_v0 + 0xec);
    DAT_0049f934 = 0;
    DAT_0049fb46 = 1;
  }
  return 0;
}
