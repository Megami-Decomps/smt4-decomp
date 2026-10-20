/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154320` (_code @ 0x154320, 0x344 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bf8(int);
int FUN_001b6390(unsigned int);
int VectorSignedToFloat(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int DAT_0063f4e4; /* 0x63f4e4 */
extern unsigned int DAT_0063f4e8; /* 0x63f4e8 */
extern int DAT_0063f4ec; /* 0x63f4ec */
extern unsigned char DAT_0063f4f0; /* 0x63f4f0 */
extern signed char DAT_0063f4fd; /* 0x63f4fd */
extern signed char DAT_0063f4fe; /* 0x63f4fe */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152bf8. */
extern int FUN_00178144(unsigned int);
/* Supplied declaration required: FUN_001b6390. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_00154320(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 8 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0063f4f0);
  if (DAT_0063f4fd != '\0') {
    temp_v3 = 0;
    DAT_0063f4ec = 0;
    if ((int)temp_v3 < (int)DAT_0063f4e8) {
      do {
        temp_v4 = temp_v3 == 0;
        if (-1 < (int)temp_v3) {
          temp_v4 = DAT_0063f4e8 == temp_v3;
          param_3 = DAT_0063f4e8;
        }
        if (!temp_v4 && (-1 < (int)temp_v3 && (int)temp_v3 <= (int)param_3)) {
          temp_v2 = DAT_0063f4e4;
          if (0 < (int)temp_v3) {
            if ((temp_v3 & 1) != 0) {
              temp_v2 = *(int *)(DAT_0063f4e4 + 0xd8);
            }
            for (temp_v0 = (int)temp_v3 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
              temp_v2 = *(int *)(*(int *)(temp_v2 + 0xd8) + 0xd8);
            }
          }
          if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 0xf4) & 0x40) != 0)) {
            if ((*(unsigned int *)(temp_v2 + 0xf4) & 0x400) != 0) {
              if (*(int *)(temp_v2 + 0xf0) == 0 || *(int *)(temp_v2 + 0xf0) == 2) {
                FUN_00152bf8(temp_v2);
                temp_v3 = temp_v3 - 1;
              }
            }
            else {
              temp_v0 = FUN_00178144(*(unsigned int *)(temp_v2 + 0x68));
              if (temp_v0 != 0) {
                DAT_0063f4ec = *(int *)(temp_v2 + 0xec) + DAT_0063f4ec;
                temp_v1 = *(unsigned int *)(temp_v2 + 0xf4);
                if ((temp_v1 & 2) == 0) {
                  *(unsigned int *)(temp_v2 + 0xf4) = temp_v1 | 2;
                  goto LAB_00154620;
                }
                if (DAT_0063f4fe == '\0') goto LAB_00154638;
                if ((temp_v1 & 0x20) != 0) {
                  if (*(int *)(temp_v2 + 0xe0) <= *(int *)(temp_v2 + 0xe8)) {
                    temp_v0 = 0;
                    if (temp_v0 < *(int *)(temp_v2 + 0xec)) {
                      do {
                        FUN_001b6390(*(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x68));
                        temp_v0 = temp_v0 + 1;
                      } while (temp_v0 < *(int *)(temp_v2 + 0xec));
                    }
                    temp_v1 = *(unsigned int *)(temp_v2 + 0xf4) & 0xffffffdf;
                    goto LAB_001545c8;
                  }
                  temp_v0 = 0;
                  VectorSignedToFloat(*(int *)(temp_v2 + 0xe8),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(*(int *)(temp_v2 + 0xe0),(unsigned char)(in_fpscr >> 0x16) & 3);
                  if (0 < *(int *)(temp_v2 + 0xec)) {
                    do {
                      FUN_001b6390(*(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x68));
                      temp_v0 = temp_v0 + 1;
                    } while (temp_v0 < *(int *)(temp_v2 + 0xec));
                    goto LAB_00154620;
                  }
                }
                else if ((temp_v1 & 0x10) != 0) {
                  param_3 = *(unsigned int *)(temp_v2 + 0xe0);
                  if (*(int *)(temp_v2 + 0xe8) < (int)param_3) {
                    temp_v0 = 0;
                    VectorSignedToFloat(*(int *)(temp_v2 + 0xe8),(unsigned char)(in_fpscr >> 0x16) & 3);
                    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
                    if (*(int *)(temp_v2 + 0xec) < 1) goto LAB_0015462c;
                    do {
                      FUN_001b6390(*(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x68));
                      temp_v0 = temp_v0 + 1;
                    } while (temp_v0 < *(int *)(temp_v2 + 0xec));
                  }
                  else {
                    *(unsigned int *)(temp_v2 + 0xf4) = temp_v1 & 0xffffffef;
                    if ((temp_v1 & 0x100) != 0) {
                      temp_v0 = 0;
                      if (temp_v0 < *(int *)(temp_v2 + 0xec)) {
                        do {
                          nn_snd_CTR_Voice_SetState(*(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x68),1);
                          temp_v0 = temp_v0 + 1;
                        } while (temp_v0 < *(int *)(temp_v2 + 0xec));
                      }
                      temp_v1 = *(unsigned int *)(temp_v2 + 0xf4) & 0xfffffeff;
                    }
                    else {
                      if ((temp_v1 & 0x80) == 0) goto LAB_00154620;
                      temp_v0 = 0;
                      if (temp_v0 < *(int *)(temp_v2 + 0xec)) {
                        do {
                          nn_snd_CTR_Voice_SetState(*(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x68),2);
                          temp_v0 = temp_v0 + 1;
                        } while (temp_v0 < *(int *)(temp_v2 + 0xec));
                      }
                      temp_v1 = *(unsigned int *)(temp_v2 + 0xf4) & 0xffffff7f;
                    }
LAB_001545c8:
                    *(unsigned int *)(temp_v2 + 0xf4) = temp_v1;
                  }
                  goto LAB_00154620;
                }
              }
              else {
                if ((*(char *)(*(int *)(temp_v2 + 0x68) + 4) != '\x02') &&
                   ((*(unsigned int *)(temp_v2 + 0xf4) & 2) != 0)) {
                  temp_v0 = *(int *)(temp_v2 + 0xf0);
                  if (!(temp_v0 == 0 || temp_v0 == 2)) {
                    if (temp_v0 == 1 || temp_v0 == 3) {
                      temp_v1 = (*(unsigned int *)(temp_v2 + 0xf4) & 0xfffffffd) | 0x200;
                      *(unsigned int *)(temp_v2 + 0xf4) = temp_v1;
                    }
                  }
                  else {
                    FUN_00152bf8(temp_v2);
                    temp_v3 = temp_v3 - 1;
                  }
                }
LAB_00154620:
                if (DAT_0063f4fe == '\0') goto LAB_00154638;
              }
LAB_0015462c:
              *(int *)(temp_v2 + 0xe8) = *(int *)(temp_v2 + 0xe8) + 1;
            }
          }
        }
LAB_00154638:
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < (int)DAT_0063f4e8);
    }
    if (DAT_0063f4fe != '\0') {
      DAT_0063f4fe = '\0';
    }
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0063f4f0);
  return;
}

} /* extern "C" */
