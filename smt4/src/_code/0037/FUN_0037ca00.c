/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ca00` (_code @ 0x37ca00, 0x7b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_5_stack;

extern unsigned char DAT_004eb380; /* 0x4eb380 */

/* Supplied declaration required: FUN_002a4b0c. */
extern int FUN_0037bbe4(int, unsigned short *, unsigned short *, unsigned int, unsigned int);
/* Supplied declaration required: aeabi_uidivmod. */
extern int nw_snd_internal_Util_GetByteBySample(unsigned int, unsigned char);
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_0037ca00(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  unsigned short *puVar6;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *pbVar12;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12 [3];
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned short temp_v21 [8];
  unsigned short temp_v22 [10];
  int iStack_34;
  int temp_v23;
  int temp_v24;
  unsigned int temp_v25;
  
  temp_v18 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  iStack_34 = param_1;
  temp_v23 = param_2;
  temp_v24 = param_3;
  temp_v25 = param_4;
  if (param_5 != 0) {
    if (*(char *)(param_1 + 0xa90) == '\x03') {
      param_5 = (unsigned int)(((unsigned long long)param_5 * 0x49249249 + 0x49249249) >> 0x22) * 0xe;
    }
    temp_v2 = *(unsigned int *)(param_1 + 0x5c);
    temp_v5 = param_5;
    if (temp_v2 <= *(int *)(param_1 + 0x54) + param_5) {
      do {
        temp_v5 = temp_v5 - (temp_v2 - *(int *)(param_1 + 0x54));
        if (*(char *)(*(int *)(param_1 + 0x18) + 8) != '\0') {
          *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc);
          *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
          *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x58);
        }
        else {
          if (*(romwright_code **)(param_1 + 0xc24) == (romwright_code *)0x0) {
            *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x5c);
            *(unsigned char *)(param_1 + 0x4d) = 1;
            *(unsigned int *)(temp_v23 + 0x20) = 0;
            return 1;
          }
          temp_v12[0] = *(unsigned int *)(param_1 + 0x50);
          temp_v0 = (**(romwright_code **)(param_1 + 0xc24))(temp_v12,*(unsigned int *)(param_1 + 0xc28));
          if (temp_v0 == 0) {
            *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x5c);
            *(unsigned char *)(param_1 + 0x4d) = 1;
            *(unsigned int *)(temp_v23 + 0x20) = 0;
            return 1;
          }
          *(unsigned int *)(param_1 + 0x50) = temp_v12[0];
          *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
          *(unsigned int *)(param_1 + 0x58) = 0;
          *(unsigned int *)(param_1 + 0x54) = 0;
        }
        temp_v17 = temp_v17 + 1;
        temp_v2 = *(unsigned int *)(param_1 + 0x5c);
      } while (temp_v2 <= *(int *)(param_1 + 0x54) + temp_v5);
    }
    temp_v0 = *(int *)(param_1 + 0x54) + temp_v5;
    *(int *)(param_1 + 0x54) = temp_v0;
    temp_v6 = *(int *)(param_1 + 0x18);
    temp_v0 = aeabi_uidivmod(temp_v0,*(unsigned int *)(temp_v6 + 0x14));
    *(int *)(param_1 + 0x34) = temp_v0;
    (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))
              (*(int **)(param_1 + 0x14),
               *(int *)(temp_v6 + 0x18) * *(int *)(param_1 + 0x20) * temp_v0 + *(int *)(param_1 + 0x40),
               0);
    if (*(char *)(param_1 + 0xa90) == '\x03') {
      temp_v16 = 1;
    }
  }
  temp_v0 = 0;
  temp_v15 = 0;
  temp_v19 = *(int *)(param_1 + 0x54);
  temp_v5 = 1;
  while( 1 ) {
    temp_v6 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x38)) {
      temp_v7 = *(int *)(temp_v6 + 0x14);
      temp_v9 = *(int *)(temp_v6 + 0x18);
    }
    else {
      temp_v7 = *(int *)(temp_v6 + 0x20);
      temp_v9 = *(int *)(temp_v6 + 0x1c);
    }
    aeabi_uidivmod(*(unsigned int *)(param_1 + 0x54),*(unsigned int *)(temp_v6 + 0x14));
    temp_v2 = temp_v3;
    if (*(char *)(param_1 + 0xa90) == '\x03') {
      temp_v2 = (unsigned int)(((unsigned long long)temp_v3 * 0x49249249 + 0x49249249) >> 0x22) * 0xe;
    }
    temp_v11 = temp_v3;
    if ((temp_v5 != 0) && (temp_v18 = temp_v3 - temp_v2, temp_v16 != 0)) {
      temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x54))();
      temp_v6 = FUN_0037bbe4(param_1,temp_v21,temp_v22,*(unsigned int *)(param_1 + 0x34),
                           *(unsigned int *)(param_1 + 0x20));
      if (temp_v6 == 0) {
        return 0;
      }
      (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),temp_v1,0);
      temp_v6 = *(int *)(param_1 + 0x20);
      if (temp_v6 != 0) {
        temp_v4 = 0;
        puVar5 = temp_v21;
        puVar6 = temp_v22;
        do {
          temp_v6 = temp_v6 - 1;
          temp_v10 = param_1 + temp_v4 * 6;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)(temp_v10 + 0xbf4) = *puVar5;
          *(unsigned short *)(temp_v10 + 0xbf6) = *puVar6;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (temp_v6 != 0);
      }
    }
    temp_v6 = nw_snd_internal_Util_GetByteBySample(temp_v2,*(unsigned char *)(param_1 + 0xa90));
    temp_v4 = temp_v9 - temp_v6;
    temp_v2 = 0;
    temp_v14 = temp_v7 - temp_v11;
    if (*(int *)(param_1 + 0x20) != 0) {
      temp_v20 = temp_v16 & temp_v5;
      do {
        if (*(char *)(*(int *)(param_1 + 0x10) + 0x52) != '\0') {
          return 0;
        }
        temp_v5 = 2;
        if (*(unsigned int *)(param_1 + 0x20) < temp_v2 + 2) {
          temp_v5 = *(unsigned int *)(param_1 + 0x20) - temp_v2;
        }
        temp_v7 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x24))
                           (*(int **)(param_1 + 0x14),&DAT_004eb380,temp_v9 * temp_v5);
        if (temp_v7 != temp_v9 * temp_v5) {
          return 0;
        }
        temp_v8 = 0;
        if (temp_v8 < temp_v5) {
          do {
            pbVar12 = &DAT_004eb380 + temp_v9 * temp_v8;
            temp_v13 = *(int *)(temp_v24 + temp_v2 * 4) + temp_v0;
            rt_memcpy(temp_v13,pbVar12 + temp_v6,temp_v4);
            FUN_002a4b0c(temp_v13,temp_v4);
            if (temp_v20 != 0) {
              puVar3 = (unsigned short *)(param_1 + temp_v2 * 6 + 0xbf2);
              *puVar3 = (unsigned short)*pbVar12;
              nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam
                        (puVar3,param_1 + temp_v2 * 0x2c + 0xa92,temp_v11,pbVar12);
            }
            temp_v8 = temp_v8 + 1;
            temp_v2 = temp_v2 + 1;
          } while (temp_v8 < temp_v5);
        }
      } while (temp_v2 < *(unsigned int *)(param_1 + 0x20));
    }
    temp_v15 = temp_v15 + temp_v14;
    temp_v6 = *(int *)(param_1 + 0x54) + temp_v14;
    *(int *)(param_1 + 0x54) = temp_v6;
    temp_v0 = temp_v0 + temp_v4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    if (temp_v6 == *(int *)(param_1 + 0x5c)) break;
    temp_v5 = 0;
    if (temp_v15 != 0) {
LAB_0037cf18:
      if (*(char *)(param_1 + 0xa90) != '\x03') {
        if (*(unsigned int *)(param_1 + 0x20) != 0) {
          temp_v5 = *(unsigned int *)(param_1 + 0x20) & 1;
          if (temp_v5 == 1) {
            *(unsigned int *)(temp_v23 + 0x24) = 0;
          }
          if (temp_v5 < *(unsigned int *)(param_1 + 0x20)) {
            do {
              temp_v0 = temp_v23 + temp_v5 * 4;
              temp_v5 = temp_v5 + 2;
              *(unsigned int *)(temp_v0 + 0x24) = 0;
              *(unsigned int *)(temp_v0 + 0x28) = 0;
            } while (temp_v5 < *(unsigned int *)(param_1 + 0x20));
          }
        }
      }
      else if (temp_v19 != 0) {
        if ((*(char *)(*(int *)(param_1 + 0x18) + 8) != '\0') &&
           (*(int *)(*(int *)(param_1 + 0x18) + 0xc) == temp_v19)) {
          if (*(unsigned int *)(param_1 + 0x20) != 0) {
            temp_v5 = *(unsigned int *)(param_1 + 0x20) & 1;
            if (temp_v5 == 1) {
              *(int *)(temp_v23 + 0x24) = param_1 + 0xab8;
            }
            if (temp_v5 < *(unsigned int *)(param_1 + 0x20)) {
              do {
                temp_v6 = temp_v23 + temp_v5 * 4;
                temp_v2 = temp_v5 + 2;
                temp_v0 = param_1 + temp_v5 * 0x2c;
                *(int *)(temp_v6 + 0x24) = temp_v0 + 0xab8;
                *(int *)(temp_v6 + 0x28) = temp_v0 + 0xae4;
                temp_v5 = temp_v2;
              } while (temp_v2 < *(unsigned int *)(param_1 + 0x20));
            }
          }
        }
        else {
          temp_v5 = *(unsigned int *)(param_1 + 0x20);
          if (param_5 != 0) {
            if (temp_v5 != 0) {
              temp_v5 = temp_v5 & 1;
              if (temp_v5 == 1) {
                *(int *)(temp_v23 + 0x24) = param_1 + 0xbf2;
              }
              if (temp_v5 < *(unsigned int *)(param_1 + 0x20)) {
                do {
                  temp_v6 = param_1 + temp_v5 * 6;
                  temp_v0 = temp_v23 + temp_v5 * 4;
                  *(int *)(temp_v0 + 0x24) = temp_v6 + 0xbf2;
                  *(int *)(temp_v0 + 0x28) = temp_v6 + 0xbf8;
                  temp_v5 = temp_v5 + 2;
                } while (temp_v5 < *(unsigned int *)(param_1 + 0x20));
              }
            }
          }
          else if (temp_v5 != 0) {
            temp_v5 = temp_v5 & 1;
            if (temp_v5 == 1) {
              *(unsigned int *)(temp_v23 + 0x24) = 0;
            }
            if (temp_v5 < *(unsigned int *)(param_1 + 0x20)) {
              do {
                temp_v0 = temp_v23 + temp_v5 * 4;
                temp_v5 = temp_v5 + 2;
                *(unsigned int *)(temp_v0 + 0x24) = 0;
                *(unsigned int *)(temp_v0 + 0x28) = 0;
              } while (temp_v5 < *(unsigned int *)(param_1 + 0x20));
            }
          }
        }
      }
      else if (*(unsigned int *)(param_1 + 0x20) != 0) {
        temp_v5 = *(unsigned int *)(param_1 + 0x20) & 1;
        if (temp_v5 == 1) {
          *(int *)(temp_v23 + 0x24) = param_1 + 0xab2;
        }
        if (temp_v5 < *(unsigned int *)(param_1 + 0x20)) {
          do {
            temp_v6 = param_1 + temp_v5 * 0x2c;
            temp_v0 = temp_v23 + temp_v5 * 4;
            *(int *)(temp_v0 + 0x24) = temp_v6 + 0xab2;
            *(int *)(temp_v0 + 0x28) = temp_v6 + 0xade;
            temp_v5 = temp_v5 + 2;
          } while (temp_v5 < *(unsigned int *)(param_1 + 0x20));
        }
      }
      *(unsigned int *)(temp_v23 + 0x18) = temp_v25;
      *(int *)(temp_v23 + 0x20) = temp_v15;
      *(int *)(temp_v23 + 0x1c) = temp_v19;
      *(int *)(temp_v23 + 0x44) = temp_v18;
      *(int *)(temp_v23 + 0x48) = temp_v17;
      *(unsigned char *)(temp_v23 + 0x4c) = *(unsigned char *)(param_1 + 0x4d);
      return 1;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 8) != '\0') {
    *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc);
    *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
    *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x58);
LAB_0037cea8:
    temp_v17 = temp_v17 + 1;
    temp_v6 = *(int *)(param_1 + 0x18);
    temp_v0 = aeabi_uidivmod(*(unsigned int *)(param_1 + 0x54),*(unsigned int *)(temp_v6 + 0x14));
    *(int *)(param_1 + 0x34) = temp_v0;
    (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0x40))
              (*(int **)(param_1 + 0x14),
               *(int *)(temp_v6 + 0x18) * *(int *)(param_1 + 0x20) * temp_v0 + *(int *)(param_1 + 0x40),
               0);
  }
  else {
    if (*(romwright_code **)(param_1 + 0xc24) != (romwright_code *)0x0) {
      temp_v11 = *(unsigned int *)(param_1 + 0x50);
      temp_v0 = (**(romwright_code **)(param_1 + 0xc24))(&temp_v11,*(unsigned int *)(param_1 + 0xc28));
      if (temp_v0 != 0) {
        *(unsigned int *)(param_1 + 0x50) = temp_v11;
        temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
        *(unsigned int *)(param_1 + 0x58) = 0;
        *(unsigned int *)(param_1 + 0x5c) = temp_v1;
        *(unsigned int *)(param_1 + 0x54) = 0;
        goto LAB_0037cea8;
      }
    }
    *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x5c);
    *(unsigned char *)(param_1 + 0x4d) = 1;
  }
  goto LAB_0037cf18;
}
