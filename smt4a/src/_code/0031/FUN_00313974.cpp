/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313974` (_code @ 0x313974, 0x7f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00281b94(...);
int sceneRegisterBoxEffect(...);
int VectorSignedToFloat(...);

typedef struct fn_00313974_arg0 fn_00313974_arg0;
struct fn_00313974_arg0 {
    short field_0x0; /* +0x0 */
    unsigned char pad_0x2[0x8];
    short field_0xa; /* +0xa */
    short field_0xc; /* +0xc */
    short field_0xe; /* +0xe */
    short field_0x10; /* +0x10 */
    short field_0x12; /* +0x12 */
    short field_0x14; /* +0x14 */
    short field_0x16; /* +0x16 */
    short field_0x18; /* +0x18 */
    unsigned char pad_0x1a[0xde6];
    char field_0xe00; /* +0xe00 */
    char field_0xe01; /* +0xe01 */
    char field_0xe02; /* +0xe02 */
    char field_0xe03; /* +0xe03 */
    unsigned char pad_0xe04[0x7cc];
    undefined4 field_0x15d0; /* +0x15d0 */
};

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned char LAB_00313cb4; /* 0x313cb4 */
extern unsigned char LAB_00313cbc; /* 0x313cbc */
extern unsigned char LAB_00314000; /* 0x314000 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern int FUN_00262614(int);
/* Supplied declaration required: FUN_00281b94. */
/* Supplied declaration required: sceneRegisterBoxEffect. */
extern short *dataTable4CGetEntry(fn_00313974_arg0 *);
extern int lmapGetSpawnIndex(void);


void FUN_00313974(fn_00313974_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  
  temp_v2 = gameFlagsGetBlock();
  temp_v3 = lmapGetSpawnIndex();
  psVar5 = (short *)dataTable4CGetEntry(param_1);
  if (temp_v3 < 100) {
    return;
  }
  temp_v4 = (int)*(char *)(temp_v2 + 0xe00);
  temp_v6 = (int)*(char *)(temp_v2 + 0xe01);
  temp_v3 = temp_v4;
  if (0 < temp_v4) {
    temp_v3 = temp_v6;
  }
  if (0 < temp_v3) {
    temp_v0 = *(char *)(temp_v2 + temp_v6 * 0x78 + temp_v4 * 8 + 0x40);
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          if (temp_v0 == '\x04') {
            VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
        }
        else {
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else {
        VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
    else {
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v1 = psVar5[9];
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          sceneRegisterBoxEffect(0,0,&LAB_00314000,0x55,4,0xffffffff,0,0,0,0,0,0,0,0xd,1,(int)psVar5[10],
                       (int)psVar5[0xb],(int)psVar5[0xc],0);
        }
      }
      else {
        sceneRegisterBoxEffect(0,0,&LAB_00313cbc,0x50,8,0xffffffff,0,0,0,0,0,0,0,0xd,1,(int)psVar5[10],
                     (int)psVar5[0xb],(int)psVar5[0xc],0);
      }
    }
    else {
      sceneRegisterBoxEffect(0,0,&LAB_00313cb4,0x4f,0x29,0xffffffff,0,0,0,0,0,0,0,0xd,1,(int)psVar5[10],
                   (int)psVar5[0xb],(int)psVar5[0xc],0);
    }
    FUN_00281b94(0);
  }
  temp_v4 = (int)*(char *)(temp_v2 + 0xe03);
  temp_v3 = (int)*(char *)(temp_v2 + 0xe02);
  temp_v0 = *(char *)(temp_v2 + temp_v4 * 0x78 + temp_v3 * 8 + 0x40);
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        if (temp_v0 == '\x04') {
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else {
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
    else {
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
  }
  else {
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (psVar5[5] != 0) {
    if (psVar5[5] == 1) {
      if (*(int *)(temp_v2 + 0x15d0) != 0) {
        temp_v6 = FUN_00262614((int)*psVar5);
        temp_v3 = (int)psVar5[7];
        temp_v4 = (int)psVar5[6];
        temp_v2 = (int)psVar5[8];
        temp_v8 = 4;
        if (temp_v6 == 0) {
          sceneRegisterBoxEffect(0,0,&LAB_00314000,0x51,4,0xffffffff,0,0,0,0,0,0,0,0xd,1,temp_v4,temp_v3,temp_v2,0);
          FUN_00281b94(0);
          return;
        }
        temp_v7 = 0x54;
        temp_v5 = 0;
      }
      else {
        temp_v2 = FUN_00262614((int)*psVar5);
        if (temp_v2 != 0) {
          sceneRegisterBoxEffect(0,0,&LAB_00314000,0x54,4,0xffffffff,0,0,0,0,0,0,0,0xd,1,(int)psVar5[6],
                       (int)psVar5[7],(int)psVar5[8],0);
          FUN_00281b94(0);
          return;
        }
        temp_v4 = (int)psVar5[6];
        temp_v2 = (int)psVar5[8];
        temp_v3 = (int)psVar5[7];
        temp_v8 = 0xc;
        temp_v5 = 0x205;
        temp_v7 = 0x53;
      }
      sceneRegisterBoxEffect(temp_v5,0,&LAB_00314000,temp_v7,temp_v8,0xffffffff,0,0,0,0,0,0,0,0xd,1,temp_v4,temp_v3,
                   temp_v2,0);
    }
  }
  else {
    sceneRegisterBoxEffect(0,0,&LAB_00314000,0x4e,0x2a,0xffffffff,0,0,0,0,0,0,0,0xd,1,(int)psVar5[6],
                 (int)psVar5[7],(int)psVar5[8],0);
  }
  FUN_00281b94(0);
  return;
}

} /* extern "C" */
