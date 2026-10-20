/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ce70` (_code @ 0x36ce70, 0x80c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003757cc(int, unsigned int, int);
int nnnstdMemCpy(...);
int nw_gfx_internal_FastWordCopyAsm_6(...);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
} param_3_stack;

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
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
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_003757cc. */
/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_6. */


void FUN_0036ce70(unsigned int param_1,int param_2,int param_3)

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
  temp_v25 = *(int *)(param_2 + 0x110);
  temp_v26 = *(int *)(param_2 + 0x124);
  temp_v12 = *(int *)(param_2 + 0x114);
  temp_v10 = *(int *)(param_2 + 0x120);
  temp_v22 = *(unsigned long long *)(param_2 + 0x118);
  temp_v5 = 0;
  temp_v23 = (unsigned long long)*(unsigned int *)(param_2 + 0x128);
  if (((~*(unsigned int *)(temp_v9 + 0x18) & 0x10) == 0) && (*(int *)(param_2 + 0xa0) != 0)) {
    temp_v5 = 5;
  }
  puVar12 = g_commandBufferCursor + 2;
  *g_commandBufferCursor = temp_v5;
  g_commandBufferCursor[1] = 0x100e0;
  temp_v11 = *(int *)(temp_v9 + 0x2b8);
  g_commandBufferCursor = puVar12;
  if ((temp_v11 == 0) || (temp_v24 != temp_v11)) {
    DAT_0047208e = (~*(unsigned int *)(temp_v9 + 0x104) & 1) == 0;
    DAT_004720fc = *(float *)(temp_v9 + 0x10c);
    if (((DAT_0047663c & 1) == 0) && (temp_v6 = __cxa_guard_acquire(&DAT_0047663c), temp_v6 != 0)) {
      DAT_004efde0 = 0x1006d;
      DAT_004efde8 = 0x8017004d;
    }
    if (DAT_004720f0 != 0) {
      DAT_004efde4 = DAT_004720f0;
      temp_v19 = -DAT_004720fc;
      temp_v18 = 0.0f;
    }
    else {
      DAT_004efde4 = DAT_004720a0;
      temp_v19 = (DAT_004720f4 - DAT_004720f8) * DAT_004720fc;
      temp_v18 = DAT_004720f4;
    }
    DAT_004efddc = (unsigned int)(DAT_004720f0 == 0);
    if (DAT_0047208e != '\0') {
      if (DAT_004720ec == 0x81a5) {
        temp_v20 = 1.5259022e-05f;
      }
      else {
        temp_v20 = 5.960465e-08f;
        temp_v19 = temp_v19 * 128.0f;
      }
      temp_v18 = temp_v18 - temp_v19 * temp_v20;
    }
    DAT_004efdec = 0;
    if (((unsigned int)temp_v18 & 0x80000000) != 0) {
      DAT_004efdec = 0x800000;
    }
    if (romwright_fabs_4(temp_v18) == 0.0f) {
      temp_v7 = 0;
      DAT_004efdec = DAT_004efdec | (((unsigned int)temp_v18 & 0x7fffff) >> 7) | ((temp_v7 & 0x7f) << 0x10);
    }
    else {
      temp_v7 = ((unsigned int)romwright_fabs_4(temp_v18) >> 0x17) - 0x40;
      if (-1 < (int)temp_v7) {
        if ((int)temp_v7 >= 0x80) {
          DAT_004efdec = 0x7f0000;
        }
        else {
          DAT_004efdec = DAT_004efdec | (((unsigned int)temp_v18 & 0x7fffff) >> 7) | ((temp_v7 & 0x7f) << 0x10);
        }
      }
    }
    nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor,&DAT_004efddc);
    temp_v5 = *(unsigned int *)(temp_v9 + 0x114);
    *g_commandBufferCursor = *(unsigned int *)(temp_v9 + 0x110);
    g_commandBufferCursor[1] = temp_v5;
    temp_v24 = temp_v11;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  temp_v11 = *(int *)(temp_v9 + 0x2a8);
  if (temp_v25 != temp_v11) {
    FUN_003757cc(param_2,temp_v3,temp_v9);
    temp_v25 = temp_v11;
  }
  temp_v11 = *(int *)(temp_v9 + 0x2b0);
  if ((temp_v11 == 0) || (temp_v12 != temp_v11)) {
    if (*(int *)(temp_v9 + 0x274) != 0) {
      temp_v12 = temp_v9 + 0x274 + *(int *)(temp_v9 + 0x274);
    }
    else {
      temp_v12 = 0;
    }
    if (temp_v12 != 0) {
      temp_v7 = *(unsigned int *)(temp_v12 + 0x48);
      nnnstdMemCpy(g_commandBufferCursor,temp_v12 + 0x10,temp_v7);
      g_commandBufferCursor = (unsigned int *)((int)g_commandBufferCursor + (temp_v7 & 0xfffffffc));
    }
    *g_commandBufferCursor = 0x10001;
    g_commandBufferCursor[1] = 0x50080;
    temp_v12 = temp_v11;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  temp_v3 = (unsigned int)temp_v23;
  if ((*(int *)(temp_v9 + 0x2b4) == 0) || (temp_v4 != *(int *)(temp_v9 + 0x2b4))) {
    temp_v14 = 1;
  }
  else {
    temp_v14 = 0;
  }
  temp_v11 = *(int *)(temp_v9 + 0x2c8);
  if (*(int *)(temp_v9 + 0x288) != 0) {
    temp_v6 = *(int *)(temp_v9 + 0x288) + temp_v9 + 0x288;
  }
  else {
    temp_v6 = 0;
  }
  if ((temp_v11 == 0) || (temp_v10 != temp_v11)) {
    temp_v13 = 1;
  }
  else {
    temp_v13 = 0;
  }
  if (temp_v13 || temp_v14) {
    nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor,temp_v6 + 0xdc);
    temp_v7 = 0;
    do {
      temp_v10 = temp_v6 + temp_v7 * 0x1c;
      switch(*(unsigned int *)(temp_v10 + 0x2c) & 0xff) {
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
      *(unsigned int *)(temp_v10 + 0x40) = temp_v3;
      nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor,temp_v10 + 0x30);
      temp_v3 = (unsigned int)temp_v23;
      temp_v7 = temp_v7 + 1;
      temp_v10 = temp_v11;
    } while (temp_v7 < 6);
  }
  if (*(int *)(temp_v9 + 0x288) != 0) {
    temp_v11 = temp_v9 + 0x288 + *(int *)(temp_v9 + 0x288);
  }
  else {
    temp_v11 = 0;
  }
  temp_v5 = *(unsigned int *)(temp_v11 + 0xd8);
  *g_commandBufferCursor = *(unsigned int *)(temp_v11 + 0xd4);
  g_commandBufferCursor[1] = temp_v5;
  temp_v11 = *(int *)(temp_v9 + 0x2d0);
  if ((temp_v11 == 0) || (puVar11 = g_commandBufferCursor + 2, temp_v26 != temp_v11)) {
    puVar11 = (unsigned int *)(temp_v9 + 0x158);
    temp_v7 = (unsigned int)DAT_00472089;
    temp_v13 = (~*(unsigned int *)(temp_v9 + 0x118) & 1) == 0;
    temp_v14 = temp_v7 == 0;
    if (temp_v14) {
      temp_v7 = (unsigned int)DAT_0047208b;
    }
    temp_v15 = temp_v7 == temp_v13;
    temp_v7 = ~*(unsigned int *)(temp_v9 + 0x118) & 2;
    temp_v16 = temp_v7 == 0;
    temp_v8 = (unsigned int)temp_v16;
    if (temp_v14 && temp_v15) {
      temp_v7 = (unsigned int)DAT_0047208d;
    }
    temp_v17 = temp_v7 != temp_v8;
    temp_v14 = !temp_v14;
    temp_v15 = !temp_v15;
    temp_v0 = (temp_v14 || temp_v15) || temp_v17;
    temp_v7 = (unsigned int)DAT_0047208f;
    DAT_00472089 = temp_v0;
    DAT_0047208b = temp_v13;
    DAT_0047208d = temp_v16;
    g_commandBufferCursor[2] = (DAT_00472090 << 8) | (temp_v8 << 0xc);
    g_commandBufferCursor[3] = 0x20107;
    g_commandBufferCursor[4] = temp_v7 << 8;
    g_commandBufferCursor[5] = 0x20105;
    temp_v5 = *(unsigned int *)(temp_v9 + 0x120);
    g_commandBufferCursor[6] = *(unsigned int *)(temp_v9 + 0x11c);
    g_commandBufferCursor[7] = temp_v5;
    temp_v5 = *(unsigned int *)(temp_v9 + 0x128);
    g_commandBufferCursor[8] = *(unsigned int *)(temp_v9 + 0x124);
    g_commandBufferCursor[9] = temp_v5;
    puVar3 = g_commandBufferCursor + 10;
    if (puVar11 != (unsigned int *)0x0) {
      if ((*puVar11 & 1) != 0) {
        temp_v2 = 1;
        temp_v1 = 1;
        if ((!((temp_v14 || temp_v15) || temp_v17)) && (DAT_0047208c == 1)) {
          DAT_00472089 = 0;
        }
        else {
          temp_v2 = temp_v1;
          DAT_00472089 = 1;
        }
      }
      else {
        DAT_00472089 = temp_v0;
        if ((!temp_v14 && !temp_v15) && !temp_v17) {
          DAT_00472089 = DAT_0047208c;
        }
        temp_v2 = 0;
        temp_v1 = temp_v2;
        if (((temp_v14 || temp_v15) || temp_v17) || DAT_00472089 != 0) {
          temp_v2 = temp_v1;
          DAT_00472089 = 1;
        }
      }
      temp_v5 = *(unsigned int *)(temp_v9 + 0x15c);
      DAT_0047208c = temp_v2;
      g_commandBufferCursor[10] = *puVar11;
      g_commandBufferCursor[0xb] = temp_v5;
      temp_v5 = *(unsigned int *)(temp_v9 + 0x164);
      g_commandBufferCursor[0xc] = *(unsigned int *)(temp_v9 + 0x160);
      g_commandBufferCursor[0xd] = temp_v5;
      puVar3 = g_commandBufferCursor + 0xe;
    }
    g_commandBufferCursor = puVar3;
    temp_v7 = (unsigned int)DAT_00472089;
    temp_v14 = temp_v7 == 0;
    if (temp_v14) {
      temp_v7 = (unsigned int)DAT_0047208a;
    }
    temp_v8 = (~*(unsigned int *)(temp_v9 + 300) & 0x80000000) == 0 ^ 1;
    DAT_00472089 = !temp_v14 || temp_v7 != temp_v8;
    DAT_0047208a = (char)temp_v8;
    nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor,temp_v9 + 0x140);
    temp_v7 = *(unsigned int *)(temp_v9 + 0x140) & 3;
    if (DAT_00472088 != temp_v7) {
      DAT_00472088 = (unsigned char)temp_v7;
LAB_0036d510:
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
    else if (DAT_00472089 != 0) goto LAB_0036d510;
    nnnstdMemCpy(g_commandBufferCursor,&DAT_004720b8,0x28);
    temp_v26 = temp_v11;
    puVar11 = g_commandBufferCursor + 10;
  }
  g_commandBufferCursor = puVar11;
  *(int *)(param_2 + 0x100) = (int)temp_v21;
  *(int *)(param_2 + 0x104) = (int)((unsigned long long)temp_v21 >> 0x20);
  *(int *)(param_2 + 0x108) = temp_v4;
  *(int *)(param_2 + 0x10c) = temp_v24;
  *(int *)(param_2 + 0x110) = temp_v25;
  *(int *)(param_2 + 0x114) = temp_v12;
  *(int *)(param_2 + 0x118) = (int)temp_v22;
  *(int *)(param_2 + 0x11c) = (int)((unsigned long long)temp_v22 >> 0x20);
  *(int *)(param_2 + 0x120) = temp_v10;
  *(int *)(param_2 + 0x124) = temp_v26;
  *(unsigned int *)(param_2 + 0x128) = temp_v3;
  return;
}

} /* extern "C" */
