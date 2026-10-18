/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041af74` (_code @ 0x41af74, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_00533f48; /* 0x533f48 */

/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */


void FUN_0041af74(unsigned int param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00184e64(param_4);
  FUN_001835b4(2,0x2b,0x99,*param_3,param_3[1],2);
  temp_v0 = FUN_001834a4(0x2b,0x9a);
  FUN_00180310(6,(int)*(short *)(temp_v0 + 8) + *param_3,(int)*(short *)(temp_v0 + 10) + param_3[1],1,1,
               2,&DAT_00533f48,param_2 % 10);
  temp_v0 = FUN_001834a4(0x2b,0x9b);
  FUN_00180310(6,(int)*(short *)(temp_v0 + 8) + *param_3,param_3[1] + (int)*(short *)(temp_v0 + 10),1,1,
               2,&DAT_00533f48,param_2 / 10);
  FUN_00183bb0();
  return;
}
