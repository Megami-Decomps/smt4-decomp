/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011fcb4` (_code @ 0x11fcb4, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9c0c(void);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_003056f2(unsigned int, unsigned int);
int FUN_003056fc(int, int, unsigned int);
int FUN_00310784(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0011fd54; /* 0x11fd54 */

extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(int *, unsigned int *);
/* Supplied declaration required: FUN_002e9c0c. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
extern unsigned int FUN_003054ce(void);
extern int FUN_00305696(unsigned int);
/* Supplied declaration required: FUN_003056f2. */
/* Supplied declaration required: FUN_003056fc. */
/* Supplied declaration required: FUN_00310784. */


void FUN_0011fcb4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4 [3];
  unsigned int temp_v5 [2];
  
  temp_v0 = *(int *)(*(int *)(param_1 + 400) + 0x78);
  temp_v4[0] = param_1 + 0x300;
  temp_v2 = *(unsigned int *)(temp_v0 + 0x28);
  *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(param_1 + 0x318);
  temp_v3 = *(unsigned int *)(*(int *)(param_1 + 400) + 0x78);
  temp_v1 = FUN_003054ce();
  FUN_003056f2(temp_v1,temp_v3);
  *(unsigned int *)(temp_v4[0] + 0x14) = 0;
  FUN_002e9c0c();
  *(unsigned int *)(param_1 + 0xd8) = *(unsigned int *)(param_1 + 800);
  *(unsigned int *)(param_1 + 0xdc) = *(unsigned int *)(param_1 + 0x324);
  temp_v0 = FUN_00305696(*(unsigned int *)(param_1 + 400));
  temp_v0 = *(int *)(temp_v0 + 0x18);
  FUN_003056fc(temp_v0,param_1 + 0x80,temp_v2);
  if (temp_v0 != 0) {
    onlineJobSetStateWaiting(param_1);
    temp_v0 = operatorNew(0x10);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,0x11fab9,0,&LAB_0011fd54);
    }
    FUN_002f7cba(param_1,param_1 + 0x80,temp_v1);
  }
  else {
    temp_v5[0] = 0x10001;
    temp_v1 = FUN_002e7908(temp_v4,temp_v5);
    FUN_00310784(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
