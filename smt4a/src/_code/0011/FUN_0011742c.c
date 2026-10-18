/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011742c` (_code @ 0x11742c, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_001174b4; /* 0x1174b4 */

/* Supplied declaration required: FUN_001039d4. */
/* Supplied declaration required: FUN_001039e8. */
/* Supplied declaration required: FUN_00103a10. */
/* Supplied declaration required: FUN_00103a24. */
/* Supplied declaration required: FUN_00105542. */
/* Supplied declaration required: FUN_00121ad0. */
extern int FUN_00123a3a(unsigned int);
/* Supplied declaration required: FUN_00124300. */
/* Supplied declaration required: FUN_002eb2ec. */
extern unsigned int FUN_002eb5f4(void);
extern int FUN_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_003031f4. */


void FUN_0011742c(unsigned int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int *temp_v3;
  int temp_v4;
  
  temp_v3 = param_3;
  temp_v4 = param_4;
  temp_v0 = FUN_002eb5f4();
  FUN_00124300(temp_v0,param_2);
  temp_v1 = FUN_00123a3a(param_1);
  temp_v1 = *(int *)(temp_v1 + 0x18) + 0x58;
  FUN_00105542(temp_v1,&LAB_001174b4);
  temp_v3 = *(unsigned int **)(param_2 + 0x10);
  while( 1 ) {
    temp_v3 = (unsigned int *)*temp_v3;
    temp_v4 = *(unsigned int *)(param_2 + 0x10);
    temp_v2 = FUN_002ee774(&temp_v3,(unsigned int *)&temp_v4);
    if (temp_v2 == 0) break;
    FUN_002eb2ec(temp_v3 + 2,*(unsigned char *)(temp_v1 + 0x10));
    FUN_001039d4(temp_v3 + 2,0);
    FUN_00103a10(temp_v3 + 2,0);
    FUN_001039e8(temp_v3 + 2,0);
    FUN_00103a24(temp_v3 + 2,0);
    FUN_003031f4(temp_v3 + 2);
    puVar4 = temp_v3 + 2;
    temp_v0 = FUN_002eb5f4();
    FUN_00121ad0(temp_v0,puVar4);
  }
  return;
}
