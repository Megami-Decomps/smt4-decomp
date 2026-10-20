/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480ba0` (_code @ 0x480ba0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_00471e80(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0035fd50; /* 0x35fd50 */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_00471e80. */


void FUN_00480ba0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(DAT_00570280 + 0x3dc) == 0) ||
      (temp_v0 = DAT_00570280, FUN_00471e80(DAT_00570280,param_1), temp_v0 == 0)) &&
     (temp_v0 = FUN_00187180(8,5), temp_v0 != 0)) {
    temp_v1 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v0);
    FUN_00100854(temp_v3,temp_v1,temp_v2,0x2c,&LAB_0035fd50);
  }
  return;
}

} /* extern "C" */
