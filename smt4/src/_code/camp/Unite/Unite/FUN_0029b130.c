/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029b130` (_code @ 0x29b130, 0x688 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 21 slot(s), 81 byte(s) */
typedef struct {
    unsigned char sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp108; /* 0x108: local_108 */
} param_4_stack;

extern int FUN_002c6ce0(); /* 0x2c6ce0 */
extern int FUN_002dcaa8(); /* 0x2dcaa8 */
extern unsigned char DAT_004207e8; /* 0x4207e8 */

/* Supplied declaration required: FUN_001cffd0. */
/* Supplied declaration required: FUN_001d01f8. */
/* Supplied declaration required: FUN_001df8d4. */
/* Supplied declaration required: FUN_00205568. */
extern int FUN_0026a604(unsigned int);
/* Supplied declaration required: FUN_0026a69c. */
/* Supplied declaration required: FUN_00283e48. */
extern int FUN_0029903c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_0029e974. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0029b130(int param_1,int param_2,int param_3,unsigned short *param_4)

{
/* irregular: 2 goto(s); 16 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar9;
  int temp_v8 [9];
  int temp_v9;
  unsigned char *temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  char temp_v21;
  int aiStack_80 [23];
  
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v10 = &DAT_004207e8;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = '\0';
  FUN_002c4938(aiStack_80,0x58);
  temp_v7 = 0;
  if (param_3 != 0) {
    temp_v7 = (*(unsigned int *)(param_3 + 4) & 0x1ffff) >> 2;
  }
  else if (param_4 != (unsigned short *)0x0) {
    temp_v7 = (unsigned int)*param_4;
  }
  temp_v9 = param_2 << 1;
  temp_v1 = 0x100;
  FUN_002c5300(0x100,0x100,0,temp_v9,1);
  temp_v2 = 0x100;
  temp_v11 = temp_v1;
  FUN_002c5300(0x100,0x100,0,temp_v9,1);
  temp_v1 = 0x100;
  temp_v13 = temp_v2;
  FUN_002c5300(0x100,0x100,0,temp_v9,1);
  temp_v19 = temp_v1;
  FUN_002b9024();
  temp_v8[0] = 0;
  temp_v8[1] = 0;
  temp_v1 = 0;
  temp_v8[2] = 0;
  temp_v8[3] = 0;
  temp_v8[4] = 0;
  temp_v8[5] = 0;
  temp_v8[6] = 0;
  do {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v7 + temp_v1 * 2 + 0x3c);
    if (temp_v3 != 0) {
      FUN_0026a69c();
      temp_v8[temp_v3] = temp_v8[temp_v3] + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  temp_v2 = 1;
  temp_v1 = temp_v8[0];
  do {
    if (temp_v1 < temp_v8[temp_v2]) {
      temp_v21 = (char)temp_v2;
      temp_v1 = temp_v8[temp_v2];
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 7);
  temp_v1 = 0;
  if (temp_v21 == '\x06') {
    temp_v21 = '\0';
  }
  if (0 < param_2) {
    do {
      puVar9 = (unsigned short *)(param_1 + temp_v1 * 2);
      temp_v2 = 0;
      temp_v3 = (unsigned int)*puVar9;
      do {
        if (*(unsigned short *)(temp_v7 + temp_v2 * 4 + 0x4e) == temp_v3) {
          *(unsigned short *)(temp_v19 + temp_v20 * 2) = *puVar9;
          temp_v20 = temp_v20 + 1;
          goto LAB_0029b3f4;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 8);
      FUN_00283e48();
      if ((temp_v3 != 0) && (temp_v3 = *(unsigned int *)(temp_v3 + 0x38), (temp_v3 & 0x7ff) >> 6 == 5)) {
        temp_v4 = (temp_v3 & 0xfffff) >> 0x10;
        switch(temp_v4) {
        default:
          *(unsigned short *)(temp_v11 + temp_v12 * 2) = *puVar9;
          temp_v12 = temp_v12 + 1;
          break;
        case 1:
        case 2:
        case 3:
        case 4:
          temp_v6 = 0;
          if (temp_v4 == 1) {
            temp_v6 = 5;
          }
          else if (temp_v4 == 2) {
            temp_v6 = 1;
          }
          else if (temp_v4 == 3) {
            temp_v6 = 3;
          }
          else if (temp_v4 == 4) {
            temp_v6 = 4;
          }
          temp_v2 = FUN_0029903c(*(unsigned short *)(temp_v7 + ((temp_v3 & 0xf800) >> 10) + 0x6c) >> 10,temp_v6);
          if (temp_v2 != 0) {
            *(unsigned short *)(temp_v11 + temp_v12 * 2) = *puVar9;
            temp_v12 = temp_v12 + 1;
            break;
          }
          *(unsigned short *)(temp_v19 + temp_v20 * 2) = *puVar9;
          temp_v20 = temp_v20 + 1;
          break;
        case 5:
        case 6:
          *(unsigned short *)(temp_v13 + temp_v14 * 2) = *puVar9;
          temp_v14 = temp_v14 + 1;
        }
      }
      else {
        *(unsigned short *)(temp_v11 + temp_v12 * 2) = *puVar9;
        temp_v12 = temp_v12 + 1;
      }
LAB_0029b3f4:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_2);
  }
  FUN_002b7bca(temp_v13,temp_v14,2,FUN_002c6ce0);
  FUN_002b7bca(temp_v19,temp_v20,2,FUN_002dcaa8);
  temp_v16 = FUN_00205568(0,temp_v7,param_3,param_4);
  temp_v1 = 0x100;
  FUN_002c5300(0x100,0x100,0,temp_v16 << 1,1);
  temp_v15 = temp_v1;
  FUN_00205568();
  temp_v1 = 0;
  if (0 < temp_v16) {
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v15 + temp_v1 * 2);
      FUN_0029e974();
      temp_v1 = temp_v1 + 1;
      aiStack_80[*(unsigned char *)(temp_v3 + 2)] = aiStack_80[*(unsigned char *)(temp_v3 + 2)] + 1;
    } while (temp_v1 < temp_v16);
  }
  temp_v1 = 0x100;
  FUN_002c5300(0x100,0x100,0,temp_v9,1);
  temp_v18 = 0;
  temp_v2 = 0;
  temp_v17 = temp_v1;
  if (0 < temp_v14) {
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v13 + temp_v2 * 2);
      if (temp_v3 != 0) {
        FUN_00283e48();
        temp_v1 = 0;
        do {
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v7 + temp_v1 * 2 + 0x3c);
          if (((temp_v4 != 0) && (FUN_002ae164(), temp_v4 != 0)) &&
             (temp_v5 = FUN_0026a604(temp_v3), temp_v5 != 0)) {
            *(unsigned short *)(temp_v17 + temp_v18 * 2) = *(unsigned short *)(temp_v13 + temp_v2 * 2);
            temp_v18 = temp_v18 + 1;
            *(unsigned short *)(temp_v13 + temp_v2 * 2) = 0;
            goto LAB_0029b63c;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 8);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v14);
  }
LAB_0029b63c:
  FUN_001df8d4(&temp_v10);
  FUN_001cffd0(&temp_v10);
  FUN_001d01f8(&temp_v10);
  FUN_001df8d4(&temp_v10);
  FUN_001cffd0(&temp_v10);
  do {
    temp_v1 = FUN_001d01f8(&temp_v10);
  } while (temp_v1 != 0);
  temp_v1 = 0;
  if (0 < temp_v14) {
    do {
      temp_v0 = *(short *)(temp_v13 + temp_v1 * 2);
      if (temp_v0 != 0) {
        *(short *)(temp_v17 + temp_v18 * 2) = temp_v0;
        temp_v18 = temp_v18 + 1;
        *(unsigned short *)(temp_v13 + temp_v1 * 2) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v14);
  }
  temp_v1 = 0;
  if (temp_v1 < temp_v20) {
    do {
      temp_v0 = *(short *)(temp_v19 + temp_v1 * 2);
      if (temp_v0 != 0) {
        *(short *)(temp_v17 + temp_v18 * 2) = temp_v0;
        temp_v18 = temp_v18 + 1;
        *(unsigned short *)(temp_v19 + temp_v1 * 2) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v20);
  }
  rt_memcpy(param_1,temp_v17,temp_v9);
  temp_v10 = &DAT_004207e8;
  if (temp_v11 != 0) {
    FUN_002c415c();
    temp_v11 = 0;
  }
  if (temp_v13 != 0) {
    FUN_002c415c();
    temp_v13 = 0;
  }
  if (temp_v15 != 0) {
    FUN_002c415c();
    temp_v15 = 0;
  }
  if (temp_v17 != 0) {
    FUN_002c415c();
    temp_v17 = 0;
  }
  if (temp_v19 != 0) {
    FUN_002c415c();
  }
  return;
}
