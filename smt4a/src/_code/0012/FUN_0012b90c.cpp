/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b90c` (_code @ 0x12b90c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b620(unsigned char [8]);
int FUN_002e7908(int *, unsigned int [2]);
int FUN_002e9af4(void);
int FUN_002e9afe(unsigned int *, int *);
int FUN_002e9c0c(int);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea41e(int *, int);
int FUN_002f4e86(unsigned int *);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int FUN_002f7cb0(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_0030c910(int, unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0012b9fc; /* 0x12b9fc */
extern unsigned char LAB_0012ba05; /* 0x12ba05 */

/* Supplied declaration required: FUN_0011b620. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f4e86. */
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030c910. */


void FUN_0012b90c(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned char temp_v4 [8];
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v9 [2];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    puVar4 = (unsigned int *)(param_1 + 0x1f0);
    temp_v0 = param_1 + 0x90;
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      FUN_002ea41e(&temp_v8,temp_v0);
      FUN_002e9afe(puVar4,&temp_v8);
    }
    if (-1 < *(int *)(param_1 + 0x168) << 0x19) {
      FUN_002e9c0c(temp_v0);
      FUN_0011b620(temp_v4);
      temp_v5 = *(unsigned int *)(param_1 + 0x1b0);
      temp_v6 = *(unsigned int *)(param_1 + 0x1b4);
      temp_v7 = FUN_002f4e86(puVar4);
      temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x6c) + 0x20))
                        (*(int **)(param_1 + 0x6c),temp_v0,temp_v4);
      if (temp_v1 != 0) {
        temp_v3 = *(unsigned int *)(param_1 + 0xd4);
        temp_v2 = FUN_002e9af4();
        FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x68),temp_v3);
        FUN_002f7cb0(param_1);
        temp_v1 = FUN_002e760a(0x10);
        temp_v2 = 0;
        if (temp_v1 != 0) {
          temp_v2 = FUN_002ea3c0(temp_v1,&LAB_0012ba05,0,&LAB_0012b9fc);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v2);
        return;
      }
      temp_v0 = FUN_002f4e86(puVar4);
      if (temp_v0 != 0) {
        temp_v8 = *(unsigned int *)(param_1 + 0x1f0);
        uStack_24 = *(unsigned int *)(param_1 + 500);
        uStack_20 = *(unsigned int *)(param_1 + 0x1f8);
      }
      else {
        temp_v9[0] = 0x8001000d;
        FUN_002e7908(&temp_v8,temp_v9);
      }
      puVar4 = (unsigned int *)&temp_v8;
    }
  }
  else {
    temp_v9[0] = 0x80010004;
    puVar4 = (unsigned int *)FUN_002e7908(&temp_v8,temp_v9);
  }
  FUN_0030c910(param_1,puVar4);
  return;
}

} /* extern "C" */
