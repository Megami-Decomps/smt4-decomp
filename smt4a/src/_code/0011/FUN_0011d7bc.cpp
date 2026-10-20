/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d7bc` (_code @ 0x11d7bc, 0xc6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011fe6c(unsigned char [8]);
int destroyObj0055adc0(unsigned char [8]);
int onlineStringAssign(unsigned char [8], int);
int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_00310ec8(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0011d888; /* 0x11d888 */
extern unsigned char LAB_0011d93d; /* 0x11d93d */

/* Supplied declaration required: FUN_0011fe6c. */
/* Supplied declaration required: destroyObj0055adc0. */
extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: onlineStringAssign. */
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_00310ec8. */


void FUN_0011d7bc(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [12];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    FUN_002e9c0c();
    FUN_0011fe6c(temp_v4);
    if (*(char *)(param_1 + 0x160) == '\0') {
      onlineStringAssign(temp_v5,param_1 + 0x7c);
    }
    temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x70) + 0x4c))
                      (*(int **)(param_1 + 0x70),param_1 + 0x90,temp_v4,param_1 + 0x124);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0xd4);
      temp_v1 = onlineInstanceTableGetCurrent();
      FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x6c),temp_v2);
      onlineJobSetStateWaiting(param_1);
      temp_v0 = operatorNew(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0011d93d,0,&LAB_0011d888);
      }
      FUN_002f7cba(param_1,param_1 + 0x90,temp_v1);
    }
    else {
      **(unsigned char **)(param_1 + 0x164) = 1;
      temp_v3 = 0x8001000d;
      temp_v1 = FUN_002e7908(temp_v6,(unsigned int *)&temp_v3);
      FUN_00310ec8(param_1,temp_v1);
    }
    destroyObj0055adc0(temp_v4);
  }
  else {
    temp_v3 = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v6,(unsigned int *)&temp_v3);
    FUN_00310ec8(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
