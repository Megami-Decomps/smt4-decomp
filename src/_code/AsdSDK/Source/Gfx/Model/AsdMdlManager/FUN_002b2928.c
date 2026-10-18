/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2928` (_code @ 0x2b2928, 0x204 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00144c80(int, int, unsigned int);
/* Supplied declaration required: FUN_002a8a58. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002b2928(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned char temp_v5;
  unsigned long long temp_v6;
  int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned char temp_v7 [32];
  int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  temp_v5 = param_1 != 0;
  temp_v0 = 0;
  if (temp_v5) {
    temp_v0 = *(int *)(param_1 + 8);
  }
  if (temp_v5 && temp_v0 != 0) {
    param_2 = *(int *)(temp_v0 + 4);
  }
  if (((temp_v5 && temp_v0 != 0) && param_2 != 0) && (temp_v0 = *(int *)(temp_v0 + 0x28), 0 < temp_v0)) {
    temp_v1 = FUN_002c4b84(0x100,0x100,0,temp_v0 * 0x1c,1);
    temp_v4 = 0;
    temp_v6 = 0;
    *(unsigned int *)(param_1 + 0x18) = temp_v1;
    while( 1 ) {
      puVar7 = (unsigned int *)(*(int *)(param_1 + 0x18) + temp_v4 * 0x1c);
      piVar3 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x18) + 0x20);
      temp_v2 = *piVar3;
      if (temp_v2 != 0) {
        temp_v2 = (int)piVar3 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v3 = 0;
      if (temp_v2 != 0) {
        piVar3 = (int *)(temp_v2 + temp_v4 * 0x10 + 0x28);
        temp_v3 = *piVar3;
        if (temp_v3 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = (int)piVar3 + temp_v3;
        }
      }
      temp_v2 = *(int *)(temp_v3 + 0xc4);
      temp_v1 = FUN_002c4b84(0x100,0x100,0,temp_v2 * 0x84,1);
      *puVar7 = temp_v1;
      puVar7[1] = temp_v2;
      if (0 < temp_v2) break;
      temp_v4 = temp_v4 + 1;
      puVar7[5] = (int)temp_v6;
      puVar7[6] = (int)temp_v6;
      if (temp_v0 <= temp_v4) {
        return 1;
      }
    }
    temp_v0 = FUN_00144c80(param_1,temp_v4,0);
    temp_v4 = *(int *)(temp_v0 + 0x1c);
    if (temp_v4 != 0) {
      temp_v4 = temp_v0 + 0x1c + temp_v4;
    }
    else {
      temp_v4 = 0;
    }
    uStack_68 = *(unsigned int *)(temp_v4 + 0x10);
    uStack_64 = *(unsigned int *)(temp_v4 + 0x14);
    uStack_60 = *(unsigned int *)(temp_v4 + 0x18);
    uStack_5c = *(unsigned int *)(temp_v4 + 0x1c);
    uStack_58 = *(unsigned int *)(temp_v4 + 0x20);
    uStack_54 = *(unsigned int *)(temp_v4 + 0x24);
    uStack_50 = *(unsigned int *)(temp_v4 + 0x28);
    uStack_4c = *(unsigned int *)(temp_v4 + 0x2c);
    uStack_48 = *(unsigned int *)(temp_v4 + 0x30);
    uStack_98 = *(unsigned int *)(temp_v4 + 0x3c);
    uStack_a0 = *(unsigned int *)(temp_v4 + 0x34);
    uStack_9c = *(unsigned int *)(temp_v4 + 0x38);
    FUN_002a8a58(temp_v7,&uStack_68,&uStack_a0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}
