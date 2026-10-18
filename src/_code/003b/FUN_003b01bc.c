/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b01bc` (_code @ 0x3b01bc, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00422100; /* 0x422100 */
extern unsigned char DAT_00422124; /* 0x422124 */
extern unsigned char DAT_00422148; /* 0x422148 */
extern unsigned char DAT_0042216c; /* 0x42216c */
extern unsigned char DAT_004221b4; /* 0x4221b4 */


unsigned int * FUN_003b01bc(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  if (param_2 != 3) {
    if (param_2 < 3) {
      if (param_2 != 1) {
        if ((param_2 == 2) &&
           (puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x24)
           , puVar1 != (unsigned int *)0x0)) {
          puVar1[3] = *param_1;
          puVar1[4] = param_3;
          puVar1[5] = 0xffffffff;
          puVar1[2] = 6;
          *puVar1 = (unsigned int)&DAT_00422100;
          puVar1[1] = 2;
          return puVar1;
        }
      }
      else {
        puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x34);
        if (puVar1 != (unsigned int *)0x0) {
          puVar1[3] = *param_1;
          puVar1[4] = param_3;
          puVar1[5] = 0xffffffff;
          puVar1[2] = 0xc;
          *puVar1 = (unsigned int)&DAT_00422124;
          puVar1[1] = 1;
          return puVar1;
        }
      }
    }
    else if (param_2 != 4) {
      if ((param_2 == 0x100000) &&
         (puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x20),
         puVar1 != (unsigned int *)0x0)) {
        puVar1[2] = 0x14;
        *puVar1 = (unsigned int)&DAT_004221b4;
        puVar1[1] = 0x100000;
        return puVar1;
      }
    }
    else {
      puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x1c);
      if (puVar1 != (unsigned int *)0x0) {
        puVar1[3] = *param_1;
        puVar1[4] = param_3;
        puVar1[5] = 0xffffffff;
        *puVar1 = (unsigned int)&DAT_00422148;
        puVar1[1] = 4;
        puVar1[2] = 2;
        return puVar1;
      }
    }
  }
  else {
    puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x3c);
    if (puVar1 != (unsigned int *)0x0) {
      puVar1[3] = *param_1;
      puVar1[4] = param_3;
      puVar1[5] = 0xffffffff;
      puVar1[2] = 0xd;
      puVar1[1] = 3;
      *puVar1 = (unsigned int)&DAT_0042216c;
      puVar1[0xd] = 6;
      puVar1[0xe] = 0;
      return puVar1;
    }
  }
  return (unsigned int *)0x0;
}
