/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002305d0` (_code @ 0x2305d0, 0x358 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_001aba54(void);
int FUN_00239234(int, unsigned short *);
int FUN_002854d8(int, int);
int FUN_002a6894(unsigned short *);
int FUN_002c7a5c(int, int);
int sysMemClear(unsigned short *, int);
int FUN_0031f190(int, int);
int FUN_004bcd90(unsigned short *);
int VectorSignedToFloat(int, int);
int rt_memcpy_w(...);

/* stack frame of param_4: 25 slot(s), 55 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned short sp52; /* 0x52: local_52 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned char sp5A; /* 0x5a: local_5a */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned short sp6A; /* 0x6a: local_6a */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned short sp6E; /* 0x6e: local_6e */
    unsigned short sp70; /* 0x70: local_70 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(unsigned short);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_00239234. */
/* Supplied declaration required: FUN_002854d8. */
/* Supplied declaration required: FUN_002a6894. */
/* Supplied declaration required: FUN_002c7a5c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0031f190. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002305d0(unsigned short *param_1,unsigned char param_2,unsigned short param_3,int param_4)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  char temp_v3;
  short temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned char temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned short temp_v22;
  unsigned short temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26;
  unsigned short temp_v27;
  unsigned int temp_v28;
  unsigned int uStack_40;
  unsigned int temp_v29;
  unsigned char temp_v30 [24];
  
  sysMemClear(param_1,300);
  param_1[0x31] = param_3;
  *(unsigned char *)(param_1 + 0x33) = param_2;
  if (param_4 != 3) {
    temp_v0 = FUN_001ab888();
    temp_v1 = 0;
    do {
      if (*(char *)(temp_v0 + 0x1c88 + temp_v1) < '\0') {
        *(unsigned char *)(temp_v0 + 0x1c88 + temp_v1) = param_2;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    FUN_002c7a5c(param_3,1);
    FUN_002854d8(param_3,1);
  }
  temp_v2 = (unsigned int)param_3;
  FUN_00184310();
  temp_v4 = 0;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_00239234(param_3,&temp_v6);
      param_1[0x32] = temp_v6;
      *param_1 = temp_v18;
      param_1[1] = temp_v19;
      param_1[2] = temp_v7;
      param_1[4] = temp_v9;
      param_1[5] = temp_v10;
      param_1[6] = temp_v11;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[3] = temp_v8;
      param_1[0x10] = temp_v12;
      param_1[0x12] = temp_v14;
      param_1[0x13] = temp_v15;
      param_1[0x14] = temp_v16;
      param_1[0x11] = temp_v13;
      param_1[0x1a] = temp_v20;
      param_1[0x1b] = temp_v21;
      param_1[0x1c] = temp_v22;
      param_1[0x1d] = temp_v23;
      param_1[0x1e] = temp_v24;
      param_1[0x1f] = temp_v25;
      param_1[0x20] = temp_v26;
      param_1[0x21] = temp_v27;
      *(unsigned int *)(param_1 + 0x18) = temp_v29;
      *(unsigned char *)((int)param_1 + 299) = (unsigned char)(((unsigned int)temp_v17 << 0x1a) >> 0x1c);
      *(unsigned int *)(param_1 + 0x22) = temp_v28;
      *(unsigned int *)(param_1 + 0x24) = uStack_40;
      rt_memcpy_w(param_1 + 0x26,temp_v30,0x12);
      goto LAB_002308c4;
    }
    if (param_4 != 3) goto LAB_002308c4;
  }
  param_1[0x32] = *(unsigned short *)(temp_v2 + 6);
  *param_1 = *(unsigned short *)(temp_v2 + 0x18);
  param_1[1] = *(unsigned short *)(temp_v2 + 0x1a);
  param_1[2] = *(unsigned short *)(temp_v2 + 0x1e);
  param_1[4] = *(unsigned short *)(temp_v2 + 0x22);
  param_1[5] = *(unsigned short *)(temp_v2 + 0x24);
  param_1[6] = *(unsigned short *)(temp_v2 + 0x26);
  param_1[3] = *(unsigned short *)(temp_v2 + 0x20);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = *(unsigned short *)(temp_v2 + 0x1e);
  param_1[0x12] = *(unsigned short *)(temp_v2 + 0x22);
  param_1[0x13] = *(unsigned short *)(temp_v2 + 0x24);
  param_1[0x14] = *(unsigned short *)(temp_v2 + 0x26);
  param_1[0x11] = *(unsigned short *)(temp_v2 + 0x20);
  param_1[0x1a] = *(unsigned short *)(temp_v2 + 0x40);
  param_1[0x1b] = *(unsigned short *)(temp_v2 + 0x42);
  param_1[0x1c] = *(unsigned short *)(temp_v2 + 0x44);
  param_1[0x1d] = *(unsigned short *)(temp_v2 + 0x46);
  param_1[0x1e] = *(unsigned short *)(temp_v2 + 0x48);
  param_1[0x1f] = *(unsigned short *)(temp_v2 + 0x4a);
  param_1[0x20] = *(unsigned short *)(temp_v2 + 0x4c);
  param_1[0x21] = *(unsigned short *)(temp_v2 + 0x4e);
  puVar4 = param_1 + 0x26;
  rt_memcpy_w(puVar4,temp_v2 + 0xa0,0x12);
  if (param_1 != (unsigned short *)0x0) {
    puVar4 = (unsigned short *)(unsigned int)(unsigned short)param_1[0x31];
  }
  if ((param_1 != (unsigned short *)0x0 && puVar4 != (unsigned short *)0x0) &&
     (FUN_00184310(), puVar4 != (unsigned short *)0x0)) {
    temp_v0 = 0;
    do {
      temp_v2 = (unsigned int)(unsigned short)param_1[temp_v0 + 0x1a];
      if (((temp_v2 != 0) && (FUN_001aba54(), temp_v2 != 0)) && (*(unsigned short *)(temp_v2 + 0x26) < 0x12)) {
        temp_v3 = *(char *)((int)param_1 + *(unsigned short *)(temp_v2 + 0x26) + 0x4c) +
                *(char *)((int)param_1 + temp_v0 + 0x44);
        *(char *)((int)param_1 + temp_v0 + 0x44) = temp_v3;
        if (temp_v3 >= '\n') {
          *(unsigned char *)((int)param_1 + temp_v0 + 0x44) = 9;
        }
        else if (temp_v3 < -9) {
          *(unsigned char *)((int)param_1 + temp_v0 + 0x44) = 0xf7;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
  }
  FUN_0031f190(param_3,0);
LAB_002308c4:
  FUN_004bcd90(param_1);
  if (param_1 != (unsigned short *)0x0) {
    temp_v4 = param_1[7];
    temp_v0 = FUN_0018416c(param_1[0x31]);
    if (temp_v0 != 0) {
      temp_v5 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (short)(int)(temp_v5 * 1.25f);
    }
  }
  param_1[0x15] = temp_v4;
  param_1[0x16] = param_1[8];
  FUN_002a6894(param_1);
  return;
}

} /* extern "C" */
