/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d7b8` (_code @ 0x20d7b8, 0x1e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e10; /* 0x447e10 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Unsupported intrinsic, declaration required: while (INT_ADD). */
/* Supplied declaration required: FUN_001e2c94. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_002a5a54. */


void FUN_0020d7b8(void)

{
/* irregular: 6 native warning(s); review required */
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
  FUN_001e2c94();
  temp_v3 = 0;
  temp_v4 = 9;
  temp_v2 = 0;
  pcVar5 = (char *)(DAT_00447e10 + temp_v2 * 0x2c + 0x1114);
  do {
    if (*pcVar5 != '\0') {
      if (DAT_0049f93e != '\0') {
        puVar1 = *(unsigned int **)(pcVar5 + 0x20);
        if ((*puVar1 & 2) == 0) {
          *puVar1 = *puVar1 | 2;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
          FUN_0029bdb4(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8));
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
            FUN_0029bdb4(temp_v0);
          }
        }
        else if ((temp_v1 & 2) == 0) {
          *puVar1 = temp_v1 | 2;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
          temp_v0 = *(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8);
          FUN_0029bdb4(temp_v0);
        }
        FUN_0028c8a8(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8),0,pcVar5 + 4);
        FUN_0028c880(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8),0);
        if (*(int *)(*(int *)(*(int *)(pcVar5 + 0x20) + 8) + 0x38) != *(int *)(pcVar5 + 0x14)) {
          FUN_002a5a54(*(unsigned int *)(*(int *)(pcVar5 + 0x20) + 8));
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
