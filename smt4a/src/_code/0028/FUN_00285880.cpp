/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285880` (_code @ 0x285880, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022ecfc(void);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022ecfc. */


unsigned int FUN_00285880(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = g_renderCtx;
  temp_v4 = *param_1;
  if (*(char *)(temp_v4 + 0x93e) == '\0') {
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
    switch(*(unsigned int *)(temp_v4 + 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1e:
      FUN_0022ecfc();
    }
    temp_v0 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v4 = *piVar5;
    temp_v1 = piVar5[temp_v4 + 2];
    *piVar5 = temp_v4 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
