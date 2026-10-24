/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00268fc4` (_code @ 0x268fc4, 0x208 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effGeomBufferCreate(unsigned int, unsigned int, int);
int recordPrepareActive(unsigned int, int, int, unsigned int);
int refCountIncrement(void);
int asdOperatorNew(int, unsigned short *);
int memAlloc(int, int, int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00473808; /* 0x473808 */
extern unsigned int DAT_0047380c; /* 0x47380c */
extern unsigned int DAT_00473810; /* 0x473810 */
extern unsigned int DAT_00473814; /* 0x473814 */

/* Supplied declaration required: effGeomBufferCreate. */
/* Supplied declaration required: recordPrepareActive. */
extern unsigned int _ZN13EffGeomRecordC1Ev(void);
/* Supplied declaration required: refCountIncrement. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */


unsigned short * FUN_00268fc4(unsigned short *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v0 = *param_1;
  if ((temp_v0 & 0x200) != 0) {
    temp_v4 = *(unsigned int *)(*(int *)(param_1 + 6) + 0x14);
    temp_v5 = *(unsigned int *)(*(int *)(param_1 + 6) + 4) & 0xffff;
    puVar3 = (unsigned short *)0x10000;
    memAlloc(0x10000,0x100,0,0x58,0x10,1);
    *puVar3 = 0x300;
    puVar3[1] = 0;
    effGeomBufferCreate(temp_v5,temp_v4,0);
    *(unsigned int *)(puVar3 + 6) = temp_v5;
    temp_v1 = DAT_00473810;
    temp_v7 = DAT_0047380c;
    temp_v6 = DAT_00473808;
    if ((temp_v4 & 0x80000) != 0) {
      *(unsigned int *)(temp_v5 + 0x4c) = DAT_00473814;
      *(unsigned int *)(temp_v5 + 0x40) = temp_v6;
      *(unsigned int *)(temp_v5 + 0x44) = temp_v7;
      *(unsigned int *)(temp_v5 + 0x48) = temp_v1;
    }
    *(unsigned int *)(*(int *)(puVar3 + 6) + 0x60) = 0;
    if (*(int *)(*(int *)(param_1 + 6) + 0xb4) != 0) {
      *(int *)(*(int *)(puVar3 + 6) + 0xb4) = *(int *)(*(int *)(param_1 + 6) + 0xb4);
      refCountIncrement();
    }
  }
  else {
    temp_v6 = *(unsigned int *)(*(int *)(param_1 + 4) + 0xc);
    temp_v8 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    puVar3 = (unsigned short *)0x10000;
    memAlloc(0x10000,0x100,0,0x58,0x10,1);
    temp_v2 = 0x7e8;
    asdOperatorNew(0x7e8,param_1);
    if (temp_v2 == 0) {
      temp_v7 = 0;
    }
    else {
      temp_v7 = _ZN13EffGeomRecordC1Ev();
    }
    recordPrepareActive(temp_v7,0x25,temp_v8 * 3,temp_v6);
    *puVar3 = temp_v0;
    *(unsigned int *)(puVar3 + 4) = temp_v7;
    puVar3[1] = (unsigned short)temp_v6;
    puVar3[0x2a] = 0xa5;
    puVar3[0x2b] = 0;
    if (*(int *)(param_1 + 2) != 0) {
      *(int *)(puVar3 + 2) = *(int *)(param_1 + 2);
      refCountIncrement();
    }
    temp_v4 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x18);
    temp_v5 = 0;
    if ((temp_v4 != 0) && (temp_v5 = temp_v4 & 1, temp_v5 == 1)) {
      **(unsigned short **)(*(int *)(puVar3 + 4) + 0x48) =
           **(unsigned short **)(*(int *)(param_1 + 4) + 0x48);
    }
    if (temp_v5 < *(unsigned int *)(*(int *)(param_1 + 4) + 0x18)) {
      do {
        temp_v3 = temp_v5 * 2 + 2;
        temp_v2 = temp_v5 * 2;
        temp_v8 = temp_v5 * 2;
        temp_v5 = temp_v5 + 2;
        *(unsigned short *)(*(int *)(*(int *)(puVar3 + 4) + 0x48) + temp_v8) =
             *(unsigned short *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + temp_v2);
        *(unsigned short *)(*(int *)(*(int *)(puVar3 + 4) + 0x48) + temp_v3) =
             *(unsigned short *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + temp_v3);
      } while (temp_v5 < *(unsigned int *)(*(int *)(param_1 + 4) + 0x18));
    }
  }
  return puVar3;
}

} /* extern "C" */
