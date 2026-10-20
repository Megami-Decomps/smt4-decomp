/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004632f8` (_code @ 0x4632f8, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int words2Clear2(int *);
int FUN_004639e4(int);
int FUN_00463c28(int, int *);
int FUN_00508490(void);
int __aeabi_uidivmod(...);
int rt_memcpy(int, unsigned char [32], int);

typedef int romwright_code(...);
/* stack frame of param_2: 20 slot(s), 62 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned short sp5A; /* 0x5a: local_5a */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned char spA7; /* 0xa7: local_a7 */
    unsigned char spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spBC; /* 0xbc: local_bc */
} param_2_stack;

extern unsigned char DAT_00647d80; /* 0x647d80 */

extern unsigned char FUN_001d07e0(unsigned char);
extern int FUN_00461508(int, int *, unsigned char *, unsigned int);
/* Supplied declaration required: words2Clear2. */
/* Supplied declaration required: FUN_004639e4. */
/* Supplied declaration required: FUN_00463c28. */
/* Supplied declaration required: FUN_00508490. */
extern int FUN_00508e00(int *, unsigned char *);
extern int FUN_00508f8c(int *);
extern int FUN_00508fac(int *, unsigned char *, unsigned short *, unsigned int);
/* Supplied declaration required: __aeabi_uidivmod. */
extern unsigned int *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(unsigned int);
extern int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_004632f8(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char *puVar10;
  unsigned int temp_v8;
  unsigned int temp_v9 [3];
  int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  char temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned short temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned char temp_v26 [32];
  unsigned short temp_v27;
  unsigned short temp_v28;
  unsigned short temp_v29;
  
  words2Clear2(&temp_v10);
  temp_v2 = FUN_00461508(param_1,&temp_v10,&DAT_00647d80,0x4000);
  if (temp_v2 != 0) {
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned short *)(param_2 + 0x38) = *(unsigned short *)(param_1 + 0x24);
    temp_v2 = FUN_00508e00(&temp_v10,&temp_v12);
    if (temp_v2 != 0) {
      puVar4 = (unsigned int *)nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(temp_v11);
      temp_v8 = *puVar4;
      *(unsigned int *)(param_1 + 0x20) = temp_v8;
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x2c) = temp_v8;
      puVar10 = *(unsigned char **)(param_1 + 0x18);
      temp_v1 = FUN_001d07e0(temp_v12);
      *puVar10 = temp_v1;
      *(unsigned int *)(puVar10 + 4) = temp_v14;
      puVar10[8] = temp_v13 != '\0';
      *(unsigned int *)(puVar10 + 0xc) = temp_v15;
      *(unsigned int *)(puVar10 + 0x10) = temp_v16;
      *(unsigned int *)(puVar10 + 0x14) = temp_v21;
      *(unsigned int *)(puVar10 + 0x18) = temp_v22;
      *(unsigned int *)(puVar10 + 0x1c) = temp_v18;
      *(unsigned int *)(puVar10 + 0x20) = temp_v17;
      *(unsigned int *)(puVar10 + 0x28) = temp_v19;
      *(unsigned int *)(puVar10 + 0x24) = temp_v20;
      temp_v2 = FUN_00508f8c(&temp_v10);
      if ((temp_v2 == 0) || (temp_v2 = param_1, FUN_00463c28(param_1,&temp_v10), temp_v2 != 0)) {
        temp_v0 = **(char **)(param_1 + 0x18);
        *(char *)(param_1 + 0xb94) = temp_v0;
        if (temp_v0 != '\x03') {
          if (temp_v8 != 0) {
            temp_v3 = temp_v8 & 1;
            temp_v6 = (unsigned int)(temp_v3 == 1);
            if (temp_v3 == 1) {
              *(unsigned int *)(param_2 + 0x18) = 0;
            }
            for (; temp_v3 < temp_v8; temp_v3 = temp_v3 + 2) {
              temp_v2 = temp_v6 + 1;
              *(unsigned int *)(param_2 + temp_v6 * 4 + 0x18) = 0;
              temp_v6 = temp_v6 + 2;
              *(unsigned int *)(param_2 + temp_v2 * 4 + 0x18) = 0;
            }
          }
        }
        else {
          temp_v3 = 0;
          if (temp_v3 < temp_v8) {
            do {
              temp_v2 = FUN_00508fac(&temp_v10,temp_v26,&temp_v23,temp_v3);
              if (temp_v2 == 0) {
                return;
              }
              temp_v2 = param_1 + temp_v3 * 0x2c;
              rt_memcpy(temp_v2 + 0xb96,temp_v26,0x20);
              *(unsigned short *)(temp_v2 + 0xbb6) = temp_v27;
              *(unsigned short *)(temp_v2 + 3000) = temp_v28;
              *(unsigned short *)(temp_v2 + 0xbba) = temp_v29;
              *(unsigned short *)(temp_v2 + 0xbbc) = temp_v23;
              *(unsigned short *)(temp_v2 + 0xbbe) = temp_v24;
              *(unsigned short *)(temp_v2 + 0xbc0) = temp_v25;
              *(int *)(param_2 + 0x18 + temp_v3 * 4) = temp_v2 + 0xb96;
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < temp_v8);
          }
        }
        if (temp_v10 == 0) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(temp_v11);
          temp_v2 = *(int *)(temp_v2 + 0x34);
          FUN_00508490();
          temp_v2 = temp_v2 + temp_v10 + 8;
        }
        *(int *)(param_1 + 0x44) = temp_v2;
        temp_v7 = *(int *)(param_1 + 0x18);
        temp_v4 = __aeabi_uidivmod(*(int *)(temp_v7 + 0x10) - 1,*(unsigned int *)(temp_v7 + 0x1c));
        *(unsigned int *)(param_1 + 0x3c) = temp_v4;
        temp_v5 = __aeabi_uidivmod(*(unsigned int *)(temp_v7 + 0xc),*(unsigned int *)(temp_v7 + 0x1c));
        *(int *)(param_1 + 0x40) = temp_v5;
        *(unsigned int *)(param_1 + 0x48) = temp_v8 * *(int *)(temp_v7 + 0x20) * temp_v5 + temp_v2;
        *(unsigned int *)(param_1 + 0x4c) = 0;
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),temp_v2,0);
        if (*(romwright_code **)(param_1 + 0x30) != (romwright_code *)0x0) {
          temp_v9[0] = 0;
          temp_v2 = (**(romwright_code **)(param_1 + 0x30))(temp_v9,*(unsigned int *)(param_1 + 0x34));
          if (temp_v2 == 0) {
            return;
          }
          *(unsigned int *)(param_1 + 0x54) = temp_v9[0];
          FUN_004639e4(param_1);
        }
        else {
          *(unsigned int *)(param_1 + 0x5c) = 0;
          *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
        }
        *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0x5c);
        temp_v5 = *(int *)(param_1 + 0x18);
        temp_v2 = __aeabi_uidivmod(*(unsigned int *)(param_1 + 0x5c),*(unsigned int *)(temp_v5 + 0x1c));
        *(int *)(param_1 + 0x38) = temp_v2;
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))
                  (*(int **)(param_1 + 0x14),
                   *(int *)(temp_v5 + 0x20) * *(int *)(param_1 + 0x20) * temp_v2 +
                   *(int *)(param_1 + 0x44),0);
      }
    }
  }
  return;
}

} /* extern "C" */
