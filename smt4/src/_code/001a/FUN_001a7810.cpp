/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a7810` (_code @ 0x1a7810, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b6dd8(...);
int FUN_002be5a4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int efctSetSpeed(void);
int VectorSignedToFloat(...);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int dataTable24Sub0GetRecordS90(unsigned int);
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */


void FUN_001a7810(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  
  if (param_5 != 0) {
    FUN_002bf380(2,0x24,0xb,param_3,param_4,0x65);
    temp_v3 = 0xffffffff;
    efctSetSpeed();
    if (param_6 != 0) {
      FUN_002bf288(2,0x24,0xa0,param_3,param_4,0x6f);
    }
    else {
      FUN_002bf288(2,0x24,0x9c,param_3,param_4,0x6f);
    }
  }
  else if (param_6 != 0) {
    FUN_002bf380(2,0x24,10,param_3,param_4,0x65);
    temp_v3 = 0xff;
    FUN_002bf288(2,0x24,0xa0,param_3,param_4,0x6f);
  }
  else {
    FUN_002bf380(2,0x24,9,param_3,param_4,0x65);
    temp_v3 = 0xff;
    FUN_002bf288(2,0x24,0x9c,param_3,param_4,0x6f);
  }
  efctSetSpeed();
  temp_v0 = dataTable24Sub0GetRecordS90(param_2);
  temp_v1 = FUN_002bf4f8(0x24,0xa4);
  temp_v2 = temp_v0;
  FUN_002b6dd8(temp_v0,2);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (**(short **)(temp_v1 + 0xc) - temp_v2) / 2 + param_3
                      ,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,temp_v3,temp_v0);
  return;
}

} /* extern "C" */
