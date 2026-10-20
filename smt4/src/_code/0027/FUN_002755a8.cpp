/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002755a8` (_code @ 0x2755a8, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287098(unsigned int, unsigned int);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, int);
int FUN_0028c668(unsigned int);
int FUN_0029bb14(unsigned int);
int FUN_002a5710(unsigned int);

extern int DAT_00447a60; /* 0x447a60 */
extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_00287098. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_0028c668. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_002a5710. */


void FUN_002755a8(void)

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
      if ((*(signed char *)((unsigned char *)&DAT_0049f91c + 0x22)) != '\0') {
        FUN_0029bb14(puVar4[2]);
        FUN_0028c668(puVar4[2]);
        if ((*puVar4 & 2) == 0) {
          *puVar4 = *puVar4 | 2;
          *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      else {
        FUN_0029bb14(puVar4[2]);
        FUN_0028c668(puVar4[2]);
        if ((*puVar4 & 2) != 0) {
          *puVar4 = *puVar4 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 1;
        }
        if (*(char *)(temp_v2 + 0x44) != '\0') {
          FUN_0028c640(puVar4[2],0,temp_v2 + 0x30);
          FUN_0028c618(puVar4[2],0);
          if (*(int *)(puVar4[2] + 0x38) != *(int *)(temp_v2 + 0x40)) {
            FUN_002a5710(puVar4[2]);
            FUN_00287098(puVar4[2],*(unsigned int *)(temp_v2 + 0x40));
          }
          *(unsigned char *)(temp_v2 + 0x44) = 0;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
