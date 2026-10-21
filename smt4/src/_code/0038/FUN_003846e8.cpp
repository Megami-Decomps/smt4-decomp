/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003846e8` (_code @ 0x3846e8, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeSetTranslation(unsigned int, int, unsigned char [16]);
int FUN_00298d50(unsigned int);
int FUN_002adde8(unsigned int, unsigned char [32], unsigned char [16]);
int textFormatBuffer(unsigned char [32], unsigned char *, unsigned int);
int FUN_002c159c(void);

extern unsigned char LAB_003847f4; /* 0x3847f4 */

/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002adde8. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002c159c. */
extern unsigned int FUN_002c501c(void);


void FUN_003846e8(int param_1)

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
      temp_v0 = FUN_002c501c();
      FUN_002c159c();
      FUN_00298d50(temp_v0);
    }
    temp_v1 = 0;
    *(unsigned char *)(param_1 + 0xd40) = 1;
    do {
      textFormatBuffer(temp_v3,&LAB_003847f4,temp_v1 + 1);
      if (*(char *)(param_1 + 0x21) != '\x02') {
        FUN_002adde8(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xfac) + 0x1c) + 8),temp_v3,
                     temp_v4);
      }
      else {
        FUN_002adde8(*(unsigned int *)(*(int *)(param_1 + 0xfb8) + 8),temp_v3,temp_v4);
        puVar2 = *(unsigned int **)(param_1 + 0xfb8);
        *puVar2 = *puVar2 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
      }
      temp_v2 = param_1 + temp_v1 * 4;
      nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v2 + 0xd10) + 8),0,temp_v4);
      nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v2 + 0xd28) + 8),0,temp_v4);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
  }
  return;
}

} /* extern "C" */
