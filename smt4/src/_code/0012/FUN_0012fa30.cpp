/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012fa30` (_code @ 0x12fa30, 0x28c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4e80(int);
int nw_snd_SoundArchivePlayer_SetupSoundPlayer(int, unsigned int, unsigned int [2], int);
int nw_ut_internal_LinkListImpl_insert(int, int, int);

/* stack frame of param_4: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_4_stack;

extern int FUN_001407a0(unsigned int, unsigned int *);
extern int FUN_0014085c(unsigned int, unsigned int *);
extern int FUN_00141140(unsigned int, unsigned int *);
extern int FUN_0014204c(unsigned int, int *);
/* Supplied declaration required: FUN_002b4e80. */
/* Supplied declaration required: nw_snd_SoundArchivePlayer_SetupSoundPlayer. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_0012fa30(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6 [2];
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int iStack_34;
  unsigned int temp_v14;
  unsigned int uStack_2c;
  int temp_v15;
  
  temp_v4 = param_3 + param_4;
  temp_v0 = param_1;
  temp_v6[0] = param_3;
  iStack_34 = param_1;
  temp_v14 = param_2;
  uStack_2c = param_3;
  temp_v15 = param_4;
  nw_snd_SoundArchivePlayer_SetupSoundPlayer(param_1,param_2,temp_v6,temp_v4);
  if (temp_v0 != 0) {
    temp_v0 = FUN_0014204c(temp_v14,&temp_v10);
    if (temp_v0 == 0) {
      *(unsigned int *)(param_1 + 4) = temp_v14;
      *(unsigned int *)(param_1 + 0xb4) = param_3;
      *(int *)(param_1 + 0xb8) = temp_v15;
      return 1;
    }
    temp_v8 = temp_v10 * 0x558;
    temp_v5 = (temp_v6[0] + temp_v8 + 3) & 0xfffffffc;
    if ((int)(temp_v5 - temp_v4) < 1) {
      temp_v3 = 0;
      temp_v7 = temp_v6[0];
      temp_v1 = (unsigned int)(((unsigned long long)temp_v8 * 0x17f405fd + 0x17f405fd) >> 0x27);
      temp_v2 = temp_v6[0];
      if (temp_v1 != 0) {
        do {
          if (temp_v2 == 0) {
            temp_v0 = 0;
          }
          else {
            temp_v0 = FUN_0014085c(temp_v2,(unsigned int *)(param_1 + 0x28));
          }
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x3c,param_1 + 0x40,temp_v0 + 0xd4);
          temp_v3 = temp_v3 + 1;
          temp_v2 = temp_v2 + 0x558;
        } while (temp_v3 < temp_v1);
      }
      *(unsigned int *)(param_1 + 0x28) = temp_v7;
      *(unsigned int *)(param_1 + 0x2c) = temp_v8;
      temp_v8 = temp_v13 * 0x460;
      temp_v1 = temp_v5 + temp_v8;
      if ((int)(temp_v1 - temp_v4) < 1) {
        temp_v3 = 0;
        temp_v2 = (unsigned int)(((unsigned long long)temp_v8 * 0x75075075 + 0x75075075) >> 0x29);
        temp_v6[0] = temp_v5;
        temp_v7 = temp_v5;
        if (temp_v2 != 0) {
          do {
            if (temp_v5 == 0) {
              temp_v0 = 0;
            }
            else {
              temp_v0 = FUN_00141140(temp_v5,(unsigned int *)(param_1 + 0x48));
            }
            nw_ut_internal_LinkListImpl_insert(param_1 + 0x5c,param_1 + 0x60,temp_v0 + 0xd4);
            temp_v3 = temp_v3 + 1;
            temp_v5 = temp_v5 + 0x460;
          } while (temp_v3 < temp_v2);
        }
        *(unsigned int *)(param_1 + 0x48) = temp_v7;
        *(unsigned int *)(param_1 + 0x4c) = temp_v8;
        temp_v8 = temp_v12 * 0x2bd4;
        temp_v9 = temp_v1 + temp_v8;
        if ((int)(temp_v9 - temp_v4) < 1) {
          temp_v3 = 0;
          temp_v5 = (unsigned int)(((unsigned long long)temp_v8 * 0x175d2ea3 + 0x175d2ea3) >> 0x2a);
          temp_v2 = temp_v1;
          temp_v6[0] = temp_v1;
          if (temp_v5 != 0) {
            do {
              if (temp_v2 == 0) {
                temp_v0 = 0;
              }
              else {
                temp_v0 = FUN_001407a0(temp_v2,(unsigned int *)(param_1 + 0x68));
              }
              nw_ut_internal_LinkListImpl_insert(param_1 + 0x7c,param_1 + 0x80,temp_v0 + 0xd4);
              temp_v3 = temp_v3 + 1;
              temp_v2 = temp_v2 + 0x2bd4;
            } while (temp_v3 < temp_v5);
          }
          *(unsigned int *)(param_1 + 0x68) = temp_v1;
          *(unsigned int *)(param_1 + 0x6c) = temp_v8;
          temp_v6[0] = temp_v9;
          if ((int)(((temp_v9 + temp_v11 * 0xcc + 3) & 0xfffffffc) - temp_v4) < 1) {
            FUN_002b4e80(param_1 + 0xa4);
            *(unsigned int *)(param_1 + 4) = temp_v14;
            *(unsigned int *)(param_1 + 0xb4) = param_3;
            *(int *)(param_1 + 0xb8) = temp_v15;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
