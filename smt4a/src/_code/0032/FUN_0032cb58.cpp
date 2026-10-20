/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032cb58` (_code @ 0x32cb58, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00151340(void);
int FUN_0015e2bc(unsigned int, unsigned int, int, int);
int FUN_00194fb0(unsigned char *, int);
int FUN_0037b0c0(void);
int VectorUnsignedToFloat(unsigned int, int);

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */
extern unsigned int DAT_0063f4bc; /* 0x63f4bc */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */
extern unsigned char DAT_0063f4c5; /* 0x63f4c5 */
extern int DAT_0063f500; /* 0x63f500 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00151340. */
/* Supplied declaration required: FUN_0015e2bc. */
extern int FUN_0015fe30(unsigned char *);
/* Supplied declaration required: FUN_00194fb0. */
/* Supplied declaration required: FUN_0037b0c0. */


unsigned char FUN_0032cb58(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char *puVar4;
  unsigned int in_fpscr;
  float temp_v3;
  
  temp_v2 = 0;
  temp_v0 = DAT_0063f500;
  if (DAT_0063f4c4 != '\0') {
    temp_v0 = *(int *)(DAT_0063f500 + 0x10);
  }
  if ((DAT_0063f4c4 != '\0' && temp_v0 != 0) && (param_2 < 0x10)) {
    puVar4 = &DAT_0063e1e8;
    temp_v0 = FUN_0015fe30(&DAT_0063e1e8);
    if ((temp_v0 != 0) &&
       (((FUN_00194fb0(&DAT_0063e1e8,param_1), puVar4 != (unsigned char *)0x0 &&
         (temp_v1 = param_2, FUN_0037b0c0(), temp_v1 == 0)) &&
        (temp_v0 = param_1, FUN_00151340(), temp_v0 != 0)))) {
      temp_v1 = param_2 * 0x88 + 0x63ea78;
      FUN_0015e2bc(temp_v1,param_2 * 4 + 0x63f2f8,param_1,0);
      temp_v2 = (temp_v1 & 0xff) == 0;
      if (DAT_0063f4c5 == 0) {
        temp_v3 = 0.0f;
      }
      else {
        temp_v3 = (float)VectorUnsignedToFloat((unsigned int)DAT_0063f4c5,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (temp_v3 - 64.0f) * 0.015748031f + 1.0f;
        if ((int)temp_v3 >= 0x3f800001) {
          temp_v3 = 1.0f;
        }
      }
      *(float *)(param_2 * 0x88 + 0x63eac0) = temp_v3;
      if ((temp_v1 & 0xff) == 0) {
        DAT_0063f4bc = DAT_0063f4bc | (1 << (param_2 & 0xff));
      }
    }
  }
  return temp_v2;
}

} /* extern "C" */
