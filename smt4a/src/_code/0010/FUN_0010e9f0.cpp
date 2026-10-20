/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e9f0` (_code @ 0x10e9f0, 0xee bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002ea974(unsigned char [104]);
int onlineUrlSetAddress(unsigned char [104], int);
int onlineUrlDestroy(unsigned char [104]);
int FUN_002eab08(int *);
int FUN_002eb17c(int, unsigned int);
int packNibbles(unsigned char [8], unsigned int, unsigned int);
int FUN_002f9dd4(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_6_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int onlineGetActiveLock(void);
extern unsigned int onlineUrlGetAddress(unsigned char *);
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: onlineUrlSetAddress. */
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002eab08. */
/* Supplied declaration required: FUN_002eb17c. */
/* Supplied declaration required: packNibbles. */
extern int FUN_002f86cc(int, unsigned int);
/* Supplied declaration required: FUN_002f9dd4. */


void FUN_0010e9f0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [104];
  unsigned char temp_v5 [12];
  unsigned char temp_v6 [8];
  int iStack_24;
  unsigned int uStack_20;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x10e) != '\0') {
    return;
  }
  iStack_24 = param_1;
  uStack_20 = param_2;
  temp_v7 = param_3;
  temp_v8 = param_4;
  temp_v0 = packNibbles(temp_v6,param_3,param_4);
  temp_v1 = param_1 + 0xa4;
  FUN_002f9dd4(temp_v1,temp_v0);
  if (temp_v1 == 0) {
    return;
  }
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v5,temp_v0);
  temp_v1 = FUN_002f86cc(param_1,param_2);
  if (temp_v1 == 0) {
    FUN_002e6e5c(temp_v5);
    return;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_002ea974(temp_v4);
    onlineUrlSetAddress(temp_v4,param_6 + 0xdc);
    temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0xbc) + 8))
                      (*(int **)(param_1 + 0xbc),temp_v4,param_2);
    temp_v0 = onlineUrlGetAddress(temp_v4);
    FUN_002eb17c(param_6,temp_v0);
    onlineUrlDestroy(temp_v4);
    if (temp_v1 != 0) {
      FUN_002e6e5c(temp_v5);
      return;
    }
  }
  FUN_002eab08(&temp_v2);
  *(unsigned int *)(param_6 + 0x100) = temp_v2;
  *(unsigned int *)(param_6 + 0x104) = temp_v3;
  puVar3 = (unsigned char *)packNibbles(temp_v6,temp_v7,temp_v8);
  *(unsigned char *)(param_6 + 0x25) = *puVar3;
  puVar3 = (unsigned char *)packNibbles(temp_v6,temp_v7,param_5);
  *(unsigned char *)(param_6 + 0x26) = *puVar3;
  *(short *)(param_6 + 0x86) = (short)param_2;
  (**(romwright_code **)(**(int **)(param_1 + 500) + 0xc))(*(int **)(param_1 + 500),param_6,1);
  FUN_002e6e5c(temp_v5);
  return;
}

} /* extern "C" */
