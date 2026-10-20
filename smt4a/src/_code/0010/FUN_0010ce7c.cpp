/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ce7c` (_code @ 0x10ce7c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], unsigned int);
int FUN_002e6e5c(unsigned char [16]);
int mapIteratorNext5(int *);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int onlineGetActiveLock(void);
extern int FUN_002eba9c(unsigned int *, unsigned int *);
/* Supplied declaration required: mapIteratorNext5. */
extern int wordRefsDiffer_002f6d4c(int *, unsigned int *);


void FUN_0010ce7c(int param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [16];
  int temp_v9;
  unsigned int temp_v10;
  
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v8,temp_v0);
  temp_v2 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  while( 1 ) {
    temp_v3 = *(unsigned int *)(param_1 + 0x30);
    temp_v1 = wordRefsDiffer_002f6d4c(&temp_v2,(unsigned int *)&temp_v3);
    if (temp_v1 == 0) break;
    temp_v10 = 0;
    temp_v9 = 0;
    temp_v1 = *(int *)(*(int *)(temp_v2 + 0x18) + 0x118);
    temp_v5 = *(unsigned int *)(temp_v1 + 0x14);
    temp_v4 = *(unsigned int *)(temp_v1 + 0x10);
    temp_v1 = FUN_002eba9c((unsigned int *)&temp_v4,(unsigned int *)&temp_v9);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(*(int *)(temp_v2 + 0x18) + 0x118);
      temp_v7 = *(unsigned int *)(temp_v1 + 0x14);
      temp_v6 = *(unsigned int *)(temp_v1 + 0x10);
      temp_v1 = FUN_002eba9c((unsigned int *)&temp_v6,param_2);
      if (temp_v1 != 0) {
        temp_v0 = *param_2;
        temp_v1 = *(int *)(*(int *)(temp_v2 + 0x18) + 0x118);
        *(unsigned int *)(temp_v1 + 0x14) = param_2[1];
        *(unsigned int *)(temp_v1 + 0x10) = temp_v0;
      }
    }
    mapIteratorNext5(&temp_v2);
  }
  FUN_002e6e5c(temp_v8);
  return;
}

} /* extern "C" */
