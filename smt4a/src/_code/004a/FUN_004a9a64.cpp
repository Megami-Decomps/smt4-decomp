/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9a64` (_code @ 0x4a9a64, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int ifTouchRegionRemove(void);
int sysPlaySe(void);
int FUN_001a9104(unsigned int *, unsigned int *);
int __aeabi_memset4(...);
int FUN_00203b40(...);
int FUN_00227af0(unsigned char *);
int FUN_00270104(void);
int FUN_00290274(unsigned int *, int, int, int);
int FUN_002a3258(void);
int FUN_002cb438(...);
int FUN_002cd118(unsigned int *, unsigned int, int, int);
int FUN_00341f88(void);
int menu32Advance(void);
int FUN_003756c8(int);
int menuStateStartSelect(int);
int fillTwoWordsWithByte(unsigned int *, unsigned int);

typedef struct fn_004a9a64_arg0 fn_004a9a64_arg0;
struct fn_004a9a64_arg0 {
    unsigned char pad_0x0[0x387c];
    undefined4 field_0x387c; /* +0x387c */
    undefined4 field_0x3880; /* +0x3880 */
    unsigned char pad_0x3884[0xc];
    undefined4 field_0x3890; /* +0x3890 */
    unsigned char pad_0x3894[0x3ac];
    undefined4 field_0x3c40; /* +0x3c40 */
    unsigned char pad_0x3c44[0xbc8];
    undefined2 field_0x480c; /* +0x480c */
    unsigned char pad_0x480e[0x10];
    undefined2 field_0x481e; /* +0x481e */
    undefined2 field_0x4820; /* +0x4820 */
    undefined2 field_0x4822; /* +0x4822 */
    unsigned char pad_0x4824[0xc];
    undefined2 field_0x4830; /* +0x4830 */
    unsigned char pad_0x4832[0x1e];
    undefined4 field_0x4850; /* +0x4850 */
    unsigned char pad_0x4854[0x3];
    byte field_0x4857; /* +0x4857 */
    unsigned char pad_0x4858[0x2c37];
    undefined1 field_0x748f; /* +0x748f */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern unsigned char LAB_004a9bd0; /* 0x4a9bd0 */
extern unsigned char g_btlUi; /* 0x57a9b8 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int FUN_00167f08(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001a9104. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00227af0. */
/* Supplied declaration required: FUN_00270104. */
/* Supplied declaration required: FUN_00290274. */
extern int FUN_002a21c8(void);
/* Supplied declaration required: FUN_002a3258. */
extern int FUN_002a4878(unsigned int *);
/* Supplied declaration required: FUN_002cb438. */
extern unsigned int FUN_002cc9e0(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002cd118. */
/* Supplied declaration required: FUN_00341f88. */
/* Supplied declaration required: menu32Advance. */
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: menuStateStartSelect. */
extern int FUN_003e8430(void);
extern unsigned short FUN_003ea1cc(unsigned int, unsigned int);
/* Supplied declaration required: fillTwoWordsWithByte. */


/* WARNING: Removing unreachable block (ram,0x0020b1c8) */
/* WARNING: Removing unreachable block (ram,0x0020b374) */
/* WARNING: Removing unreachable block (ram,0x0020b38c) */
/* WARNING: Removing unreachable block (ram,0x0020b390) */
/* WARNING: Removing unreachable block (ram,0x0020b394) */
/* WARNING: Removing unreachable block (ram,0x0020b3a8) */
/* WARNING: Removing unreachable block (ram,0x0020b3cc) */
/* WARNING: Removing unreachable block (ram,0x0020afb8) */
/* WARNING: Removing unreachable block (ram,0x0020afe0) */
/* WARNING: Removing unreachable block (ram,0x0020aff4) */
/* WARNING: Removing unreachable block (ram,0x0020aff8) */
/* WARNING: Removing unreachable block (ram,0x0020affc) */
/* WARNING: Removing unreachable block (ram,0x0020b000) */
/* WARNING: Removing unreachable block (ram,0x0020b004) */
/* WARNING: Removing unreachable block (ram,0x0020b008) */
/* WARNING: Removing unreachable block (ram,0x0020b00c) */
/* WARNING: Removing unreachable block (ram,0x0020b038) */
/* WARNING: Removing unreachable block (ram,0x0020aef0) */
/* WARNING: Removing unreachable block (ram,0x0020af04) */
/* WARNING: Removing unreachable block (ram,0x0020af24) */
/* WARNING: Removing unreachable block (ram,0x0020af28) */
/* WARNING: Removing unreachable block (ram,0x0020af2c) */
/* WARNING: Removing unreachable block (ram,0x0020aecc) */
/* WARNING: Removing unreachable block (ram,0x0020aed8) */
/* WARNING: Removing unreachable block (ram,0x0020aedc) */
/* WARNING: Removing unreachable block (ram,0x0020aee0) */
/* WARNING: Removing unreachable block (ram,0x0020b03c) */
/* WARNING: Removing unreachable block (ram,0x0020b06c) */
/* WARNING: Removing unreachable block (ram,0x0020b080) */
/* WARNING: Removing unreachable block (ram,0x0020b084) */
/* WARNING: Removing unreachable block (ram,0x0020b088) */
/* WARNING: Removing unreachable block (ram,0x0020b08c) */
/* WARNING: Removing unreachable block (ram,0x0020b090) */
/* WARNING: Removing unreachable block (ram,0x0020b094) */
/* WARNING: Removing unreachable block (ram,0x0020b098) */
/* WARNING: Removing unreachable block (ram,0x0020b0c4) */
/* WARNING: Removing unreachable block (ram,0x0020b0d8) */
/* WARNING: Removing unreachable block (ram,0x0020b0dc) */
/* WARNING: Removing unreachable block (ram,0x0020b0e0) */
/* WARNING: Removing unreachable block (ram,0x0020b0e8) */
/* WARNING: Removing unreachable block (ram,0x0020b0ec) */
/* WARNING: Removing unreachable block (ram,0x0020b0f0) */
/* WARNING: Removing unreachable block (ram,0x0020b0f4) */
/* WARNING: Removing unreachable block (ram,0x0020b0f8) */
/* WARNING: Removing unreachable block (ram,0x0020b0fc) */
/* WARNING: Removing unreachable block (ram,0x0020b138) */
/* WARNING: Removing unreachable block (ram,0x0020b158) */
/* WARNING: Removing unreachable block (ram,0x0020b1cc) */
/* WARNING: Removing unreachable block (ram,0x0020b164) */
/* WARNING: Removing unreachable block (ram,0x0020b208) */
/* WARNING: Removing unreachable block (ram,0x0020b16c) */
/* WARNING: Removing unreachable block (ram,0x0020b1a0) */
/* WARNING: Removing unreachable block (ram,0x0020b244) */
/* WARNING: Removing unreachable block (ram,0x0020b278) */
/* WARNING: Removing unreachable block (ram,0x0020b27c) */
/* WARNING: Removing unreachable block (ram,0x0020b280) */
/* WARNING: Removing unreachable block (ram,0x0020b284) */
/* WARNING: Removing unreachable block (ram,0x0020b298) */
/* WARNING: Removing unreachable block (ram,0x0020b334) */
/* WARNING: Removing unreachable block (ram,0x0020b2ac) */
/* WARNING: Removing unreachable block (ram,0x0020b2d4) */
/* WARNING: Removing unreachable block (ram,0x0020b2ec) */
/* WARNING: Removing unreachable block (ram,0x0020b2f0) */
/* WARNING: Removing unreachable block (ram,0x0020b2f4) */
/* WARNING: Removing unreachable block (ram,0x0020b2f8) */
/* WARNING: Removing unreachable block (ram,0x0020b318) */
/* WARNING: Removing unreachable block (ram,0x0020b2fc) */
/* WARNING: Removing unreachable block (ram,0x0020b2b8) */
/* WARNING: Removing unreachable block (ram,0x0020b354) */
/* WARNING: Removing unreachable block (ram,0x0020b360) */
/* WARNING: Removing unreachable block (ram,0x0020b370) */
/* WARNING: Removing unreachable block (ram,0x0020b3ec) */
/* WARNING: Removing unreachable block (ram,0x0020b404) */
/* WARNING: Removing unreachable block (ram,0x0020b408) */
/* WARNING: Removing unreachable block (ram,0x0020b40c) */
/* WARNING: Removing unreachable block (ram,0x0020b424) */
/* WARNING: Removing unreachable block (ram,0x0020b448) */

void FUN_004a9a64(fn_004a9a64_arg0 *param_1,int param_2,unsigned char param_3,unsigned char param_4,
                 int param_5,int param_6)

{
/* irregular: irregular input(s): in_lr; 94 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int unaff_r4;
  int *piVar6;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  unsigned int unaff_r10;
  unsigned int unaff_r11;
  unsigned int in_lr;
  unsigned int temp_v2;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&g_btlUi + 0x10));
  (*(unsigned int * *)((unsigned char *)&g_btlUi + 0x10))[0x1d28] = 1;
  puVar1[0x1d2b] = 0;
  puVar1[0x1d29] = param_2;
  *(unsigned char *)((int)puVar1 + 0x7505) = param_3;
  *(unsigned char *)((int)puVar1 + 0x7506) = param_4;
  temp_v1 = param_5;
  if (param_2 == 0) {
    temp_v1 = 0;
  }
  temp_v2 = 0;
  FUN_00290274(puVar1 + 0x92f,param_2,param_6,temp_v1);
  FUN_002cd118(puVar1 + 2,puVar1[0x1d29],(int)*(char *)((int)puVar1 + 0x7505),
               (int)*(char *)((int)puVar1 + 0x7506));
  if ((param_2 == 1) && (param_5 != 0)) {
    puVar1[0x3011] = 0x28;
    puVar1[0x3012] = 0;
    *(unsigned char *)(puVar1 + 0x3010) = 1;
    FUN_00227af0(&LAB_004a9bd0);
    FUN_002a3258();
    menuStateStartSelect(0);
  }
  puVar5 = (*(unsigned int * *)((unsigned char *)&g_btlUi + 0x10));
  if (param_2 == 0 && param_6 == 0) {
    return;
  }
  puVar4 = (*(unsigned int * *)((unsigned char *)&g_btlUi + 0x10)) + 0x1d3f;
  fillTwoWordsWithByte(puVar4,0xffffffff);
  temp_v0 = FUN_003ea1cc(*puVar5,0);
  *(unsigned short *)(puVar5 + 0x1d3f) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar5,1);
  *(unsigned short *)((int)puVar5 + 0x74fe) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar5,2);
  *(unsigned short *)(puVar5 + 0x1d40) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar5,3);
  *(unsigned short *)((int)puVar5 + 0x7502) = temp_v0;
  FUN_001a9104(puVar5 + 0xa31,puVar4);
  puVar5 = puVar1 + 0xa31;
  if (param_2 != 0) {
    menu32Advance();
    return;
  }
  *(unsigned char *)((int)puVar1 + 0x6177) = 1;
  *(unsigned short *)((int)puVar1 + 0x616a) = 0;
  if (-1 < *(short *)(puVar1 + 0x185b)) {
    *(unsigned short *)((int)puVar1 + 0x616a) = 1;
  }
  if (-1 < *(short *)((int)puVar1 + 0x616e)) {
    *(short *)((int)puVar1 + 0x616a) = *(short *)((int)puVar1 + 0x616a) + 1;
  }
  if (-1 < *(short *)(puVar1 + 0x185c)) {
    *(short *)((int)puVar1 + 0x616a) = *(short *)((int)puVar1 + 0x616a) + 1;
  }
  if (-1 < *(short *)((int)puVar1 + 0x6172)) {
    *(short *)((int)puVar1 + 0x616a) = *(short *)((int)puVar1 + 0x616a) + 1;
  }
  temp_v1 = FUN_002a21c8();
  if (temp_v1 == 0) {
    temp_v1 = FUN_002a4878(puVar5 + puVar1[0x1855] * 0x19 + 0xe2f);
    FUN_003756c8(temp_v1 == 0);
  }
  piVar6 = (int *)(puVar1 + 0x1850);
  if (*piVar6 == 0x22) {
    FUN_00203b40(puVar1 + 0x1928,4,1,4,1,1,temp_v2,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,
                 unaff_r9,unaff_r10,unaff_r11,in_lr);
  }
  if (*piVar6 == 0x13 || *piVar6 == 0x16) {
    FUN_00341f88();
    sysPlaySe();
  }
  temp_v1 = *piVar6;
  if ((temp_v1 == 0x22 || temp_v1 == 0x23) || temp_v1 == 0x24) {
    FUN_00341f88();
    sysPlaySe();
  }
  temp_v1 = FUN_00167f08();
  if (temp_v1 == 0x3f) {
    btlGetMainState();
    temp_v1 = FUN_003e8430();
    if (temp_v1 == 0) {
      FUN_00341f88();
      sysPlaySe();
    }
  }
  if (*piVar6 == 7) {
    if (puVar1[0x1851] - 8 < 6) {
      FUN_00270104();
    }
    else {
      temp_v2 = FUN_002cc9e0(puVar5,1);
      FUN_002cb438(puVar5,temp_v2,puVar1[0x1855]);
    }
  }
  puVar1[0x1851] = *piVar6;
  *piVar6 = 0xe;
  temp_v1 = 0;
  puVar1[0x184f] = 0;
  if (0 < *(short *)(puVar1 + 0x1c34)) {
    do {
      ifTouchRegionRemove();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(puVar1 + 0x1c34));
  }
  *(unsigned short *)(puVar1 + 0x1c34) = 0;
  __aeabi_memset4((int)puVar1 + 0x70d2,0x40,0xffffffff);
  return;
}

} /* extern "C" */
