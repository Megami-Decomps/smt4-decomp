/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0560` (_code @ 0x2e0564, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001835b4(int, int, int, int, int, int);
int FUN_0036b21c(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0036b21c. */


unsigned int FUN_002e0560(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v1 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v1 + 4) = 1;
  temp_v0 = g_renderCtx;
  if (*(char *)(temp_v1 + 0x10) != '\0') {
    return 0;
  }
  if (*(char *)(temp_v1 + 0x60) == '\0') {
    return 0;
  }
  temp_v1 = *(int *)(temp_v1 + 0x78);
  if (temp_v1 == 6) {
    return 0;
  }
  if (temp_v1 < 7) {
    if (temp_v1 != 3) {
      if (temp_v1 != 4) {
        FUN_0036b21c();
        return 0;
      }
      temp_v1 = FUN_001692ac(1,0);
      piVar5 = (int *)(temp_v0 + 0x1258);
      temp_v2 = *piVar5;
      temp_v3 = piVar5[temp_v2 + 2];
      *piVar5 = temp_v2 + 1;
      piVar5[temp_v2 + 3] = temp_v1;
      if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x1274))();
        *(unsigned char *)(temp_v0 + 0x1270) = 0;
      }
      FUN_001835b4(2,0x2a,7000,0,0,0xb);
      temp_v0 = g_renderCtx;
      piVar5 = (int *)(g_renderCtx + 0x1258);
      temp_v1 = *piVar5;
      temp_v2 = piVar5[temp_v1 + 2];
      *piVar5 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1270) == '\0' && temp_v2 == piVar5[temp_v1 + 1]) {
        return 0;
      }
    }
    else {
      temp_v1 = FUN_001692ac(1,0);
      piVar5 = (int *)(temp_v0 + 0x1258);
      temp_v2 = *piVar5;
      temp_v3 = piVar5[temp_v2 + 2];
      *piVar5 = temp_v2 + 1;
      piVar5[temp_v2 + 3] = temp_v1;
      if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x1274))();
        *(unsigned char *)(temp_v0 + 0x1270) = 0;
      }
      FUN_001835b4(2,0x2a,6000,0,0,0xb);
      temp_v0 = g_renderCtx;
      piVar5 = (int *)(g_renderCtx + 0x1258);
      temp_v1 = *piVar5;
      temp_v2 = piVar5[temp_v1 + 2];
      *piVar5 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1270) == '\0' && temp_v2 == piVar5[temp_v1 + 1]) {
        return 0;
      }
    }
    (*(romwright_code *)piVar5[7])();
    *(unsigned char *)(piVar5 + 6) = 0;
  }
  else {
    if ((temp_v1 != 7) && (temp_v1 == 0xe)) {
      return 0;
    }
    FUN_0036b21c();
  }
  return 0;
}

} /* extern "C" */
