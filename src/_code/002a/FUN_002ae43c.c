/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae43c` (_code @ 0x2ae43c, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp130; /* 0x130: local_130 */
} param_6_stack;

extern int FUN_00155c24(); /* 0x155c24 */
extern signed char DAT_00465040; /* 0x465040 */

/* Supplied declaration required: FUN_0014e834. */
extern unsigned int FUN_00155cb0(unsigned char *, unsigned int, romwright_code *, unsigned int *);
/* Supplied declaration required: FUN_002b0184. */
extern int FUN_002b0404(unsigned int);
extern int FUN_002b045c(unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */


void FUN_002ae43c(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [268];
  
  FUN_002c4938(temp_v3,0x100);
  if ((DAT_00465040 != '\0') || (temp_v0 = FUN_002b045c(param_1), temp_v0 != 0)) {
    FUN_002be624(temp_v3,param_1);
  }
  else {
    temp_v0 = FUN_002b0404(param_1);
    if (temp_v0 != 0) {
      FUN_002be624(temp_v3,"patch:/%s",param_1);
    }
    else {
      FUN_002be624(temp_v3,"rom:/%s",param_1);
    }
  }
  puVar2 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x18,0);
  puVar2[5] = (unsigned int)param_2;
  puVar2[1] = param_4;
  puVar2[2] = param_5;
  puVar2[3] = param_3;
  puVar2[4] = param_6;
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  temp_v1 = FUN_00155cb0(temp_v3,0,FUN_00155c24,puVar2);
  temp_v2 = (param_3 & 1) != 0;
  if ((param_3 & 2) != 0) {
    temp_v2 = temp_v2 | 0x10;
  }
  *puVar2 = temp_v1;
  FUN_002b0184(temp_v1,temp_v2);
  FUN_0014e834(*puVar2,param_6);
  return;
}
