/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001900f0` (_code @ 0x1900f0, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern int FUN_00178458(unsigned int, unsigned int, int *);
extern unsigned int FUN_00194fd8(unsigned int);
/* Supplied declaration required: FUN_001a5974. */
/* Supplied declaration required: FUN_001a59c0. */
extern int FUN_001a59f4(unsigned int);
extern int FUN_001a5aac(void);
extern int nw_snd_internal_PlayerHeap_Create(int, unsigned int, int);


unsigned int FUN_001900f0(int param_1,unsigned int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int unaff_r9;
  int temp_v8;
  int temp_v9;
  int iStack_34;
  unsigned int temp_v10;
  unsigned int *puStack_2c;
  int iStack_28;
  
  if ((*param_3 & 0x1f) == 0) {
    iStack_34 = param_1;
    temp_v10 = param_2;
    puStack_2c = param_3;
    iStack_28 = param_4;
    temp_v0 = FUN_00194fd8(param_2);
    temp_v7 = *param_3;
    temp_v1 = ((temp_v0 * 0x5c + 0x1f) & 0xffffffe0) + temp_v7;
    if ((int)(temp_v1 - param_4) < 1) {
      *param_3 = temp_v1;
      *(unsigned int *)(param_1 + 0x18) = temp_v0;
      temp_v1 = 0;
      *(unsigned int *)(param_1 + 0x1c) = temp_v7;
      if (temp_v0 != 0) {
        do {
          if (temp_v7 == 0) {
            temp_v5 = 0;
          }
          else {
            temp_v5 = FUN_001a59f4(temp_v7);
          }
          temp_v8 = 0;
          temp_v9 = 0;
          temp_v2 = FUN_00178458(temp_v10,temp_v1 | 0x4000000,&temp_v8);
          if ((temp_v2 != 0) && (FUN_001a5974(temp_v5,temp_v8), temp_v9 != 0)) {
            temp_v2 = 0;
            if (temp_v2 < temp_v8) {
              do {
                temp_v4 = temp_v9;
                temp_v3 = *param_3;
                if ((temp_v3 & 0x1f) != 0) {
                  return 0;
                }
                temp_v6 = (temp_v3 + 0x43) & 0xffffffe0;
                if (0 < (int)(temp_v6 - param_4)) {
                  return 0;
                }
                if (temp_v3 == 0) {
                  unaff_r9 = 0;
                }
                *param_3 = temp_v6;
                if (temp_v3 != 0) {
                  unaff_r9 = FUN_001a5aac();
                }
                temp_v3 = (*param_3 + 0x1f) & 0xffffffe0;
                temp_v6 = (temp_v3 + temp_v4 + 0x1f) & 0xffffffe0;
                *param_3 = temp_v3;
                if (0 < (int)(temp_v6 - param_4)) {
                  return 0;
                }
                *param_3 = temp_v6;
                temp_v4 = nw_snd_internal_PlayerHeap_Create(unaff_r9,temp_v3,temp_v4);
                if (temp_v4 == 0) {
                  return 0;
                }
                if (unaff_r9 == 0) {
                  return 0;
                }
                FUN_001a59c0(temp_v5);
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < temp_v8);
            }
            *(int *)(temp_v5 + 0x34) = temp_v8;
          }
          temp_v1 = temp_v1 + 1;
          temp_v7 = temp_v7 + 0x5c;
        } while (temp_v1 < temp_v0);
      }
      return 1;
    }
  }
  return 0;
}
