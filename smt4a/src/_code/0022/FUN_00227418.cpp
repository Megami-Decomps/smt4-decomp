/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227418` (_code @ 0x227418, 0x3b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int renderCtxResetColorScale(...);
int FUN_0016c560(...);
int FUN_0021775c(unsigned int, unsigned int);
int FUN_00217f14(void);
int FUN_00288538(int);
int FUN_002aa56c(unsigned int, unsigned int, int, int, int);
int FUN_003da8f4(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_camp; /* 0x57f108 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern unsigned int vec2GetXInt(void);
extern unsigned int vec2GetYInt(int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_0021775c. */
/* Supplied declaration required: FUN_00217f14. */
/* Supplied declaration required: FUN_00288538. */
extern unsigned int FUN_002a4878(int);
/* Supplied declaration required: FUN_002aa56c. */
extern int FUN_002ab7ac(void);
/* Supplied declaration required: FUN_003da8f4. */


unsigned int FUN_00227418(void)

{
/* irregular: 9 goto(s); 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  
  temp_v1 = g_camp;
  FUN_00157558(g_renderCtx);
  temp_v3 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar9 = (int *)(temp_v3 + 0x1258);
  temp_v6 = *piVar9;
  temp_v7 = piVar9[temp_v6 + 2];
  *piVar9 = temp_v6 + 1;
  piVar9[temp_v6 + 3] = temp_v2;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v7 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  temp_v3 = *(int *)(temp_v1 + 0x1c);
  if (temp_v3 == 0x47) {
    temp_v3 = *(int *)(temp_v1 + 0x28);
  }
  if (temp_v3 != 0x1e) {
    if (temp_v3 < 0x1e) {
      switch(temp_v3) {
      case 1:
      case 2:
      case 3:
      case 6:
      case 7:
      case 9:
        goto LAB_00227588;
      case 4:
      case 5:
LAB_00227698:
        temp_v4 = FUN_002a4878(temp_v1 + 0x40);
        temp_v4 = FUN_003da8f4((int)*(char *)(temp_v1 + 0xa4),temp_v4);
        temp_v5 = 0;
LAB_002276d8:
        FUN_0021775c(temp_v4,temp_v5);
        break;
      case 10:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x13:
      case 0x1d:
        temp_v4 = FUN_002a4878(temp_v1 + 0x40);
        temp_v4 = FUN_003da8f4((int)*(char *)(temp_v1 + 0xa4),temp_v4);
        temp_v5 = 1;
        FUN_0021775c(temp_v4,temp_v5);
        break;
      case 0xd:
        FUN_00288538(1);
      }
    }
    else if (temp_v3 != 0x29) {
      if (temp_v3 >= 0x29) {
        if (temp_v3 == 0x2e) {
LAB_002276bc:
          temp_v4 = FUN_002a4878(temp_v1 + 0x40);
          temp_v4 = FUN_003da8f4((int)*(char *)(temp_v1 + 0xa4),temp_v4);
          temp_v5 = 1;
          goto LAB_002276d8;
        }
        if (temp_v3 < 0x2f) {
          if (temp_v3 == 0x2b || temp_v3 == 0x2c) goto LAB_00227698;
          if (temp_v3 != 0x2d) goto LAB_00227770;
        }
        else {
          if (temp_v3 == 0x2f) goto LAB_002276bc;
          if (temp_v3 != 0x33 && temp_v3 != 0x46) goto LAB_00227770;
        }
        goto LAB_00227588;
      }
      switch(temp_v3) {
      case 0x1f:
        goto LAB_00227588;
      case 0x20:
      case 0x21:
      case 0x22:
        temp_v3 = FUN_002ab7ac();
        if (temp_v3 != 3) {
          temp_v0 = *(char *)(temp_v1 + 0x6e2);
          goto joined_r0x00227700;
        }
        temp_v4 = vec2GetXInt();
        temp_v5 = vec2GetYInt(temp_v1 + 0x888);
        FUN_002aa56c(temp_v4,temp_v5,(int)*(char *)(temp_v1 + 0xb9),(int)*(char *)(temp_v1 + 0xb8),
                     (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xb9) * 2 + 0x1b54));
        FUN_00217f14();
        break;
      case 0x23:
        if (*(char *)(temp_v1 + 0xb7) == '\0') break;
        temp_v0 = *(char *)(temp_v1 + 0x6e2);
joined_r0x00227700:
        if (temp_v0 != '\0') break;
        temp_v4 = vec2GetXInt();
        temp_v5 = vec2GetYInt(temp_v1 + 0x888);
        FUN_002aa56c(temp_v4,temp_v5,(int)*(char *)(temp_v1 + 0xb9),(int)*(char *)(temp_v1 + 0xb8),
                     (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xb9) * 2 + 0x1b54));
        FUN_00217f14();
        break;
      default:
      }
    }
  }
  else {
LAB_00227588:
    temp_v4 = FUN_002a4878(temp_v1 + 0x40);
    temp_v3 = FUN_003da8f4((int)*(char *)(temp_v1 + 0xa4),temp_v4);
    if ((((temp_v3 == 0x13 || temp_v3 == 0x14) || (temp_v3 == 0x15 || temp_v3 == 0x16)) ||
        (temp_v3 == 0x17 || temp_v3 == 0x18)) ||
       (((temp_v3 == 0x19 || temp_v3 == 0x48 || (temp_v3 == 0x49 || temp_v3 == 0x4a)) ||
        ((temp_v3 == 0x4b || temp_v3 == 0x4c || (temp_v3 == 0x4d || temp_v3 == 0x4e)))))) {
      FUN_00288538(0);
    }
    if (*(char *)(temp_v1 + 0xb7) != '\0') {
      temp_v4 = vec2GetXInt();
      temp_v5 = vec2GetYInt(temp_v1 + 0x888);
      FUN_002aa56c(temp_v4,temp_v5,(int)*(char *)(temp_v1 + 0xb9),(int)*(char *)(temp_v1 + 0xb8),
                   (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xb9) * 2 + 0x1b54));
    }
    FUN_00217f14();
  }
LAB_00227770:
  temp_v1 = g_renderCtx;
  piVar9 = (int *)(g_renderCtx + 0x1258);
  temp_v3 = *piVar9;
  temp_v2 = piVar9[temp_v3 + 2];
  *piVar9 = temp_v3 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar9[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  FUN_0016c560(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return 0;
}

} /* extern "C" */
