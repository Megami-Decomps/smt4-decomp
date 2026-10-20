/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233fcc` (_code @ 0x233fcc, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002baa40(unsigned int [4], int);
int FUN_002c222c(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002baa40. */
extern unsigned int *FUN_002bad5c(unsigned int *);
/* Supplied declaration required: FUN_002c222c. */


unsigned int * FUN_00233fcc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1 [4];
  
  switch(param_2) {
  case 0:
    puVar1 = (unsigned int *)0x20;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x422280;
      puVar1[3] = 0;
      *(unsigned char *)(puVar1 + 4) = 0;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 1:
    puVar1 = (unsigned int *)0x1c;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x422250;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 2:
    puVar1 = (unsigned int *)0x18;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x422204;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 3:
    puVar1 = (unsigned int *)0x18;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x4221c4;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 4:
    puVar1 = (unsigned int *)0x18;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x422238;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 5:
    puVar1 = (unsigned int *)0x18;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x4221ec;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 6:
    puVar1 = (unsigned int *)0x1c;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x422298;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 7:
    puVar1 = (unsigned int *)0x18;
    FUN_002c222c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x422184;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bad5c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x422268;
      puVar1[-2] = 0;
      FUN_002baa40(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
