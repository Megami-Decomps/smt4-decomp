/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a79c` (_code @ 0x15a79c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int FUN_00170a34(); /* 0x170a34 */
extern unsigned char LAB_0017ef14; /* 0x17ef14 */
extern unsigned char LAB_0017ef24; /* 0x17ef24 */
extern unsigned char LAB_0017ef30; /* 0x17ef30 */
extern unsigned int DAT_00569000; /* 0x569000 */
extern unsigned char DAT_005b4448; /* 0x5b4448 */
extern unsigned int DAT_005b4454; /* 0x5b4454 */
extern unsigned int DAT_005b445c; /* 0x5b445c */
extern unsigned int *DAT_006416a8; /* 0x6416a8 */
extern unsigned int *DAT_006416ac; /* 0x6416ac */
extern unsigned int *DAT_006416b0; /* 0x6416b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


void FUN_0015a79c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int **ppuVar1;
  unsigned int **ppuVar2;
  unsigned char *puVar3;
  unsigned int **ppuVar4;
  unsigned char *puVar5;
  unsigned int *puVar6;
  unsigned int *temp_v0;
  unsigned int uStack_44;
  unsigned int temp_v1;
  unsigned int uStack_3c;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  unsigned int temp_v6 [2];
  
  ppuVar1 = &temp_v0;
  ppuVar2 = &temp_v0;
  ppuVar4 = &temp_v0;
  temp_v0 = (unsigned int *)0x0;
  puVar5 = (unsigned char *)0xe0a0183b;
  puVar3 = puVar5;
  if ((DAT_006416ac == (unsigned int *)0x0) &&
     (FUN_0017fd20(), puVar3 = (unsigned char *)ppuVar1, -1 < (int)ppuVar1)) {
    DAT_006416ac = temp_v0;
    puVar3 = (unsigned char *)0x0;
  }
  if ((int)puVar3 < 0) {
    FUN_002e3140();
  }
  if (DAT_006416ac != (unsigned int *)0x0) {
    software_interrupt(0x23);
  }
  temp_v0 = (unsigned int *)0x0;
  puVar3 = puVar5;
  DAT_006416ac = (unsigned int *)param_2;
  if ((DAT_006416a8 == (unsigned int *)0x0) &&
     (FUN_0017fd20(&temp_v0,0), puVar3 = (unsigned char *)ppuVar2, -1 < (int)ppuVar2)) {
    DAT_006416a8 = temp_v0;
    puVar3 = (unsigned char *)0x0;
  }
  if ((int)puVar3 < 0) {
    FUN_002e3140();
  }
  if (DAT_006416a8 != (unsigned int *)0x0) {
    software_interrupt(0x23);
  }
  temp_v0 = (unsigned int *)0x0;
  DAT_006416a8 = (unsigned int *)param_3;
  if ((DAT_006416b0 == (unsigned int *)0x0) &&
     (FUN_0017fd20(&temp_v0,0), puVar5 = (unsigned char *)ppuVar4, -1 < (int)ppuVar4)) {
    puVar5 = (unsigned char *)0x0;
    DAT_006416b0 = temp_v0;
  }
  if ((int)puVar5 < 0) {
    FUN_002e3140();
  }
  FUN_001a089c(&DAT_005b445c,1);
  DAT_005b4448 = 0;
  temp_v2 = 4;
  puVar6 = &DAT_005b4454;
  temp_v3 = &LAB_0017ef14;
  temp_v4 = &LAB_0017ef30;
  temp_v5 = &LAB_0017ef24;
  temp_v6[0] = 0;
  temp_v0 = &DAT_00569000;
  temp_v1 = 0xfffffffe;
  uStack_3c = 0;
  uStack_44 = param_1;
  FUN_002fb0d4(&DAT_005b4454,&temp_v2,FUN_00170a34,temp_v6);
  if ((int)puVar6 < 0) {
    FUN_002e3140();
  }
  return;
}
