/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113110` (_code @ 0x113110, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrCopy(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);

extern unsigned char LAB_00112a0d; /* 0x112a0d */
extern unsigned char LAB_0011316c; /* 0x11316c */

/* Supplied declaration required: onlineSockAddrCopy. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int mapIsEmpty4(void);
extern unsigned int FUN_002fda98(int);


void FUN_00113110(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [16];
  unsigned char *puVar3;
  
  puVar3 = temp_v2;
  temp_v0 = mapIsEmpty4();
  if (temp_v0 != 0) {
    puVar4 = &LAB_00112a0d;
    puVar3 = temp_v3;
  }
  else {
    temp_v1 = FUN_002fda98(param_1 + 0x120);
    onlineSockAddrCopy(param_1 + 0x2f0,temp_v1);
    *(unsigned int *)(param_1 + 0x2d0) = 1;
    *(unsigned int *)(param_1 + 0x2cc) = 0x9c4;
    puVar4 = (unsigned char *)0x112dd1;
  }
  temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_0011316c);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
