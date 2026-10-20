/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001163cc` (_code @ 0x1163cc, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ec728(int, unsigned char [24]);
int destroyObj0055ae64(unsigned char [24]);
int FUN_002f451c(int *, unsigned int);
int FUN_002f7cb0(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_0030202c(int, int, unsigned int);
int FUN_00302058(unsigned char [24], unsigned int, unsigned int);
int FUN_003020dc(int, unsigned int, unsigned int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00116490; /* 0x116490 */
extern signed char DAT_00594967; /* 0x594967 */

extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: destroyObj0055ae64. */
/* Supplied declaration required: FUN_002f451c. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030202c. */
/* Supplied declaration required: FUN_00302058. */
/* Supplied declaration required: FUN_003020dc. */


void FUN_001163cc(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [2];
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [24];
  
  temp_v2 = param_1 + 0x78;
  if (DAT_00594967 != '\0') {
    FUN_00302058(temp_v7,**(unsigned int **)(param_1 + 0xfc),*(unsigned int *)(param_1 + 0xf8));
    FUN_002ec728(param_1 + 0xd8,temp_v7);
    destroyObj0055ae64(temp_v7);
  }
  else {
    FUN_002f451c(&temp_v4,*(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x20));
    *(unsigned int *)(param_1 + 0xd0) = temp_v4;
    *(unsigned int *)(param_1 + 0xd4) = temp_v5;
    temp_v1 = temp_v2;
    FUN_003020dc(temp_v2,**(unsigned int **)(param_1 + 0xfc),*(unsigned int *)(param_1 + 0xf8),
                 param_1 + 0xd8);
    if (temp_v1 == 0) {
      temp_v3[0] = 0x80010001;
      temp_v0 = FUN_002e7908(temp_v6,temp_v3);
      FUN_0030202c(param_1,3,temp_v0);
      return;
    }
  }
  if (*(char *)(param_1 + 0x88) != '\x01') {
    temp_v0 = FUN_002ea3c0(temp_v3,0x116189,0,&LAB_00116490);
    FUN_002ea3d0(param_1,temp_v0);
  }
  else {
    FUN_002f7cb0(param_1);
    temp_v1 = FUN_002e760a(0x10);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_002ea3c0(temp_v1,0x116189,0,&LAB_00116490);
    }
    FUN_002f7cba(param_1,temp_v2,temp_v0);
  }
  return;
}

} /* extern "C" */
