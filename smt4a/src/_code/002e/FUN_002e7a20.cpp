/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7a20` (_code @ 0x2e7a20, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int sharedRefRelease(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefRelease. */
extern unsigned int FUN_002f71b0(int, unsigned int, unsigned int);


unsigned int FUN_002e7a20(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 unstructured edge(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v3;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  temp_v3 = param_3;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  if (*(int *)(param_1 + 0x9c) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x22) != '\x05') {
      _ZN9Obj55b28cD1Ev(temp_v2);
      temp_v1 = 0;
      return temp_v1;
    }
    sharedRefRelease();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x94) + 0x22) != '\x05') {
      _ZN9Obj55b28cD1Ev(temp_v2);
      temp_v1 = 0;
      return temp_v1;
    }
    sharedRefRelease();
    *(unsigned int *)(param_1 + 0x94) = 0;
  }
  temp_v1 = FUN_002f71b0(param_1,param_2,temp_v3);
  _ZN9Obj55b28cD1Ev(temp_v2);
  return temp_v1;
}

} /* extern "C" */
