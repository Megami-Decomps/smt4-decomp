/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b45ec` (_code @ 0x2b45ec, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp68; /* 0x68: local_68 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_2_stack;

extern unsigned char LAB_00138800; /* 0x138800 */

/* Supplied declaration required: FUN_00141548. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(int);
extern unsigned int FUN_002c0cc4(void);
extern int FUN_002c0cec(unsigned int, unsigned int);


void FUN_002b45ec(unsigned int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [80];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  temp_v2 = *param_2;
  if (((*(int *)(temp_v2 + 0x3b8) == 0) || (FUN_00141548(temp_v2,param_1), temp_v2 == 0)) &&
     (temp_v2 = FUN_002c0cec(8,2), temp_v2 != 0)) {
    temp_v0 = FUN_002c0cc4();
    temp_v1 = FUN_002c0c74(temp_v2);
    FUN_002b46f8(temp_v3,temp_v0,temp_v1,0xa8,&LAB_00138800);
  }
  return;
}
