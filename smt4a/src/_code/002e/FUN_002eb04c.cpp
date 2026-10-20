/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb04c` (_code @ 0x2eb04c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb164(unsigned char [8], int);
int FUN_002ef00c(unsigned char [12], int);
int FUN_002efd36(...);

/* Supplied declaration required: FUN_002eb164. */
extern int FUN_002eb6ae(int, unsigned int);
extern int *arrayElementAddress_002eee88(int, unsigned char);
/* Supplied declaration required: FUN_002ef00c. */
/* Supplied declaration required: FUN_002efd36. */


unsigned int FUN_002eb04c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [12];
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 0x3c);
  if (((temp_v0 & 0xf) == 2) && (-1 < (int)(temp_v0 << 0x1a))) {
    if ((int)(temp_v0 << 0x1b) < 0) {
      if ((unsigned short)*(unsigned char *)(param_2 + 0x84) <= *(unsigned short *)(param_1 + 0x104)) {
        FUN_002eb164(temp_v2,param_2);
        piVar2 = (int *)arrayElementAddress_002eee88(param_1 + 0x9c,*(unsigned char *)(param_2 + 0x84));
        FUN_002ef00c(temp_v3,*piVar2 + 0x34);
        temp_v1 = FUN_002efd36(temp_v3,temp_v2);
        if (temp_v1 != 0) {
          return 1;
        }
        return 0;
      }
    }
    else if (-1 < (int)(temp_v0 << 0x12)) {
      temp_v1 = FUN_002eb6ae(param_2,0x200);
      if ((temp_v1 != 0) || (temp_v1 = FUN_002eb6ae(param_2,0x400), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x14b) == '\0') {
          return 0;
        }
        FUN_002eb164(temp_v2,param_2);
        temp_v1 = param_1 + 0xfc;
      }
      else {
        FUN_002eb164(temp_v2,param_2);
        temp_v1 = param_1 + 0xf0;
      }
      temp_v1 = FUN_002efd36(temp_v1,temp_v2);
      if (temp_v1 != 0) {
        *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
