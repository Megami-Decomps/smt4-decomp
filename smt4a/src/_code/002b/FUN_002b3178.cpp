/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3178` (_code @ 0x2b3178, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(int, int);
int FUN_00186940(void);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_002371b0(void);
int effectSpawnPositionDefault(unsigned int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_00186940. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_002371b0. */
/* Supplied declaration required: effectSpawnPositionDefault. */


void FUN_002b3178(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned int in_fpscr;
  
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  temp_v0 = *(unsigned char *)(param_1 + 0xf);
  temp_v1 = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8);
  FUN_0016c4b8(g_renderCtx,0);
  temp_v5 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v5 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  FUN_00186940();
  effectSpawnPositionDefault(temp_v1 | temp_v0);
  temp_v5 = 0;
  do {
    VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001b63b0();
    VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001a1ee0();
    effectSpawnPositionDefault(temp_v1);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x13);
  FUN_002371b0();
  temp_v5 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
