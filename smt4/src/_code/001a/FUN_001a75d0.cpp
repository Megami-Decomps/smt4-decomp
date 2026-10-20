/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a75d0` (_code @ 0x1a75d0, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028850c(...);
int FUN_002be5a4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028850c. */
extern unsigned int dataTable24Sub0GetRecordS90(unsigned int);
extern unsigned int dataTable24Sub0GetRecordS90X(unsigned int);
extern int FUN_0029ebc0(void);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_001a75d0(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned char temp_v5 [64];
  unsigned int temp_v6;
  
  temp_v6 = dataTable24Sub0GetRecordS90X(param_2);
  temp_v0 = FUN_0029ebc0();
  if (param_5 != 0) {
    FUN_002bf380(2,0x24,0x12,param_3,param_4,0x65);
    FUN_002bf288(2,0x24,0x95,param_3,param_4,0x6a);
    if (temp_v0 >= 0) {
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x97,param_3,param_4,0x6d);
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x91,param_3,param_4,0x6f);
    }
    else {
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x96,param_3,param_4,0x6f);
      FUN_002bf538();
    }
    temp_v3 = 0xffffffff;
    temp_v4 = 0xff;
  }
  else {
    FUN_002bf380(2,0x24,0x11,param_3,param_4,0x65);
    FUN_002bf288(2,0x24,0x90,param_3,param_4,0x6a);
    if (-1 < temp_v0) {
      FUN_002bf288(2,0x24,0x91,param_3,param_4,0x6f);
    }
    temp_v3 = 0xff;
    temp_v4 = 0xffffffff;
  }
  temp_v1 = dataTable24Sub0GetRecordS90(param_2);
  temp_v2 = FUN_002bf4f8(0x24,0xa4);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,temp_v3,temp_v1);
  temp_v2 = FUN_002bf4f8(0x24,0xa6);
  FUN_0028850c(param_1,temp_v6,temp_v0,temp_v5);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,temp_v4,temp_v5);
  return;
}

} /* extern "C" */
