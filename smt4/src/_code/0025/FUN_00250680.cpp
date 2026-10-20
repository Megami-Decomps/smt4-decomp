/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250680` (_code @ 0x250680, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int btlMainFindEntryByListedId(unsigned int *, int);

extern int g_btlActionReflect; /* 0x434290 */
extern unsigned int g_btlEvent; /* 0x435d48 */

/* Supplied declaration required: FUN_0022699c. */
extern int FUN_0027e3e8(unsigned int, int, unsigned int);
/* Supplied declaration required: btlMainFindEntryByListedId. */
extern unsigned int *btlGetMainState(void);


unsigned int FUN_00250680(short param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if ((*(unsigned int *)(param_3 + 0x50) & 1) != 0 && (*(unsigned int *)(param_3 + 0x50) & 0x80) != 0) {
    puVar1 = (unsigned int *)btlGetMainState();
    btlMainFindEntryByListedId(puVar1,(int)*(short *)(param_3 + 0x62));
    *puVar1 = *puVar1 | 0x240;
    temp_v0 = FUN_0027e3e8(g_btlEvent,param_3,1);
    if ((temp_v0 == 0) || ((*puVar1 & 0x10) == 0)) {
      temp_v0 = g_btlActionReflect;
      FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 0x24;
      *(unsigned int **)(temp_v0 + 0x18) = puVar1;
      *(unsigned int *)(temp_v0 + 0x28) = 1;
    }
  }
  return 1;
}

} /* extern "C" */
