/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b79cc` (_code @ 0x2b79cc, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int sp130; /* 0x130: local_130 */
} param_4_stack;

extern int FUN_002c6a20(int, unsigned int);


void FUN_002b79cc(unsigned int param_1,unsigned int param_2,unsigned int param_3,romwright_code *param_4)

{
/* irregular: 1 goto(s) */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v6 [32];
  unsigned int temp_v7 [33];
  unsigned int *temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  romwright_code *temp_v11;
  
  temp_v11 = param_4;
  uStack_1c = param_3;
  uStack_20 = param_2;
  uStack_24 = param_1;
  temp_v9 = 1;
  temp_v7[1] = param_2;
  temp_v6[1] = param_1;
  do {
    temp_v1 = temp_v9;
    temp_v9 = temp_v9 - 1;
    puVar8 = (unsigned int *)temp_v6[temp_v1];
    temp_v10 = temp_v7[temp_v1];
    do {
      while( 1 ) {
        while( 1 ) {
          temp_v1 = param_3 * ((int)temp_v10 >> 1);
          puVar7 = (unsigned int *)((int)puVar8 + temp_v1);
          if ((temp_v10 & 1) == 0) {
            temp_v1 = temp_v1 - param_3;
          }
          puVar9 = (unsigned int *)((int)puVar7 + temp_v1);
          temp_v1 = (*temp_v11)(puVar8,puVar7);
          if (0 < temp_v1) {
            temp_v2 = param_3;
            if (((param_3 | (unsigned int)puVar8) & 3) != 0) {
              do {
                temp_v0 = *(unsigned char *)puVar8;
                *(unsigned char *)puVar8 = *(unsigned char *)puVar7;
                *(unsigned char *)puVar7 = temp_v0;
                puVar8 = (unsigned int *)((int)puVar8 + 1);
                puVar7 = (unsigned int *)((int)puVar7 + 1);
                temp_v2 = temp_v2 - 1;
              } while (temp_v2 != 0);
            }
            else {
              do {
                temp_v4 = *puVar8;
                temp_v2 = temp_v2 - 4;
                *puVar8 = *puVar7;
                puVar8 = puVar8 + 1;
                *puVar7 = temp_v4;
                puVar7 = puVar7 + 1;
              } while (temp_v2 != 0);
            }
            puVar8 = (unsigned int *)((int)puVar8 - param_3);
            puVar7 = (unsigned int *)((int)puVar7 - param_3);
          }
          temp_v1 = (*temp_v11)(puVar7,puVar9);
          if (0 < temp_v1) {
            temp_v1 = (*temp_v11)(puVar8,puVar9);
            if (0 < temp_v1) {
              temp_v2 = param_3;
              if (((param_3 | (unsigned int)puVar8) & 3) != 0) {
                do {
                  temp_v0 = *(unsigned char *)puVar8;
                  *(unsigned char *)puVar8 = *(unsigned char *)puVar9;
                  *(unsigned char *)puVar9 = temp_v0;
                  puVar8 = (unsigned int *)((int)puVar8 + 1);
                  puVar9 = (unsigned int *)((int)puVar9 + 1);
                  temp_v2 = temp_v2 - 1;
                } while (temp_v2 != 0);
              }
              else {
                do {
                  temp_v4 = *puVar8;
                  temp_v2 = temp_v2 - 4;
                  *puVar8 = *puVar9;
                  puVar8 = puVar8 + 1;
                  *puVar9 = temp_v4;
                  puVar9 = puVar9 + 1;
                } while (temp_v2 != 0);
              }
              puVar8 = (unsigned int *)((int)puVar8 - param_3);
              puVar9 = (unsigned int *)((int)puVar9 - param_3);
            }
            temp_v2 = param_3;
            if (((param_3 | (unsigned int)puVar7) & 3) != 0) {
              do {
                temp_v0 = *(unsigned char *)puVar7;
                *(unsigned char *)puVar7 = *(unsigned char *)puVar9;
                *(unsigned char *)puVar9 = temp_v0;
                puVar7 = (unsigned int *)((int)puVar7 + 1);
                puVar9 = (unsigned int *)((int)puVar9 + 1);
                temp_v2 = temp_v2 - 1;
              } while (temp_v2 != 0);
            }
            else {
              do {
                temp_v4 = *puVar7;
                temp_v2 = temp_v2 - 4;
                *puVar7 = *puVar9;
                puVar7 = puVar7 + 1;
                *puVar9 = temp_v4;
                puVar9 = puVar9 + 1;
              } while (temp_v2 != 0);
            }
            puVar7 = (unsigned int *)((int)puVar7 - param_3);
            puVar9 = (unsigned int *)((int)puVar9 - param_3);
          }
          puVar9 = (unsigned int *)((int)puVar9 - param_3);
          temp_v2 = param_3;
          if (((param_3 | (unsigned int)puVar7) & 3) != 0) {
            do {
              temp_v0 = *(unsigned char *)puVar7;
              *(unsigned char *)puVar7 = *(unsigned char *)puVar9;
              *(unsigned char *)puVar9 = temp_v0;
              puVar7 = (unsigned int *)((int)puVar7 + 1);
              puVar9 = (unsigned int *)((int)puVar9 + 1);
              temp_v2 = temp_v2 - 1;
            } while (temp_v2 != 0);
          }
          else {
            do {
              temp_v4 = *puVar7;
              temp_v2 = temp_v2 - 4;
              *puVar7 = *puVar9;
              puVar7 = puVar7 + 1;
              *puVar9 = temp_v4;
              puVar9 = puVar9 + 1;
            } while (temp_v2 != 0);
          }
          puVar9 = (unsigned int *)((int)puVar9 - param_3);
          puVar7 = puVar8;
          temp_v8 = puVar9;
          while( 1 ) {
            do {
              puVar7 = (unsigned int *)((int)puVar7 + param_3);
              temp_v1 = (*temp_v11)(puVar7,temp_v8);
            } while (temp_v1 < 0);
            do {
              puVar9 = (unsigned int *)((int)puVar9 - param_3);
              temp_v1 = (*temp_v11)(puVar9,temp_v8);
            } while (0 < temp_v1);
            if (puVar9 <= puVar7) break;
            temp_v2 = param_3;
            if (((param_3 | (unsigned int)puVar7) & 3) != 0) {
              do {
                temp_v0 = *(unsigned char *)puVar7;
                *(unsigned char *)puVar7 = *(unsigned char *)puVar9;
                *(unsigned char *)puVar9 = temp_v0;
                puVar7 = (unsigned int *)((int)puVar7 + 1);
                puVar9 = (unsigned int *)((int)puVar9 + 1);
                temp_v2 = temp_v2 - 1;
              } while (temp_v2 != 0);
            }
            else {
              do {
                temp_v4 = *puVar7;
                temp_v2 = temp_v2 - 4;
                *puVar7 = *puVar9;
                puVar7 = puVar7 + 1;
                *puVar9 = temp_v4;
                puVar9 = puVar9 + 1;
              } while (temp_v2 != 0);
            }
            puVar7 = (unsigned int *)((int)puVar7 - param_3);
            puVar9 = (unsigned int *)((int)puVar9 - param_3);
          }
          temp_v2 = param_3;
          if (((param_3 | (unsigned int)puVar7) & 3) != 0) {
            do {
              temp_v0 = *(unsigned char *)puVar7;
              *(unsigned char *)puVar7 = *(unsigned char *)temp_v8;
              puVar7 = (unsigned int *)((int)puVar7 + 1);
              *(unsigned char *)temp_v8 = temp_v0;
              temp_v8 = (unsigned int *)((int)temp_v8 + 1);
              temp_v2 = temp_v2 - 1;
            } while (temp_v2 != 0);
          }
          else {
            do {
              temp_v4 = *puVar7;
              *puVar7 = *temp_v8;
              puVar7 = puVar7 + 1;
              *temp_v8 = temp_v4;
              temp_v8 = temp_v8 + 1;
              temp_v2 = temp_v2 - 4;
            } while (temp_v2 != 0);
          }
          puVar7 = (unsigned int *)((int)puVar7 - param_3);
          temp_v3 = FUN_002c6a20((int)puVar7 - (int)puVar8,param_3);
          temp_v1 = temp_v9;
          temp_v2 = temp_v3 - 1;
          temp_v5 = (temp_v10 - temp_v2) - 1;
          temp_v10 = temp_v2;
          if ((int)temp_v2 <= (int)temp_v5) break;
          if ((int)temp_v5 >= 0xb) {
            temp_v6[temp_v9 + 1] = (unsigned int)puVar8;
            temp_v7[temp_v1 + 1] = temp_v2;
            temp_v9 = temp_v9 + 1;
            puVar8 = puVar7;
            temp_v10 = temp_v5;
          }
          else if ((int)temp_v2 < 0xb) goto code_r0x002b7bbe;
        }
        if ((int)temp_v2 < 0xb) break;
        temp_v6[temp_v9 + 1] = (unsigned int)puVar7;
        temp_v7[temp_v1 + 1] = temp_v5;
        temp_v9 = temp_v9 + 1;
      }
      puVar8 = puVar7;
      temp_v10 = temp_v5;
    } while ((int)temp_v5 >= 11);
code_r0x002b7bbe:
    if (temp_v9 == 0) {
      return;
    }
  } while( 1 );
}
