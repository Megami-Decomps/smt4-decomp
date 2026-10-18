/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439118` (_code @ 0x439118, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;


void FUN_00439118(int param_1,int param_2,int param_3)

{
/* irregular: 9 unstructured edge(s); 4 goto(s) */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  short *psVar8;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned short *temp_v9;
  
  temp_v3 = 0;
  temp_v4 = 0;
LAB_00439134:
  do {
    if (temp_v3 == param_2 - 1) {
      *(unsigned short *)(param_1 + temp_v3 * 2) = 0;
      return;
    }
    puVar4 = (unsigned short *)(param_3 + temp_v4 * 2);
    temp_v0 = *puVar4;
    temp_v1 = (unsigned int)temp_v0;
    if (!(temp_v1 != 0x20 && temp_v1 != 0x3000)) {
      temp_v4 = temp_v4 + 1;
      continue;
    }
    temp_v5 = temp_v1 - 0xff41;
    if (temp_v5 >= 0x1a) {
      temp_v5 = temp_v1 - 0xff21;
    }
    temp_v8 = temp_v5 >= 0x19;
    temp_v7 = temp_v5 == 0x19;
    if (temp_v5 >= 0x1a) {
      temp_v8 = temp_v1 - 0xff10 >= 9;
      temp_v7 = temp_v1 - 0xff10 == 9;
    }
    if (!(temp_v8 && !temp_v7)) {
      temp_v4 = temp_v4 + 1;
      *(unsigned short *)(param_1 + temp_v3 * 2) = temp_v0 + 0x120;
      temp_v3 = temp_v3 + 1;
      continue;
    }
    if (temp_v1 - 0x3041 < 0x56) {
      psVar8 = (short *)(param_1 + temp_v3 * 2);
      *psVar8 = temp_v0 + 0x60;
      temp_v2 = 0;
      while (*(short *)(temp_v2 * 4 + 0x544d98) != *psVar8) {
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 0xc) goto LAB_00439364;
      }
      *psVar8 = *(short *)(temp_v2 * 4 + 0x544d9a);
      temp_v4 = temp_v4 + 1;
      temp_v3 = temp_v3 + 1;
      continue;
    }
    if (temp_v1 - 0x30a1 >= 0x5a) {
      if (temp_v1 - 0xff66 >= 0x3a) {
        *(unsigned short *)(param_1 + temp_v3 * 2) = temp_v0;
        if (temp_v1 != 0) {
          temp_v4 = temp_v4 + 1;
          temp_v3 = temp_v3 + 1;
          continue;
        }
        return;
      }
      temp_v0 = puVar4[1];
      if (temp_v0 == 0xff9e) {
        temp_v6 = 0x544eb0;
        temp_v2 = 0;
        do {
          if (*(unsigned short *)(temp_v2 * 4 + 0x544eb0) == temp_v1) goto LAB_00439294;
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x15);
      }
      else if (temp_v0 == 0xff9f) {
        temp_v6 = 0x544f04;
        temp_v2 = 0;
        do {
          if (*(unsigned short *)(temp_v2 * 4 + 0x544f04) == temp_v1) goto LAB_00439294;
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 5);
      }
      psVar8 = (short *)(param_1 + temp_v3 * 2);
      temp_v2 = 0;
      do {
        if (*(unsigned short *)(temp_v2 * 4 + 0x544dc8) == temp_v1) {
          *psVar8 = *(short *)(temp_v2 * 4 + 0x544dca);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x3a);
      temp_v2 = 0;
      do {
        if (*(short *)(temp_v2 * 4 + 0x544d98) == *psVar8) {
          *psVar8 = *(short *)(temp_v2 * 4 + 0x544d9a);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0xc);
LAB_00439364:
      temp_v4 = temp_v4 + 1;
      temp_v3 = temp_v3 + 1;
      continue;
    }
    puVar4 = (unsigned short *)(param_1 + temp_v3 * 2);
    *puVar4 = temp_v0;
    temp_v2 = 0;
    do {
      if (*(unsigned short *)(temp_v2 * 4 + 0x544d98) == *puVar4) {
        *puVar4 = *(unsigned short *)(temp_v2 * 4 + 0x544d9a);
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0xc);
    temp_v4 = temp_v4 + 1;
    temp_v3 = temp_v3 + 1;
  } while( 1 );
LAB_00439294:
  temp_v9 = (unsigned short *)(param_1 + temp_v3 * 2);
  temp_v4 = temp_v4 + 2;
  *temp_v9 = *(unsigned short *)(temp_v6 + temp_v2 * 4 + 2);
  temp_v3 = temp_v3 + 1;
  goto LAB_00439134;
}
