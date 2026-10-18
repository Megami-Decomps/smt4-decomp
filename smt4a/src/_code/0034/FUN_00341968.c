/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341968` (_code @ 0x341968, 0x500 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern romwright_code *DAT_005b3d8c; /* 0x5b3d8c */
extern romwright_code *DAT_005b3d90; /* 0x5b3d90 */

/* Unsupported intrinsic, declaration required: while (LOAD). */
/* Supplied declaration required: FUN_002e59f8. */


void FUN_00341968(short *param_1,int param_2,int param_3)

{
/* irregular: 5 goto(s); 2 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  romwright_code *pcVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v7 = 0;
  temp_v6 = 0;
  temp_v0 = *param_1;
  do {
    if (temp_v0 == -1) {
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = 0xffff;
      }
      return;
    }
    temp_v1 = param_1[temp_v7];
    temp_v4 = ((temp_v1 & 0xff) << 8) | (unsigned int)(temp_v1 >> 8);
    if (temp_v4 - 0xf801 >= 0x8f) goto joined_r0x00341d58;
    switch((romwright_code *)(temp_v4 - 0xf804)) {
    case (romwright_code *)0x0:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v0 = param_1[temp_v7 + 1];
      goto joined_r0x00341dac;
    default:
      pcVar3 = (romwright_code *)(temp_v4 - 0xf804);
      if (DAT_005b3d8c != (romwright_code *)0x0) {
        pcVar3 = DAT_005b3d90;
      }
      if ((DAT_005b3d8c == (romwright_code *)0x0 || pcVar3 == (romwright_code *)0x0) ||
         (temp_v2 = (*DAT_005b3d8c)(temp_v4), temp_v2 == 0)) goto joined_r0x00341d58;
      (*DAT_005b3d90)(temp_v4,param_1,param_2,&temp_v7,&temp_v6,param_3);
      break;
    case (romwright_code *)0xc:
      temp_v2 = (unsigned int)(unsigned short)param_1[temp_v7 + 1] * 0x60 + 0x63c9c8;
      if (temp_v2 != 0) {
        for (temp_v3 = 0; *(short *)(temp_v2 + temp_v3 * 2) != 0; temp_v3 = temp_v3 + 1) {
        }
        if (param_3 == 0) {
          FUN_002e59f8(temp_v2,param_2 + temp_v6 * 2,temp_v3 << 1);
        }
        temp_v6 = temp_v6 + temp_v3;
      }
      temp_v7 = temp_v7 + 1;
      break;
    case (romwright_code *)0xd:
      temp_v2 = (unsigned int)(unsigned short)param_1[temp_v7 + 1] * 0x68 + 0x63afc8;
      if (temp_v2 != 0) {
        for (temp_v3 = 0; *(short *)(temp_v2 + temp_v3 * 2) != 0; temp_v3 = temp_v3 + 1) {
        }
        if (param_3 == 0) {
          FUN_002e59f8(temp_v2,param_2 + temp_v6 * 2,temp_v3 << 1);
        }
        temp_v6 = temp_v6 + temp_v3;
      }
      temp_v7 = temp_v7 + 1;
      break;
    case (romwright_code *)0xe:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v6 = temp_v6 + 1;
      do {
        temp_v7 = temp_v7 + 1;
        temp_v0 = param_1[temp_v7];
        if (param_3 == 0) {
          *(short *)(param_2 + temp_v6 * 2) = temp_v0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v0 != 0);
      break;
    case (romwright_code *)0xf:
      temp_v5 = param_3 == 0;
      if (temp_v5) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      if (temp_v5) {
        *(short *)(param_2 + (temp_v6 + 1) * 2) = param_1[temp_v7 + 1];
      }
      if (temp_v5) {
        *(short *)(param_2 + (temp_v6 + 2) * 2) = param_1[temp_v7 + 2];
      }
      if (temp_v5) {
        *(short *)(param_2 + (temp_v6 + 3) * 2) = param_1[temp_v7 + 3];
      }
      temp_v6 = temp_v6 + 4;
      temp_v7 = temp_v7 + 4;
      temp_v0 = param_1[temp_v7];
      goto joined_r0x00341c64;
    case (romwright_code *)0x10:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      if (param_3 == 0) {
        *(short *)(param_2 + (temp_v6 + 1) * 2) = param_1[temp_v7 + 1];
      }
      temp_v6 = temp_v6 + 2;
      temp_v7 = temp_v7 + 2;
      temp_v0 = param_1[temp_v7];
      goto joined_r0x00341c64;
    case (romwright_code *)0x11:
      temp_v5 = param_3 == 0;
      if (temp_v5) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = 0x14f8;
      }
      temp_v7 = temp_v7 + 1;
      temp_v1 = param_1[temp_v7];
      if (temp_v5) {
        *(unsigned short *)(param_2 + (temp_v6 + 1) * 2) = *(unsigned short *)((unsigned int)temp_v1 * 4 + 0x63ccc8);
      }
      if (temp_v5) {
        *(unsigned short *)(param_2 + (temp_v6 + 2) * 2) = *(unsigned short *)((unsigned int)temp_v1 * 4 + 0x63ccca);
      }
      temp_v6 = temp_v6 + 3;
      break;
    case (romwright_code *)0x12:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v6 = temp_v6 + 1;
      break;
    case (romwright_code *)0x13:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v6 = temp_v6 + 1;
      break;
    case (romwright_code *)0x14:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v6 = temp_v6 + 1;
      break;
    case (romwright_code *)0x15:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v0 = param_1[temp_v7 + 1];
joined_r0x00341dac:
      temp_v7 = temp_v7 + 1;
      temp_v6 = temp_v6 + 1;
joined_r0x00341c64:
      if (param_3 == 0) {
        *(short *)(param_2 + temp_v6 * 2) = temp_v0;
      }
      temp_v6 = temp_v6 + 1;
      break;
    case (romwright_code *)0x17:
joined_r0x00341d58:
      if (param_3 == 0) {
        *(unsigned short *)(param_2 + temp_v6 * 2) = temp_v1;
      }
      temp_v6 = temp_v6 + 1;
    }
    temp_v7 = temp_v7 + 1;
    temp_v0 = param_1[temp_v7];
  } while( 1 );
}
