/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ae5a` (_code @ 0x10ae5a, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012e25c(unsigned char *, int, int);
int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int sharedRefAddRef(int);
int FUN_002f3df8(unsigned char [4], int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_0012e25c. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: sharedRefAddRef. */
extern unsigned int onlineGetActiveLock(void);
extern int FUN_002ef00c(unsigned char *, int);
/* Supplied declaration required: FUN_002f3df8. */
extern int wordRefsDiffer_002f3e5a(unsigned char *, unsigned int *);


unsigned int FUN_0010ae5a(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  unsigned char *temp_v3;
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [4];
  int temp_v6;
  unsigned char temp_v7 [12];
  unsigned char temp_v8 [8];
  
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v4,temp_v0);
  temp_v6 = *(unsigned int *)(param_1 + 0x14);
  FUN_002f3df8(temp_v5,param_1 + 4);
  temp_v1 = wordRefsDiffer_002f3e5a(temp_v5,(unsigned int *)&temp_v6);
  if ((temp_v1 != 0) || (0 >= *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x18))) {
    FUN_002e6e5c(temp_v4);
    temp_v0 = 0;
  }
  else {
    sharedRefAddRef(param_2);
    if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 2) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    temp_v3 = (unsigned char *)temp_v2;
    temp_v1 = FUN_002ef00c(temp_v7,param_1 + 0x24);
    *(unsigned int *)(temp_v1 + 8) = 0;
    FUN_0012e25c(temp_v3,param_1 + 4,temp_v1);
    *(int *)(temp_v2[0] + 0x18) = param_2;
    temp_v1 = FUN_002ef00c(temp_v8,param_1 + 0x24);
    *(unsigned short *)(param_2 + 0x44) = *(unsigned short *)(temp_v1 + 4);
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
    FUN_002e6e5c(temp_v4);
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
