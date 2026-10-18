/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043bd0c` (_code @ 0x43bd0c, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int sp168; /* 0x168: local_168 */
} param_5_stack;

extern unsigned char LAB_00200020; /* 0x200020 */
extern unsigned char LAB_002c002e; /* 0x2c002e */
extern unsigned char LAB_002c0058; /* 0x2c0058 */
extern unsigned char LAB_002e0020; /* 0x2e0020 */
extern unsigned char LAB_002e002c; /* 0x2e002c */
extern unsigned char LAB_0043bf40; /* 0x43bf40 */
extern unsigned char LAB_0043bf4c; /* 0x43bf4c */
extern unsigned char LAB_0043bf70; /* 0x43bf70 */
extern unsigned char LAB_0043bf88; /* 0x43bf88 */
extern unsigned char LAB_0043bfb8; /* 0x43bfb8 */
extern unsigned char DAT_00580020; /* 0x580020 */
extern unsigned char DAT_00580058; /* 0x580058 */

/* Supplied declaration required: FUN_002e98ea. */
/* Supplied declaration required: FUN_0043c310. */


void FUN_0043bd0c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned char *puVar4;
  unsigned short *puVar5;
  unsigned int temp_v1;
  unsigned char *puStack_164;
  unsigned char temp_v2 [128];
  unsigned char *temp_v3;
  unsigned char *puStack_dc;
  unsigned char *puStack_d8;
  unsigned char *temp_v4;
  unsigned char *puStack_d0;
  unsigned char *temp_v5;
  unsigned char *puStack_c8;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned int uStack_bc;
  unsigned char temp_v8 [132];
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_2c;
  int iStack_28;
  
  puVar2 = &temp_v1;
  temp_v9 = param_1;
  temp_v10 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if (param_3 >= 6) {
    if (param_3 != 8) {
      if (param_3 == 9 || param_3 == 10) goto LAB_0043bd4c;
    }
    else if (param_4 >= 10000) goto LAB_0043bd4c;
    FUN_0043c310(&temp_v1,0x40,&LAB_0043bf4c);
  }
  else {
LAB_0043bd4c:
    temp_v0 = param_4 / 1000;
    if ((param_4 >= 1000) || (-1000 >= param_4)) {
      FUN_0043c310(temp_v2,0x40,&LAB_0043bf40,param_4 % 1000);
    }
    else {
      FUN_0043c310(temp_v2,0x40,&LAB_0043bf4c,param_4 % 1000);
    }
    puVar2 = (unsigned int *)temp_v2;
    if (temp_v0 != 0) {
      puVar5 = (unsigned short *)((int)&temp_v4 + param_3 * 2);
      puVar1 = temp_v2;
      puVar4 = temp_v8;
      do {
        puVar2 = (unsigned int *)puVar4;
        puVar4 = puVar1;
        temp_v6 = &LAB_002e0020;
        temp_v7 = &DAT_00580020;
        uStack_bc = 0;
        temp_v4 = &LAB_002c0058;
        puStack_d0 = &LAB_002e002c;
        temp_v5 = &LAB_00200020;
        puStack_c8 = &DAT_00580058;
        puStack_164 = puVar4;
        if ((temp_v0 >= 1000) || (-1000 >= temp_v0)) {
          temp_v1 = (unsigned int)*puVar5;
          FUN_0043c310(puVar2,0x40,&LAB_0043bf70,temp_v0 % 1000);
        }
        else {
          temp_v1 = (unsigned int)*puVar5;
          FUN_0043c310(puVar2,0x40,&LAB_0043bf88,temp_v0 % 1000);
        }
        temp_v0 = temp_v0 / 1000;
        puVar1 = (unsigned char *)puVar2;
      } while (temp_v0 != 0);
    }
  }
  FUN_002e98ea(temp_v9,puVar2,temp_v10);
  if (((param_3 == 2 || param_3 == 3) || (param_3 == 4 || param_3 == 5)) ||
     (param_3 == 6 || param_3 == 7)) {
    temp_v3 = &DAT_00580058;
    puStack_dc = &LAB_002c002e;
    puStack_d8 = &LAB_002c002e;
    temp_v4 = &LAB_002c002e;
    puStack_d0 = &DAT_00580058;
    temp_v5 = &DAT_00580058;
    puStack_c8 = (unsigned char *)0x0;
    FUN_002e98ea(temp_v2,temp_v9,0x40);
    temp_v1 = (unsigned int)*(unsigned short *)((int)&temp_v3 + param_3 * 2);
    puStack_164 = (unsigned char *)param_5;
    FUN_0043c310(temp_v9,temp_v10,&LAB_0043bfb8,temp_v2);
  }
  return;
}
