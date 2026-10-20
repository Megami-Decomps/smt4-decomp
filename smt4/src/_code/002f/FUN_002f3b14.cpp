/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3b14` (_code @ 0x2f3b14, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287aec(void);

extern int g_mapIf; /* 0x447a78 */

/* Supplied declaration required: FUN_00287aec. */


void FUN_002f3b14(void)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_s0;
  unsigned long long temp_v4;
  
  temp_v0 = g_mapIf;
  temp_v2 = 0;
  temp_v4 = (unsigned long long)in_s0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 0x194;
    if ((*(char *)(temp_v3 + 0x1d0) != '\0') &&
       ((temp_v1 = *(int *)(temp_v3 + 0x1e4), temp_v1 == 0x1d || temp_v1 == 0x26 ||
        ((temp_v1 == 0x1e || temp_v1 == 0x1f) || temp_v1 == 0x25)))) {
      temp_v1 = (int)temp_v4;
      FUN_00287aec();
      if (temp_v1 < 0x41200000) {
        *(unsigned int *)(temp_v3 + 0x1d4) = 0x12;
        return;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x80);
  return;
}

} /* extern "C" */
