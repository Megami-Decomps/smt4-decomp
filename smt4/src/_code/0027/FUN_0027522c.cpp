/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027522c` (_code @ 0x27522c, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, int);
int FUN_0029bb14(unsigned int);
int FUN_002a5710(unsigned int);

extern int DAT_00447e70; /* 0x447e70 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_002a5710. */


void FUN_0027522c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v2 = DAT_00447e70 + temp_v1 * 0x48;
    if (*(char *)(temp_v2 + 0x14) != '\0') {
      puVar2 = *(unsigned int **)(temp_v2 + 0x3c);
      temp_v0 = *puVar2;
      if (DAT_0049f93e != '\0') {
        if ((temp_v0 & 2) == 0) {
          *puVar2 = temp_v0 | 2;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      else {
        if ((temp_v0 & 2) != 0) {
          *puVar2 = temp_v0 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
        }
        if (*(char *)(temp_v2 + 0x15) != '\0') {
          if (*(char *)(temp_v2 + 0x16) != '\0') {
            FUN_0028c640(*(unsigned int *)(*(int *)(temp_v2 + 0x3c) + 8),0,temp_v2 + 0x18);
            FUN_0028c618(*(unsigned int *)(*(int *)(temp_v2 + 0x3c) + 8),0);
          }
          if (*(int *)(*(int *)(*(int *)(temp_v2 + 0x3c) + 8) + 0x38) != *(int *)(temp_v2 + 0x34)) {
            FUN_002a5710(*(unsigned int *)(*(int *)(temp_v2 + 0x3c) + 8));
            FUN_0029bb14(*(unsigned int *)(*(int *)(temp_v2 + 0x3c) + 8));
          }
          *(unsigned char *)(temp_v2 + 0x15) = 0;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
