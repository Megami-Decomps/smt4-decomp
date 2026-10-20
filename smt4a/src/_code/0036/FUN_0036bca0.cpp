/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036bca0` (_code @ 0x36bca0, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152464(void);
int FUN_0015e2bc(unsigned int, unsigned int, int, int);
int FUN_00194fb0(unsigned char *, int);
int FUN_0037b0c0(void);
int VectorUnsignedToFloat(unsigned int, int);

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */
extern unsigned int DAT_0063f4bc; /* 0x63f4bc */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */
extern unsigned char DAT_0063f4c5; /* 0x63f4c5 */
extern int DAT_0063f50c; /* 0x63f50c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152464. */
/* Supplied declaration required: FUN_0015e2bc. */
extern int FUN_0015fe30(unsigned char *);
/* Supplied declaration required: FUN_00194fb0. */
/* Supplied declaration required: FUN_0037b0c0. */


unsigned char FUN_0036bca0(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v1 = DAT_0063f50c;
  temp_v3 = 0;
  puVar5 = &DAT_0063e1e8;
  if ((((DAT_0063f4c4 != '\0') && (param_2 < 0x10)) &&
      (temp_v0 = FUN_0015fe30(&DAT_0063e1e8), temp_v0 != 0)) &&
     ((puVar2 = puVar5, FUN_00194fb0(&DAT_0063e1e8,param_1),
      puVar2 != (unsigned char *)0x0 && temp_v1 != 0 && (temp_v2 = param_2, FUN_0037b0c0(), temp_v2 == 0))))
  {
    FUN_00194fb0(&DAT_0063e1e8,param_1);
    if ((*(char *)(temp_v1 + 0x3b) != '\0') && (puVar5 == (unsigned char *)0x3)) {
      temp_v1 = param_1;
      FUN_00152464();
      if (temp_v1 == 0) {
        return 0;
      }
    }
    else if (puVar5 != (unsigned char *)0x2) {
      return 0;
    }
    temp_v2 = param_2 * 0x88 + 0x63ea78;
    FUN_0015e2bc(temp_v2,param_2 * 4 + 0x63f2f8,param_1,0);
    temp_v3 = (temp_v2 & 0xff) == 0;
    if (DAT_0063f4c5 == 0) {
      temp_v4 = 0.0f;
    }
    else {
      temp_v4 = (float)VectorUnsignedToFloat((unsigned int)DAT_0063f4c5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (temp_v4 - 64.0f) * 0.015748031f + 1.0f;
      if ((int)temp_v4 >= 0x3f800001) {
        temp_v4 = 1.0f;
      }
    }
    *(float *)(param_2 * 0x88 + 0x63eac0) = temp_v4;
    if (temp_v3) {
      DAT_0063f4bc = DAT_0063f4bc | (1 << (param_2 & 0xff));
    }
  }
  return temp_v3;
}

} /* extern "C" */
