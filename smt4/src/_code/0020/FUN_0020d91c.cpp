/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d91c` (_code @ 0x20d91c, 0x1e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e2d88(void);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, char *);
int FUN_0029bb14(unsigned int);
int FUN_002a5710(unsigned int);

extern int DAT_00447e10; /* 0x447e10 */
extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_001e2d88. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_002a5710. */


void FUN_0020d91c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  char *pcVar5;
  int temp_v3;
  int temp_v4;
  
  if (*(short *)(DAT_00447e10 + 0xc) != 0x16) {
    return;
  }
  FUN_001e2d88();
  temp_v3 = 0;
  temp_v4 = 9;
  temp_v2 = 0;
  pcVar5 = (char *)(DAT_00447e10 + temp_v2 * 0x2c + 0x1114);
  do {
    if (*pcVar5 != '\0') {
      if ((*(signed char *)((unsigned char *)&g_gameState + 0x22)) != '\0') {
        puVar1 = *(unsigned int **)(pcVar5 + 0x20);
        if ((*puVar1 & 2) == 0) {
          *puVar1 = *puVar1 | 2;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
          FUN_0029bb14(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8));
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
            FUN_0029bb14(temp_v0);
          }
        }
        else if ((temp_v1 & 2) == 0) {
          *puVar1 = temp_v1 | 2;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
          temp_v0 = *(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8);
          FUN_0029bb14(temp_v0);
        }
        FUN_0028c640(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8),0,pcVar5 + 4);
        FUN_0028c618(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8),0);
        if (*(int *)(*(int *)(*(int *)(pcVar5 + 0x20) + 8) + 0x38) != *(int *)(pcVar5 + 0x14)) {
          FUN_002a5710(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8));
        }
        pcVar5[1] = '\0';
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 < temp_v4) {
      if (temp_v3 == 0) {
        pcVar5 = (char *)(DAT_00447e10 + temp_v2 * 0x2c + 0x1114);
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
        pcVar5 = (char *)(DAT_00447e10 + temp_v2 * 0x2c + 0x1114);
        continue;
      }
      temp_v4 = 3;
      temp_v2 = 0;
    }
    pcVar5 = (char *)(DAT_00447e10 + temp_v2 * 0x2c + 0x12a0);
  } while( 1 );
}

} /* extern "C" */
