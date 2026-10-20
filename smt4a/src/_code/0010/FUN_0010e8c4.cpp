/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e8c4` (_code @ 0x10e8c4, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(...);
int listIteratorNext(int [2]);
int listIteratorNext2(int [2]);
int FUN_002f87e8(int *, int, int *);
int FUN_002f9cc8(void);
int FUN_002f9d6a(int *, int, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_1_stack;

/* Supplied declaration required: sharedRefRelease. */
extern int wordRefsDiffer_002eb690(int *, int *);
/* Supplied declaration required: listIteratorNext. */
/* Supplied declaration required: listIteratorNext2. */
extern int wordRefsDiffer_002f2dec(int *, int);
/* Supplied declaration required: FUN_002f87e8. */
/* Supplied declaration required: FUN_002f9cc8. */
/* Supplied declaration required: FUN_002f9d6a. */


void FUN_0010e8c4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  int temp_v3;
  int temp_v4;
  int temp_v5 [2];
  
  temp_v2[0] = *(int *)(*(int *)(param_1 + 500) + 8);
  while( 1 ) {
    temp_v3 = *(int *)(*(int *)(param_1 + 500) + 0x10);
    temp_v0 = wordRefsDiffer_002eb690(temp_v2,&temp_v3);
    if (temp_v0 == 0) break;
    if ((*(int *)(temp_v2[0] + 0xd8) != 0) &&
       (-1 >= (int)((unsigned int)*(unsigned char *)(*(int *)(temp_v2[0] + 0xd8) + 0x1c) << 0x1d))) {
      temp_v5[0] = temp_v2[0];
      (**(romwright_code **)(**(int **)(param_1 + 500) + 0x14))(&temp_v4,*(int **)(param_1 + 500),temp_v5);
      temp_v2[0] = temp_v4;
    }
    else {
      listIteratorNext(temp_v2);
    }
  }
  temp_v2[0] = *(int *)(param_1 + 0x1fc);
  while (temp_v0 = wordRefsDiffer_002f2dec(temp_v2,param_1 + 0x204), temp_v0 != 0) {
    if ((*(int *)(temp_v2[0] + 0xd8) != 0) &&
       (-1 >= (int)((unsigned int)*(unsigned char *)(*(int *)(temp_v2[0] + 0xd8) + 0x1c) << 0x1d))) {
      sharedRefRelease(temp_v2[0]);
      temp_v1 = temp_v2[0];
      FUN_002f9d6a(&temp_v3,param_1 + 0x1f8,&temp_v1);
      temp_v2[0] = temp_v3;
    }
    else {
      listIteratorNext2(temp_v2);
    }
  }
  temp_v2[0] = *(int *)(param_1 + 0x1dc);
  while( 1 ) {
    temp_v3 = *(int *)(param_1 + 0x1e4);
    temp_v0 = wordRefsDiffer_002eb690(temp_v2,&temp_v3);
    if (temp_v0 == 0) break;
    if ((*(int *)(temp_v2[0] + 0xd8) != 0) &&
       (-1 >= (int)((unsigned int)*(unsigned char *)(*(int *)(temp_v2[0] + 0xd8) + 0x1c) << 0x1d))) {
      sharedRefRelease();
      temp_v1 = temp_v2[0];
      FUN_002f87e8(&temp_v4,param_1 + 0x1d4,&temp_v1);
      temp_v2[0] = temp_v4;
    }
    else {
      listIteratorNext(temp_v2);
    }
  }
  for (temp_v0 = *(int *)(param_1 + 0x164); *(int *)(param_1 + 0x168) != temp_v0; temp_v0 = temp_v0 + 8) {
    if (*(char *)(*(int *)(temp_v0 + 4) + 0x144) != '\0') {
      FUN_002f9cc8();
    }
  }
  return;
}

} /* extern "C" */
