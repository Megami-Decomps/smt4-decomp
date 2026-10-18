/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f5b8` (_code @ 0x10f5b8, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0044e640; /* 0x44e640 */
extern int DAT_0044e644; /* 0x44e644 */
extern unsigned char *DAT_0044e648; /* 0x44e648 */

/* Supplied declaration required: FUN_0011ba54. */
extern int FUN_0011ba80(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0011bab0. */
extern unsigned int FUN_002bbcdc(void);
/* Supplied declaration required: FUN_002bbd10. */
extern int FUN_002c153c(unsigned int *, char *, unsigned int, unsigned int);
extern int FUN_002c1570(void);
extern unsigned int FUN_002c3290(char *);


void FUN_0010f5b8(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  int temp_v2;
  
  if (DAT_0044e644 != 0) {
    return;
  }
  temp_v2 = in_r3;
  temp_v0 = FUN_002c1570();
  if (temp_v0 != 0x8a067f9) {
    if (temp_v0 < 0) {
      FUN_002bbd10(temp_v0,0x10f5e4);
    }
  }
  temp_v1 = FUN_002c3290("fs:USER");
  temp_v0 = FUN_002c153c((unsigned int *)&DAT_0044e644,"fs:USER",temp_v1,0);
  if (temp_v0 < 0) {
    FUN_002bbd10(temp_v0,0x10f60c);
  }
  FUN_0011ba54(DAT_0044e644);
  DAT_0044e648 = &DAT_0044e640;
  FUN_0011bab0(&DAT_0044e648);
  temp_v2 = FUN_002bbcdc();
  temp_v0 = FUN_0011ba80((unsigned int *)&temp_v2,0);
  if (-(temp_v0 >> 0x1f) != 0) {
    FUN_002bbd10(temp_v0,0x10f654,-(temp_v0 >> 0x1f),temp_v2);
    return;
  }
  return;
}
