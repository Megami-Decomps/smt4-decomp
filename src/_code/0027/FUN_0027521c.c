/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027521c` (_code @ 0x27521c, 0x268 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00447a48; /* 0x447a48 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_00267420. */
extern int FUN_0027d010(void);
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_002a5a54. */
/* Supplied declaration required: FUN_002a7aa0. */


void FUN_0027521c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if ((char)DAT_00447a48[1] == '\0') {
    temp_v0 = 0;
    do {
      piVar2 = DAT_00447a48;
      if ((char)DAT_00447a48[temp_v0 * 10 + 7] != '\0') {
        puVar3 = (unsigned int *)DAT_00447a48[temp_v0 * 10 + 0xd];
        temp_v1 = *puVar3;
        if (DAT_0049f93e != '\0') {
          if ((temp_v1 & 2) == 0) {
            *puVar3 = temp_v1 | 2;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
          }
        }
        else {
          if ((temp_v1 & 2) != 0) {
            *puVar3 = temp_v1 & 0xfffffffd;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
          }
          if (*(char *)((int)piVar2 + temp_v0 * 0x28 + 0x1d) != '\0') {
            FUN_0028c8a8(*(unsigned int *)(piVar2[temp_v0 * 10 + 0xd] + 8),0,piVar2 + temp_v0 * 10 + 8);
            FUN_0028c880(*(unsigned int *)(piVar2[temp_v0 * 10 + 0xd] + 8),0);
            if (*(int *)(*(int *)(piVar2[temp_v0 * 10 + 0xd] + 8) + 0x38) !=
                (int)(short)piVar2[temp_v0 * 10 + 0xc]) {
              FUN_002a5a54(*(unsigned int *)(piVar2[temp_v0 * 10 + 0xd] + 8));
            }
            *(unsigned char *)((int)piVar2 + temp_v0 * 0x28 + 0x1d) = 0;
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x18);
    return;
  }
  temp_v0 = *DAT_00447a48;
  if (temp_v0 == 0) {
    temp_v0 = 0x17;
    do {
      if (DAT_00447a48[temp_v0 * 10 + 0xd] != 0) {
        FUN_00152af8();
      }
      temp_v0 = temp_v0 - 1;
      piVar2 = DAT_00447a48;
    } while (-1 < temp_v0);
  }
  else {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return;
      }
      temp_v0 = FUN_0027d010();
      if (temp_v0 == 0) {
        return;
      }
      temp_v0 = 0;
      do {
        if (((char)DAT_00447a48[temp_v0 * 10 + 7] != '\0') &&
           (*(short *)((int)DAT_00447a48 + temp_v0 * 0x28 + 0x32) == 0xc)) {
          FUN_00267420((int)(short)DAT_00447a48[temp_v0 * 10 + 0xe]);
        }
        piVar2 = DAT_00447a48;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x18);
      *(unsigned char *)(DAT_00447a48 + 1) = 0;
      *piVar2 = 0;
      return;
    }
    temp_v0 = 0x17;
    do {
      if (DAT_00447a48[temp_v0 * 10 + 0xd] != 0) {
        FUN_002a7aa0();
        DAT_00447a48[temp_v0 * 10 + 0xd] = 0;
      }
      piVar2 = DAT_00447a48;
      temp_v0 = temp_v0 - 1;
    } while (-1 < temp_v0);
    temp_v2 = 0;
    temp_v0 = 0;
    do {
      temp_v3 = temp_v2 + 1;
      temp_v0 = temp_v0 + 2;
      *(unsigned char *)(piVar2 + temp_v2 * 10 + 7) = 0;
      temp_v2 = temp_v2 + 2;
      *(unsigned char *)(piVar2 + temp_v3 * 10 + 7) = 0;
    } while (temp_v0 < 0x18);
  }
  *piVar2 = *piVar2 + 1;
  return;
}
