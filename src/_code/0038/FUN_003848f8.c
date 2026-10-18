/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003848f8` (_code @ 0x3848f8, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00384a04; /* 0x384a04 */

/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_00298fec. */
/* Supplied declaration required: FUN_002ae074. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c1774. */
extern unsigned int FUN_002c5218(void);


void FUN_003848f8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [16];
  
  if (*(char *)(param_1 + 0xd40) == '\0') {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      temp_v0 = FUN_002c5218();
      FUN_002c1774();
      FUN_00298fec(temp_v0);
    }
    temp_v1 = 0;
    *(unsigned char *)(param_1 + 0xd40) = 1;
    do {
      FUN_002be7fc(temp_v3,&LAB_00384a04,temp_v1 + 1);
      if (*(char *)(param_1 + 0x21) != '\x02') {
        FUN_002ae074(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xfac) + 0x1c) + 8),temp_v3,
                     temp_v4);
      }
      else {
        FUN_002ae074(*(unsigned int *)(*(int *)(param_1 + 0xfb8) + 8),temp_v3,temp_v4);
        puVar2 = *(unsigned int **)(param_1 + 0xfb8);
        *puVar2 = *puVar2 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
      }
      temp_v2 = param_1 + temp_v1 * 4;
      FUN_0028c8a8(*(unsigned int *)(*(int *)(temp_v2 + 0xd10) + 8),0,temp_v4);
      FUN_0028c8a8(*(unsigned int *)(*(int *)(temp_v2 + 0xd28) + 8),0,temp_v4);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
  }
  return;
}
