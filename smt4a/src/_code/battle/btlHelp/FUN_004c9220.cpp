/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c9220` (_code @ 0x4c9220, 0x21c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_00200a68(int, int, unsigned short *, unsigned int, int, unsigned int, int, int);
int FUN_004c8e30(unsigned short *, int, unsigned int);
int rt_memcpy_w(unsigned short *, int, int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int *DAT_005738e8; /* 0x5738e8 */
extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int btlGetMainState(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_00200a68. */
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned short * FUN_004c9220(unsigned short *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned short *puVar3;
  unsigned int temp_v1;
  
  temp_v0 = btlGetMainState();
  if (((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_0057390c) != 0 ||
       (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573908) != 0) ||
     ((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) != 0 ||
      (DAT_00573910 & *(unsigned int *)(temp_v0 + 0x45a0)) != 0)) {
    return (unsigned short *)0x0;
  }
  if (param_2 == 0) {
    FUN_004c8e30(param_1,0,param_4);
    return param_1;
  }
  if (param_3 == 0) {
    puVar3 = (unsigned short *)0x1;
    FUN_00200a68(1,0,param_1,*(unsigned int *)(temp_v0 + 0x2268),param_2,param_4,0xd,0);
    return puVar3;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0x2268);
  puVar3 = (unsigned short *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x880,1);
  *puVar3 = 2;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(unsigned short **)(puVar3 + 4) = param_1;
  *(unsigned int *)(puVar3 + 6) = temp_v1;
  rt_memcpy_w(puVar3 + 8,param_2,0x408);
  rt_memcpy_w(puVar3 + 0x20c,param_3,0x408);
  *(char *)(puVar3 + 0x410) = (char)param_4;
  *(unsigned int *)(puVar3 + 0x436) = 0;
  *(unsigned int *)(puVar3 + 0x412) = 0xd;
  *(unsigned int *)(puVar3 + 0x414) = 0xe;
  puVar3[0x438] = 0;
  puVar3[0x439] = 1;
  *(unsigned int *)(puVar3 + 0x416) = 0;
  *(unsigned int *)(puVar3 + 0x418) = 0;
  *(unsigned int *)(puVar3 + 0x41a) = 0;
  *(unsigned int *)(puVar3 + 0x41c) = 0;
  *(unsigned int *)(puVar3 + 0x41e) = 0;
  *(unsigned int *)(puVar3 + 0x420) = 0;
  *(unsigned int *)(puVar3 + 0x422) = 0;
  *(unsigned int *)(puVar3 + 0x424) = 0;
  *(unsigned int *)(puVar3 + 0x426) = 0;
  *(unsigned int *)(puVar3 + 0x428) = 0;
  *(unsigned int *)(puVar3 + 0x42a) = 0;
  *(unsigned int *)(puVar3 + 0x42c) = 0;
  *(unsigned int *)(puVar3 + 0x42e) = 0;
  *(unsigned int *)(puVar3 + 0x430) = 0;
  *(unsigned int *)(puVar3 + 0x432) = 0;
  *(unsigned int *)(puVar3 + 0x434) = 0;
  *(unsigned int *)(puVar3 + 0x43a) = 0;
  *(unsigned int *)(puVar3 + 0x43c) = 0;
  piVar1 = DAT_005738e8;
  if (*DAT_005738e8 == 0) {
    *DAT_005738e8 = (int)puVar3;
  }
  if (piVar1[1] == 0) {
    piVar1[1] = (int)puVar3;
  }
  else {
    *(unsigned short **)(piVar1[1] + 0x874) = puVar3;
    *(int *)(puVar3 + 0x43c) = piVar1[1];
    piVar1[1] = (int)puVar3;
  }
  piVar1[2] = piVar1[2] + 1;
  return puVar3;
}

} /* extern "C" */
