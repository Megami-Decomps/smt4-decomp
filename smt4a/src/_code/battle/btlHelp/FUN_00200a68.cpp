/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200a68` (_code @ 0x200a68, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int, unsigned int);
int rt_memcpy_w(unsigned short *, int, int);

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_8_stack;

extern int *DAT_005738e8; /* 0x5738e8 */

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned short *
FUN_00200a68(unsigned int param_1,unsigned short param_2,unsigned int param_3,unsigned int param_4,int param_5
            ,unsigned char param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned short *puVar2;
  
  puVar2 = (unsigned short *)0x100;
  FUN_00163060(0x100,0x100,0,0x880,1,param_1);
  *puVar2 = (short)param_1;
  puVar2[2] = param_2;
  puVar2[1] = 0;
  *(unsigned int *)(puVar2 + 4) = param_3;
  puVar2[3] = 0;
  *(unsigned int *)(puVar2 + 6) = param_4;
  if (param_5 != 0) {
    rt_memcpy_w(puVar2 + 8,param_5,0x408);
  }
  *(unsigned char *)(puVar2 + 0x410) = param_6;
  *(unsigned int *)(puVar2 + 0x412) = param_7;
  *(unsigned int *)(puVar2 + 0x436) = param_8;
  puVar2[0x438] = 0;
  puVar2[0x439] = 1;
  *(unsigned int *)(puVar2 + 0x416) = 0;
  *(unsigned int *)(puVar2 + 0x418) = 0;
  *(unsigned int *)(puVar2 + 0x41a) = 0;
  *(unsigned int *)(puVar2 + 0x41c) = 0;
  *(unsigned int *)(puVar2 + 0x41e) = 0;
  *(unsigned int *)(puVar2 + 0x420) = 0;
  *(unsigned int *)(puVar2 + 0x422) = 0;
  *(unsigned int *)(puVar2 + 0x424) = 0;
  *(unsigned int *)(puVar2 + 0x426) = 0;
  *(unsigned int *)(puVar2 + 0x428) = 0;
  *(unsigned int *)(puVar2 + 0x42a) = 0;
  *(unsigned int *)(puVar2 + 0x42c) = 0;
  *(unsigned int *)(puVar2 + 0x42e) = 0;
  *(unsigned int *)(puVar2 + 0x430) = 0;
  *(unsigned int *)(puVar2 + 0x432) = 0;
  *(unsigned int *)(puVar2 + 0x434) = 0;
  *(unsigned int *)(puVar2 + 0x43a) = 0;
  *(unsigned int *)(puVar2 + 0x43c) = 0;
  piVar1 = DAT_005738e8;
  if (*DAT_005738e8 == 0) {
    *DAT_005738e8 = (int)puVar2;
  }
  if (piVar1[1] == 0) {
    piVar1[1] = (int)puVar2;
  }
  else {
    *(unsigned short **)(piVar1[1] + 0x874) = puVar2;
    *(int *)(puVar2 + 0x43c) = piVar1[1];
    piVar1[1] = (int)puVar2;
  }
  piVar1[2] = piVar1[2] + 1;
  return puVar2;
}

} /* extern "C" */
