/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00392b2c` (_code @ 0x392b2c, 0x348 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effectRenderTransformedInstance(int);
int FUN_002ba12c(int);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf380(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c39a4(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: effectRenderTransformedInstance. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_00392b2c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned long long temp_v5;
  
  if (0 < *(int *)(param_1 + 4)) {
    FUN_002bed3c();
    efctSetSpeed();
    FUN_002c39a4(g_titleScene);
    temp_v3 = g_titleScene;
    temp_v0 = FUN_002c5d80(1,0);
    piVar4 = (int *)(temp_v3 + 0x124c);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = g_titleScene;
    temp_v0 = packNibblesAndByte(6,7,0);
    piVar4 = (int *)(temp_v3 + 0x12ac);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v4 = 0.38f;
    FUN_002ba12c(g_titleScene);
    FUN_002bf380(2,0x11,0,0,0,0xb);
    efctSetSpeed();
    FUN_002bf288(2,0x1d,2000,(int)temp_v4,0,0xb);
    efctSetSpeed();
    temp_v4 = 0.36f;
    FUN_002ba12c(g_titleScene);
    temp_v3 = g_titleScene;
    temp_v5 = (unsigned long long)(unsigned int)(int)temp_v4;
    temp_v0 = packNibblesAndByte(6,1,0);
    piVar4 = (int *)(temp_v3 + 0x12ac);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v3 = 0;
    do {
      VectorSignedToFloat((int)temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      effectRenderTransformedInstance(param_1 + temp_v3 * 0x8c + 0x37c);
      temp_v0 = g_titleScene;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    piVar4 = (int *)(g_titleScene + 0x12ac);
    temp_v3 = *piVar4;
    temp_v1 = piVar4[temp_v3 + 2];
    *piVar4 = temp_v3 - 1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v1 != piVar4[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12c8))(piVar4[temp_v3 + 1]);
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    temp_v3 = g_titleScene;
    piVar4 = (int *)(g_titleScene + 0x12ac);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12c8))(piVar4[temp_v0 + 1]);
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v3 = g_titleScene;
    piVar4 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1268))(piVar4[temp_v0 + 1]);
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    FUN_002bed3c();
    efctSetSpeed();
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    temp_v3 = param_1 + *(int *)(param_1 + 4) * 8;
    UNRECOVERED_JUMPTABLE = *(romwright_code **)(temp_v3 + 0xb8);
    if ((UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) ||
       (((*(unsigned int *)(temp_v3 + 0xbc) & 1) != 0 && (*(unsigned int *)(temp_v3 + 0xbc) != 0)))) {
      if ((*(unsigned int *)(temp_v3 + 0xbc) & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(romwright_code **)((unsigned char *)UNRECOVERED_JUMPTABLE +
                       *(int *)(param_1 + ((int)*(unsigned int *)(temp_v3 + 0xbc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00392e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

} /* extern "C" */
