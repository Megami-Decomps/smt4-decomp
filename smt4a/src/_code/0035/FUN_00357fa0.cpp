/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357fa0` (_code @ 0x357fa0, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00182540(unsigned int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00182540. */
extern int FUN_00387580(unsigned int);


unsigned int FUN_00357fa0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = g_renderCtx;
  temp_v4 = *param_1;
  if (*(int *)(temp_v4 + 8) - 1U < 0xe) {
    temp_v0 = FUN_00387580(6);
    piVar4 = (int *)(temp_v3 + 0x1278);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1290) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1294))();
      *(unsigned char *)(temp_v3 + 0x1290) = 0;
    }
    temp_v3 = g_renderCtx;
    temp_v0 = FUN_001692ac(1,0);
    piVar4 = (int *)(temp_v3 + 0x1258);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    temp_v3 = g_renderCtx;
    temp_v0 = FUN_00169294(6,1,0);
    piVar4 = (int *)(temp_v3 + 0x12b8);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    temp_v3 = 0;
    do {
      temp_v0 = temp_v4 + temp_v3 * 0xc;
      if (*(char *)(temp_v0 + 0x56c) != '\0') {
        FUN_00182540(*(unsigned int *)(temp_v0 + 0x568));
      }
      temp_v0 = g_renderCtx;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    piVar4 = (int *)(g_renderCtx + 0x12b8);
    temp_v3 = *piVar4;
    temp_v4 = piVar4[temp_v3 + 2];
    *piVar4 = temp_v3 - 1;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != piVar4[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    temp_v3 = g_renderCtx;
    piVar4 = (int *)(g_renderCtx + 0x1258);
    temp_v4 = *piVar4;
    temp_v0 = piVar4[temp_v4 + 2];
    *piVar4 = temp_v4 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v0 != piVar4[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    temp_v3 = g_renderCtx;
    piVar4 = (int *)(g_renderCtx + 0x1278);
    temp_v4 = *piVar4;
    temp_v0 = piVar4[temp_v4 + 2];
    *piVar4 = temp_v4 - 1;
    if (*(char *)(temp_v3 + 0x1290) != '\0' || temp_v0 != piVar4[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1294))();
      *(unsigned char *)(temp_v3 + 0x1290) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
