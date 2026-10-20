/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208650` (_code @ 0x208650, 0x308 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int g_runWin; /* 0x57f580 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


char FUN_00208650(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  
  temp_v10 = g_runWin;
  temp_v11 = *(int *)(g_runWin + 8) != 0;
  temp_v1 = '\0';
  if (temp_v11) {
    temp_v1 = *(char *)(g_runWin + 0x14);
  }
  if (temp_v11 && temp_v1 != '\0') {
    FUN_00157558(g_renderCtx);
    FUN_001835b4(2,8,0x14f,0,0,0x6d);
    temp_v2 = vec2GetXInt(temp_v10 + 0x38);
    temp_v12 = 0.25f;
    FUN_001879d0(g_renderCtx);
    temp_v2 = temp_v2 + (int)temp_v12;
    temp_v3 = vec2GetYInt(temp_v10 + 0x38);
    efctSetSpeed();
    FUN_00164b5c(2,8,0x13,temp_v2,temp_v3,0x6e);
    temp_v5 = g_renderCtx;
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar10 = (int *)(temp_v5 + 0x12b8);
    temp_v6 = *piVar10;
    temp_v7 = piVar10[temp_v6 + 2];
    *piVar10 = temp_v6 + 1;
    piVar10[temp_v6 + 3] = temp_v4;
    if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
      (**(romwright_code **)(temp_v5 + 0x12d4))();
      *(unsigned char *)(temp_v5 + 0x12d0) = 0;
    }
    FUN_001835b4(2,8,0x150,temp_v2,0,0x6f);
    FUN_001835b4(2,8,0x151,temp_v2,0,0x6f);
    temp_v5 = g_renderCtx;
    piVar10 = (int *)(g_renderCtx + 0x12b8);
    temp_v4 = *piVar10;
    temp_v6 = piVar10[temp_v4 + 2];
    *piVar10 = temp_v4 - 1;
    if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v6 != piVar10[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v5 + 0x12d4))();
      *(unsigned char *)(temp_v5 + 0x12d0) = 0;
    }
    temp_v5 = FUN_001834a4(8,0x153);
    VectorSignedToFloat(*(short *)(temp_v5 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (temp_v2 - 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(4,0x57d8ffff,temp_v10 + 0xc4,temp_v2 - 0x14);
    temp_v4 = 0;
    temp_v10 = *(int *)(temp_v10 + 0x10) / 5;
    temp_v3 = temp_v10 % 8;
    temp_v5 = (temp_v3 + 7) % 8;
    temp_v10 = (temp_v10 + 4) % 8;
    do {
      temp_v6 = 0;
      do {
        temp_v9 = temp_v4 * 3 + temp_v6;
        temp_v7 = FUN_001834a4(8,temp_v9 + 0x157);
        if (temp_v3 == temp_v9 || temp_v10 == temp_v9) {
          FUN_001835b4(2,8,0x155,*(short *)(temp_v7 + 8) + temp_v2,(int)*(short *)(temp_v7 + 10),0x6f);
        }
        else {
          temp_v0 = temp_v5;
          if (temp_v5 != temp_v9) {
            temp_v0 = (temp_v10 + 7) % 8;
          }
          temp_v8 = *(short *)(temp_v7 + 8) + temp_v2;
          if (!(temp_v5 != temp_v9 && temp_v0 != temp_v9)) {
            FUN_001835b4(2,8,0x156,temp_v8,(int)*(short *)(temp_v7 + 10),0x6f);
          }
          else {
            FUN_001835b4(2,8,0x154,temp_v8,(int)*(short *)(temp_v7 + 10),0x6f);
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 3);
    FUN_00183bb0();
    efctSetSpeed();
    temp_v1 = '\0';
  }
  return temp_v1;
}

} /* extern "C" */
