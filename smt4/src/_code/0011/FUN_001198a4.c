/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001198a4` (_code @ 0x1198a4, 0x300 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int DAT_004e3154; /* 0x4e3154 */
extern unsigned int DAT_004e3158; /* 0x4e3158 */
extern unsigned char DAT_004e315c; /* 0x4e315c */
extern signed char DAT_004e3169; /* 0x4e3169 */
extern signed char DAT_004e316a; /* 0x4e316a */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001329d4(unsigned int);
/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: FUN_002bd430. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_001198a4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 13 goto(s); irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  
  nn_os_CriticalSection_Enter(&DAT_004e315c);
  if (DAT_004e3169 != '\0') {
    temp_v2 = 0;
    if (0 < (int)DAT_004e3158) {
LAB_001198d8:
      temp_v4 = temp_v2 == 0;
      if (-1 < (int)temp_v2) {
        temp_v4 = DAT_004e3158 == temp_v2;
        param_3 = DAT_004e3158;
      }
      if (!temp_v4 && (-1 < (int)temp_v2 && (int)temp_v2 <= (int)param_3)) {
        temp_v3 = DAT_004e3154;
        if (0 < (int)temp_v2) {
          if ((temp_v2 & 1) != 0) {
            temp_v3 = *(unsigned int *)(DAT_004e3154 + 0x70);
          }
          for (temp_v0 = (int)temp_v2 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
            temp_v3 = *(unsigned int *)(*(int *)(temp_v3 + 0x70) + 0x70);
          }
        }
        if ((temp_v3 == 0) || ((*(unsigned int *)(temp_v3 + 0x90) & 0x40) == 0)) goto LAB_00119b44;
        temp_v0 = FUN_001329d4(*(unsigned int *)(temp_v3 + 0x38));
        if (temp_v0 == 0) {
          if ((*(char *)(*(int *)(temp_v3 + 0x38) + 4) != '\x02') &&
             ((*(unsigned int *)(temp_v3 + 0x90) & 2) != 0)) {
            if (*(int *)(temp_v3 + 0x8c) != 0) {
              if (*(int *)(temp_v3 + 0x8c) == 1) {
                temp_v1 = (*(unsigned int *)(temp_v3 + 0x90) & 0xfffffffd) | 0x200;
                *(unsigned int *)(temp_v3 + 0x90) = temp_v1;
              }
              goto LAB_00119b2c;
            }
            nn_os_CriticalSection_Enter();
            for (temp_v1 = DAT_004e3154; param_3 = DAT_004e3154, temp_v1 != 0;
                temp_v1 = *(unsigned int *)(temp_v1 + 0x70)) {
              if (temp_v1 == temp_v3) {
                temp_v1 = DAT_004e3154;
                if (DAT_004e3154 != 0) goto LAB_00119ac4;
                break;
              }
            }
            goto LAB_00119af8;
          }
          goto LAB_00119b2c;
        }
        temp_v1 = *(unsigned int *)(temp_v3 + 0x90);
        if ((temp_v1 & 2) == 0) {
          *(unsigned int *)(temp_v3 + 0x90) = temp_v1 | 2;
          goto LAB_00119b2c;
        }
        if (DAT_004e316a == '\0') goto LAB_00119b44;
        if ((temp_v1 & 0x20) != 0) {
          if (*(int *)(temp_v3 + 0x78) >= *(int *)(temp_v3 + 0x84)) {
            VectorSignedToFloat(*(int *)(temp_v3 + 0x84),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(int *)(temp_v3 + 0x78),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00147370(*(unsigned int *)(temp_v3 + 0x38));
          }
          else {
            FUN_00147370(*(unsigned int *)(temp_v3 + 0x38));
            temp_v1 = *(unsigned int *)(temp_v3 + 0x90) & 0xffffffdf;
            *(unsigned int *)(temp_v3 + 0x90) = temp_v1;
          }
          goto LAB_00119b2c;
        }
        if ((temp_v1 & 0x10) != 0) {
          param_3 = *(unsigned int *)(temp_v3 + 0x84);
          if (*(int *)(temp_v3 + 0x78) >= (int)param_3) {
            VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(int *)(temp_v3 + 0x78),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00147370(*(unsigned int *)(temp_v3 + 0x38));
          }
          else {
            *(unsigned int *)(temp_v3 + 0x90) = temp_v1 & 0xffffffef;
            if ((temp_v1 & 0x100) != 0) {
              nn_snd_CTR_Voice_SetState(*(unsigned int *)(temp_v3 + 0x38),1);
              temp_v1 = *(unsigned int *)(temp_v3 + 0x90) & 0xfffffeff;
              *(unsigned int *)(temp_v3 + 0x90) = temp_v1;
            }
            else if ((temp_v1 & 0x80) != 0) {
              nn_snd_CTR_Voice_SetState(*(unsigned int *)(temp_v3 + 0x38),2);
              temp_v1 = *(unsigned int *)(temp_v3 + 0x90) & 0xffffff7f;
              *(unsigned int *)(temp_v3 + 0x90) = temp_v1;
            }
          }
          goto LAB_00119b2c;
        }
        *(int *)(temp_v3 + 0x84) = *(int *)(temp_v3 + 0x84) + 1;
      }
      goto LAB_00119b44;
    }
LAB_00119b54:
    if (DAT_004e316a != '\0') {
      DAT_004e316a = '\0';
    }
  }
  nn_os_CriticalSection_Leave(&DAT_004e315c);
  return;
  while (temp_v1 = *(unsigned int *)(temp_v1 + 0x70), temp_v1 != 0) {
LAB_00119ac4:
    if (temp_v1 == temp_v3) {
      param_3 = *(unsigned int *)(temp_v3 + 0x74);
      if (param_3 != 0) {
        temp_v0 = *(int *)(temp_v3 + 0x70);
        *(int *)(param_3 + 0x70) = temp_v0;
        if (*(int *)(temp_v3 + 0x70) != 0) {
          *(unsigned int *)(temp_v0 + 0x74) = param_3;
        }
      }
      else {
        DAT_004e3154 = *(unsigned int *)(temp_v3 + 0x70);
        if (DAT_004e3154 != 0) {
          *(unsigned int *)(DAT_004e3154 + 0x74) = 0;
        }
        else {
          DAT_004e3154 = 0;
        }
      }
      goto LAB_00119aec;
    }
  }
  param_3 = 0;
LAB_00119aec:
  DAT_004e3158 = DAT_004e3158 - 1;
LAB_00119af8:
  if (*(int *)(temp_v3 + 0x6c) != 0) {
    FUN_002c415c();
  }
  if (*(int *)(temp_v3 + 0x38) != 0) {
    FUN_002bd430();
  }
  FUN_002c415c(temp_v3);
  nn_os_CriticalSection_Leave(&DAT_004e315c);
  temp_v2 = temp_v2 - 1;
LAB_00119b2c:
  if (DAT_004e316a != '\0') {
    *(int *)(temp_v3 + 0x84) = *(int *)(temp_v3 + 0x84) + 1;
  }
LAB_00119b44:
  temp_v2 = temp_v2 + 1;
  if ((int)DAT_004e3158 <= (int)temp_v2) goto LAB_00119b54;
  goto LAB_001198d8;
}
