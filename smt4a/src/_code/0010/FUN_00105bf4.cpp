/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105bf4` (_code @ 0x105bf4, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9b30(int, int, int *, int);
int onlineInstanceTableFind(int, unsigned int);
int onlineJobSetStateDone(int);
int onlineJobSetStateTimed(int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0012448e(unsigned int);
extern unsigned int *FUN_002e7908(unsigned char *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: FUN_002e9b30. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: onlineJobSetStateTimed. */


void FUN_00105bf4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  unsigned int temp_v5 [2];
  
  temp_v0 = FUN_0012448e(*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    onlineJobSetStateTimed(param_1,100);
  }
  else {
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
    if (temp_v0 != 0) {
      temp_v5[0] = 0x10001;
      puVar2 = (unsigned int *)FUN_002e7908(temp_v4,temp_v5);
      temp_v2 = puVar2[1];
      temp_v1 = *puVar2;
      temp_v3 = puVar2[2];
      FUN_002e9b30(temp_v0,2,&temp_v1,1);
    }
    onlineJobSetStateDone(param_1);
  }
  return;
}

} /* extern "C" */
