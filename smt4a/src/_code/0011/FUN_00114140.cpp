/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114140` (_code @ 0x114140, 0xda bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableGetCurrent(void);
int vectorInitEmpty(...);
int FUN_002e9e8a(unsigned int, unsigned int, int *);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002e9f00(void);
int vectorDestroyWords(...);
int onlineTimeGetNow(unsigned int *);
int FUN_002f3dde(unsigned int, unsigned int);
int FUN_002ff3b0(unsigned int **, unsigned int *, int, unsigned int);
int wordMoveOut_002ff3b8(int [2], int *, int);
int mapIteratorNext7(int *, unsigned int);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
} param_1_stack;

extern unsigned int FUN_002e7908(unsigned char *, int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: vectorInitEmpty. */
/* Supplied declaration required: FUN_002e9e8a. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: vectorDestroyWords. */
/* Supplied declaration required: onlineTimeGetNow. */
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: FUN_002ff3b0. */
/* Supplied declaration required: wordMoveOut_002ff3b8. */
/* Supplied declaration required: mapIteratorNext7. */
extern int wordRefsDiffer_002ff3f8(int *, unsigned int *);
extern unsigned long long FUN_002ff424(int, unsigned int *);


/* WARNING: Type propagation algorithm not settling */

void FUN_00114140(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned long long temp_v8;
  int temp_v9 [2];
  unsigned int *temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18 [16];
  
  onlineTimeGetNow(&temp_v12);
  vectorInitEmpty(&temp_v10);
  temp_v14 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  do {
    while( 1 ) {
      temp_v15 = *(unsigned int *)(param_1 + 0x30);
      temp_v3 = wordRefsDiffer_002ff3f8(&temp_v14,(unsigned int *)&temp_v15);
      temp_v1 = temp_v13;
      temp_v0 = temp_v12;
      puVar7 = temp_v10;
      if (temp_v3 == 0) {
        for (; temp_v11 != puVar7; puVar7 = puVar7 + 1) {
          temp_v3 = onlineInstanceTableGetCurrent();
          onlineInstanceTableFind(temp_v3,*puVar7);
          if (temp_v3 != 0) {
            FUN_002e9f00();
          }
        }
        vectorDestroyWords(&temp_v10);
        return;
      }
      temp_v3 = *(int *)(temp_v14 + 0x14);
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + 0x10);
      if (temp_v4 == 1) break;
      mapIteratorNext7(&temp_v14,temp_v4);
    }
    temp_v17 = 0;
    temp_v16 = 0;
    temp_v8 = FUN_002ff424(temp_v3 + 0x58,(unsigned int *)&temp_v16);
    temp_v4 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
    if ((int)temp_v8 != 0) {
      mapIteratorNext7(&temp_v14,temp_v4);
      continue;
    }
    temp_v5 = *(unsigned int *)(temp_v3 + 0x5c);
    temp_v7 = temp_v0 <= *(unsigned int *)(temp_v3 + 0x58);
    temp_v4 = (temp_v5 - temp_v1) - (unsigned int)!temp_v7;
    if (temp_v1 < temp_v5 || temp_v5 - temp_v1 < (unsigned int)temp_v7) {
      mapIteratorNext7(&temp_v14,temp_v4);
      continue;
    }
    vectorInitEmpty(&temp_v16);
    temp_v6 = *(unsigned int *)(*(int *)(temp_v14 + 0x14) + 0x44);
    temp_v2 = onlineInstanceTableGetCurrent();
    FUN_002e9e8a(temp_v2,temp_v6,&temp_v16);
    FUN_002ff3b0(&temp_v10,temp_v11,temp_v16,temp_v17);
    temp_v9[1] = 0x8001000b;
    temp_v2 = FUN_002e7908(temp_v18,temp_v9 + 1);
    wordMoveOut_002ff3b8(temp_v9,&temp_v14,0);
    FUN_002f3dde(*(unsigned int *)(temp_v9[0] + 0x14),temp_v2);
    vectorDestroyWords(&temp_v16);
  } while( 1 );
}

} /* extern "C" */
