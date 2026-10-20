/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003844a0` (_code @ 0x3844a0, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(void);
int FUN_002bf538(void);
int FUN_002c0944(unsigned int);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);
int FUN_0038368c(unsigned int *);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c0944. */
extern unsigned int FUN_002c15ac(unsigned int);
extern unsigned int FUN_002c15d4(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0038368c. */


void FUN_003844a0(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  
  if ((int)param_1[1] >= 3) {
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    FUN_002bf538();
    temp_v0 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v0 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    temp_v0 = g_titleScene;
    if ((*param_1 & 0x80) != 0) {
      temp_v5 = VectorFloatToUnsigned((float)param_1[0x82] * 192.0f,3);
      temp_v1 = FUN_002c5d80(1,0);
      piVar6 = (int *)(temp_v0 + 0x124c);
      temp_v3 = *piVar6;
      temp_v4 = piVar6[temp_v3 + 2];
      *piVar6 = temp_v3 + 1;
      piVar6[temp_v3 + 3] = temp_v1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
      FUN_002c1b64(g_titleScene,0);
      temp_v2 = FUN_002c15d4(*(unsigned int *)(g_titleScene + 0x528));
      VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = FUN_002c15ac(*(unsigned int *)(g_titleScene + 0x528));
      VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002c0944(temp_v5 & 0xff);
      temp_v0 = g_titleScene;
      piVar6 = (int *)(g_titleScene + 0x124c);
      temp_v1 = *piVar6;
      temp_v3 = piVar6[temp_v1 + 2];
      *piVar6 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1268))(piVar6[temp_v1 + 1]);
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
    }
    FUN_0038368c(param_1);
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v1 = *piVar6;
    temp_v3 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bed3c();
    FUN_002bf538();
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return;
  }
  return;
}

} /* extern "C" */
