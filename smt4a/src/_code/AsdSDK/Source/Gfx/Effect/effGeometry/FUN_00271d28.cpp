/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00271d28` (_code @ 0x271d28, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_00212500(void);
int FUN_002b3324(unsigned int, unsigned int, int);
int FUN_00412648(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_0054baf8; /* 0x54baf8 */
extern unsigned int DAT_005c1fb4; /* 0x5c1fb4 */
extern unsigned int DAT_005c1fb8; /* 0x5c1fb8 */
extern unsigned int DAT_005c1fbc; /* 0x5c1fbc */
extern unsigned int DAT_005c1fc0; /* 0x5c1fc0 */

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00212500. */
/* Supplied declaration required: FUN_002b3324. */
/* Supplied declaration required: FUN_00412648. */
extern unsigned int FUN_00412fd8(void);


unsigned short * FUN_00271d28(unsigned short *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v1 = *param_1;
  if ((temp_v1 & 0x200) != 0) {
    temp_v6 = *(unsigned int *)(*(int *)(param_1 + 6) + 0x14);
    temp_v7 = *(unsigned int *)(*(int *)(param_1 + 6) + 4) & 0xffff;
    puVar4 = (unsigned short *)0x10000;
    memAlloc(0x10000,0x100,0,0x58,0x10,1);
    *puVar4 = 0x300;
    puVar4[1] = 0;
    FUN_002b3324(temp_v7,temp_v6,0);
    *(unsigned int *)(puVar4 + 6) = temp_v7;
    temp_v2 = DAT_005c1fc0;
    temp_v8 = DAT_005c1fbc;
    temp_v4 = DAT_005c1fb8;
    if ((temp_v6 & 0x80000) != 0) {
      *(unsigned int *)(temp_v7 + 0x40) = DAT_005c1fb4;
      *(unsigned int *)(temp_v7 + 0x44) = temp_v4;
      *(unsigned int *)(temp_v7 + 0x48) = temp_v8;
      *(unsigned int *)(temp_v7 + 0x4c) = temp_v2;
    }
    *(unsigned int *)(*(int *)(puVar4 + 6) + 0x60) = 0;
    if (*(int *)(*(int *)(param_1 + 6) + 0xb4) != 0) {
      *(int *)(*(int *)(puVar4 + 6) + 0xb4) = *(int *)(*(int *)(param_1 + 6) + 0xb4);
      FUN_00212500();
    }
  }
  else {
    temp_v8 = *(unsigned int *)(*(int *)(param_1 + 4) + 0xc);
    puVar4 = (unsigned short *)0x10000;
    memAlloc(0x10000,0x100,0,0x58,0x10,1);
    temp_v3 = 0x4c;
    FUN_00178b04(0x4c,&DAT_0054baf8,0x73);
    temp_v4 = 0;
    if (temp_v3 != 0) {
      temp_v4 = FUN_00412fd8();
    }
    FUN_00412648();
    *puVar4 = temp_v1;
    *(unsigned int *)(puVar4 + 4) = temp_v4;
    puVar4[1] = (unsigned short)temp_v8;
    puVar4[0x2a] = 0xa5;
    puVar4[0x2b] = 0;
    if (*(int *)(param_1 + 2) != 0) {
      *(int *)(puVar4 + 2) = *(int *)(param_1 + 2);
      FUN_00212500();
    }
    temp_v6 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x18);
    temp_v7 = 0;
    if ((temp_v6 != 0) && (temp_v7 = temp_v6 & 1, temp_v7 == 1)) {
      **(unsigned short **)(*(int *)(puVar4 + 4) + 0x48) =
           **(unsigned short **)(*(int *)(param_1 + 4) + 0x48);
    }
    if (temp_v7 < *(unsigned int *)(*(int *)(param_1 + 4) + 0x18)) {
      do {
        temp_v5 = temp_v7 * 2 + 2;
        temp_v3 = temp_v7 * 2;
        temp_v0 = temp_v7 * 2;
        temp_v7 = temp_v7 + 2;
        *(unsigned short *)(*(int *)(*(int *)(puVar4 + 4) + 0x48) + temp_v0) =
             *(unsigned short *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + temp_v3);
        *(unsigned short *)(*(int *)(*(int *)(puVar4 + 4) + 0x48) + temp_v5) =
             *(unsigned short *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + temp_v5);
      } while (temp_v7 < *(unsigned int *)(*(int *)(param_1 + 4) + 0x18));
    }
  }
  return puVar4;
}

} /* extern "C" */
