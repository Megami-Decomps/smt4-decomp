/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003850b4` (_code @ 0x3850b4, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);
int FUN_00384830(void);
int SBORROW4(int, int);
int VectorSignedToFloat(int, int);

extern int g_mapEnemy; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */
extern signed char DAT_005f18bf; /* 0x5f18bf */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b5cb4. */
extern int FUN_0036d984(int, int, unsigned int);
/* Supplied declaration required: FUN_00384830. */


unsigned int FUN_003850b4(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = g_mapEnemy;
  temp_v3 = 0;
  do {
    temp_v4 = temp_v1 + temp_v3 * 0x188;
    if ((*(char *)(temp_v4 + 0x34) != '\0') &&
       (temp_v2 = *(int *)(temp_v4 + 0xb8), (temp_v2 == 6 || temp_v2 == 7) || temp_v2 == 0xf)) {
      temp_v2 = *(int *)(g_lmapScene + 0x1c);
      FUN_002b5cb4();
      if (temp_v2 < 0x447a0001) {
        temp_v6 = *(int *)(g_lmapScene + 0x1c);
        FUN_00384830();
        temp_v5 = SBORROW4(temp_v2,0x43960000);
        temp_v0 = temp_v2 - 0x43960000;
        if (temp_v2 < 0x43960000) {
          temp_v5 = SBORROW4(temp_v6,0x42f00000);
          temp_v0 = temp_v6 - 0x42f00000;
        }
        if ((temp_v0 < 0 == temp_v5) &&
           (temp_v2 = FUN_0036d984(g_lmapScene + 0x1c,temp_v4 + 0x54,0), temp_v2 == -1)) {
          *(unsigned int *)(temp_v4 + 0xb8) = 0x1e;
          *(unsigned int *)(temp_v4 + 0xe8) = *(unsigned int *)(DAT_005f18bf * 0x1c + 0x580b9c);
          temp_v7 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v4 + 0x1b0) * 0x10 + 0x58220a),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v4 + 0xec) = temp_v7;
          return 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x28) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
