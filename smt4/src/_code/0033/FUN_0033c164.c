/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c164` (_code @ 0x33c164, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_002dcb50; /* 0x2dcb50 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_0033c164(unsigned char param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  
  temp_v0 = FUN_002c0cec(0x14,0);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  temp_v2[0] = param_1;
  FUN_002b46f8(temp_v2,temp_v1,temp_v0,6,&LAB_002dcb50);
  return;
}
