/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ec04` (_code @ 0x25ec04, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_00227294(int, int, int);

typedef int romwright_code(...);
extern int DAT_0057f108; /* 0x57f108 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_00227294. */
extern unsigned int FUN_002a4878(int);
extern int FUN_003da8f4(int, unsigned int);


unsigned int FUN_0025ec04(void)

{
/* irregular: 7 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  temp_v3 = DAT_0057f108;
  FUN_00157558(g_renderCtx);
  temp_v1 = g_renderCtx;
  temp_v0 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v1 + 0x1258);
  temp_v4 = *piVar7;
  temp_v5 = piVar7[temp_v4 + 2];
  *piVar7 = temp_v4 + 1;
  piVar7[temp_v4 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  temp_v1 = *(int *)(temp_v3 + 0x1c);
  if (temp_v1 == 0x47) {
    temp_v1 = *(int *)(temp_v3 + 0x28);
  }
  if (temp_v1 != 0x26) {
    if (temp_v1 < 0x27) {
      if (temp_v1 != 0x11) {
        if (temp_v1 < 0x12) {
          if (temp_v1 != 10) {
            if (temp_v1 < 0xb) {
              if (temp_v1 != 4 && temp_v1 != 5) goto LAB_0025ed64;
            }
            else if (temp_v1 != 0xf && temp_v1 != 0x10) goto LAB_0025ed64;
          }
        }
        else if (temp_v1 != 0x13 && temp_v1 != 0x1d) {
          if (temp_v1 != 0x24) {
            if (temp_v1 != 0x25) goto LAB_0025ed64;
          }
          else {
            temp_v2 = FUN_002a4878(temp_v3 + 0x40);
            temp_v3 = FUN_003da8f4((int)*(char *)(temp_v3 + 0xa4),temp_v2);
            if (temp_v3 != 0x1b) goto LAB_0025ed64;
          }
        }
      }
    }
    else if (temp_v1 != 0x2e) {
      if (temp_v1 < 0x2f) {
        switch(temp_v1) {
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2b:
        case 0x2c:
          goto LAB_0025ed54;
        default:
          goto LAB_0025ed64;
        }
      }
      if ((temp_v1 != 0x2f && temp_v1 != 0x50) && (temp_v1 != 0x51 && temp_v1 != 0x52)) goto LAB_0025ed64;
    }
  }
LAB_0025ed54:
  FUN_00227294(0,0,1);
LAB_0025ed64:
  temp_v3 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar7;
  temp_v0 = piVar7[temp_v1 + 2];
  *piVar7 = temp_v1 - 1;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v0 != piVar7[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  FUN_0016c560(g_renderCtx);
  FUN_0016c410(g_renderCtx);
  return 0;
}

} /* extern "C" */
