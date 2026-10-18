/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146720` (_code @ 0x146720, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0058938d; /* 0x58938d */
extern int DAT_00589390; /* 0x589390 */
extern unsigned char *DAT_00589394; /* 0x589394 */

/* Supplied declaration required: FUN_00158818. */
extern int FUN_001588c0(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_001588f0. */
/* Supplied declaration required: FUN_0016e800. */
extern int FUN_0016f864(void);
extern int FUN_0016f988(unsigned int *, char *, unsigned int, unsigned int);
extern unsigned int FUN_00188688(void);
extern unsigned int FUN_002e3390(char *);


void FUN_00146720(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  int temp_v2;
  
  if (DAT_00589390 != 0) {
    return;
  }
  temp_v2 = in_r3;
  temp_v0 = FUN_0016f864();
  if (temp_v0 != 0x8a067f9) {
    if (temp_v0 < 0) {
      FUN_0016e800(temp_v0,0x14674c);
    }
  }
  temp_v1 = FUN_002e3390("fs:USER");
  temp_v0 = FUN_0016f988((unsigned int *)&DAT_00589390,"fs:USER",temp_v1,0);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x146774);
  }
  FUN_00158818(DAT_00589390);
  DAT_00589394 = &DAT_0058938d;
  FUN_001588f0(&DAT_00589394);
  temp_v2 = FUN_00188688();
  temp_v0 = FUN_001588c0((unsigned int *)&temp_v2,0);
  if (-(temp_v0 >> 0x1f) != 0) {
    FUN_0016e800(temp_v0,0x1467bc,-(temp_v0 >> 0x1f),temp_v2);
    return;
  }
  return;
}
