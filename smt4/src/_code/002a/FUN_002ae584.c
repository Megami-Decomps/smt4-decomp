/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae584` (_code @ 0x2ae584, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_00145c78; /* 0x145c78 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(int);
extern unsigned int FUN_002c0cc4(void);
extern int FUN_002c0cec(unsigned int, unsigned int);


void FUN_002ae584(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = FUN_002c0cec(0xb,0);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c0cc4();
    temp_v2 = FUN_002c0c74(temp_v0);
    temp_v4 = param_1;
    FUN_002b46f8(temp_v3,temp_v1,temp_v2,0x40,&LAB_00145c78);
  }
  return;
}
