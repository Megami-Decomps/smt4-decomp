/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275818` (_code @ 0x275818, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a60; /* 0x447a60 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_00287300. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_0028c8d0. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_002a5a54. */


void FUN_00275818(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3;
  
  temp_v1 = 0;
  do {
    temp_v2 = DAT_00447a60 + temp_v1 * 0x3c;
    temp_v3 = *(char *)(temp_v2 + 0x24) != '\0';
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v2 + 0x28);
    }
    if (temp_v3 && temp_v0 != 3) {
      if (*(char *)(temp_v2 + 0x4c) != '\0') {
        puVar4 = *(unsigned int **)(temp_v2 + 0x50);
      }
      else {
        puVar4 = *(unsigned int **)(DAT_00447a60 + *(int *)(temp_v2 + 0x58) * 8 + 0x18);
      }
      if (DAT_0049f93e != '\0') {
        FUN_0029bdb4(puVar4[2]);
        FUN_0028c8d0(puVar4[2]);
        if ((*puVar4 & 2) == 0) {
          *puVar4 = *puVar4 | 2;
          *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      else {
        FUN_0029bdb4(puVar4[2]);
        FUN_0028c8d0(puVar4[2]);
        if ((*puVar4 & 2) != 0) {
          *puVar4 = *puVar4 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 1;
        }
        if (*(char *)(temp_v2 + 0x44) != '\0') {
          FUN_0028c8a8(puVar4[2],0,temp_v2 + 0x30);
          FUN_0028c880(puVar4[2],0);
          if (*(int *)(puVar4[2] + 0x38) != *(int *)(temp_v2 + 0x40)) {
            FUN_002a5a54(puVar4[2]);
            FUN_00287300(puVar4[2],*(unsigned int *)(temp_v2 + 0x40));
          }
          *(unsigned char *)(temp_v2 + 0x44) = 0;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}
