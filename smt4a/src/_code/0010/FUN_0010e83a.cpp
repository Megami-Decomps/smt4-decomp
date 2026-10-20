/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e83a` (_code @ 0x10e83a, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00115350(int, unsigned char [40]);
int FUN_002e6e34(unsigned char [20], unsigned int);
int FUN_002e6e5c(unsigned char [20]);
int sharedRefAddRef(unsigned int);
int onlineSockAddrConstruct(unsigned char [40]);
int FUN_002f9086(int);
int FUN_002f9156(int, unsigned int, unsigned char [40], unsigned int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_00115350. */
extern unsigned int FUN_00115380(void);
extern int FUN_001153a0(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: onlineSockAddrConstruct. */
extern int FUN_002f905e(int, unsigned char *);
extern int FUN_002f9072(int, unsigned char *);
/* Supplied declaration required: FUN_002f9086. */
/* Supplied declaration required: FUN_002f9156. */


unsigned int FUN_0010e83a(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [40];
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [20];
  int temp_v8;
  int iStack_20;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v3 = 1;
  iStack_20 = param_1;
  temp_v9 = param_2;
  temp_v10 = param_3;
  temp_v0 = FUN_00115380();
  FUN_002e6e34(temp_v7,temp_v0);
  temp_v5 = FUN_001153a0();
  onlineSockAddrConstruct(temp_v4);
  temp_v8 = param_1 + 0x284;
  for (temp_v2 = 0; temp_v2 < temp_v5; temp_v2 = temp_v2 + 1) {
    FUN_00115350(temp_v2,temp_v4);
    temp_v6 = FUN_002f9072(temp_v8,temp_v4);
    temp_v1 = FUN_002f905e(param_1 + 0x294,temp_v4);
    if (!(temp_v6 == 0 && temp_v1 == 0)) {
      sharedRefAddRef(temp_v9);
      if (temp_v1 != 0) {
        FUN_002f9086(param_1 + 0x294);
      }
      else {
        FUN_002f9156(temp_v8,temp_v9,temp_v4,temp_v10);
      }
    }
    else {
      temp_v3 = 0;
    }
  }
  FUN_002e6e5c(temp_v7);
  return temp_v3;
}

} /* extern "C" */
