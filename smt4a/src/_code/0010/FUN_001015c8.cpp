/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001015c8` (_code @ 0x1015c8, 0x386 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100e62(unsigned int, unsigned int, unsigned int, unsigned int *);
int FUN_00100fa6(unsigned int, unsigned int, unsigned int, unsigned int *);
int FUN_001010f0(unsigned int, unsigned int, unsigned int *, unsigned int *);
int FUN_0010124e(unsigned int, unsigned int, unsigned int *);
int FUN_00101368(unsigned int, unsigned int, unsigned int *, int);
int FUN_0010144c(unsigned int, unsigned int, unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

/* Supplied declaration required: FUN_00100e62. */
/* Supplied declaration required: FUN_00100fa6. */
/* Supplied declaration required: FUN_001010f0. */
/* Supplied declaration required: FUN_0010124e. */
/* Supplied declaration required: FUN_00101368. */
/* Supplied declaration required: FUN_0010144c. */
extern int FUN_001bc6a4(unsigned int, unsigned int, int *, unsigned int *);


int FUN_001015c8(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 14 goto(s); 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar8;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12 [8];
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int *puStack_18;
  
  temp_v13 = 0;
  temp_v15 = 1;
  temp_v6 = 0;
  temp_v11 = param_2 + 3;
  temp_v16 = param_1;
  puStack_18 = param_2;
  do {
    while( 1 ) {
      temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
      if (temp_v0 == 0) {
        return temp_v13;
      }
      if (temp_v0 == 0x25) break;
      temp_v1 = (*(romwright_code *)param_2[8])();
      if (temp_v1 != 0) {
        do {
          (*(romwright_code *)param_2[5])(temp_v11,1);
          temp_v0 = (*(romwright_code *)param_2[8])();
        } while (temp_v0 != 0);
        (*(romwright_code *)param_2[5])(temp_v11,0xffffffff);
        while( 1 ) {
          (*(romwright_code *)param_2[6])(temp_v16);
          temp_v0 = (*(romwright_code *)param_2[8])();
          if (temp_v0 == 0) break;
          temp_v6 = temp_v6 + 1;
        }
        (*(romwright_code *)param_2[7])(temp_v16);
      }
      else {
        temp_v1 = (*(romwright_code *)param_2[6])(temp_v16);
        if (temp_v1 != temp_v0) {
          (*(romwright_code *)param_2[7])(temp_v16);
          if (temp_v1 != -1) {
            return temp_v13;
          }
          if (temp_v13 == 0) {
            return -1;
          }
          return temp_v13;
        }
        temp_v6 = temp_v6 + 1;
      }
    }
    temp_v1 = 0;
    temp_v5 = 0;
    temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,0);
    if (temp_v0 == 0x2a) {
      (*(romwright_code *)param_2[5])(temp_v11,1);
      temp_v5 = 1;
    }
    while (temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1), temp_v0 - 0x30U < 10) {
      if (temp_v1 >= 0xccccccd) {
        return temp_v13;
      }
      temp_v1 = (temp_v1 * 10 + temp_v0) - 0x30;
      if (temp_v1 < 0) {
        return temp_v13;
      }
      temp_v5 = temp_v5 | 0x10;
    }
    if (-1 < (int)(temp_v5 << 0x1b)) {
      temp_v1 = 0x7fffffff;
    }
    if (temp_v0 != 0x6c) {
      if (temp_v0 != 0x4c) {
        if (temp_v0 != 0x68) {
          if (temp_v0 != 0x6a) {
            if ((temp_v0 == 0x74) || (temp_v0 == 0x7a)) {
              temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
            }
          }
          else {
            temp_v2 = 2;
            temp_v5 = temp_v5 | temp_v2;
            temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
          }
        }
        else {
          temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
          if (temp_v0 != 0x68) {
            temp_v2 = 8;
            goto LAB_001016f6;
          }
          temp_v2 = 0x800;
          temp_v5 = temp_v5 | temp_v2;
          temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
        }
      }
      else {
        temp_v2 = 0x20;
        temp_v5 = temp_v5 | temp_v2;
        temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
      }
    }
    else {
      temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
      if (temp_v0 != 0x6c) {
        temp_v2 = 4;
LAB_001016f6:
        temp_v5 = temp_v5 | temp_v2;
      }
      else {
        temp_v2 = 2;
        temp_v5 = temp_v5 | temp_v2;
        temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
      }
    }
    param_2[2] = temp_v1;
    param_2[1] = temp_v5;
    if (temp_v0 == 0x65) goto LAB_00101774;
    if (temp_v0 < 0x66) {
      if (temp_v0 != 0x58) {
        if (temp_v0 < 0x59) {
          if (temp_v0 != 0x45) {
            if (temp_v0 < 0x46) {
              if (temp_v0 == 0x25) {
                temp_v1 = (*(romwright_code *)param_2[6])(temp_v16);
                if (temp_v1 != 0x25) {
                  (*(romwright_code *)param_2[7])(temp_v16);
                  if (temp_v1 != -1) {
                    return temp_v13;
                  }
                  if (temp_v13 == 0) {
                    return -1;
                  }
                  return temp_v13;
                }
                temp_v6 = temp_v6 + 1;
                continue;
              }
              temp_v7 = temp_v0 == 0x41;
LAB_001016e4:
              if (!temp_v7) {
                return temp_v13;
              }
            }
            else if ((temp_v0 != 0x46) && (temp_v0 != 0x47)) {
              return temp_v13;
            }
          }
LAB_00101774:
          temp_v0 = FUN_001bc6a4(0xfffffffe,temp_v16,&temp_v8,param_2);
        }
        else {
          if (temp_v0 != 0x5b) {
            if (temp_v0 == 0x61) goto LAB_00101774;
            if (temp_v0 != 99) {
              if (temp_v0 != 100) {
                return temp_v13;
              }
LAB_001017e6:
              param_2[1] = temp_v5 | 0x40;
              if (-1 < (int)(temp_v5 << 0x1e)) {
                temp_v4 = 10;
                goto LAB_00101816;
              }
              temp_v4 = 10;
              goto LAB_00101806;
            }
          }
LAB_00101822:
          puVar8 = (unsigned int *)0x0;
          temp_v9 = 0;
          temp_v8 = 0;
          temp_v10 = 0;
          temp_v14 = 0;
          if (temp_v0 != 99) {
            if (temp_v0 == 0x5b) {
              temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1,(romwright_code *)param_2[5],0);
              if (temp_v0 == 0x5e) {
                temp_v9 = 1;
                temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
              }
              if (param_2[4] != 0) {
                temp_v14 = param_2[3] - 2;
              }
              else {
                temp_v1 = 0;
                do {
                  temp_v3 = temp_v1 + 1;
                  temp_v12[temp_v1] = 0;
                  temp_v1 = temp_v3;
                } while (temp_v3 < 8);
              }
              do {
                if (temp_v0 == 0) {
                  return temp_v13;
                }
                if (param_2[4] != 0) {
                  temp_v10 = temp_v10 + 1;
                }
                else {
                  temp_v12[(int)(((unsigned int)(temp_v0 >> 0x1f) >> 0x1b) + temp_v0) >> 5] =
                       temp_v12[(int)(((unsigned int)(temp_v0 >> 0x1f) >> 0x1b) + temp_v0) >> 5] |
                       (1 << ((temp_v0 % 0x20) & 0xffU));
                }
                temp_v0 = (*(romwright_code *)param_2[5])(temp_v11,1);
              } while (temp_v0 != 0x5d);
              if (temp_v9 != 0) {
                temp_v0 = 0;
                do {
                  temp_v1 = temp_v0 + 1;
                  temp_v12[temp_v0] = ~temp_v12[temp_v0];
                  temp_v0 = temp_v1;
                } while (temp_v1 < 8);
              }
              puVar8 = temp_v12;
            }
          }
          else {
            if (-1 < (int)(temp_v5 << 0x1b)) {
              param_2[2] = 1;
            }
            temp_v8 = 1;
          }
          temp_v0 = temp_v8;
          if (param_2[4] != 0) {
            temp_v8 = temp_v10;
            temp_v10 = temp_v0;
            if (param_2[1] * 0x20000000 < 0) {
              temp_v0 = -2;
              FUN_0010144c(0xfffffffe,temp_v16,param_2);
            }
            else {
              temp_v0 = -2;
              FUN_00101368(0xfffffffe,temp_v16,param_2,temp_v14);
            }
          }
          else if ((int)(param_2[1] << 0x1d) < 0) {
            temp_v0 = -2;
            FUN_0010124e(0xfffffffe,temp_v16,param_2);
          }
          else {
            temp_v0 = -2;
            FUN_001010f0(0xfffffffe,temp_v16,param_2,puVar8);
          }
        }
      }
      else {
LAB_001017f6:
        param_2[1] = temp_v5 | 0x40;
        if ((int)(temp_v5 << 0x1e) < 0) {
          temp_v4 = 0x10;
          temp_v0 = -2;
          FUN_00100e62(0xfffffffe,temp_v16,temp_v4,param_2);
        }
        else {
LAB_00101812:
          temp_v4 = 0x10;
LAB_00101816:
          temp_v0 = -2;
          FUN_00100fa6(0xfffffffe,temp_v16,temp_v4,param_2);
        }
      }
LAB_00101922:
      if (temp_v0 < 0) {
        if (temp_v0 != -1) {
          return temp_v13;
        }
        if (temp_v15 != 0) {
          return -1;
        }
        return temp_v13;
      }
      if ((temp_v5 & 1) == 0) {
        temp_v13 = temp_v13 + 1;
      }
      temp_v6 = temp_v6 + temp_v0;
      temp_v15 = 0;
      continue;
    }
    if (temp_v0 == 0x6f) {
      param_2[1] = temp_v5 | 0x40;
      if (-1 >= (int)(temp_v5 << 0x1e)) {
        temp_v4 = 8;
LAB_00101806:
        temp_v0 = -2;
        FUN_00100e62(0xfffffffe,temp_v16,temp_v4,param_2);
      }
      else {
        temp_v4 = 8;
        temp_v0 = -2;
        FUN_00100fa6(0xfffffffe,temp_v16,temp_v4,param_2);
      }
      goto LAB_00101922;
    }
    if (temp_v0 >= 0x70) {
      if (temp_v0 != 0x70) {
        if (temp_v0 == 0x73) goto LAB_00101822;
        if (temp_v0 == 0x75) goto LAB_001017e6;
        temp_v7 = temp_v0 == 0x78;
        if (!temp_v7) goto LAB_001016e4;
        goto LAB_001017f6;
      }
      param_2[1] = temp_v5 & 0xfffff7f1;
      goto LAB_00101812;
    }
    if ((temp_v0 == 0x66) || (temp_v0 == 0x67)) goto LAB_00101774;
    if (temp_v0 == 0x69) {
      param_2[1] = temp_v5 | 0x40;
      if (-1 < (int)(temp_v5 << 0x1e)) {
        temp_v4 = 0;
        goto LAB_00101816;
      }
      temp_v4 = 0;
      goto LAB_00101806;
    }
    if (temp_v0 != 0x6e) {
      return temp_v13;
    }
    puVar4 = (unsigned int *)*param_2;
    *param_2 = (unsigned int)(puVar4 + 1);
    piVar5 = (int *)*puVar4;
    if ((int)(temp_v5 << 0x14) < 0) {
      *(char *)piVar5 = (char)temp_v6;
    }
    else if ((int)(temp_v5 << 0x1c) < 0) {
      *(short *)piVar5 = (short)temp_v6;
    }
    else if ((int)(temp_v5 << 0x1e) < 0) {
      *piVar5 = temp_v6;
      piVar5[1] = temp_v6 >> 0x1f;
    }
    else {
      *piVar5 = temp_v6;
    }
  } while( 1 );
}

} /* extern "C" */
