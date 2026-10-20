/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d26cc` (_code @ 0x3d26cc, 0x2ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f54(void);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_003fba4c(unsigned int, int, unsigned int, float *, int, int);
int FUN_0050dda4(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int rt_memcpy_w(float [2], int, int);

typedef int romwright_code(...);
/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern int DAT_0057f2c4; /* 0x57f2c4 */
extern int g_renderCtx; /* 0x59dbb4 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00152f54. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_003fba4c. */
/* Supplied declaration required: FUN_0050dda4. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003d26cc(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16 [2];
  float temp_v17;
  float temp_v18;
  
  temp_v3 = g_renderCtx;
  temp_v1 = DAT_0057f2c4;
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
  temp_v0 = *(short *)(temp_v1 + 0x1e);
  temp_v3 = 0;
  if (*(char *)(temp_v1 + 0x20) != '\0') {
    if (temp_v0 == 2) {
      temp_v3 = 800;
    }
    else {
      temp_v2 = 0x375;
      if (temp_v0 == 3 || temp_v0 == 4) {
        temp_v3 = temp_v2;
      }
    }
  }
  else if (temp_v0 == 2) {
    temp_v3 = 0x28e;
  }
  else {
    temp_v2 = 0x311;
    if (temp_v0 == 3 || temp_v0 == 4) {
      temp_v3 = temp_v2;
    }
  }
  temp_v2 = *(int *)(temp_v1 + 4);
  if (temp_v2 != 3) {
    if ((temp_v2 != 4 && temp_v2 != 5) && ((temp_v2 != 6 || (*(int *)(temp_v1 + 8) >= 0x14))))
    goto LAB_003d2950;
  }
  else if (*(int *)(temp_v1 + 8) <= temp_v3) goto LAB_003d2950;
  FUN_00152f54();
  temp_v9 = 0.0f;
  temp_v13 = 0.0f;
  temp_v14 = 0.0f;
  temp_v15 = 0.0f;
  if (*(int *)(temp_v1 + 0x98) != 0) {
    rt_memcpy_w(temp_v16,temp_v1 + 0xa0,0x44);
  }
  else {
    rt_memcpy_w(temp_v16,temp_v1 + 0xe4,0x44);
  }
  temp_v11 = temp_v18 * 40.743664f;
  temp_v6 = temp_v11;
  temp_v7 = temp_v16[0];
  FUN_001a1ee0();
  temp_v12 = -10.0f;
  temp_v11 = temp_v11 * -10.0f;
  FUN_001b63b0();
  temp_v7 = temp_v11 - temp_v7;
  temp_v10 = 1.0f;
  temp_v17 = temp_v6 * temp_v12 - temp_v17;
  temp_v8 = 1.0f / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v9 * temp_v9 + temp_v17 * temp_v17);
  temp_v13 = temp_v11 + temp_v7 * temp_v8 * 20.0f;
  temp_v14 = temp_v9 * temp_v8 * 20.0f + -7.5f;
  temp_v15 = temp_v6 * temp_v12 + temp_v17 * temp_v8 * 20.0f;
  FUN_0050dda4();
  if (*(int *)(temp_v1 + 4) == 6) {
    temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v10 - temp_v9 * 0.05f;
  }
  temp_v3 = VectorFloatToUnsigned(temp_v10 * 255.0f,3);
  FUN_003fba4c(*(unsigned int *)(temp_v1 + 0x8c),0,*(unsigned int *)(temp_v1 + 0x88),&temp_v13,temp_v3 - 0x100
               ,0);
LAB_003d2950:
  temp_v1 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1258);
  temp_v3 = *piVar7;
  temp_v2 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  FUN_0016c560(g_renderCtx);
  FUN_0016c410(g_renderCtx);
  return 0;
}

} /* extern "C" */
