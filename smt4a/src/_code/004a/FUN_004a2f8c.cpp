/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a2f8c` (_code @ 0x4a2f8c, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(void);
int FUN_0023ac54(int, unsigned short *);
int FUN_003343f0(int);
int buttonHelpGetValue(void);
int FUN_0035deb0(void);
int FUN_004a1958(int);
int screen4AEnter(int);
int rt_memcpy_w(unsigned char [24], unsigned short *, int);

/* stack frame of param_1: 18 slot(s), 43 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned char sp62; /* 0x62: local_62 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned short sp6A; /* 0x6a: local_6a */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned short sp6E; /* 0x6e: local_6e */
    unsigned short sp70; /* 0x70: local_70 */
    unsigned short sp72; /* 0x72: local_72 */
    unsigned short sp74; /* 0x74: local_74 */
    unsigned short sp76; /* 0x76: local_76 */
    unsigned short sp78; /* 0x78: local_78 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(unsigned int);
extern int gameDataCopySaveEntry(unsigned short, unsigned short *);
/* Supplied declaration required: FUN_0023ac54. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: buttonHelpGetValue. */
/* Supplied declaration required: FUN_0035deb0. */
/* Supplied declaration required: FUN_004a1958. */
/* Supplied declaration required: screen4AEnter. */
extern unsigned short *FUN_004a86dc(unsigned short);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004a2f8c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  short temp_v5;
  short temp_v6;
  short temp_v7;
  short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned char temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned int temp_v17;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v18;
  unsigned int uStack_48;
  unsigned int temp_v19;
  unsigned char temp_v20 [24];
  
  temp_v1 = FUN_00224880(*(unsigned int *)(param_1 + 0x85c));
  if (temp_v1 == 2) {
    temp_v1 = FUN_002a4b74();
    if (temp_v1 == 0) {
      temp_v1 = 0;
      if (temp_v1 < *(short *)(param_1 + 0x864)) {
        do {
          temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x868);
          puVar3 = (unsigned short *)FUN_004a86dc(temp_v0);
          temp_v2 = gameDataCopySaveEntry(temp_v0,&temp_v3);
          if (temp_v2 != 0) {
            temp_v3 = puVar3[0x32];
            temp_v19 = *(unsigned int *)(puVar3 + 0x18);
            temp_v15 = *puVar3;
            temp_v16 = puVar3[1];
            temp_v4 = puVar3[2] + puVar3[0x56];
            temp_v9 = puVar3[0x10];
            temp_v5 = puVar3[3] + puVar3[0x57];
            temp_v10 = puVar3[0x11];
            temp_v6 = puVar3[4] + puVar3[0x58];
            temp_v11 = puVar3[0x12];
            temp_v7 = puVar3[5] + puVar3[0x59];
            temp_v12 = puVar3[0x13];
            temp_v8 = puVar3[6] + puVar3[0x5a];
            temp_v13 = puVar3[0x14];
            temp_v17 = *(unsigned int *)(puVar3 + 0x1a);
            uStack_58 = *(unsigned int *)(puVar3 + 0x1c);
            uStack_54 = *(unsigned int *)(puVar3 + 0x1e);
            uStack_50 = *(unsigned int *)(puVar3 + 0x20);
            temp_v18 = *(unsigned int *)(puVar3 + 0x22);
            uStack_48 = *(unsigned int *)(puVar3 + 0x24);
            rt_memcpy_w(temp_v20,puVar3 + 0x26,0x12);
            temp_v14 = (temp_v14 & 0xc3) | ((*(unsigned char *)((int)puVar3 + 299) & 0xf) << 2);
            FUN_0023ac54(temp_v0,&temp_v3);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(short *)(param_1 + 0x864));
      }
      FUN_004a1958(param_1);
    }
    buttonHelpGetValue();
    sysPlaySe();
    FUN_003343f0(0);
    if (*(short *)(param_1 + 0x864) < 1) {
      screen4AEnter(param_1);
      FUN_0035deb0();
      return;
    }
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
