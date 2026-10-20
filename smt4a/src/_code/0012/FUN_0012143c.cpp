/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012143c` (_code @ 0x12143c, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123e98(unsigned char [32]);
int destroyObj0055ae64(unsigned char [32]);
int sharedRefHolderDestroy2(unsigned char [8]);
int FUN_002f6ed2(int, int *);
int FUN_002fde5c(unsigned char [8]);
int FUN_00306e7a(unsigned char [8]);
int streamReaderReadArray(...);
int FUN_00310dc6(unsigned char [8], unsigned int, int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_00123e98. */
/* Supplied declaration required: destroyObj0055ae64. */
/* Supplied declaration required: sharedRefHolderDestroy2. */
/* Supplied declaration required: FUN_002f6ed2. */
/* Supplied declaration required: FUN_002fde5c. */
extern int FUN_00303158(unsigned int, int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00306e7a. */
/* Supplied declaration required: streamReaderReadArray. */
/* Supplied declaration required: FUN_00310dc6. */
extern unsigned int vectorOwnerResize(int, unsigned int);


void FUN_0012143c(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [32];
  int temp_v7;
  unsigned int temp_v8;
  
  FUN_00123e98(temp_v6);
  FUN_002fde5c(temp_v2);
  temp_v0 = FUN_00303158(param_2,param_1 + 0xc,temp_v3,temp_v6);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 9) = 1;
    FUN_00306e7a(temp_v2);
    streamReaderReadArray(temp_v2,&temp_v7,8,1);
    temp_v4 = temp_v7;
    temp_v5 = temp_v8;
    FUN_002f6ed2(param_1 + 0x50,&temp_v4);
    streamReaderReadArray(temp_v2,param_1 + 0x2c,4,1);
    temp_v1 = vectorOwnerResize(param_1 + 0x34,0x20);
    FUN_00310dc6(temp_v2,temp_v1,0x100);
  }
  sharedRefHolderDestroy2(temp_v2);
  destroyObj0055ae64(temp_v6);
  return;
}

} /* extern "C" */
