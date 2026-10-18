/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4cec` (_code @ 0x3c4cec, 0x46c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a53c. */
/* Supplied declaration required: FUN_0022a594. */
extern int FUN_0022a5d8(unsigned int, unsigned int);
extern unsigned int *FUN_0022a5f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00245888. */
extern unsigned int FUN_002458d4(unsigned short);
extern unsigned int *FUN_00256418(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002564cc(unsigned int);
extern unsigned int FUN_00293c98(void);


void FUN_003c4cec(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int *puVar6;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002564cc(*(unsigned int *)(param_1 + 0x10));
  puVar2 = (unsigned int *)FUN_00256418(param_2,*(unsigned int *)(param_1 + 0x1c),1);
  puVar6 = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar6 = puVar2 + 0x6d;
  }
  switch(temp_v0) {
  case 0:
    puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_1 + 0x1c) = *puVar4;
    temp_v0 = FUN_00293c98();
    puVar2 = (unsigned int *)FUN_00256418(temp_v0,*(unsigned int *)(param_1 + 0x1c),1);
    if (puVar2 != (unsigned int *)0x0) {
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),1,(int)(short)puVar2[0x6d],1,9999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),2,(int)*(short *)((int)puVar2 + 0x1b6),1,9999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),3,(int)(short)puVar2[0x6e],0,9999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),4,(int)*(short *)((int)puVar2 + 0x1ba),1,9999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),5,(int)(short)puVar2[0x6f],1,999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),6,(int)*(short *)((int)puVar2 + 0x1be),1,999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),7,(int)(short)puVar2[0x70],1,999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),8,(int)*(short *)((int)puVar2 + 0x1c2),1,999,0);
      FUN_0022a53c(*(unsigned int *)(param_1 + 0x10),9,(int)(short)puVar2[0x71],1,999,0);
      FUN_0022a594(*(unsigned int *)(param_1 + 0x10),10,(*puVar2 & 0x1000) >> 0xc);
      FUN_0022a594(*(unsigned int *)(param_1 + 0x10),0xb,(*puVar2 & 0x4000000) >> 0x1a);
      if ((*puVar2 & 0x10) != 0) {
        temp_v0 = FUN_002458d4(*(unsigned short *)((int)puVar2 + 0xce));
        temp_v3 = *(unsigned int *)(param_1 + 0x10);
      }
      else {
        temp_v3 = *(unsigned int *)(param_1 + 0x10);
        temp_v0 = 0;
      }
      FUN_0022a53c(temp_v3,0xc,temp_v0,0,9999,0);
    }
    break;
  case 1:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v0 = *puVar4;
      *(short *)puVar6 = (short)temp_v0;
      if (puVar2[0x9e] != 0) {
        *(short *)(puVar2[0x9e] + 0x2a) = (short)temp_v0;
      }
      if (puVar2[0x9f] != 0) {
        *(short *)(puVar2[0x9f] + 0x2a) = (short)*puVar6;
      }
      if (puVar2[0xa0] != 0) {
        *(short *)(puVar2[0xa0] + 0x2a) = (short)*puVar6;
      }
      return;
    }
    break;
  case 2:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)((int)puVar6 + 2) = (short)*puVar4;
      return;
    }
    break;
  case 3:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v0 = *puVar4;
      *(short *)(puVar6 + 1) = (short)temp_v0;
      if (puVar2[0x9e] != 0) {
        *(short *)(puVar2[0x9e] + 0x2c) = (short)temp_v0;
      }
      if (puVar2[0x9f] != 0) {
        *(short *)(puVar2[0x9f] + 0x2c) = (short)puVar6[1];
      }
      if (puVar2[0xa0] != 0) {
        *(short *)(puVar2[0xa0] + 0x2c) = (short)puVar6[1];
      }
      return;
    }
    break;
  case 4:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)((int)puVar6 + 6) = (short)*puVar4;
      return;
    }
    break;
  case 5:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)(puVar6 + 2) = (short)*puVar4;
      return;
    }
    break;
  case 6:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)((int)puVar6 + 10) = (short)*puVar4;
      return;
    }
    break;
  case 7:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)(puVar6 + 3) = (short)*puVar4;
      return;
    }
    break;
  case 8:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)((int)puVar6 + 0xe) = (short)*puVar4;
      return;
    }
    break;
  case 9:
    if (puVar6 != (unsigned int *)0x0) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)(puVar6 + 4) = (short)*puVar4;
      return;
    }
    break;
  case 10:
    if (puVar2 != (unsigned int *)0x0) {
      temp_v1 = FUN_0022a5d8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      if (temp_v1 != 0) {
        temp_v2 = *puVar2 | 0x1000;
      }
      else {
        temp_v2 = *puVar2 & 0xffffefff;
      }
      *puVar2 = temp_v2;
      return;
    }
    break;
  case 0xb:
    if (puVar2 != (unsigned int *)0x0) {
      temp_v1 = FUN_0022a5d8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      if (temp_v1 != 0) {
        temp_v2 = *puVar2 | 0x4000000;
      }
      else {
        temp_v2 = *puVar2 & 0xfbffffff;
      }
      *puVar2 = temp_v2;
      return;
    }
    break;
  case 0xc:
    if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x10) != 0)) {
      puVar4 = (unsigned int *)FUN_0022a5f8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      FUN_00245888(*(unsigned short *)((int)puVar2 + 0xce),*puVar4);
      return;
    }
  }
  return;
}
