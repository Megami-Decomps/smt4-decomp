/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385384` (_code @ 0x385384, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);
int FUN_003d4ed8(int);

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_003d4ed8. */


void FUN_00385384(void)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v0 = DAT_0058103c;
  temp_v1 = 0;
  temp_v4 = (unsigned long long)in_s0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x194;
    if ((*(char *)(temp_v2 + 0x1dc) != '\0') && (*(int *)(temp_v2 + 0x1f0) == 0x22)) {
      temp_v3 = (int)temp_v4;
      FUN_002b5cb4();
      if (temp_v3 < 0x41200000) {
        FUN_003d4ed8(0x10002a9);
        *(unsigned int *)(temp_v2 + 0x1e0) = 7;
        *(unsigned short *)(temp_v2 + 0x204) = 0;
        return;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
