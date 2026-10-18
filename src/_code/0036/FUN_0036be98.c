/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036be98` (_code @ 0x36be98, 0xd60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA4; /* 0xa4: local_a4 */
} param_3_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned char DAT_00472088; /* 0x472088 */
extern unsigned char DAT_00472089; /* 0x472089 */
extern signed char DAT_0047208a; /* 0x47208a */
extern signed char DAT_0047208b; /* 0x47208b */
extern unsigned char DAT_0047208c; /* 0x47208c */
extern signed char DAT_0047208d; /* 0x47208d */
extern unsigned char DAT_0047208e; /* 0x47208e */
extern unsigned char DAT_0047208f; /* 0x47208f */
extern int DAT_00472090; /* 0x472090 */
extern int DAT_004720a0; /* 0x4720a0 */
extern unsigned char DAT_004720b8; /* 0x4720b8 */
extern unsigned int DAT_004720c8; /* 0x4720c8 */
extern unsigned int DAT_004720d0; /* 0x4720d0 */
extern unsigned int DAT_004720d4; /* 0x4720d4 */
extern unsigned int DAT_004720d8; /* 0x4720d8 */
extern int DAT_004720ec; /* 0x4720ec */
extern int DAT_004720f0; /* 0x4720f0 */
extern float DAT_004720f4; /* 0x4720f4 */
extern float DAT_004720f8; /* 0x4720f8 */
extern float DAT_004720fc; /* 0x4720fc */
extern unsigned int DAT_00472100; /* 0x472100 */
extern unsigned int DAT_0047663c; /* 0x47663c */
extern unsigned int DAT_004efddc; /* 0x4efddc */
extern unsigned int DAT_004efde0; /* 0x4efde0 */
extern int DAT_004efde4; /* 0x4efde4 */
extern unsigned int DAT_004efde8; /* 0x4efde8 */
extern unsigned int DAT_004efdec; /* 0x4efdec */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002a22d0. */
/* Supplied declaration required: FUN_002acaac. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_003742e8. */
/* Supplied declaration required: FUN_003746c4. */
/* Supplied declaration required: FUN_00374c50. */
/* Supplied declaration required: FUN_003752f4. */


void FUN_0036be98(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int *puVar11;
  unsigned char temp_v10;
  unsigned int temp_v11;
  int *piVar14;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int *puVar21;
  unsigned int temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  int temp_v27;
  int temp_v28;
  int temp_v29;
  int temp_v30;
  int temp_v31;
  int temp_v32;
  int temp_v33;
  int temp_v34;
  int temp_v35;
  
  temp_v3 = (unsigned int)*(unsigned char *)(param_2 + 0xe8);
  temp_v19 = temp_v3 == 0;
  if (temp_v19) {
    temp_v3 = (unsigned int)*(unsigned char *)(param_2 + 0xe9);
  }
  if (!temp_v19 || temp_v3 != 0) {
    temp_v3 = 1;
  }
  temp_v19 = *(char *)(param_2 + 0xea) == '\0';
  temp_v4 = temp_v3;
  if (temp_v19) {
    temp_v4 = (unsigned int)*(unsigned char *)(param_2 + 0xeb);
  }
  temp_v19 = !temp_v19;
  temp_v5 = *(int *)(param_2 + 0x24);
  temp_v11 = *(unsigned int *)(param_3 + 8);
  if ((temp_v5 != 0) && ((*(int *)(temp_v5 + 0x14) - *(int *)(temp_v5 + 0x10)) >> 2 == 0)) {
    temp_v6 = *(unsigned int *)(temp_v5 + 8);
    temp_v7 = temp_v6;
    if (temp_v6 == temp_v11) {
      temp_v7 = temp_v3;
    }
    if ((temp_v6 == temp_v11 && temp_v7 == 0) && (!temp_v19 && temp_v4 == 0)) {
      return;
    }
  }
  temp_v15 = *(int *)(temp_v11 + 0x2a4);
  temp_v16 = *(int *)(param_2 + 8);
  temp_v28 = *(int *)(param_2 + 0x104);
  temp_v29 = *(int *)(param_2 + 0x108);
  temp_v34 = *(int *)(param_2 + 0x10c);
  temp_v30 = *(int *)(param_2 + 0x110);
  temp_v31 = *(int *)(param_2 + 0x114);
  temp_v13 = *(int *)(param_2 + 0x118);
  temp_v14 = *(int *)(param_2 + 0x11c);
  temp_v32 = *(int *)(param_2 + 0x120);
  temp_v35 = *(int *)(param_2 + 0x124);
  temp_v33 = *(int *)(param_2 + 0x128);
  if (((temp_v15 == 0) || (*(int *)(param_2 + 0x100) != temp_v15)) ||
     (temp_v27 = *(int *)(param_2 + 0x100), *(char *)(param_2 + 0x13) != '\0')) {
    FUN_003746c4(temp_v16);
    temp_v27 = temp_v15;
  }
  if (((~*(unsigned int *)(temp_v11 + 0x18) & 1) == 0) && (*(int *)(param_2 + 0xe4) != 0)) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  if (temp_v7 != 0) {
    temp_v6 = *(unsigned int *)(temp_v16 + 0x14) | 0x8000;
  }
  else {
    temp_v6 = *(unsigned int *)(temp_v16 + 0x14) & 0xffff7fff;
  }
  *(unsigned int *)(temp_v16 + 0x14) = temp_v6;
  DAT_004652a0[2] = temp_v7;
  DAT_004652a0[3] = 0x1008f;
  *DAT_004652a0 = temp_v7 ^ 1;
  DAT_004652a0[1] = 0x101c6;
  temp_v15 = *(int *)(temp_v11 + 0x2a0);
  if (((temp_v15 == 0) || (temp_v28 != temp_v15)) || (puVar11 = DAT_004652a0 + 4, temp_v19 || temp_v4 != 0))
  {
    temp_v4 = *(unsigned int *)(temp_v11 + 0x18);
    if (0 < (int)(*(unsigned int **)(temp_v16 + 8))[0x1a]) {
      if ((*(int *)(param_2 + 0xe0) >= 1) && ((~temp_v4 & 2) == 0)) {
        temp_v7 = *(unsigned int *)(temp_v16 + 0x14) | 0x1000;
      }
      else {
        temp_v7 = *(unsigned int *)(temp_v16 + 0x14) & 0xffffefff;
      }
      *(unsigned int *)(temp_v16 + 0x14) = temp_v7;
    }
    if ((~**(unsigned int **)(temp_v16 + 8) & 4) == 0) {
      if ((*(int *)(param_2 + 0x44) == 0) || ((~temp_v4 & 4) != 0)) {
        *(unsigned int *)(temp_v16 + 0x14) = *(unsigned int *)(temp_v16 + 0x14) & 0xffffffdf;
      }
      else {
        temp_v7 = *(unsigned int *)(temp_v16 + 0x14);
        *(unsigned int *)(temp_v16 + 0x14) = temp_v7 | 0x20;
        if ((~temp_v4 & 8) == 0) {
          temp_v7 = temp_v7 | 0x60;
        }
        else {
          temp_v7 = (temp_v7 & 0xffffffbf) | 0x20;
        }
        *(unsigned int *)(temp_v16 + 0x14) = temp_v7;
      }
    }
    temp_v7 = 0;
    if (((~temp_v4 & 0x10) == 0) && (*(int *)(param_2 + 0xa0) != 0)) {
      temp_v7 = 5;
    }
    DAT_004652a0[4] = temp_v7;
    DAT_004652a0[5] = 0x100e0;
    temp_v28 = temp_v15;
    puVar11 = DAT_004652a0 + 6;
  }
  DAT_004652a0 = puVar11;
  temp_v15 = *(int *)(temp_v11 + 0x2b8);
  if ((temp_v15 == 0) || (temp_v34 != temp_v15)) {
    DAT_0047208e = (~*(unsigned int *)(temp_v11 + 0x104) & 1) == 0;
    DAT_004720fc = *(float *)(temp_v11 + 0x10c);
    if (((DAT_0047663c & 1) == 0) && (temp_v8 = FUN_002bfefc(&DAT_0047663c), temp_v8 != 0)) {
      DAT_004efde0 = 0x1006d;
      DAT_004efde8 = 0x8017004d;
    }
    if (DAT_004720f0 != 0) {
      DAT_004efde4 = DAT_004720f0;
      temp_v25 = -DAT_004720fc;
      temp_v24 = 0.0f;
    }
    else {
      DAT_004efde4 = DAT_004720a0;
      temp_v25 = (DAT_004720f4 - DAT_004720f8) * DAT_004720fc;
      temp_v24 = DAT_004720f4;
    }
    DAT_004efddc = (unsigned int)(DAT_004720f0 == 0);
    if (DAT_0047208e != '\0') {
      if (DAT_004720ec == 0x81a5) {
        temp_v26 = 1.5259022e-05f;
      }
      else {
        temp_v26 = 5.960465e-08f;
        temp_v25 = temp_v25 * 128.0f;
      }
      temp_v24 = temp_v24 - temp_v25 * temp_v26;
    }
    DAT_004efdec = 0;
    if (((unsigned int)temp_v24 & 0x80000000) != 0) {
      DAT_004efdec = 0x800000;
    }
    if (romwright_fabs_4(temp_v24) == 0.0f) {
      temp_v4 = 0;
      DAT_004efdec = DAT_004efdec | (((unsigned int)temp_v24 & 0x7fffff) >> 7) | ((temp_v4 & 0x7f) << 0x10);
    }
    else {
      temp_v4 = ((unsigned int)romwright_fabs_4(temp_v24) >> 0x17) - 0x40;
      if (-1 < (int)temp_v4) {
        if ((int)temp_v4 >= 0x80) {
          DAT_004efdec = 0x7f0000;
        }
        else {
          DAT_004efdec = DAT_004efdec | (((unsigned int)temp_v24 & 0x7fffff) >> 7) | ((temp_v4 & 0x7f) << 0x10);
        }
      }
    }
    FUN_002a22d0();
    temp_v4 = *(unsigned int *)(temp_v11 + 0x114);
    *DAT_004652a0 = *(unsigned int *)(temp_v11 + 0x110);
    DAT_004652a0[1] = temp_v4;
    temp_v34 = temp_v15;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v15 = *(int *)(temp_v11 + 0x2a8);
  if ((temp_v15 == 0) || (temp_v30 != temp_v15)) {
    FUN_00374c50(param_2,temp_v16,temp_v11);
    temp_v30 = temp_v15;
  }
  temp_v15 = *(int *)(temp_v11 + 0x2b0);
  if ((temp_v15 == 0) || (temp_v31 != temp_v15)) {
    temp_v7 = 0;
    temp_v4 = 0;
    do {
      piVar14 = (int *)(temp_v11 + temp_v4 * 4 + 0x274);
      temp_v8 = *piVar14;
      if (temp_v8 != 0) {
        temp_v8 = temp_v8 + (int)piVar14;
      }
      if (temp_v8 != 0) {
        temp_v6 = *(unsigned int *)(temp_v8 + 0x48);
        temp_v7 = temp_v7 | (1 << (temp_v4 & 0xff));
        FUN_002acaac(DAT_004652a0,temp_v8 + 0x10,temp_v6);
        DAT_004652a0 = (unsigned int *)((int)DAT_004652a0 + (temp_v6 & 0xfffffffc));
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 3);
    *DAT_004652a0 = temp_v7 | 0x10000;
    DAT_004652a0[1] = 0x50080;
    temp_v31 = temp_v15;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v19 = 0;
  temp_v15 = *(int *)(temp_v11 + 700);
  temp_v8 = *(int *)(temp_v11 + 0x2c0);
  if ((~*(unsigned int *)(temp_v11 + 0x18) & 1) == 0) {
    temp_v9 = *(int *)(temp_v11 + 0x288);
    if (temp_v9 != 0) {
      temp_v9 = temp_v9 + temp_v11 + 0x288;
    }
    puVar11 = (unsigned int *)(temp_v9 + 0x10);
    temp_v19 = (~*puVar11 & 0x20) == 0;
    if (((temp_v15 == 0) || (temp_v13 != temp_v15)) || (temp_v3 != 0)) {
      temp_v4 = *(unsigned int *)(temp_v9 + 0x14);
      temp_v6 = *(unsigned int *)(temp_v9 + 0x1c);
      temp_v18 = *(unsigned int *)(temp_v9 + 0x20);
      temp_v0 = *(char *)(temp_v9 + 0x24);
      temp_v7 = *(unsigned int *)(temp_v9 + 0x18) & 0xff;
      temp_v17 = *puVar11;
      if ((~temp_v17 & 0x20) == 0) {
        temp_v13 = 0;
      }
      else {
        temp_v13 = 7;
      }
      DAT_004652a0[1] = 0xf01c3;
      *DAT_004652a0 =
           (temp_v7 << 2) | ((temp_v4 & 0xff) << 4) | ((temp_v6 & 0xff) << 0x16) |
           ((unsigned int)((~temp_v17 & 1) == 0) << 0x1b) | (temp_v18 << 0x1c) |
           (((((temp_v0 != '\0') - 1) & temp_v18 & 0xff) == 0 ^ 1) << 0x1e) | 0x80000400;
      DAT_004652a0[2] =
           (((~temp_v17 & 2) == 0 ^ 1) << 0x10) | (((~temp_v17 & 4) == 0 ^ 1) << 0x11) |
           ((unsigned int)(temp_v7 == 0) << 0x13) | (temp_v13 << 0x14) | 0x40000;
      DAT_004652a0[3] = 0x401c4;
      temp_v4 = DAT_00472100;
      DAT_004652a0 = DAT_004652a0 + 4;
      temp_v7 = *puVar11;
      temp_v13 = *(int *)(param_2 + 0xe4);
      temp_v6 = 0;
      if ((int)temp_v6 < temp_v13) {
        do {
          temp_v9 = *(int *)(*(int *)(*(int *)(param_2 + 100) + temp_v6 * 4) + 8);
          if ((*(int *)(temp_v9 + 0xb8) == 0) || (temp_v10 = 0, ((temp_v4 >> (temp_v6 & 0xff)) & 1) != 0))
          {
            temp_v10 = 1;
          }
          temp_v17 = (unsigned int)temp_v10;
          if ((*(unsigned int *)(temp_v9 + 0x18) & 2) != 0) {
            temp_v17 = temp_v17 | 2;
          }
          if ((~temp_v7 & 8) == 0) {
            temp_v17 = temp_v17 | 4;
          }
          if ((~temp_v7 & 0x10) == 0) {
            temp_v17 = temp_v17 | 8;
          }
          DAT_004652a0[1] = temp_v6 * 0x10 + 0x10149;
          puVar21 = DAT_004652a0 + 2;
          temp_v6 = temp_v6 + 1;
          *DAT_004652a0 = temp_v17;
          DAT_004652a0 = puVar21;
        } while ((int)temp_v6 < temp_v13);
      }
    }
    if (*(int *)(temp_v11 + 0x288) != 0) {
      temp_v13 = temp_v11 + 0x288 + *(int *)(temp_v11 + 0x288);
    }
    else {
      temp_v13 = 0;
    }
    temp_v9 = *(int *)(temp_v13 + 0x28);
    if (temp_v9 != 0) {
      temp_v9 = temp_v13 + 0x28 + temp_v9;
    }
    else {
      temp_v9 = 0;
    }
    if ((temp_v8 == 0) || (temp_v14 != temp_v8)) {
      FUN_003752f4(puVar11,temp_v9);
    }
  }
  temp_v13 = *(int *)(temp_v11 + 0x2b4);
  if (((temp_v13 == 0) || (temp_v29 != temp_v13)) || (temp_v3 != 0)) {
    temp_v10 = 1;
    FUN_003742e8(param_2 + 0x40,temp_v16,temp_v11 + 0x24,temp_v19);
    temp_v29 = temp_v13;
  }
  else {
    temp_v10 = 0;
    if (temp_v5 != 0) {
      piVar14 = (int *)(*(int *)(temp_v5 + 8) + 0x288);
      temp_v5 = *piVar14;
      if (temp_v5 != 0) {
        temp_v5 = (int)piVar14 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      temp_v10 = temp_v19 ^ ((~*(unsigned int *)(temp_v5 + 0x10) & 0x20) == 0);
      if (temp_v10 != 0) {
        FUN_003742e8(param_2 + 0x40,temp_v16,temp_v11 + 0x24,temp_v19);
        temp_v29 = temp_v13;
      }
    }
  }
  temp_v5 = *(int *)(temp_v11 + 0x2c8);
  if (*(int *)(temp_v11 + 0x288) != 0) {
    temp_v13 = *(int *)(temp_v11 + 0x288) + temp_v11 + 0x288;
  }
  else {
    temp_v13 = 0;
  }
  if ((temp_v5 == 0) || (temp_v32 != temp_v5)) {
    temp_v19 = 1;
  }
  else {
    temp_v19 = 0;
  }
  if (temp_v19 || temp_v10 != 0) {
    FUN_002a22d0(DAT_004652a0,temp_v13 + 0xdc);
    temp_v3 = 0;
    do {
      temp_v14 = temp_v13 + temp_v3 * 0x1c;
      switch(*(unsigned int *)(temp_v14 + 0x2c) & 0xff) {
      default:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xe8);
        break;
      case 1:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xec);
        break;
      case 2:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xf0);
        break;
      case 3:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xf4);
        break;
      case 4:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xf8);
        break;
      case 5:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xfc);
        break;
      case 6:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xd4);
        break;
      case 7:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xd8);
        break;
      case 8:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xdc);
        break;
      case 9:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xe0);
        break;
      case 10:
        temp_v12 = *(unsigned int *)(temp_v11 + 0xe4);
      }
      *(unsigned int *)(temp_v14 + 0x40) = temp_v12;
      FUN_002a22d0(DAT_004652a0,temp_v14 + 0x30);
      temp_v3 = temp_v3 + 1;
      temp_v32 = temp_v5;
    } while (temp_v3 < 6);
  }
  temp_v5 = *(int *)(temp_v11 + 0x288);
  if (temp_v5 != 0) {
    temp_v5 = temp_v5 + temp_v11 + 0x288;
  }
  temp_v13 = *(int *)(temp_v11 + 0x2cc);
  if ((temp_v13 == 0) || (temp_v33 != temp_v13)) {
    temp_v3 = *(unsigned int *)(temp_v5 + 0xd8);
    *DAT_004652a0 = *(unsigned int *)(temp_v5 + 0xd4);
    DAT_004652a0[1] = temp_v3;
    temp_v33 = temp_v13;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v5 = DAT_00472090;
  temp_v13 = *(int *)(temp_v11 + 0x2d0);
  if ((temp_v13 == 0) || (temp_v35 != temp_v13)) {
    puVar11 = (unsigned int *)(temp_v11 + 0x158);
    temp_v3 = (unsigned int)DAT_00472089;
    temp_v20 = (~*(unsigned int *)(temp_v11 + 0x118) & 1) == 0;
    temp_v19 = temp_v3 == 0;
    if (temp_v19) {
      temp_v3 = (unsigned int)DAT_0047208b;
    }
    temp_v21 = temp_v3 == temp_v20;
    temp_v3 = ~*(unsigned int *)(temp_v11 + 0x118) & 2;
    temp_v22 = temp_v3 == 0;
    temp_v4 = (unsigned int)temp_v22;
    if (temp_v19 && temp_v21) {
      temp_v3 = (unsigned int)DAT_0047208d;
    }
    temp_v23 = temp_v3 != temp_v4;
    temp_v19 = !temp_v19;
    temp_v21 = !temp_v21;
    temp_v1 = (temp_v19 || temp_v21) || temp_v23;
    temp_v3 = (unsigned int)DAT_0047208f;
    DAT_00472089 = temp_v1;
    DAT_0047208b = temp_v20;
    DAT_0047208d = temp_v22;
    DAT_004652a0[3] = 0x20105;
    DAT_004652a0[2] = temp_v3 << 8;
    *DAT_004652a0 = (temp_v5 << 8) | (temp_v4 << 0xc);
    DAT_004652a0[1] = 0x20107;
    temp_v3 = *(unsigned int *)(temp_v11 + 0x120);
    DAT_004652a0[4] = *(unsigned int *)(temp_v11 + 0x11c);
    DAT_004652a0[5] = temp_v3;
    temp_v3 = *(unsigned int *)(temp_v11 + 0x128);
    DAT_004652a0[6] = *(unsigned int *)(temp_v11 + 0x124);
    DAT_004652a0[7] = temp_v3;
    puVar21 = DAT_004652a0 + 8;
    if (puVar11 != (unsigned int *)0x0) {
      if ((*puVar11 & 1) != 0) {
        temp_v10 = 1;
        temp_v2 = 1;
        if ((!((temp_v19 || temp_v21) || temp_v23)) && (DAT_0047208c == 1)) {
          DAT_00472089 = 0;
        }
        else {
          temp_v10 = temp_v2;
          DAT_00472089 = 1;
        }
      }
      else {
        DAT_00472089 = temp_v1;
        if ((!temp_v19 && !temp_v21) && !temp_v23) {
          DAT_00472089 = DAT_0047208c;
        }
        temp_v10 = 0;
        temp_v2 = temp_v10;
        if (((temp_v19 || temp_v21) || temp_v23) || DAT_00472089 != 0) {
          temp_v10 = temp_v2;
          DAT_00472089 = 1;
        }
      }
      temp_v3 = *(unsigned int *)(temp_v11 + 0x15c);
      DAT_0047208c = temp_v10;
      DAT_004652a0[8] = *puVar11;
      DAT_004652a0[9] = temp_v3;
      temp_v3 = *(unsigned int *)(temp_v11 + 0x164);
      DAT_004652a0[10] = *(unsigned int *)(temp_v11 + 0x160);
      DAT_004652a0[0xb] = temp_v3;
      puVar21 = DAT_004652a0 + 0xc;
    }
    DAT_004652a0 = puVar21;
    temp_v3 = (unsigned int)DAT_00472089;
    temp_v19 = temp_v3 == 0;
    if (temp_v19) {
      temp_v3 = (unsigned int)DAT_0047208a;
    }
    temp_v4 = (~*(unsigned int *)(temp_v11 + 300) & 0x80000000) == 0 ^ 1;
    DAT_00472089 = !temp_v19 || temp_v3 != temp_v4;
    DAT_0047208a = (char)temp_v4;
    FUN_002a22d0(DAT_004652a0,temp_v11 + 0x140);
    temp_v3 = *(unsigned int *)(temp_v11 + 0x140) & 3;
    if (DAT_00472088 != temp_v3) {
      DAT_00472088 = (unsigned char)temp_v3;
LAB_0036ca78:
      DAT_00472089 = 0;
      DAT_004720c8 = 0;
      DAT_004720d0 = 0;
      if (DAT_00472088 != 0) {
        DAT_004720c8 = 0xf;
        DAT_004720d0 = 0xf;
      }
      else if (DAT_00472090 != 0) {
        if (DAT_0047208a != '\0' || DAT_00472090 != 0xf) {
          DAT_004720c8 = 0xf;
        }
        DAT_004720d0 = 0xf;
      }
      DAT_004720d4 = 0;
      DAT_004720d8 = 0;
      if (DAT_00472088 == 1) {
        DAT_004720d4 = 3;
      }
      else if (DAT_00472088 == 0) {
        if (DAT_0047208b != '\0') {
          if (DAT_0047208d != '\0') {
            DAT_004720d4 = 2;
            DAT_004720d8 = 2;
          }
          else if (DAT_00472090 != 0) {
            DAT_004720d4 = 2;
          }
        }
        if (DAT_0047208c != 0) {
          if (DAT_0047208f != 0) {
            DAT_004720d4 = DAT_004720d4 | 1;
            DAT_004720d8 = DAT_004720d8 | 1;
          }
          else if (DAT_00472090 != 0) {
            DAT_004720d4 = DAT_004720d4 | 1;
          }
        }
      }
    }
    else if (DAT_00472089 != 0) goto LAB_0036ca78;
    FUN_002acaac(DAT_004652a0,&DAT_004720b8,0x28);
    DAT_004652a0 = DAT_004652a0 + 10;
    temp_v35 = temp_v13;
  }
  *(int *)(param_2 + 0x100) = temp_v27;
  *(int *)(param_2 + 0x104) = temp_v28;
  *(int *)(param_2 + 0x108) = temp_v29;
  *(int *)(param_2 + 0x10c) = temp_v34;
  *(int *)(param_2 + 0x110) = temp_v30;
  *(int *)(param_2 + 0x114) = temp_v31;
  *(int *)(param_2 + 0x118) = temp_v15;
  *(int *)(param_2 + 0x11c) = temp_v8;
  *(int *)(param_2 + 0x120) = temp_v32;
  *(int *)(param_2 + 0x124) = temp_v35;
  *(int *)(param_2 + 0x128) = temp_v33;
  return;
}
