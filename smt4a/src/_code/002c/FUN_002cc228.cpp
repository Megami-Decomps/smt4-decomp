/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc228` (_code @ 0x2cc228, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [100], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern unsigned char LAB_003d4e88; /* 0x3d4e88 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_002cc228(unsigned char param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [100];
  
  if (param_2 != 0) {
    temp_v0 = FUN_00187180(0x16,0);
  }
  else {
    temp_v0 = FUN_00187180(0x16,1);
  }
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  temp_v2[0] = param_1;
  FUN_00100854(temp_v2,temp_v1,temp_v0,100,&LAB_003d4e88);
  return;
}

} /* extern "C" */
