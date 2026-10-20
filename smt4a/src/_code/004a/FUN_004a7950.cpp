/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7950` (_code @ 0x4a7950, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [36], unsigned char *, unsigned int);
int FUN_00493408(...);
int FUN_004934ac(int, int, int, int, unsigned int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern unsigned char LAB_004a7a1c; /* 0x4a7a1c */
extern unsigned char LAB_004a7a2c; /* 0x4a7a2c */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0018349c(int, unsigned int);
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_004934ac. */


void FUN_004a7950(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [36];
  
  temp_v1 = 0xffffffff;
  FUN_004934ac(param_1 + 200,0x407,0,0,param_3);
  FUN_00100388(temp_v2,&LAB_004a7a1c,param_2);
  if (*(char *)(param_1 + 0x94) == 'd') {
    temp_v1 = 0x72e027ff;
  }
  temp_v0 = FUN_0018349c(param_1 + 200,0x40b);
  FUN_00493408(param_1 + 200,0,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0,7,temp_v1,
               param_3,temp_v2);
  temp_v0 = FUN_0018349c(param_1 + 200,0x408);
  FUN_00493408(param_1 + 200,0,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),0,0,temp_v1,
               param_3,&LAB_004a7a2c);
  return;
}

} /* extern "C" */
