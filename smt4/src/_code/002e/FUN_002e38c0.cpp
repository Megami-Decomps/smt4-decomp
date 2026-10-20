/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e38c0` (_code @ 0x2e38c0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(unsigned char [96], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern unsigned char LAB_0032c6c8; /* 0x32c6c8 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_002e38c0(unsigned char param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [96];
  
  if (param_2 != 0) {
    temp_v0 = FUN_002c0cec(0x16,0);
  }
  else {
    temp_v0 = FUN_002c0cec(0x16,1);
  }
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  temp_v2[0] = param_1;
  FUN_002b46f8(temp_v2,temp_v1,temp_v0,0x60,&LAB_0032c6c8);
  return;
}

} /* extern "C" */
