/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041a834` (_code @ 0x41a834, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001879d0(int);
int FUN_003c5de0(int, unsigned int, int, int, int);
int VectorSignedToFloat(int, int);
int __aeabi_idivmod(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_003c5de0. */
extern int FUN_004ab718(void);
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_0041a834(int param_1,unsigned long long *param_2)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  float temp_v13;
  
  if (((*(int *)(param_1 + 0x38) != 0) && (DAT_0057a9c8 != 0)) &&
     (temp_v1 = FUN_004ab718(), temp_v2 = g_renderCtx, temp_v1 == 0)) {
    temp_v1 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v2 + 0x1258);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    efctSetSpeed();
    temp_v11 = *param_2;
    temp_v8 = 0.29f;
    FUN_001879d0(g_renderCtx);
    temp_v1 = *(int *)(param_1 + 0x38);
    temp_v3 = (int)temp_v8;
    temp_v2 = temp_v1;
    if (temp_v1 >= 2) {
      temp_v2 = 1;
    }
    temp_v13 = 12.0f;
    temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = 1.0f;
    temp_v2 = (int)(temp_v8 * 12.0f * 0.5f);
    temp_v8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x84),(unsigned char)(in_fpscr >> 0x16) & 3);
    if (*(int *)(param_1 + 0x84) < 0x10) {
      temp_v8 = temp_v8 * 0.2f;
    }
    else {
      temp_v8 = 3.0f - (temp_v8 - 15.0f) * 0.2f;
    }
    temp_v4 = (int)temp_v8;
    if ((*(char *)(param_1 + 0x44) == '\0') && (temp_v1 >= 2)) {
      __aeabi_idivmod(*(unsigned int *)(param_1 + 0x3c));
      efctSetSpeed();
      temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = *(unsigned int *)(param_1 + temp_v5 * 4 + 0x4c);
      temp_v0 = (short)*(unsigned int *)(param_1 + temp_v5 * 4);
      temp_v10 = ((float)((unsigned long long)temp_v11 >> 0x20) - temp_v13) + temp_v10;
      temp_v8 = ((float)temp_v11 - temp_v12 * temp_v13) + temp_v9 + temp_v8;
    }
    else {
      __aeabi_idivmod(*(unsigned int *)(param_1 + 0x3c));
      temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = *(unsigned int *)(param_1 + temp_v7 * 4 + 0x4c);
      temp_v0 = (short)*(unsigned int *)(param_1 + temp_v7 * 4);
      temp_v10 = ((float)((unsigned long long)temp_v11 >> 0x20) - temp_v13) + temp_v10;
      temp_v8 = ((float)temp_v11 - temp_v12 * temp_v13) + temp_v9 + temp_v8;
    }
    FUN_003c5de0((int)temp_v0,temp_v6,(int)temp_v8,(int)temp_v10,0x49);
    efctSetSpeed();
    temp_v2 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar7;
    temp_v3 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  return;
}

} /* extern "C" */
