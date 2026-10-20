/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8cec` (_code @ 0x2d8cec, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ac2d4(unsigned int);
int FUN_0029570c(void);
int nodeSetTranslation(unsigned int, int, char *);
int faderSetValue(unsigned int);
int FUN_0036bb1c(unsigned int, int);

extern int DAT_00581270; /* 0x581270 */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_001ac2d4. */
/* Supplied declaration required: FUN_0029570c. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: faderSetValue. */
/* Supplied declaration required: FUN_0036bb1c. */


void FUN_002d8cec(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  char *pcVar5;
  int temp_v3;
  int temp_v4;
  
  if (*(short *)(DAT_00581270 + 0xc) != 0x16) {
    return;
  }
  FUN_0029570c();
  temp_v3 = 0;
  temp_v4 = 9;
  temp_v2 = 0;
  pcVar5 = (char *)(DAT_00581270 + temp_v2 * 0x2c + 0x1114);
  do {
    if (*pcVar5 != '\0') {
      if ((*(signed char *)((unsigned char *)&g_gameState + 0x23)) != '\0') {
        puVar1 = *(unsigned int **)(pcVar5 + 0x20);
        if ((*puVar1 & 2) == 0) {
          *puVar1 = *puVar1 | 2;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
          faderSetValue(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8));
        }
        pcVar5[1] = '\x01';
      }
      else if (pcVar5[1] != '\0') {
        puVar1 = *(unsigned int **)(pcVar5 + 0x20);
        temp_v1 = *puVar1;
        if (pcVar5[2] != '\0') {
          if ((temp_v1 & 2) != 0) {
            *puVar1 = temp_v1 & 0xfffffffd;
            *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
            temp_v0 = *(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8);
            faderSetValue(temp_v0);
          }
        }
        else if ((temp_v1 & 2) == 0) {
          *puVar1 = temp_v1 | 2;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
          temp_v0 = *(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8);
          faderSetValue(temp_v0);
        }
        nodeSetTranslation(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8),0,pcVar5 + 4);
        FUN_0036bb1c(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8),0);
        if (*(int *)(*(int *)(*(int *)(pcVar5 + 0x20) + 8) + 0x38) != *(int *)(pcVar5 + 0x14)) {
          FUN_001ac2d4(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8));
        }
        pcVar5[1] = '\0';
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 < temp_v4) {
      if (temp_v3 == 0) {
        pcVar5 = (char *)(DAT_00581270 + temp_v2 * 0x2c + 0x1114);
        continue;
      }
    }
    else {
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 2) {
        return;
      }
      if (temp_v3 == 0) {
        temp_v4 = 9;
        temp_v2 = 0;
        pcVar5 = (char *)(DAT_00581270 + temp_v2 * 0x2c + 0x1114);
        continue;
      }
      temp_v4 = 3;
      temp_v2 = 0;
    }
    pcVar5 = (char *)(DAT_00581270 + temp_v2 * 0x2c + 0x12a0);
  } while( 1 );
}

} /* extern "C" */
