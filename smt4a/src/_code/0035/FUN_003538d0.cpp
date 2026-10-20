/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003538d0` (_code @ 0x3538d0, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);
int wordTripleClear(unsigned int *);
int FUN_00319f64(int);

extern unsigned int *g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: wordTripleClear. */
/* Supplied declaration required: FUN_00319f64. */


void FUN_003538d0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = g_mapGimic;
  puVar2 = g_mapGimic + 0xd;
  *(unsigned char *)(g_mapGimic + 1) = 1;
  *puVar1 = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  *(unsigned short *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[0x20] = 0;
  wordTripleClear(puVar2);
  puVar1 = g_mapGimic;
  temp_v1 = 0;
  g_mapGimic[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  do {
    puVar1 = g_mapGimic;
    if (*(char *)(g_mapGimic + temp_v1 * 0xf + 0x24) != '\0') {
      if (*(short *)((int)g_mapGimic + temp_v1 * 0x3c + 0xa6) != 0x4d) {
        temp_v2 = (int)*(short *)((int)g_mapGimic + temp_v1 * 0x3c + 0xb2);
        if (((*(short *)(g_mapGimic + temp_v1 * 0xf + 0x2c) == 0) ||
            (temp_v0 = gameFlagIsSet(), temp_v0 != 0)) &&
           ((temp_v2 == 0 || (temp_v2 = gameFlagIsSet(temp_v2), temp_v2 == 0)))) {
          temp_v1 = temp_v1 + 1;
          if (temp_v1 >= 0x23) {
            return;
          }
          continue;
        }
      }
      FUN_00319f64((int)(short)puVar1[temp_v1 * 0xf + 0x2b]);
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x23) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
