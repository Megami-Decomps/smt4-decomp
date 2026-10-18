/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002755d4` (_code @ 0x2755d4, 0x238 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cd88; /* 0x44cd88 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_00287300. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_002a5a54. */


void FUN_002755d4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4;
  
  if (*(short *)(DAT_0044cd88 + 4) == 0x65) {
    temp_v1 = 0;
    do {
      temp_v2 = DAT_0044cd88 + temp_v1 * 0x4c;
      if (*(char *)(temp_v2 + 0x9d8) != '\0') {
        puVar5 = *(unsigned int **)(temp_v2 + 0xa08);
        if (DAT_0049f93e != '\0') {
          if ((*puVar5 & 2) == 0) {
            *puVar5 = *puVar5 | 2;
            *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
          }
        }
        else {
          if ((*puVar5 & 2) != 0) {
            *puVar5 = *puVar5 & 0xfffffffd;
            *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 1;
          }
          if (*(char *)(temp_v2 + 0x9f8) != '\0') {
            FUN_0028c8a8(puVar5[2],0,temp_v2 + 0x9e4);
            FUN_0028c880(puVar5[2],0);
            if (*(int *)(puVar5[2] + 0x38) != *(int *)(temp_v2 + 0x9f4)) {
              FUN_002a5a54(puVar5[2]);
              FUN_00287300(puVar5[2],*(unsigned int *)(temp_v2 + 0x9f4));
            }
            *(unsigned char *)(temp_v2 + 0x9f8) = 0;
          }
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
  }
  temp_v1 = 0;
  do {
    temp_v3 = DAT_0044cd88 + temp_v1 * 0x4c;
    temp_v4 = *(char *)(temp_v3 + 0x58) != '\0';
    temp_v2 = 0;
    if (temp_v4) {
      temp_v2 = *(int *)(temp_v3 + 0x5c);
    }
    if ((temp_v4 && temp_v2 != 3) && (*(char *)(temp_v3 + 0x94) == '\0')) {
      if (*(char *)(temp_v3 + 0x84) != '\0') {
        puVar5 = *(unsigned int **)(temp_v3 + 0x88);
      }
      else {
        puVar5 = *(unsigned int **)(DAT_0044cd88 + *(int *)(temp_v3 + 0x90) * 8 + 0x1c);
      }
      temp_v0 = *puVar5;
      if (DAT_0049f93e != '\0') {
        if ((temp_v0 & 2) == 0) {
          *puVar5 = temp_v0 | 2;
          *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      else {
        if ((temp_v0 & 2) != 0) {
          *puVar5 = temp_v0 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 1;
        }
        if (*(char *)(temp_v3 + 0x78) != '\0') {
          FUN_0028c8a8(puVar5[2],0,temp_v3 + 100);
          FUN_0028c880(puVar5[2],0);
          if (*(int *)(puVar5[2] + 0x38) != *(int *)(temp_v3 + 0x74)) {
            FUN_002a5a54(puVar5[2]);
            FUN_00287300(puVar5[2],*(unsigned int *)(temp_v3 + 0x74));
          }
          *(unsigned char *)(temp_v3 + 0x78) = 0;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  return;
}
