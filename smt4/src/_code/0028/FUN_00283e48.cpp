/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283e48` (_code @ 0x283e48, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a9f98(int, unsigned int);
int FUN_002b46f8(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00145a98; /* 0x145a98 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a9f98. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_00283e48(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = DAT_00433158;
  FUN_002a9f98(DAT_00433158,param_1);
  if (temp_v0 == 0) {
    temp_v1 = FUN_002c0cec(4,1);
    temp_v2 = FUN_002c0cc4();
    temp_v1 = FUN_002c0c74(temp_v1);
    temp_v4 = (unsigned short)param_1;
    FUN_002b46f8(temp_v3,temp_v2,temp_v1,0x3c,&LAB_00145a98);
  }
  return;
}

} /* extern "C" */
