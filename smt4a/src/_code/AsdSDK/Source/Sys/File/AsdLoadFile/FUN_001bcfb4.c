/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bcfb4` (_code @ 0x1bcfb4, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp130; /* 0x130: local_130 */
} param_6_stack;

extern int FUN_001bcd8c(); /* 0x1bcd8c */
extern signed char DAT_005b3fe0; /* 0x5b3fe0 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0019dbb8(unsigned int);
/* Supplied declaration required: FUN_001bce30. */
/* Supplied declaration required: FUN_001bce84. */
/* Supplied declaration required: FUN_001bceb8. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_001bcfb4(unsigned int param_1,unsigned int *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned char *puVar3;
  unsigned char temp_v1 [268];
  
  FUN_002e6354(temp_v1,0x100);
  if ((DAT_005b3fe0 != '\0') || (temp_v0 = FUN_0019dbb8(param_1), temp_v0 != 0)) {
    FUN_00100388(temp_v1,param_1);
  }
  else {
    FUN_00100388(temp_v1,"rom:/%s",param_1);
  }
  piVar2 = (int *)0x100;
  FUN_00163060(0x100,0x100,0,0x18,0);
  piVar2[5] = (int)param_2;
  piVar2[1] = param_4;
  piVar2[2] = param_5;
  piVar2[3] = param_3;
  piVar2[4] = param_6;
  puVar3 = temp_v1;
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  FUN_001bce30(puVar3,0,FUN_001bcd8c,piVar2);
  *piVar2 = (int)puVar3;
  FUN_001bce84();
  FUN_001bceb8(*piVar2,param_6);
  return;
}
