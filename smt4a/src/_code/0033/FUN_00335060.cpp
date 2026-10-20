/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335060` (_code @ 0x335060, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001654e4(int);
int efctSetSpeed(void);
int FUN_001834a4(int, int);
int FUN_00183bb0(void);
int FUN_002ca878(int, unsigned int, int);
int FUN_003721b0(int, int, int, unsigned int, unsigned int);
int FUN_0037e8a4(int);
int FUN_0037eb64(int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern int saveSlotFindSelected(void);
extern unsigned int FUN_001654d8(int);
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
extern int FUN_00187068(int);
extern int FUN_00187168(void);
extern int FUN_0018719c(unsigned int);
extern int flagSelectVariant(void);
/* Supplied declaration required: FUN_002ca878. */
/* Supplied declaration required: FUN_003721b0. */
/* Supplied declaration required: FUN_0037e8a4. */
/* Supplied declaration required: FUN_0037eb64. */


void FUN_00335060(int param_1)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned int temp_v9;
  
  temp_v4 = g_renderCtx;
  temp_v3 = FUN_001692ac(1,0);
  piVar10 = (int *)(temp_v4 + 0x1258);
  temp_v7 = *piVar10;
  temp_v8 = piVar10[temp_v7 + 2];
  *piVar10 = temp_v7 + 1;
  piVar10[temp_v7 + 3] = temp_v3;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v8 != temp_v3) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  FUN_00183bb0();
  FUN_0037e8a4(param_1);
  temp_v3 = 1;
  temp_v9 = 0xffffffff;
  temp_v4 = saveSlotFindSelected();
  if (temp_v4 != 0) {
    temp_v4 = saveSlotFindSelected();
    temp_v9 = (unsigned int)*(unsigned short *)(temp_v4 + 300);
  }
  temp_v4 = 0;
  do {
    temp_v7 = FUN_00187068(temp_v4);
    temp_v8 = FUN_00187168();
    if (temp_v8 != 0) {
      temp_v8 = param_1 + temp_v3 * 0x8c + 0xf18;
      temp_v5 = FUN_001654d8(temp_v8);
      temp_v6 = FUN_001654e4(temp_v8);
      if (*(unsigned short *)(temp_v7 + 300) == temp_v9) {
        temp_v5 = FUN_001654d8(param_1 + 0xf18);
        temp_v6 = FUN_001654e4(param_1 + 0xf18);
        FUN_003721b0(param_1,temp_v7,0,temp_v5,temp_v6);
      }
      else {
        FUN_003721b0(param_1,temp_v7,temp_v3,temp_v5,temp_v6);
        temp_v3 = temp_v3 + 1;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0xc);
  temp_v4 = FUN_0018719c(0x4d0);
  if ((temp_v4 != 0) ||
     ((temp_v4 = flagSelectVariant(), temp_v4 == 2 && (temp_v4 = FUN_0018719c(0x4db), temp_v4 != 0)))) {
    temp_v4 = FUN_001834a4(0x14,temp_v3 + 0xbba);
    temp_v7 = FUN_001834a4(0x14,0xc17);
    temp_v0 = *(short *)(temp_v4 + 10);
    temp_v1 = *(short *)(*(int *)(temp_v7 + 0xc) + 2);
    temp_v2 = *(short *)(*(int *)(temp_v4 + 0xc) + 2);
    temp_v4 = param_1 + temp_v3 * 0x8c + 0xf18;
    temp_v5 = FUN_001654d8(temp_v4);
    temp_v4 = FUN_001654e4(temp_v4);
    FUN_002ca878(param_1,temp_v5,temp_v4 + (int)temp_v1 + (int)temp_v0 + temp_v2 + 1);
    temp_v3 = temp_v3 + 1;
  }
  temp_v4 = param_1 + temp_v3 * 0x8c + 0xf18;
  temp_v5 = FUN_001654d8(temp_v4);
  temp_v6 = FUN_001654e4(temp_v4);
  FUN_0037eb64(param_1,temp_v5,temp_v6);
  FUN_00183bb0();
  efctSetSpeed();
  temp_v4 = g_renderCtx;
  piVar10 = (int *)(g_renderCtx + 0x1258);
  temp_v3 = *piVar10;
  temp_v7 = piVar10[temp_v3 + 2];
  *piVar10 = temp_v3 - 1;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v7 != piVar10[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
