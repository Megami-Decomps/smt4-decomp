/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efe80` (_code @ 0x2efe80, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int sharedRefRelease(int);
int FUN_002f6c54(unsigned char [20], unsigned int);
int FUN_002f6c5c(...);
int FUN_002f6c70(int, int *);
int FUN_002f6c82(int, int *);
int mapIteratorNext5(int *);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefRelease. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002f6c54. */
/* Supplied declaration required: FUN_002f6c5c. */
/* Supplied declaration required: FUN_002f6c70. */
/* Supplied declaration required: FUN_002f6c82. */
/* Supplied declaration required: mapIteratorNext5. */
extern int wordRefsDiffer_002f6d4c(int *, unsigned char *);


unsigned int FUN_002efe80(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [4];
  unsigned char temp_v11 [12];
  int *temp_v12;
  unsigned char temp_v13 [20];
  int temp_v14;
  int temp_v15;
  
  temp_v14 = param_1;
  temp_v15 = param_2;
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v11,temp_v0);
  temp_v3 = temp_v14;
  piVar5 = &temp_v9;
  temp_v7 = temp_v14 + 0x20;
  FUN_002f6c54(temp_v13,*(unsigned int *)(temp_v15 + 0x118));
  temp_v8 = temp_v3 + 0x39;
  temp_v4 = *(int *)(temp_v3 + 0x30);
  temp_v2 = *(int *)(*(int *)(temp_v3 + 0x30) + 4);
  temp_v12 = piVar5;
  while (temp_v2 != 0) {
    temp_v1 = FUN_002f6c5c(temp_v8,temp_v2 + 0x10,temp_v13);
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v2 + 0xc);
    }
    else {
      temp_v4 = temp_v2;
      temp_v2 = *(int *)(temp_v2 + 8);
    }
  }
  temp_v8 = temp_v3 + 0x39;
  temp_v2 = *(int *)(*(int *)(temp_v3 + 0x30) + 4);
  temp_v3 = *(int *)(temp_v3 + 0x30);
  while (temp_v1 = temp_v2, temp_v1 != 0) {
    temp_v2 = FUN_002f6c5c(temp_v8,temp_v13,temp_v1 + 0x10);
    if (temp_v2 != 0) {
      temp_v2 = *(int *)(temp_v1 + 8);
      temp_v3 = temp_v1;
    }
    else {
      temp_v2 = *(int *)(temp_v1 + 0xc);
    }
  }
  temp_v12[1] = temp_v3;
  temp_v5 = temp_v4;
  temp_v9 = temp_v4;
  while( 1 ) {
    temp_v3 = wordRefsDiffer_002f6d4c(&temp_v5,temp_v10);
    if (temp_v3 == 0) {
      _ZN9Obj55b28cD1Ev(temp_v11);
      return 0;
    }
    if (*(int *)(temp_v5 + 0x18) == temp_v15) break;
    mapIteratorNext5(&temp_v5);
  }
  temp_v6 = temp_v5;
  FUN_002f6c70(temp_v7,&temp_v6);
  FUN_002f6c82(temp_v14 + 4,&temp_v15);
  sharedRefRelease(temp_v15);
  _ZN9Obj55b28cD1Ev(temp_v11);
  return 1;
}

} /* extern "C" */
