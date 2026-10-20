/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306d9c` (_code @ 0x306d9c, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9af4(void);
int FUN_002e9e80(...);
int FUN_002e9e8a(unsigned int, unsigned int, int *);
int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(void);
int FUN_002e9f64(...);
int FUN_002f3dde(unsigned int, unsigned int);
int FUN_002ff3b0(unsigned int **, unsigned int *, int, unsigned int);
int wordMoveOut_002ff3b8(int *, int *, int);
int FUN_002ff3c8(int *);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9e80. */
/* Supplied declaration required: FUN_002e9e8a. */
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002e9f64. */
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: FUN_002ff3b0. */
/* Supplied declaration required: wordMoveOut_002ff3b8. */
/* Supplied declaration required: FUN_002ff3c8. */
extern int wordRefsDiffer_002ff3f8(int *, unsigned int *);


void FUN_00306d9c(int param_1,int param_2,int param_3)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11 [12];
  
  FUN_002e9e80(&temp_v3);
  temp_v7 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  while( 1 ) {
    temp_v9 = *(unsigned int *)(param_1 + 0x30);
    temp_v1 = wordRefsDiffer_002ff3f8(&temp_v7,(unsigned int *)&temp_v9);
    puVar3 = temp_v3;
    if (temp_v1 == 0) break;
    temp_v1 = *(int *)(temp_v7 + 0x14);
    if ((*(char *)(temp_v1 + 0x10) == '\x01') &&
       ((*(int *)(temp_v1 + 0x48) == param_2 ||
        ((param_3 != 0 && (*(int *)(temp_v1 + 0x4c) == param_3)))))) {
      FUN_002e9e80(&temp_v5);
      temp_v2 = *(unsigned int *)(*(int *)(temp_v7 + 0x14) + 0x44);
      temp_v0 = FUN_002e9af4();
      FUN_002e9e8a(temp_v0,temp_v2,&temp_v5);
      FUN_002ff3b0(&temp_v3,temp_v4,temp_v5,temp_v6);
      temp_v10 = 0x80010004;
      temp_v0 = FUN_002e7908(temp_v11,(unsigned int *)&temp_v10);
      wordMoveOut_002ff3b8(&temp_v8,&temp_v7,0);
      FUN_002f3dde(*(unsigned int *)(temp_v8 + 0x14),temp_v0);
      FUN_002e9f64(&temp_v5);
    }
    else {
      FUN_002ff3c8(&temp_v7);
    }
  }
  for (; temp_v4 != puVar3; puVar3 = puVar3 + 1) {
    temp_v1 = FUN_002e9af4();
    FUN_002e9ec8(temp_v1,*puVar3);
    if (temp_v1 != 0) {
      FUN_002e9f00();
    }
  }
  FUN_002e9f64(&temp_v3);
  return;
}

} /* extern "C" */
