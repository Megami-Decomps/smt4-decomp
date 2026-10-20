/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394160` (_code @ 0x394168, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(int, int);
int nn_fnd_DateTime_DateTime_sub_object(unsigned int *, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: memClear. */
extern int _ZN9Obj422214C1Ev(int);
/* Supplied declaration required: nn_fnd_DateTime_DateTime_sub_object. */


int FUN_00394160(int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3 [3];
  
  *param_2 = param_3;
  param_2[1] = param_3;
  temp_v1 = _ZN9Obj422214C1Ev(param_1 + 0x9bc);
  memClear(temp_v1 - 0x9bc,0x80);
  memClear(temp_v1 - 0x93c,0x100);
  memClear(temp_v1 - 0x83c,0x800);
  puVar3 = temp_v3;
  nn_fnd_DateTime_DateTime_sub_object(puVar3,0x7b2,1,1,param_3,param_3,param_3,param_3);
  temp_v2 = puVar3[1];
  *(unsigned int *)(temp_v1 - 0x1c) = *puVar3;
  *(unsigned int *)(temp_v1 - 0x18) = temp_v2;
  temp_v0 = (unsigned char)param_3;
  *(unsigned char *)(temp_v1 - 0x10) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xf) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xe) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xd) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xc) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xb) = temp_v0;
  *(unsigned char *)(temp_v1 - 10) = temp_v0;
  *(unsigned char *)(temp_v1 - 9) = temp_v0;
  return temp_v1 - 0x9bc;
}

} /* extern "C" */
