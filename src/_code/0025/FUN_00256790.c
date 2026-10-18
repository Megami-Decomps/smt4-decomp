/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256790` (_code @ 0x256790, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00256868; /* 0x256868 */
extern int DAT_00447600; /* 0x447600 */
extern short DAT_0049fb9a; /* 0x49fb9a */

/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_00256790(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [36];
  
  puVar2 = temp_v5;
  temp_v3 = 0;
  temp_v1 = DAT_00447600 + param_1 * 8;
  if (*(int *)(temp_v1 + 0x304c) == 0) {
    temp_v2 = 0;
    temp_v4 = 0x15;
    do {
      temp_v0 = temp_v2 * 8;
      temp_v2 = temp_v2 + 1;
      if (*(int *)(DAT_00447600 + temp_v0 + 0x304c) != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
    if (temp_v3 < DAT_0049fb9a) {
      FUN_002be7fc(temp_v5,&LAB_00256868,(int)*(short *)(param_1 * 0x10 + 0x448ca8));
      FUN_0029bddc(temp_v5,0x1c0);
      *(unsigned char **)(temp_v1 + 0x304c) = puVar2;
      FUN_002a06c8();
      puVar3 = *(unsigned int **)(temp_v1 + 0x304c);
      *puVar3 = *puVar3 | 2;
      *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
      *(unsigned char *)(temp_v1 + 0x3050) = 1;
      *(unsigned char *)(temp_v1 + 0x3051) = 0;
    }
  }
  return;
}
