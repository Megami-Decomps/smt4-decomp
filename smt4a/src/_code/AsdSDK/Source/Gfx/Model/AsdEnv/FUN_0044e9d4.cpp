/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044e9d4` (_code @ 0x44e9d4, 0x820 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004588b8(int, unsigned int, int);
int nnnstdMemCpy(...);
int nw_gfx_internal_FastWordCopyAsm_6(...);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
} param_3_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned char DAT_005c0ea4; /* 0x5c0ea4 */
extern unsigned char DAT_005c0ea5; /* 0x5c0ea5 */
extern signed char DAT_005c0ea6; /* 0x5c0ea6 */
extern signed char DAT_005c0ea7; /* 0x5c0ea7 */
extern unsigned char DAT_005c0ea8; /* 0x5c0ea8 */
extern signed char DAT_005c0ea9; /* 0x5c0ea9 */
extern unsigned char DAT_005c0eaa; /* 0x5c0eaa */
extern unsigned char DAT_005c0eab; /* 0x5c0eab */
extern int DAT_005c0eac; /* 0x5c0eac */
extern int DAT_005c0eb0; /* 0x5c0eb0 */
extern unsigned char DAT_005c0eb4; /* 0x5c0eb4 */
extern unsigned int DAT_005c0ec4; /* 0x5c0ec4 */
extern unsigned int DAT_005c0ecc; /* 0x5c0ecc */
extern unsigned int DAT_005c0ed0; /* 0x5c0ed0 */
extern unsigned int DAT_005c0ed4; /* 0x5c0ed4 */
extern int DAT_005c0ee8; /* 0x5c0ee8 */
extern int DAT_005c0eec; /* 0x5c0eec */
extern float DAT_005c0ef0; /* 0x5c0ef0 */
extern float DAT_005c0ef4; /* 0x5c0ef4 */
extern float DAT_005c0ef8; /* 0x5c0ef8 */
extern unsigned int DAT_005c4c34; /* 0x5c4c34 */
extern unsigned int DAT_0064c0c4; /* 0x64c0c4 */
extern unsigned int DAT_0064c0c8; /* 0x64c0c8 */
extern int DAT_0064c0cc; /* 0x64c0cc */
extern unsigned int DAT_0064c0d0; /* 0x64c0d0 */
extern unsigned int DAT_0064c0d4; /* 0x64c0d4 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_004588b8. */
/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_6. */


void FUN_0044e9d4(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  
  temp_v9 = *(int *)(param_3 + 8);
  if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(*(int *)(param_2 + 0x24) + 8) == temp_v9)) {
    return;
  }
  temp_v3 = *(unsigned int *)(param_2 + 8);
  temp_v21 = *(unsigned long long *)(param_2 + 0x100);
  temp_v4 = *(int *)(param_2 + 0x108);
  temp_v24 = *(int *)(param_2 + 0x10c);
  temp_v25 = *(int *)(param_2 + 0x114);
  temp_v12 = *(int *)(param_2 + 0x110);
  temp_v26 = *(int *)(param_2 + 0x124);
  temp_v11 = *(int *)(param_2 + 0x120);
  temp_v22 = *(unsigned long long *)(param_2 + 0x118);
  temp_v5 = 0;
  temp_v23 = (unsigned long long)*(unsigned int *)(param_2 + 0x128);
  if (((~*(unsigned int *)(temp_v9 + 0x18) & 0x10) == 0) && (*(int *)(param_2 + 0xa0) != 0)) {
    temp_v5 = 5;
  }
  puVar12 = DAT_005b40e0 + 2;
  *DAT_005b40e0 = temp_v5;
  DAT_005b40e0[1] = 0x100e0;
  temp_v10 = *(int *)(temp_v9 + 0x2b8);
  DAT_005b40e0 = puVar12;
  if ((temp_v10 == 0) || (temp_v24 != temp_v10)) {
    DAT_005c0eaa = (~*(unsigned int *)(temp_v9 + 0x104) & 1) == 0;
    DAT_005c0ef8 = *(float *)(temp_v9 + 0x10c);
    if (((DAT_005c4c34 & 1) == 0) && (temp_v6 = __cxa_guard_acquire(&DAT_005c4c34), temp_v6 != 0)) {
      DAT_0064c0c8 = 0x1006d;
      DAT_0064c0d0 = 0x8017004d;
    }
    if (DAT_005c0eec != 0) {
      DAT_0064c0cc = DAT_005c0eec;
      temp_v19 = -DAT_005c0ef8;
      temp_v18 = 0.0f;
    }
    else {
      DAT_0064c0cc = DAT_005c0eb0;
      temp_v19 = (DAT_005c0ef0 - DAT_005c0ef4) * DAT_005c0ef8;
      temp_v18 = DAT_005c0ef0;
    }
    DAT_0064c0c4 = (unsigned int)(DAT_005c0eec == 0);
    if (DAT_005c0eaa != '\0') {
      if (DAT_005c0ee8 == 0x81a5) {
        temp_v20 = 1.5259022e-05f;
      }
      else {
        temp_v20 = 5.960465e-08f;
        temp_v19 = temp_v19 * 128.0f;
      }
      temp_v18 = temp_v18 - temp_v19 * temp_v20;
    }
    DAT_0064c0d4 = 0;
    if (((unsigned int)temp_v18 & 0x80000000) != 0) {
      DAT_0064c0d4 = 0x800000;
    }
    if (romwright_fabs_4(temp_v18) == 0.0f) {
      temp_v7 = 0;
      DAT_0064c0d4 = DAT_0064c0d4 | (((unsigned int)temp_v18 & 0x7fffff) >> 7) | ((temp_v7 & 0x7f) << 0x10);
    }
    else {
      temp_v7 = ((unsigned int)romwright_fabs_4(temp_v18) >> 0x17) - 0x40;
      if (-1 < (int)temp_v7) {
        if ((int)temp_v7 >= 0x80) {
          DAT_0064c0d4 = 0x7f0000;
        }
        else {
          DAT_0064c0d4 = DAT_0064c0d4 | (((unsigned int)temp_v18 & 0x7fffff) >> 7) | ((temp_v7 & 0x7f) << 0x10);
        }
      }
    }
    nw_gfx_internal_FastWordCopyAsm_6(DAT_005b40e0,&DAT_0064c0c4);
    temp_v5 = *(unsigned int *)(temp_v9 + 0x114);
    *DAT_005b40e0 = *(unsigned int *)(temp_v9 + 0x110);
    DAT_005b40e0[1] = temp_v5;
    temp_v24 = temp_v10;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v10 = *(int *)(temp_v9 + 0x2a8);
  if (temp_v12 != temp_v10) {
    FUN_004588b8(param_2,temp_v3,temp_v9);
    temp_v12 = temp_v10;
  }
  temp_v10 = *(int *)(temp_v9 + 0x2b0);
  if ((temp_v10 == 0) || (temp_v25 != temp_v10)) {
    if (*(int *)(temp_v9 + 0x274) != 0) {
      temp_v6 = temp_v9 + 0x274 + *(int *)(temp_v9 + 0x274);
    }
    else {
      temp_v6 = 0;
    }
    if (temp_v6 != 0) {
      temp_v7 = *(unsigned int *)(temp_v6 + 0x48);
      nnnstdMemCpy(DAT_005b40e0,temp_v6 + 0x10,temp_v7);
      DAT_005b40e0 = (unsigned int *)((int)DAT_005b40e0 + (temp_v7 & 0xfffffffc));
    }
    *DAT_005b40e0 = 0x10001;
    DAT_005b40e0[1] = 0x50080;
    temp_v25 = temp_v10;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v3 = (unsigned int)temp_v23;
  if ((*(int *)(temp_v9 + 0x2b4) == 0) || (temp_v4 != *(int *)(temp_v9 + 0x2b4))) {
    temp_v14 = 1;
  }
  else {
    temp_v14 = 0;
  }
  temp_v10 = *(int *)(temp_v9 + 0x2c8);
  if (*(int *)(temp_v9 + 0x288) != 0) {
    temp_v6 = *(int *)(temp_v9 + 0x288) + temp_v9 + 0x288;
  }
  else {
    temp_v6 = 0;
  }
  if ((temp_v10 == 0) || (temp_v11 != temp_v10)) {
    temp_v13 = 1;
  }
  else {
    temp_v13 = 0;
  }
  if (temp_v13 || temp_v14) {
    nw_gfx_internal_FastWordCopyAsm_6(DAT_005b40e0,temp_v6 + 0xdc);
    temp_v7 = 0;
    do {
      temp_v11 = temp_v6 + temp_v7 * 0x1c;
      switch(*(unsigned int *)(temp_v11 + 0x2c) & 0xff) {
      default:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xe8);
        break;
      case 1:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xec);
        break;
      case 2:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xf0);
        break;
      case 3:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xf4);
        break;
      case 4:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xf8);
        break;
      case 5:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xfc);
        break;
      case 6:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xd4);
        break;
      case 7:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xd8);
        break;
      case 8:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xdc);
        break;
      case 9:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xe0);
        break;
      case 10:
        temp_v3 = *(unsigned int *)(temp_v9 + 0xe4);
      }
      *(unsigned int *)(temp_v11 + 0x40) = temp_v3;
      nw_gfx_internal_FastWordCopyAsm_6(DAT_005b40e0,temp_v11 + 0x30);
      temp_v3 = (unsigned int)temp_v23;
      temp_v7 = temp_v7 + 1;
      temp_v11 = temp_v10;
    } while (temp_v7 < 6);
  }
  if (*(int *)(temp_v9 + 0x288) != 0) {
    temp_v10 = temp_v9 + 0x288 + *(int *)(temp_v9 + 0x288);
  }
  else {
    temp_v10 = 0;
  }
  temp_v5 = *(unsigned int *)(temp_v10 + 0xd8);
  *DAT_005b40e0 = *(unsigned int *)(temp_v10 + 0xd4);
  DAT_005b40e0[1] = temp_v5;
  temp_v10 = *(int *)(temp_v9 + 0x2d0);
  if ((temp_v10 == 0) || (puVar11 = DAT_005b40e0 + 2, temp_v26 != temp_v10)) {
    puVar11 = (unsigned int *)(temp_v9 + 0x158);
    temp_v7 = (unsigned int)DAT_005c0ea5;
    temp_v13 = (~*(unsigned int *)(temp_v9 + 0x118) & 1) == 0;
    temp_v14 = temp_v7 == 0;
    if (temp_v14) {
      temp_v7 = (unsigned int)DAT_005c0ea7;
    }
    temp_v15 = temp_v7 == temp_v13;
    temp_v7 = ~*(unsigned int *)(temp_v9 + 0x118) & 2;
    temp_v16 = temp_v7 == 0;
    temp_v8 = (unsigned int)temp_v16;
    if (temp_v14 && temp_v15) {
      temp_v7 = (unsigned int)DAT_005c0ea9;
    }
    temp_v17 = temp_v7 != temp_v8;
    temp_v14 = !temp_v14;
    temp_v15 = !temp_v15;
    temp_v0 = (temp_v14 || temp_v15) || temp_v17;
    temp_v7 = (unsigned int)DAT_005c0eab;
    DAT_005c0ea5 = temp_v0;
    DAT_005c0ea7 = temp_v13;
    DAT_005c0ea9 = temp_v16;
    DAT_005b40e0[2] = (DAT_005c0eac << 8) | (temp_v8 << 0xc);
    DAT_005b40e0[3] = 0x20107;
    DAT_005b40e0[4] = temp_v7 << 8;
    DAT_005b40e0[5] = 0x20105;
    temp_v5 = *(unsigned int *)(temp_v9 + 0x120);
    DAT_005b40e0[6] = *(unsigned int *)(temp_v9 + 0x11c);
    DAT_005b40e0[7] = temp_v5;
    temp_v5 = *(unsigned int *)(temp_v9 + 0x128);
    DAT_005b40e0[8] = *(unsigned int *)(temp_v9 + 0x124);
    DAT_005b40e0[9] = temp_v5;
    puVar3 = DAT_005b40e0 + 10;
    if (puVar11 != (unsigned int *)0x0) {
      if ((*puVar11 & 1) != 0) {
        temp_v2 = 1;
        temp_v1 = 1;
        if ((!((temp_v14 || temp_v15) || temp_v17)) && (DAT_005c0ea8 == 1)) {
          DAT_005c0ea5 = 0;
        }
        else {
          temp_v2 = temp_v1;
          DAT_005c0ea5 = 1;
        }
      }
      else {
        DAT_005c0ea5 = temp_v0;
        if ((!temp_v14 && !temp_v15) && !temp_v17) {
          DAT_005c0ea5 = DAT_005c0ea8;
        }
        temp_v2 = 0;
        temp_v1 = temp_v2;
        if (((temp_v14 || temp_v15) || temp_v17) || DAT_005c0ea5 != 0) {
          temp_v2 = temp_v1;
          DAT_005c0ea5 = 1;
        }
      }
      temp_v5 = *(unsigned int *)(temp_v9 + 0x15c);
      DAT_005c0ea8 = temp_v2;
      DAT_005b40e0[10] = *puVar11;
      DAT_005b40e0[0xb] = temp_v5;
      temp_v5 = *(unsigned int *)(temp_v9 + 0x164);
      DAT_005b40e0[0xc] = *(unsigned int *)(temp_v9 + 0x160);
      DAT_005b40e0[0xd] = temp_v5;
      puVar3 = DAT_005b40e0 + 0xe;
    }
    DAT_005b40e0 = puVar3;
    temp_v7 = (unsigned int)DAT_005c0ea5;
    temp_v14 = temp_v7 == 0;
    if (temp_v14) {
      temp_v7 = (unsigned int)DAT_005c0ea6;
    }
    temp_v8 = (~*(unsigned int *)(temp_v9 + 300) & 0x80000000) == 0 ^ 1;
    DAT_005c0ea5 = !temp_v14 || temp_v7 != temp_v8;
    DAT_005c0ea6 = (char)temp_v8;
    nw_gfx_internal_FastWordCopyAsm_6(DAT_005b40e0,temp_v9 + 0x140);
    temp_v7 = *(unsigned int *)(temp_v9 + 0x140) & 3;
    if (DAT_005c0ea4 != temp_v7) {
      DAT_005c0ea4 = (unsigned char)temp_v7;
LAB_0044f088:
      DAT_005c0ea5 = 0;
      DAT_005c0ec4 = 0;
      DAT_005c0ecc = 0;
      if (DAT_005c0ea4 != 0) {
        DAT_005c0ec4 = 0xf;
        DAT_005c0ecc = 0xf;
      }
      else if (DAT_005c0eac != 0) {
        if (DAT_005c0ea6 != '\0' || DAT_005c0eac != 0xf) {
          DAT_005c0ec4 = 0xf;
        }
        DAT_005c0ecc = 0xf;
      }
      DAT_005c0ed0 = 0;
      DAT_005c0ed4 = 0;
      if (DAT_005c0ea4 == 1) {
        DAT_005c0ed0 = 3;
      }
      else if (DAT_005c0ea4 == 0) {
        if (DAT_005c0ea7 != '\0') {
          if (DAT_005c0ea9 != '\0') {
            DAT_005c0ed0 = 2;
            DAT_005c0ed4 = 2;
          }
          else if (DAT_005c0eac != 0) {
            DAT_005c0ed0 = 2;
          }
        }
        if (DAT_005c0ea8 != 0) {
          if (DAT_005c0eab != 0) {
            DAT_005c0ed0 = DAT_005c0ed0 | 1;
            DAT_005c0ed4 = DAT_005c0ed4 | 1;
          }
          else if (DAT_005c0eac != 0) {
            DAT_005c0ed0 = DAT_005c0ed0 | 1;
          }
        }
      }
    }
    else if (DAT_005c0ea5 != 0) goto LAB_0044f088;
    nnnstdMemCpy(DAT_005b40e0,&DAT_005c0eb4,0x28);
    temp_v26 = temp_v10;
    puVar11 = DAT_005b40e0 + 10;
  }
  DAT_005b40e0 = puVar11;
  *(int *)(param_2 + 0x100) = (int)temp_v21;
  *(int *)(param_2 + 0x104) = (int)((unsigned long long)temp_v21 >> 0x20);
  *(int *)(param_2 + 0x108) = temp_v4;
  *(int *)(param_2 + 0x10c) = temp_v24;
  *(int *)(param_2 + 0x110) = temp_v12;
  *(int *)(param_2 + 0x114) = temp_v25;
  *(int *)(param_2 + 0x118) = (int)temp_v22;
  *(int *)(param_2 + 0x11c) = (int)((unsigned long long)temp_v22 >> 0x20);
  *(int *)(param_2 + 0x120) = temp_v11;
  *(int *)(param_2 + 0x124) = temp_v26;
  *(unsigned int *)(param_2 + 0x128) = temp_v3;
  return;
}

} /* extern "C" */
