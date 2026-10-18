/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234160` (_code @ 0x234160, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned int *FUN_002bad80(unsigned char *, unsigned int);
extern unsigned int *FUN_002bb09c(unsigned int *);
/* Supplied declaration required: FUN_002c23f8. */


unsigned int * FUN_00234160(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned char temp_v1 [16];
  
  switch(param_2) {
  case 0:
    puVar1 = (unsigned int *)0x20;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421ec8;
      puVar1[3] = 0;
      *(unsigned char *)(puVar1 + 4) = 0;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 1:
    puVar1 = (unsigned int *)0x1c;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421e98;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 2:
    puVar1 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421e4c;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 3:
    puVar1 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421e0c;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 4:
    puVar1 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421e80;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 5:
    puVar1 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421e34;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 6:
    puVar1 = (unsigned int *)0x1c;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421ee0;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
    break;
  case 7:
    puVar1 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0x421dcc;
      puVar1[1] = 0;
      puVar1[2] = 0xe7e3ffff;
      puVar1 = (unsigned int *)FUN_002bb09c(puVar1 + 3);
      puVar1[2] = 0xffffffff;
      puVar1[-3] = 0x421eb0;
      puVar1[-2] = 0;
      puVar2 = (unsigned int *)FUN_002bad80(temp_v1,0);
      temp_v0 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = temp_v0;
      return puVar1 + -3;
    }
  }
  return (unsigned int *)0x0;
}
