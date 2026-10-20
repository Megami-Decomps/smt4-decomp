/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c7c8` (_code @ 0x11c7c8, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011ae64(int *, unsigned int, unsigned int, unsigned int);
int FUN_002e7232(unsigned int);
int FUN_002e78d0(unsigned int, unsigned int, int);
int FUN_002e7908(unsigned int *, unsigned int *);

/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

/* Supplied declaration required: FUN_0011ae64. */
extern unsigned int FUN_0011afd8(void);
extern unsigned int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002e7908. */
extern int FUN_002f4e86(unsigned int *);


void FUN_0011c7c8(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v7;
  unsigned int *puStack_24;
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int temp_v8;
  
  puVar4 = (unsigned int *)&temp_v3;
  puStack_24 = param_1;
  uStack_20 = param_2;
  iStack_1c = param_3;
  temp_v8 = param_4;
  temp_v0 = FUN_002e789a(param_3);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e760a(0x80);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0011afd8();
    }
    temp_v3 = param_5;
    temp_v5 = param_7;
    temp_v4 = param_6;
    FUN_0011ae64(&temp_v6,temp_v1,*(unsigned int *)(param_3 + 0x44),temp_v8);
    temp_v0 = FUN_002f4e86((unsigned int *)&temp_v6);
    if (temp_v0 == 0) {
      FUN_002e7232(temp_v1);
      *param_1 = temp_v6;
      param_1[1] = uStack_30;
      param_1[2] = uStack_2c;
      return;
    }
    temp_v2 = FUN_002e6e26();
    FUN_002e78d0(temp_v2,temp_v1,0);
    puVar4 = (unsigned int *)&temp_v7;
    temp_v7 = 0x10001;
  }
  else {
    temp_v3 = 0x8001000d;
  }
  FUN_002e7908(param_1,puVar4);
  return;
}

} /* extern "C" */
