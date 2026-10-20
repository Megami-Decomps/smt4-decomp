/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea214` (_code @ 0x2ea214, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorCopyHeader(int, unsigned int *);
int onlineInstanceTableFind(int, unsigned int);
int onlineJobSetStateDone(int);
int FUN_002f3dc4(void);
int FUN_002f3dde(int, unsigned int **, unsigned int, unsigned char *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
extern int refIsNonNegative(unsigned int *);


void FUN_002ea214(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned char uStack_14;
  
  temp_v2 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0xe0));
  vectorCopyHeader(*(int *)(param_1 + 0xe8) + 0x130,param_2);
  if (temp_v0 != 0) {
    temp_v1 = refIsNonNegative(param_2);
    temp_v2 = (unsigned int *)*param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (temp_v1 != 0) {
      FUN_002f3dc4();
    }
    else {
      FUN_002f3dde(temp_v0,&temp_v2,uStack_18,&uStack_14);
    }
  }
  if (*(char *)(param_1 + 0x22) != '\x05') {
    onlineJobSetStateDone(param_1);
  }
  return;
}

} /* extern "C" */
