/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fbc30` (_code @ 0x4fbc30, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0254(unsigned int *, int);
int FUN_003f06b4(unsigned int *, int);
int FUN_003f0e20(unsigned int *, int);
int FUN_004102d8(int, int, int, unsigned int);

extern int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int g_btlEvent; /* 0x573898 */
extern unsigned int DAT_00573c18; /* 0x573c18 */
extern unsigned int DAT_00573c1c; /* 0x573c1c */
extern unsigned int DAT_00573c20; /* 0x573c20 */
extern unsigned int DAT_00573c24; /* 0x573c24 */
extern unsigned int DAT_00573c28; /* 0x573c28 */
extern unsigned int DAT_00573c2c; /* 0x573c2c */

extern unsigned int *btlGetMainState(void);
/* Supplied declaration required: FUN_003f0254. */
/* Supplied declaration required: FUN_003f06b4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004102d8. */
extern int FUN_004d7a60(unsigned int, int, unsigned int);


unsigned int FUN_004fbc30(short param_1,unsigned int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int *puVar4;
  unsigned int temp_v1;
  
  if ((*(unsigned int *)(param_3 + 0x50) & 1) != 0 && (*(unsigned int *)(param_3 + 0x50) & 0x80) != 0) {
    puVar1 = (unsigned int *)btlGetMainState();
    puVar2 = puVar1;
    FUN_003f0e20(puVar1,(int)*(short *)(param_3 + 0x6a));
    temp_v1 = DAT_00573c2c | DAT_00573c24;
    *puVar2 = DAT_00573c28 | DAT_00573c20 | *puVar2;
    puVar2[1] = puVar2[1] | temp_v1;
    temp_v0 = FUN_004d7a60(g_btlEvent,param_3,1);
    if ((temp_v0 == 0) ||
       (((puVar4 = puVar1, FUN_003f06b4(puVar1,param_3), puVar4 != (unsigned int *)0x0 &&
         (FUN_003f0254(puVar1,param_3), puVar1 == (unsigned int *)0x0)) ||
        ((DAT_00573c18 & *puVar2) == 0 && (DAT_00573c1c & puVar2[1]) == 0)))) {
      temp_v0 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 0x2e;
      *(unsigned int **)(temp_v0 + 0x18) = puVar2;
      *(unsigned int *)(temp_v0 + 0x28) = 1;
    }
  }
  return 1;
}

} /* extern "C" */
