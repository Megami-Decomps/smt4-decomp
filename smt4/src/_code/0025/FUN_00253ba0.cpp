/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253ba0` (_code @ 0x253ba0, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287aec(void);

extern int g_mapEnemy; /* 0x447600 */
extern int g_lmapScene; /* 0x447e88 */

/* Supplied declaration required: FUN_00287aec. */


unsigned int FUN_00253ba0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v1 = g_mapEnemy;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    return 0;
  }
  temp_v5 = *(float *)(g_lmapScene + 0x1c);
  FUN_00287aec();
  temp_v7 = 300.0f;
  temp_v2 = 0;
  if (*(int *)(param_1 + 0x84) == 2) {
    temp_v5 = temp_v5 + 300.0f;
  }
  do {
    temp_v3 = temp_v1 + temp_v2 * 0x180;
    temp_v4 = *(char *)(temp_v3 + 0x34) != '\0';
    temp_v0 = '\0';
    if (temp_v4) {
      temp_v0 = *(char *)(temp_v3 + 0xb1);
    }
    if (temp_v4 && temp_v0 != '\0') {
      temp_v6 = *(float *)(g_lmapScene + 0x1c);
      FUN_00287aec();
      if (*(int *)(temp_v3 + 0xb8) == 2) {
        temp_v6 = temp_v6 + temp_v7;
      }
      if (temp_v6 < temp_v5) {
        return 0;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x20) {
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
