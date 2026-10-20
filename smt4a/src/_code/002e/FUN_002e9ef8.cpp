/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9ef8` (_code @ 0x2e9ef8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int onlineInstanceTableGetCurrent(void);
int vectorInitEmpty(unsigned int **);
int FUN_002e9e8a(unsigned int, unsigned int, unsigned int **);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002e9f00(void);
int vectorDestroyWords(unsigned int **);

extern unsigned int FUN_00103e8e(int, unsigned int);
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: vectorInitEmpty. */
/* Supplied declaration required: FUN_002e9e8a. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: vectorDestroyWords. */


unsigned int FUN_002e9ef8(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puStack_28;
  unsigned int *puStack_24;
  unsigned char temp_v2 [16];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  vectorInitEmpty(&puStack_28);
  temp_v1 = onlineInstanceTableGetCurrent();
  FUN_002e9e8a(temp_v1,*(unsigned int *)(param_1 + 0x44),&puStack_28);
  temp_v1 = FUN_00103e8e(param_1,param_2);
  for (puVar3 = puStack_28; puStack_24 != puVar3; puVar3 = puVar3 + 1) {
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*puVar3);
    if (temp_v0 != 0) {
      FUN_002e9f00();
    }
  }
  vectorDestroyWords(&puStack_28);
  _ZN9Obj55b28cD1Ev(temp_v2);
  return temp_v1;
}

} /* extern "C" */
