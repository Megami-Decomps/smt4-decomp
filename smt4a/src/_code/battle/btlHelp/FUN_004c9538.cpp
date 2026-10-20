/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c9538` (_code @ 0x4c9538, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_002e342c(unsigned short *, unsigned int);
int rt_memcpy_w(unsigned short *, int, int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern int *DAT_005738e8; /* 0x5738e8 */
extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int btlGetMainState(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned short * FUN_004c9538(unsigned int param_1,int param_2,unsigned int param_3,unsigned char param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned short *puVar3;
  unsigned int temp_v1;
  
  temp_v0 = btlGetMainState();
  if ((((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_0057390c) == 0 &&
        (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573908) == 0) &&
      ((*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573910) == 0 &&
       (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) == 0)) && (param_2 != 0)) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x2268);
    puVar3 = (unsigned short *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x880,1);
    *puVar3 = 7;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(unsigned int *)(puVar3 + 4) = param_1;
    *(unsigned int *)(puVar3 + 6) = temp_v1;
    rt_memcpy_w(puVar3 + 8,param_2,0x408);
    *(unsigned char *)(puVar3 + 0x410) = param_4;
    *(unsigned int *)(puVar3 + 0x436) = 0;
    *(unsigned int *)(puVar3 + 0x412) = 0xd;
    *(unsigned int *)(puVar3 + 0x414) = 0xe;
    puVar3[0x438] = 0;
    puVar3[0x439] = 1;
    FUN_002e342c(puVar3 + 0x416,param_3);
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
  return (unsigned short *)0x0;
}

} /* extern "C" */
