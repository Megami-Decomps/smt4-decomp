/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa2e0` (_code @ 0x4aa2e0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_001641c4(void);
int FUN_001681cc(void);
int FUN_001a9104(unsigned int *, unsigned int *);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00203b40(unsigned int *, int, int, int, int, int);
int FUN_00270104(void);
int FUN_002cb438(unsigned int *, unsigned int, unsigned int);
int FUN_00341f88(void);
int FUN_0034edc8(void);
int FUN_003756c8(int);
int FUN_0050d794(unsigned int *, unsigned int);

typedef struct fn_004aa2e0_arg0 fn_004aa2e0_arg0;
struct fn_004aa2e0_arg0 {
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

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_001641c4. */
extern int FUN_00167f08(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001a9104. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00270104. */
extern int FUN_002a21c8(void);
extern int FUN_002a4878(unsigned int *);
/* Supplied declaration required: FUN_002cb438. */
extern unsigned int FUN_002cc9e0(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00341f88. */
/* Supplied declaration required: FUN_0034edc8. */
/* Supplied declaration required: FUN_003756c8. */
extern int FUN_003e8430(void);
extern unsigned short FUN_003ea1cc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0050d794. */


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

void FUN_004aa2e0(fn_004aa2e0_arg0 *param_1,int param_2)

{
/* irregular: 89 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  int *piVar6;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  puVar5 = (*(unsigned int * *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x1d3f;
  FUN_0050d794(puVar5,0xffffffff);
  temp_v0 = FUN_003ea1cc(*puVar1,0);
  *(unsigned short *)(puVar1 + 0x1d3f) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar1,1);
  *(unsigned short *)((int)puVar1 + 0x74fe) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar1,2);
  *(unsigned short *)(puVar1 + 0x1d40) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar1,3);
  *(unsigned short *)((int)puVar1 + 0x7502) = temp_v0;
  FUN_001a9104(puVar1 + 0xa31,puVar5);
  puVar5 = puVar1 + 0xa31;
  if (param_2 != 0) {
    FUN_0034edc8();
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
  temp_v2 = FUN_002a21c8();
  if (temp_v2 == 0) {
    temp_v2 = FUN_002a4878(puVar5 + puVar1[0x1855] * 0x19 + 0xe2f);
    FUN_003756c8(temp_v2 == 0);
  }
  piVar6 = (int *)(puVar1 + 0x1850);
  if (*piVar6 == 0x22) {
    FUN_00203b40(puVar1 + 0x1928,4,1,4,1,1);
  }
  if (*piVar6 == 0x13 || *piVar6 == 0x16) {
    FUN_00341f88();
    FUN_001681cc();
  }
  temp_v2 = *piVar6;
  if ((temp_v2 == 0x22 || temp_v2 == 0x23) || temp_v2 == 0x24) {
    FUN_00341f88();
    FUN_001681cc();
  }
  temp_v2 = FUN_00167f08();
  if (temp_v2 == 0x3f) {
    FUN_0014aa78();
    temp_v2 = FUN_003e8430();
    if (temp_v2 == 0) {
      FUN_00341f88();
      FUN_001681cc();
    }
  }
  if (*piVar6 == 7) {
    if (puVar1[0x1851] - 8 < 6) {
      FUN_00270104();
    }
    else {
      temp_v1 = FUN_002cc9e0(puVar5,1);
      FUN_002cb438(puVar5,temp_v1,puVar1[0x1855]);
    }
  }
  puVar1[0x1851] = *piVar6;
  *piVar6 = 0xe;
  temp_v2 = 0;
  puVar1[0x184f] = 0;
  if (0 < *(short *)(puVar1 + 0x1c34)) {
    do {
      FUN_001641c4();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(puVar1 + 0x1c34));
  }
  *(unsigned short *)(puVar1 + 0x1c34) = 0;
  FUN_001b4a90((int)puVar1 + 0x70d2,0x40,0xffffffff);
  return;
}

} /* extern "C" */
