/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cc1d0` (_code @ 0x1cc1d0, 0x3a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 22 slot(s), 74 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned char sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned char spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned short spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_2_stack;

/* Supplied declaration required: FUN_001d0984. */
/* Supplied declaration required: FUN_001d0b98. */
/* Supplied declaration required: FUN_001d13e8. */
/* Supplied declaration required: aeabi_uidivmod. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_001cc1d0(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17;
  unsigned short temp_v18 [25];
  unsigned int temp_v19;
  char temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned char temp_v23 [8];
  unsigned int temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26;
  unsigned short temp_v27;
  int temp_v28;
  unsigned int temp_v29 [3];
  unsigned char temp_v30 [28];
  int temp_v31;
  int temp_v32;
  int iStack_2c;
  unsigned int temp_v33;
  
  temp_v6 = *(unsigned int *)(param_1 + 0xa4);
  iStack_2c = param_1;
  temp_v33 = param_2;
  temp_v0 = aeabi_uidivmod(*(int *)(param_1 + 0x98) - 1,temp_v6);
  temp_v4 = *(int *)(param_1 + 0x94);
  aeabi_uidivmod(temp_v4,temp_v6);
  temp_v28 = temp_v2;
  temp_v12 = aeabi_uidivmod(temp_v4 - temp_v2,temp_v6);
  temp_v32 = (temp_v0 - temp_v12) + 1;
  temp_v7 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    temp_v31 = temp_v12 + 1;
    do {
      temp_v13 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v4 = 0;
      temp_v14 = 0;
      temp_v19 = 0;
      temp_v20 = '\0';
      temp_v21 = 0;
      temp_v22 = 0;
      if (temp_v0 < temp_v7) {
        aeabi_uidivmod(temp_v7 - temp_v0,temp_v32);
        temp_v4 = temp_v3;
      }
      if ((!(temp_v0 == 0 || temp_v0 == temp_v7)) && ((!(temp_v0 != 0 && temp_v0 < temp_v7) || (temp_v4 != 0)))) {
        if (!(*(char *)(param_1 + 0x90) == '\0' || temp_v7 <= temp_v0)) {
          temp_v14 = *(unsigned int *)(param_1 + 0xa4);
          if (temp_v4 != 1) {
            temp_v22 = *(unsigned int *)(param_1 + 0xa8);
            *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0xa4);
            temp_v21 = temp_v12 + (temp_v4 - 1);
          }
          else {
            temp_v11 = (unsigned int *)&temp_v13;
            temp_v22 = *(unsigned int *)(param_1 + 0xa8);
            temp_v21 = temp_v12;
            temp_v15 = temp_v28;
            *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0xa4) * temp_v31;
            if (*(char *)(param_1 + 0x88) == '\x03') {
              temp_v24 = temp_v33;
              temp_v1 = 0;
              if (*(int *)(param_1 + 0xb4) != 0) {
                do {
                  temp_v4 = FUN_001d13e8(temp_v24,temp_v29,&temp_v9,temp_v1);
                  if (temp_v4 == 0) {
                    return 0;
                  }
                  temp_v4 = param_1 + 0x110 + temp_v1 * 0x20;
                  rt_memcpy(temp_v4,temp_v29,0x20);
                  FUN_001d0984(*(unsigned int *)(param_1 + temp_v1 * 0x3c8 + 0x22c),0,temp_v4);
                  temp_v5 = temp_v1 + 1;
                  temp_v18[temp_v1 * 3] = (unsigned short)temp_v9;
                  temp_v18[temp_v1 * 3 + 1] = (*(unsigned short *)((unsigned char *)&temp_v9 + 2));
                  temp_v18[temp_v1 * 3 + 2] = (unsigned short)temp_v10;
                  temp_v1 = temp_v5;
                } while (temp_v5 < *(unsigned int *)(param_1 + 0xb4));
                *(unsigned char *)(temp_v11 + 4) = 1;
              }
              else {
                temp_v11 = (unsigned int *)&temp_v13;
                temp_v17 = 1;
              }
            }
          }
        }
        else {
          temp_v14 = *(unsigned int *)(param_1 + 0xa4);
          temp_v11 = (unsigned int *)&temp_v13;
          temp_v22 = *(unsigned int *)(param_1 + 0xa8);
          temp_v1 = *(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0xa4);
          temp_v8 = *(char *)(param_1 + 0x88) == '\x03';
          *(unsigned int *)(param_1 + 0x21c) = temp_v1;
          if (temp_v8) {
            temp_v1 = temp_v7;
          }
          temp_v21 = temp_v7;
          if (temp_v8 && temp_v1 == 0) {
            temp_v29[0] = temp_v33;
            temp_v1 = 0;
            if (*(int *)(param_1 + 0xb4) != 0) {
              do {
                temp_v4 = FUN_001d13e8(temp_v29[0],temp_v23,temp_v30,temp_v1);
                if (temp_v4 == 0) {
                  return 0;
                }
                temp_v4 = param_1 + 0x110 + temp_v1 * 0x20;
                rt_memcpy(temp_v4,temp_v23,0x20);
                FUN_001d0984(*(unsigned int *)(param_1 + temp_v1 * 0x3c8 + 0x22c),0,temp_v4);
                temp_v5 = temp_v1 + 1;
                temp_v18[temp_v1 * 3] = temp_v25;
                temp_v18[temp_v1 * 3 + 1] = temp_v26;
                temp_v18[temp_v1 * 3 + 2] = temp_v27;
                temp_v1 = temp_v5;
              } while (temp_v5 < *(unsigned int *)(param_1 + 0xb4));
              *(unsigned char *)(temp_v11 + 4) = 1;
            }
            else {
              temp_v11 = (unsigned int *)&temp_v13;
              temp_v17 = 1;
            }
          }
        }
      }
      else {
        temp_v14 = *(unsigned int *)(param_1 + 0xb0);
        temp_v22 = *(unsigned int *)(param_1 + 0xac);
        if (*(char *)(param_1 + 0x90) != '\0') {
          temp_v19 = 1;
          temp_v6 = *(unsigned int *)(param_1 + 0x94);
        }
        else {
          temp_v6 = 0;
          temp_v20 = '\x01';
        }
        *(unsigned int *)(param_1 + 0x21c) = temp_v6;
        temp_v21 = temp_v0;
      }
      temp_v13 = *(unsigned int *)(param_1 + 0x6c);
      temp_v16 = 0;
      temp_v9 = temp_v21;
      temp_v10 = temp_v22;
      FUN_001d0b98(param_1,1,&temp_v13);
      temp_v1 = *(int *)(param_1 + 0x6c) + 1;
      *(unsigned int *)(param_1 + 0x6c) = temp_v1;
      if (*(unsigned int *)(param_1 + 0x68) <= temp_v1) {
        *(unsigned int *)(param_1 + 0x6c) = 0;
      }
    } while ((temp_v20 == '\0') && (temp_v7 = temp_v7 + 1, temp_v7 < *(unsigned int *)(param_1 + 0x68)));
  }
  return 1;
}
