/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105394` (_code @ 0x105394, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b580(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_0010b580. */
extern int FUN_002c2950(void);


void FUN_00105394(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  char *pcVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar8;
  
  temp_v2 = FUN_002c2950();
  (*(int *)((unsigned char *)&DAT_0049f91c + 0x220)) = (*(int *)((unsigned char *)&DAT_0049f91c + 0x220)) + 1;
  if ((*(int *)((unsigned char *)&DAT_0049f91c + 0x220)) >= 0x709) {
    (*(int *)((unsigned char *)&DAT_0049f91c + 0x220)) = 0;
    temp_v3 = 0x40;
    pcVar4 = (char *)(temp_v2 + 0xbd8);
    do {
      temp_v0 = *pcVar4;
      if (temp_v0 != '\0' && temp_v0 != -1) {
        *pcVar4 = temp_v0 - '\x01';
      }
      temp_v3 = temp_v3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (temp_v3 != 0);
    temp_v3 = 0;
    temp_v5 = 0x80;
    do {
      temp_v4 = temp_v2 + temp_v3;
      temp_v3 = temp_v3 + 1;
      pcVar4 = (char *)(temp_v4 + 0xc18);
      temp_v0 = *pcVar4;
      if (temp_v0 != '\0') {
        *pcVar4 = temp_v0 - '\x01';
      }
      temp_v5 = temp_v5 - 1;
    } while (temp_v5 != 0);
    temp_v3 = 0;
    temp_v5 = 0x10;
    do {
      temp_v4 = temp_v2 + temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      temp_v1 = *(short *)(temp_v4 + 0xd5c);
      if (0 < temp_v1) {
        *(short *)(temp_v4 + 0xd5c) = temp_v1 - 1;
      }
      temp_v5 = temp_v5 - 1;
    } while (temp_v5 != 0);
  }
  temp_v3 = 0;
  temp_v5 = 0x30;
  do {
    temp_v4 = temp_v3 * 4;
    temp_v3 = temp_v3 + 1;
    piVar8 = (int *)(temp_v2 + temp_v4 + 0xe60);
    temp_v4 = *piVar8;
    if (0 < temp_v4) {
      *piVar8 = temp_v4 - 1;
    }
    temp_v5 = temp_v5 - 1;
  } while (temp_v5 != 0);
  FUN_0010b580();
  return;
}

} /* extern "C" */
