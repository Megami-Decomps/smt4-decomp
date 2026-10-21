/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012ccec` (_code @ 0x12ccec, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(...);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(int *);
int FUN_0030c720(...);
int holderSetPairAndFlush(int, int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0012c74d; /* 0x12c74d */
extern unsigned char LAB_0012cdac; /* 0x12cdac */

/* Supplied declaration required: FUN_002e7908. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern unsigned long long rangeIsEmpty4(int);
/* Supplied declaration required: FUN_0030c720. */
/* Supplied declaration required: holderSetPairAndFlush. */


void FUN_0012ccec(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [16];
  unsigned char temp_v7 [12];
  int temp_v8;
  
  puVar2 = (unsigned int *)&temp_v3;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x90) == '\x02') {
      for (temp_v0 = *(int *)(param_1 + 0x110); *(int *)(param_1 + 0x114) != temp_v0;
          temp_v0 = temp_v0 + 0x18) {
      }
      temp_v2 = rangeIsEmpty4(param_1 + 0x110);
      if ((int)temp_v2 != 0) {
        holderSetPairAndFlush(param_1 + 0x280,(int)((unsigned long long)temp_v2 >> 0x20),*(unsigned int *)(param_1 + 0xf8)
                     ,*(unsigned int *)(param_1 + 0xfc));
        temp_v4 = *(unsigned int *)(param_1 + 0x294);
        temp_v3 = *(unsigned int *)(param_1 + 0x290);
        (**(romwright_code **)(**(int **)(param_1 + 0x3ec) + 0xc))
                  (*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
        temp_v8 = 0x10001;
        temp_v1 = FUN_002e7908(temp_v7,&temp_v8);
        FUN_0030c720(param_1,temp_v1);
      }
      temp_v1 = FUN_002ea3c0(temp_v6,&LAB_0012c74d,0,&LAB_0012cdac);
      FUN_002ea3d0(param_1,temp_v1);
      return;
    }
    FUN_002ea41e(&temp_v3);
  }
  else {
    temp_v5 = 0x80010004;
    puVar2 = (unsigned int *)FUN_002e7908(&temp_v3,&temp_v5);
  }
  FUN_0030c720(param_1,puVar2);
  return;
}

} /* extern "C" */
