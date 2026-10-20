/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00474734` (_code @ 0x474734, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016007c(void);
int FUN_001b57a8(unsigned int [4], int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned int *);


unsigned int * FUN_00474734(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1 [4];
  
  switch(param_2) {
  case 0:
    puVar1 = (unsigned int *)0x20;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c788;
      puVar1[3] = 0;
      *(unsigned char *)(puVar1 + 4) = 0;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 1:
    puVar1 = (unsigned int *)0x1c;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c758;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 2:
    puVar1 = (unsigned int *)0x18;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c70c;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 3:
    puVar1 = (unsigned int *)0x18;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c6cc;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 4:
    puVar1 = (unsigned int *)0x18;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c740;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 5:
    puVar1 = (unsigned int *)0x18;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c6f4;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 6:
    puVar1 = (unsigned int *)0x1c;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c7a0;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 7:
    puVar1 = (unsigned int *)0x18;
    FUN_0016007c();
    if (puVar1 != (unsigned int *)0x0) {
      puVar2 = temp_v1;
      *puVar1 = 0x55c68c;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_001b5acc(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x55c770;
      puVar1[-2] = 0;
      FUN_001b57a8(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
