/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202450` (_code @ 0x202450, 0x274 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_00335060(int);

typedef int romwright_code(...);
extern int DAT_0057f108; /* 0x57f108 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern unsigned int FUN_002a4878(int);
extern int FUN_0033132c(void);
/* Supplied declaration required: FUN_00335060. */
extern int FUN_003da8f4(int, unsigned int);


unsigned int FUN_00202450(void)

{
/* irregular: 20 unstructured edge(s); 13 goto(s); 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  temp_v5 = DAT_0057f108;
  FUN_00157558(g_renderCtx);
  temp_v2 = g_renderCtx;
  temp_v0 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v2 + 0x1258);
  temp_v3 = *piVar7;
  temp_v4 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 + 1;
  piVar7[temp_v3 + 3] = temp_v0;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v0) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  temp_v1 = FUN_002a4878(temp_v5 + 0x40);
  temp_v0 = FUN_003da8f4((int)*(char *)(temp_v5 + 0xa4),temp_v1);
  temp_v2 = DAT_0057f108;
  temp_v5 = *(int *)(temp_v5 + 0x1c);
  if (temp_v5 != 0x21) {
    if (temp_v5 < 0x21) {
      if (temp_v5 != 9) {
        if (temp_v5 < 9) {
          switch(temp_v5) {
          default:
            goto LAB_00202664;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            goto LAB_002025cc;
          }
        }
        if (temp_v5 != 0x10) {
          if (temp_v5 < 0x10) {
            if ((temp_v5 != 10 && temp_v5 != 0xb) && temp_v5 != 0xf) goto LAB_00202664;
          }
          else if ((temp_v5 != 0x1e && temp_v5 != 0x1f) && temp_v5 != 0x20) goto LAB_00202664;
        }
      }
    }
    else if (temp_v5 != 0x37) {
      if (temp_v5 >= 0x37) {
        if (temp_v5 == 0x46) goto LAB_002025cc;
        if (0x45 >= temp_v5) {
          if ((temp_v5 != 0x38 && temp_v5 != 0x39) && temp_v5 != 0x3a) goto LAB_00202664;
          goto LAB_002025cc;
        }
        if ((temp_v5 != 0x51 && temp_v5 != 0x53) && temp_v5 != 0x54) goto LAB_00202664;
        goto LAB_00202648;
      }
      if (temp_v5 == 0x2f) {
LAB_00202648:
        temp_v5 = FUN_0033132c();
        goto joined_r0x00202628;
      }
      if (temp_v5 < 0x30) {
        if (temp_v5 != 0x22) {
          if (temp_v5 != 0x25) {
            if (temp_v5 != 0x2d) goto LAB_00202664;
          }
          else {
            temp_v5 = FUN_0033132c();
            goto joined_r0x00202628;
          }
        }
      }
      else if ((temp_v5 != 0x33 && temp_v5 != 0x35) && temp_v5 != 0x36) goto LAB_00202664;
    }
  }
LAB_002025cc:
  if ((((!(temp_v0 == 9 || temp_v0 == 0x23)) && (!(temp_v0 == 0x24 || temp_v0 == 0x25))) &&
      (!(temp_v0 == 0x26 || temp_v0 == 0x2c))) &&
     (((!(temp_v0 == 0x41 || temp_v0 == 0x2d) && (!(temp_v0 == 0x2e || temp_v0 == 0x2f))) &&
      (!((temp_v0 == 0x30 || temp_v0 == 0x31) || temp_v0 == 0x32))))) {
    temp_v5 = FUN_0033132c();
joined_r0x00202628:
    if (0 < temp_v5) {
      FUN_00335060(temp_v2);
    }
  }
LAB_00202664:
  temp_v5 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar7;
  temp_v0 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 - 1;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v0 != piVar7[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  FUN_0016c560(g_renderCtx);
  FUN_0016c410(g_renderCtx);
  return 0;
}

} /* extern "C" */
