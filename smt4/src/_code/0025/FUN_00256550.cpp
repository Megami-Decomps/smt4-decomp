/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256550` (_code @ 0x256550, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerCreateLoaded(unsigned char [36], int);
int FUN_002a0428(void);
int textFormatBuffer(unsigned char [36], unsigned char *, int);

extern unsigned char LAB_00256628; /* 0x256628 */
extern int g_mapEnemy; /* 0x447600 */
extern short DAT_0049fb9a; /* 0x49fb9a */

/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: textFormatBuffer. */


void FUN_00256550(int param_1)

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
  temp_v1 = g_mapEnemy + param_1 * 8;
  if (*(int *)(temp_v1 + 0x304c) == 0) {
    temp_v2 = 0;
    temp_v4 = 0x15;
    do {
      temp_v0 = temp_v2 * 8;
      temp_v2 = temp_v2 + 1;
      if (*(int *)(g_mapEnemy + temp_v0 + 0x304c) != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
    if (temp_v3 < DAT_0049fb9a) {
      textFormatBuffer(temp_v5,&LAB_00256628,(int)*(short *)(param_1 * 0x10 + 0x448ca8));
      asdMdlManagerCreateLoaded(temp_v5,0x1c0);
      *(unsigned char **)(temp_v1 + 0x304c) = puVar2;
      FUN_002a0428();
      puVar3 = *(unsigned int **)(temp_v1 + 0x304c);
      *puVar3 = *puVar3 | 2;
      *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
      *(unsigned char *)(temp_v1 + 0x3050) = 1;
      *(unsigned char *)(temp_v1 + 0x3051) = 0;
    }
  }
  return;
}

} /* extern "C" */
