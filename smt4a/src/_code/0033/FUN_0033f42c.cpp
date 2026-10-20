/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f42c` (_code @ 0x33f42c, 0x384 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00283c54(...);
int FUN_00283cf4(unsigned int, unsigned int, int, int);
int FUN_00348c28(int);
int FUN_00348c3c(...);
int VectorSignedToFloat(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_005821fc; /* 0x5821fc */
extern int g_gameState; /* 0x5f15fc */
extern short DAT_005f1854; /* 0x5f1854 */
extern signed char DAT_005f1858; /* 0x5f1858 */
extern signed char DAT_005f185c; /* 0x5f185c */
extern int DAT_005f1c24; /* 0x5f1c24 */
extern unsigned int DAT_005f1c28; /* 0x5f1c28 */
extern unsigned int DAT_005f1c2c; /* 0x5f1c2c */
extern unsigned int DAT_005f1c30; /* 0x5f1c30 */
extern unsigned int DAT_005f1c34; /* 0x5f1c34 */
extern int DAT_005f1c38; /* 0x5f1c38 */
extern int DAT_005f1c3c; /* 0x5f1c3c */
extern int DAT_005f1c40; /* 0x5f1c40 */
extern int DAT_005f1c44; /* 0x5f1c44 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00283c54. */
/* Supplied declaration required: FUN_00283cf4. */
extern int FUN_003309c8(void);
/* Supplied declaration required: FUN_00348c28. */
/* Supplied declaration required: FUN_00348c3c. */


void FUN_0033f42c(void)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  
  if (DAT_005f185c != '\0') {
    return;
  }
  temp_v0 = FUN_003309c8();
  temp_v1 = DAT_005f1c34;
  if ((temp_v0 != 0) || (DAT_005f1c24 == 0)) {
    FUN_00348c28(0);
    FUN_00348c3c(0);
    return;
  }
  if (DAT_005f1c24 == 1) {
    FUN_00348c3c(1);
    VectorSignedToFloat(DAT_005f1c2c,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(DAT_005f1c28,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00283cf4(DAT_005f1c30,
                 DAT_005f1c34 | (DAT_005f1c3c << 0x18) |
                 (DAT_005f1c40 << 0x10) | (DAT_005f1c44 << 8),DAT_005f1c38 != 0,1);
    FUN_00348c28(0);
    return;
  }
  if (DAT_005f1c24 == 2) {
    FUN_00348c28(1);
    VectorSignedToFloat(DAT_005f1c2c,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(DAT_005f1c28,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00283c54(DAT_005f1c30,
                 DAT_005f1c34 | (DAT_005f1c3c << 0x18) |
                 (DAT_005f1c40 << 0x10) | (DAT_005f1c44 << 8),DAT_005f1c38 != 0,1);
    FUN_00348c3c(0);
    return;
  }
  temp_v0 = (int)DAT_005f1854;
  temp_v2 = 2;
  if (DAT_005f1858 != '\0') {
    temp_v0 = -2;
  }
  FUN_00348c28(1);
  if (g_gameState >= 100) {
    VectorSignedToFloat(DAT_005f1c2c,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(DAT_005f1c28,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00283c54(DAT_005f1c30,
                 (DAT_005f1c3c << 0x18) | (DAT_005f1c40 << 0x10) | (DAT_005f1c44 << 8) | temp_v1,1,
                 temp_v2);
    FUN_00348c3c(0);
    return;
  }
  switch(temp_v0) {
  case 0:
    temp_v0 = 0;
    if (DAT_005821fc < 0) {
      DAT_005821fc = DAT_005821fc + 2;
      if (0 < DAT_005821fc) {
        DAT_005821fc = temp_v0;
      }
    }
    else if ((0 < DAT_005821fc) && (DAT_005821fc = DAT_005821fc - 2, DAT_005821fc < 0)) {
      DAT_005821fc = temp_v0;
    }
    temp_v2 = 3;
    temp_v1 = temp_v1 + DAT_005821fc;
    break;
  case 1:
    temp_v0 = 0x10;
    if (DAT_005821fc < 0x10) {
      DAT_005821fc = DAT_005821fc + 2;
      if (DAT_005821fc >= 0x11) {
        DAT_005821fc = temp_v0;
      }
    }
    else if ((DAT_005821fc >= 0x11) && (DAT_005821fc = DAT_005821fc - 2, DAT_005821fc < 0x10)) {
      DAT_005821fc = temp_v0;
    }
    temp_v2 = 3;
    temp_v1 = temp_v1 + DAT_005821fc;
    break;
  case 2:
    if (DAT_005821fc < 0x20) {
      DAT_005821fc = DAT_005821fc + 2;
      if (DAT_005821fc >= 0x21) {
        DAT_005821fc = 0x20;
      }
    }
    else if ((DAT_005821fc >= 0x21) && (DAT_005821fc = DAT_005821fc - 2, DAT_005821fc < 0x20)) {
      DAT_005821fc = 0x20;
    }
    temp_v2 = 3;
    temp_v1 = temp_v1 + DAT_005821fc;
    break;
  case -2:
    if (DAT_005821fc < 0x20) {
      DAT_005821fc = DAT_005821fc + 2;
      if (DAT_005821fc >= 0x21) {
        DAT_005821fc = 0x20;
      }
    }
    else if ((DAT_005821fc >= 0x21) && (DAT_005821fc = DAT_005821fc - 2, DAT_005821fc < 0x20)) {
      DAT_005821fc = 0x20;
    }
    temp_v1 = temp_v1 + DAT_005821fc;
    break;
  case -1:
    if (DAT_005821fc < -0x10) {
      temp_v0 = DAT_005821fc + 2;
      temp_v3 = DAT_005821fc != -0x12;
      DAT_005821fc = temp_v0;
      if (temp_v3 && -0x11 < temp_v0) {
        DAT_005821fc = -0x10;
      }
    }
    else if ((-0x10 < DAT_005821fc) && (DAT_005821fc = DAT_005821fc - 2, DAT_005821fc < -0x10)) {
      DAT_005821fc = -0x10;
    }
    temp_v1 = temp_v1 + DAT_005821fc;
  default:
  }
  if ((int)temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if ((int)temp_v1 >= 0x100) {
    temp_v1 = 0xff;
  }
  VectorSignedToFloat(DAT_005f1c2c,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(DAT_005f1c28,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00283c54(DAT_005f1c30,
               (DAT_005f1c3c << 0x18) | (DAT_005f1c40 << 0x10) | (DAT_005f1c44 << 8) | temp_v1,1,temp_v2
              );
  FUN_00348c3c(0);
  return;
}

} /* extern "C" */
