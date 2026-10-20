/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8894` (_code @ 0x4c8894, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int);
int FUN_002e342c(unsigned short *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int *DAT_005738e8; /* 0x5738e8 */
extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002e342c. */


unsigned short * FUN_004c8894(unsigned int param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned short *puVar3;
  
  temp_v0 = FUN_0014aa78();
  if (((DAT_00573908 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0 &&
       (DAT_0057390c & *(unsigned int *)(temp_v0 + 0x45a4)) == 0) &&
     ((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) == 0 &&
      (DAT_00573910 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0)) {
    puVar3 = (unsigned short *)0x100;
    FUN_00163060(0x100,0x100,0,0x880,1);
    *puVar3 = 6;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(unsigned int *)(puVar3 + 4) = 0;
    *(unsigned int *)(puVar3 + 6) = 0;
    *(unsigned char *)(puVar3 + 0x410) = param_2;
    *(unsigned int *)(puVar3 + 0x412) = 0;
    *(unsigned int *)(puVar3 + 0x414) = 0;
    *(unsigned int *)(puVar3 + 0x436) = 0;
    puVar3[0x438] = 0;
    puVar3[0x439] = 1;
    FUN_002e342c(puVar3 + 0x416,param_1);
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
