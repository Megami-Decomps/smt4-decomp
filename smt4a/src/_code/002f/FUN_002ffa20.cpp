/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffa20` (_code @ 0x2ffa20, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj559ecc.h"

extern "C" {

int FUN_0030c5d8(int *, int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int *_ZSt3maxIjERKT_S2_S2_(int *, unsigned int *);
/* Supplied declaration required: _ZN9Obj559eccD1Ev. */
/* Supplied declaration required: FUN_0030c5d8. */
extern int allocArrayElem24(int *, int, unsigned int);
extern unsigned int vectorGrowCapacity_0030c61a(unsigned int, int *);
extern unsigned int initVtable00559504(unsigned char *);


int * FUN_002ffa20(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [28];
  int temp_v5;
  int temp_v6;
  
  temp_v0 = initVtable00559504(temp_v4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v5 = param_2;
  temp_v6 = vectorGrowCapacity_0030c61a(0,param_1);
  piVar2 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v5,(unsigned int *)&temp_v6);
  temp_v3 = *piVar2;
  temp_v1 = allocArrayElem24(param_1,temp_v3,0);
  *param_1 = temp_v1;
  for (temp_v2 = temp_v5; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    FUN_0030c5d8(param_1,temp_v1,temp_v0);
    temp_v1 = temp_v1 + 0x18;
  }
  param_1[2] = *param_1 + temp_v3 * 0x18;
  param_1[1] = *param_1 + temp_v5 * 0x18;
  (((Obj559ecc *)(temp_v4))->Obj559ecc::~Obj559ecc(), (int)(temp_v4));
  return param_1;
}

} /* extern "C" */
