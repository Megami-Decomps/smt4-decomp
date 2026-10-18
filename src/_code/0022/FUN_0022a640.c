/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a640` (_code @ 0x22a640, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern int *DAT_00435d78; /* 0x435d78 */

/* Supplied declaration required: FUN_002bcf58. */
extern unsigned short *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned short *
FUN_0022a640(unsigned short param_1,unsigned short param_2,unsigned int param_3,unsigned int param_4,int param_5
            ,unsigned char param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned short *puVar2;
  
  puVar2 = (unsigned short *)FUN_002c4b84(0x100,0x100,0,0x2b0,1);
  *puVar2 = param_1;
  puVar2[2] = param_2;
  puVar2[1] = 0;
  *(unsigned int *)(puVar2 + 4) = param_3;
  puVar2[3] = 0;
  *(unsigned int *)(puVar2 + 6) = param_4;
  if (param_5 != 0) {
    FUN_002bcf58(puVar2 + 8,param_5,0x288);
  }
  *(unsigned char *)(puVar2 + 0x14c) = param_6;
  *(unsigned int *)(puVar2 + 0x14e) = param_7;
  puVar2[0x150] = 0;
  puVar2[0x151] = 1;
  *(unsigned int *)(puVar2 + 0x152) = 0;
  *(unsigned int *)(puVar2 + 0x154) = 0;
  piVar1 = DAT_00435d78;
  if (*DAT_00435d78 == 0) {
    *DAT_00435d78 = (int)puVar2;
  }
  if (piVar1[1] == 0) {
    piVar1[1] = (int)puVar2;
  }
  else {
    *(unsigned short **)(piVar1[1] + 0x2a4) = puVar2;
    *(int *)(puVar2 + 0x154) = piVar1[1];
    piVar1[1] = (int)puVar2;
  }
  piVar1[2] = piVar1[2] + 1;
  return puVar2;
}
