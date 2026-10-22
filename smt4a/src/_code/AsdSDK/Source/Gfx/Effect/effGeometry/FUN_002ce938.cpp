/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce938` (_code @ 0x2ce938, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00178b04(int, unsigned char *, int);
int matrix44SetIdentity(unsigned int *);
int slotInit(unsigned int, int, int, int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char DAT_0054baf8; /* 0x54baf8 */

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: matrix44SetIdentity. */
/* Supplied declaration required: slotInit. */
extern unsigned int slotReset(void);


unsigned int * FUN_002ce938(int param_1,int param_2,int param_3,unsigned short param_4)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  
  puVar1 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0x5c,0x10,1);
  temp_v0 = 0x4c;
  FUN_00178b04(0x4c,&DAT_0054baf8,0x1fa);
  if (temp_v0 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = slotReset();
  }
  slotInit(temp_v2,0x25,param_3 * param_1 * 3,param_2 * param_1);
  *puVar1 = temp_v2;
  temp_v2 = 0x10000;
  memAlloc(0x10000,0x100,0,param_1 << 4,0x10,1);
  if (0 < param_1) {
    in_s0 = 0x3f800000;
  }
  temp_v1 = 0;
  puVar1[1] = temp_v2;
  if (0 < param_1) {
    do {
      puVar3 = (unsigned int *)(puVar1[1] + temp_v1 * 0x10);
      temp_v1 = temp_v1 + 1;
      *puVar3 = in_s0;
      puVar3[1] = in_s0;
      puVar3[2] = in_s0;
      puVar3[3] = in_s0;
    } while ((int)temp_v1 < param_1);
  }
  matrix44SetIdentity(puVar1 + 6);
  *(unsigned short *)((int)puVar1 + 0x12) = param_4 | 0x100;
  *(short *)(puVar1 + 2) = (short)param_1;
  *(short *)((int)puVar1 + 0xe) = (short)(param_2 * param_1);
  *(short *)(puVar1 + 4) = (short)(param_3 * param_1);
  puVar1[0x16] = 0xa5;
  *(short *)((int)puVar1 + 10) = (short)param_2;
  *(short *)(puVar1 + 3) = (short)param_3;
  return puVar1;
}

} /* extern "C" */
