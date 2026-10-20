/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003581bc` (_code @ 0x3581bc, 0x298 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_00168594(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_002c0940(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern int g_mapDepart; /* 0x5806c4 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00168594. */
extern int FUN_001692ac(unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_002c0940. */


unsigned int FUN_003581bc(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned char temp_v7 [72];
  
  temp_v2 = g_mapDepart;
  if (*(int *)(g_mapDepart + 0x48) == 0xb) {
    FUN_00157558(g_renderCtx);
    temp_v1 = g_renderCtx;
    temp_v0 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v1 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v6 = 1.0f;
    efctSetSpeed();
    FUN_00183bb0();
    if (*(int *)(temp_v2 + 0x48) == 0xb) {
      temp_v1 = FUN_001654d8(temp_v2 + 0x148);
      temp_v0 = FUN_001654e4(temp_v2 + 0x148);
      temp_v2 = g_mapDepart;
      temp_v3 = FUN_001834a4(0x1d,0xca);
      FUN_001835b4(2,0x1d,0xc2,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0,0x65);
      FUN_001835b4(2,0x1d,0xc3,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0,0x6a);
      FUN_001835b4(2,0x1d,0xc4,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0,0x6f);
      FUN_001835b4(2,0x1d,0xc5,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0,0x74);
      FUN_001835b4(2,0x1d,0xc6,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0,0x79);
      temp_v5 = *(int *)(temp_v2 + 0x494) >> 0xc;
      if (temp_v5 >= 10000) {
        temp_v5 = 9999;
      }
      temp_v2 = FUN_001834a4(0x1d,0xcb);
      FUN_002c0940(temp_v7,temp_v5);
      FUN_00168594(temp_v7,3);
      temp_v4 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v0,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4 + temp_v1 + (0x38 - (int)temp_v6) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,0x57d8ffff,temp_v7,temp_v4);
      FUN_00183bb0();
    }
    temp_v2 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar6;
    temp_v0 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v0 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
