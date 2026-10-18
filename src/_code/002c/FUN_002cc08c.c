/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc08c` (_code @ 0x2cc08c, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned int DAT_004e312c; /* 0x4e312c */
extern signed char DAT_004e3134; /* 0x4e3134 */
extern unsigned char DAT_004e3135; /* 0x4e3135 */
extern int DAT_004e316c; /* 0x4e316c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00141fd0. */
/* Supplied declaration required: FUN_00266be4. */
extern char FUN_002bcc14(int, unsigned char *, int, unsigned int);
extern int FUN_002bf684(unsigned char *);
/* Supplied declaration required: FUN_002c1d78. */


unsigned char FUN_002cc08c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v3 = 0;
  temp_v1 = DAT_004e316c;
  if (DAT_004e3134 != '\0') {
    temp_v1 = *(int *)(DAT_004e316c + 0x10);
  }
  if ((DAT_004e3134 != '\0' && temp_v1 != 0) && (param_2 < 0x10)) {
    puVar5 = &DAT_004e1f68;
    temp_v1 = FUN_002bf684(&DAT_004e1f68);
    if ((temp_v1 != 0) &&
       (((FUN_00141fd0(&DAT_004e1f68,param_1), puVar5 != (unsigned char *)0x0 &&
         (temp_v2 = param_2, FUN_00266be4(), temp_v2 == 0)) &&
        (temp_v1 = param_1, FUN_002c1d78(), temp_v1 != 0)))) {
      temp_v0 = FUN_002bcc14(param_2 * 0x84 + 0x4e2728,&DAT_004e2f68 + param_2 * 4,param_1,0);
      temp_v3 = temp_v0 == '\0';
      if (DAT_004e3135 == 0) {
        temp_v4 = 0.0f;
      }
      else {
        temp_v4 = (float)VectorUnsignedToFloat((unsigned int)DAT_004e3135,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (temp_v4 - 64.0f) * 0.015748031f + 1.0f;
        if ((int)temp_v4 >= 0x3f800001) {
          temp_v4 = 1.0f;
        }
      }
      *(float *)(param_2 * 0x84 + 0x4e2770) = temp_v4;
      if (temp_v0 == '\0') {
        DAT_004e312c = DAT_004e312c | (1 << (param_2 & 0xff));
      }
    }
  }
  return temp_v3;
}
