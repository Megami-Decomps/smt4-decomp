/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0110` (_code @ 0x3d0110, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(int, unsigned int, int);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0057f578; /* 0x57f578 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


char FUN_003d0110(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  
  temp_v0 = DAT_0057f578;
  temp_v6 = *(int *)(DAT_0057f578 + 8) != 0;
  temp_v1 = '\0';
  if (temp_v6) {
    temp_v1 = *(char *)(DAT_0057f578 + 0x10);
  }
  if (temp_v6 && temp_v1 != '\0') {
    FUN_00157558(g_renderCtx);
    temp_v3 = g_renderCtx;
    temp_v2 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v3 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    temp_v3 = FUN_001654d8(temp_v0 + 0x34);
    temp_v7 = 0.25f;
    FUN_001879d0(g_renderCtx);
    temp_v2 = FUN_001654e4(temp_v0 + 0x34);
    FUN_00164b5c(2,8,0xe,temp_v3 + (int)temp_v7,temp_v2,0x65);
    temp_v4 = FUN_001834a4(8,0x10b);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + temp_v3 + (int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3
                       );
    FUN_00162790(3,0xffffffff,temp_v0 + 0xc0);
    FUN_00183bb0();
    efctSetSpeed();
    temp_v0 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v3 = *piVar7;
    temp_v2 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v1 = '\0';
  }
  return temp_v1;
}

} /* extern "C" */
