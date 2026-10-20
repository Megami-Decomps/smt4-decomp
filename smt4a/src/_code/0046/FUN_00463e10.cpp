/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463e10` (_code @ 0x463e10, 0x7d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bd53c(int, int);
int FUN_001d1438(...);
int FUN_004638ac(int, int, int *);
int FUN_004639e4(int);
int aeabi_uidivmod(unsigned int, unsigned int);
int nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam(unsigned short *, unsigned int, unsigned int, unsigned char *);
int rt_memcpy(int, unsigned char *, int);

typedef int romwright_code(...);
/* stack frame of param_6: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_6_stack;

extern unsigned char DAT_00647d80; /* 0x647d80 */

/* Supplied declaration required: FUN_001bd53c. */
/* Supplied declaration required: FUN_001d1438. */
extern int FUN_004616ac(int, unsigned short *, int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004638ac. */
/* Supplied declaration required: FUN_004639e4. */
/* Supplied declaration required: aeabi_uidivmod. */
extern int nw_snd_internal_Util_GetByteBySample(unsigned int, unsigned char);
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam. */
/* Supplied declaration required: rt_memcpy. */


unsigned int
FUN_00463e10(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned short *puVar7;
  int *piVar8;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *pbVar13;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14 [4];
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned short temp_v18 [8];
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  int temp_v24;
  unsigned int temp_v25;
  int temp_v26;
  int iStack_30;
  int temp_v27;
  unsigned int temp_v28;
  
  puVar6 = (unsigned int *)(param_2 + 0x18);
  temp_v17 = 0;
  temp_v15 = 0;
  temp_v21 = 0;
  temp_v26 = param_1;
  iStack_30 = param_2;
  temp_v27 = param_3;
  temp_v28 = param_4;
  if (param_5 != 0 || param_6 != 0) {
    FUN_004638ac(param_1,param_5 + param_6,&temp_v15);
    if (param_1 == 0) {
      *(unsigned int *)(param_2 + 0x1c) = 0;
      return 1;
    }
    temp_v7 = *(int *)(temp_v26 + 0x18);
    temp_v0 = aeabi_uidivmod(*(unsigned int *)(temp_v26 + 0x58),*(unsigned int *)(temp_v7 + 0x1c));
    *(int *)(temp_v26 + 0x38) = temp_v0;
    (**(romwright_code **)(**(int **)(temp_v26 + 0x14) + 0x40))
              (*(int **)(temp_v26 + 0x14),
               *(int *)(temp_v7 + 0x20) * *(int *)(temp_v26 + 0x20) * temp_v0 +
               *(int *)(temp_v26 + 0x44),0);
    if (*(char *)(temp_v26 + 0xb94) == '\x03') {
      temp_v21 = 1;
    }
  }
  temp_v13 = 0;
  temp_v20 = 0;
  temp_v9 = (unsigned int)(param_6 == 0);
  temp_v16 = *(int *)(temp_v26 + 0x58);
  do {
    temp_v0 = temp_v26;
    temp_v7 = *(int *)(temp_v26 + 0x18);
    if (*(int *)(temp_v26 + 0x38) != *(int *)(temp_v26 + 0x3c)) {
      temp_v12 = *(int *)(temp_v7 + 0x1c);
      temp_v10 = *(int *)(temp_v7 + 0x20);
    }
    else {
      temp_v10 = *(int *)(temp_v7 + 0x24);
      temp_v12 = *(int *)(temp_v7 + 0x28);
    }
    aeabi_uidivmod(*(unsigned int *)(temp_v26 + 0x58),*(unsigned int *)(temp_v7 + 0x1c));
    temp_v22 = temp_v4;
    if (*(char *)(temp_v0 + 0xb94) == '\x03') {
      temp_v22 = (unsigned int)(((unsigned long long)temp_v4 * 0x49249249 + 0x49249249) >> 0x22) * 0xe;
    }
    temp_v1 = nw_snd_internal_Util_GetByteBySample(temp_v22,*(unsigned char *)(temp_v0 + 0xb94));
    temp_v7 = temp_v26;
    temp_v12 = temp_v12 - temp_v4;
    if (*(unsigned int *)(temp_v0 + 0x60) < (unsigned int)(temp_v12 + *(int *)(temp_v0 + 0x58))) {
      temp_v12 = *(unsigned int *)(temp_v0 + 0x60) - *(int *)(temp_v0 + 0x58);
    }
    temp_v0 = temp_v10 - temp_v1;
    if ((temp_v9 != 0) && (temp_v17 = 0, temp_v21 != 0)) {
      temp_v2 = (**(romwright_code **)(**(int **)(temp_v26 + 0x14) + 0x54))();
      temp_v3 = FUN_004616ac(temp_v7,temp_v18,&temp_v24,*(unsigned int *)(temp_v7 + 0x38),
                           *(unsigned int *)(temp_v7 + 0x20));
      if (temp_v3 == 0) {
        return 0;
      }
      (**(romwright_code **)(**(int **)(temp_v7 + 0x14) + 0x40))(*(int **)(temp_v7 + 0x14),temp_v2,0);
      temp_v3 = *(int *)(temp_v7 + 0x20);
      if (temp_v3 != 0) {
        temp_v5 = 0;
        puVar7 = temp_v18;
        piVar8 = &temp_v24;
        do {
          temp_v11 = temp_v7 + temp_v5 * 6;
          temp_v3 = temp_v3 - 1;
          *(unsigned short *)(temp_v11 + 0xcfe) = *puVar7;
          temp_v5 = temp_v5 + 1;
          *(short *)(temp_v11 + 0xd00) = (short)*piVar8;
          puVar7 = puVar7 + 1;
          piVar8 = (int *)((int)piVar8 + 2);
        } while (temp_v3 != 0);
      }
    }
    temp_v8 = 0;
    temp_v23 = temp_v26;
    temp_v19 = temp_v27;
    temp_v24 = temp_v20;
    if (*(int *)(temp_v26 + 0x20) != 0) {
      temp_v25 = temp_v21 & temp_v9;
      do {
        if (*(char *)(*(int *)(temp_v23 + 0x10) + 0x52) != '\0') {
          return 0;
        }
        temp_v9 = 2;
        if (*(unsigned int *)(temp_v23 + 0x20) < temp_v8 + 2) {
          temp_v9 = *(unsigned int *)(temp_v23 + 0x20) - temp_v8;
        }
        temp_v7 = (**(romwright_code **)(**(int **)(temp_v23 + 0x14) + 0x24))
                           (*(int **)(temp_v23 + 0x14),&DAT_00647d80,temp_v10 * temp_v9);
        if (temp_v7 != temp_v10 * temp_v9) {
          return 0;
        }
        temp_v6 = 0;
        if (temp_v6 < temp_v9) {
          do {
            pbVar13 = &DAT_00647d80 + temp_v10 * temp_v6;
            temp_v7 = *(int *)(temp_v19 + temp_v8 * 4) + temp_v24;
            rt_memcpy(temp_v7,pbVar13 + temp_v1,temp_v0);
            FUN_001bd53c(temp_v7,temp_v0);
            temp_v7 = temp_v23;
            if (temp_v25 != 0) {
              puVar5 = (unsigned short *)(temp_v23 + temp_v8 * 6 + 0xcfc);
              *puVar5 = (unsigned short)*pbVar13;
              nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam
                        (puVar5,temp_v23 + temp_v8 * 0x2c + 0xb96,temp_v22,pbVar13);
              *(unsigned int *)(temp_v7 + 0xcf8) = *(unsigned int *)(temp_v7 + 0x58);
            }
            temp_v6 = temp_v6 + 1;
            temp_v8 = temp_v8 + 1;
          } while (temp_v6 < temp_v9);
        }
      } while (temp_v8 < *(unsigned int *)(temp_v23 + 0x20));
    }
    temp_v7 = temp_v26;
    temp_v13 = temp_v12 + temp_v13;
    temp_v12 = *(int *)(temp_v26 + 0x58) + temp_v12;
    temp_v20 = temp_v20 + temp_v0;
    *(int *)(temp_v26 + 0x38) = *(int *)(temp_v26 + 0x38) + 1;
    *(int *)(temp_v26 + 0x58) = temp_v12;
    if (temp_v12 == *(int *)(temp_v26 + 0x60)) {
      if (*(char *)(temp_v26 + 0x27) != '\0') {
        temp_v2 = 0;
        *(unsigned int *)(temp_v26 + 0x5c) = 0;
        *(unsigned int *)(temp_v26 + 0x60) = *(unsigned int *)(*(int *)(temp_v26 + 0x18) + 0x10);
        *(unsigned int *)(temp_v26 + 0x58) = temp_v2;
      }
      else {
        if (*(char *)(*(int *)(temp_v26 + 0x18) + 8) != '\0') {
          *(unsigned int *)(temp_v26 + 0x5c) = *(unsigned int *)(*(int *)(temp_v26 + 0x18) + 0xc);
          *(unsigned int *)(temp_v26 + 0x60) = *(unsigned int *)(*(int *)(temp_v26 + 0x18) + 0x10);
          temp_v2 = *(unsigned int *)(temp_v26 + 0x5c);
          *(unsigned int *)(temp_v26 + 0x58) = temp_v2;
          temp_v15 = temp_v15 + 1;
          temp_v7 = *(int *)(temp_v26 + 0x18);
          temp_v0 = aeabi_uidivmod(*(unsigned int *)(temp_v26 + 0x58),*(unsigned int *)(temp_v7 + 0x1c));
          *(int *)(temp_v26 + 0x38) = temp_v0;
          (**(romwright_code **)(**(int **)(temp_v26 + 0x14) + 0x40))
                    (*(int **)(temp_v26 + 0x14),
                     *(int *)(temp_v7 + 0x20) * *(int *)(temp_v26 + 0x20) * temp_v0 +
                     *(int *)(temp_v26 + 0x44),0);
          break;
        }
        if (*(romwright_code **)(temp_v26 + 0x30) == (romwright_code *)0x0) {
          *(unsigned int *)(temp_v7 + 0x58) = *(unsigned int *)(temp_v7 + 0x60);
          *(unsigned char *)(temp_v7 + 0x51) = 1;
          break;
        }
        temp_v14[0] = *(unsigned int *)(temp_v26 + 0x54);
        temp_v0 = (**(romwright_code **)(temp_v26 + 0x30))(temp_v14,*(unsigned int *)(temp_v26 + 0x34));
        if (temp_v0 == 0) {
          *(unsigned int *)(temp_v7 + 0x58) = *(unsigned int *)(temp_v7 + 0x60);
          *(unsigned char *)(temp_v7 + 0x51) = 1;
          break;
        }
        *(unsigned int *)(temp_v7 + 0x54) = temp_v14[0];
        FUN_004639e4(temp_v7);
        *(unsigned int *)(temp_v7 + 0x58) = *(unsigned int *)(temp_v7 + 0x5c);
      }
      temp_v15 = temp_v15 + 1;
      temp_v7 = *(int *)(temp_v26 + 0x18);
      temp_v0 = aeabi_uidivmod(*(unsigned int *)(temp_v26 + 0x58),*(unsigned int *)(temp_v7 + 0x1c));
      *(int *)(temp_v26 + 0x38) = temp_v0;
      (**(romwright_code **)(**(int **)(temp_v26 + 0x14) + 0x40))
                (*(int **)(temp_v26 + 0x14),
                 *(int *)(temp_v7 + 0x20) * *(int *)(temp_v26 + 0x20) * temp_v0 +
                 *(int *)(temp_v26 + 0x44),0);
      break;
    }
    temp_v9 = 0;
  } while (temp_v13 == 0);
  *(unsigned char *)(param_2 + 0x28) = 0;
  if (*(char *)(temp_v26 + 0xb94) == '\x03') {
    if (temp_v16 != 0) {
      if ((*(char *)(*(int *)(temp_v26 + 0x18) + 8) != '\0') &&
         (*(int *)(*(int *)(temp_v26 + 0x18) + 0xc) == temp_v16)) {
        if (*(unsigned int *)(temp_v26 + 0x20) != 0) {
          temp_v9 = *(unsigned int *)(temp_v26 + 0x20) & 1;
          if (temp_v9 == 1) {
            FUN_001d1438(param_2 + 0x2a,temp_v26 + 0xbbc);
          }
          temp_v8 = (unsigned int)(temp_v9 == 1);
          if (temp_v9 < *(unsigned int *)(temp_v26 + 0x20)) {
            do {
              FUN_001d1438((int)puVar6 + temp_v8 * 6 + 0x12,temp_v26 + temp_v8 * 0x2c + 0xbbc);
              FUN_001d1438((int)puVar6 + (temp_v8 + 1) * 6 + 0x12,
                           temp_v26 + (temp_v8 + 1) * 0x2c + 0xbbc);
              temp_v9 = temp_v9 + 2;
              temp_v8 = temp_v8 + 2;
            } while (temp_v9 < *(unsigned int *)(temp_v26 + 0x20));
          }
        }
      }
      else {
        if (*(int *)(temp_v26 + 0xcf8) != temp_v16) goto LAB_00464588;
        if (*(unsigned int *)(temp_v26 + 0x20) != 0) {
          temp_v9 = *(unsigned int *)(temp_v26 + 0x20) & 1;
          if (temp_v9 == 1) {
            FUN_001d1438(param_2 + 0x2a,temp_v26 + 0xcfc);
          }
          temp_v8 = (unsigned int)(temp_v9 == 1);
          if (temp_v9 < *(unsigned int *)(temp_v26 + 0x20)) {
            do {
              FUN_001d1438((int)puVar6 + temp_v8 * 6 + 0x12,temp_v26 + temp_v8 * 6 + 0xcfc);
              FUN_001d1438((int)puVar6 + (temp_v8 + 1) * 6 + 0x12,temp_v26 + (temp_v8 + 1) * 6 + 0xcfc
                          );
              temp_v9 = temp_v9 + 2;
              temp_v8 = temp_v8 + 2;
            } while (temp_v9 < *(unsigned int *)(temp_v26 + 0x20));
          }
        }
      }
    }
    else if (*(unsigned int *)(temp_v26 + 0x20) != 0) {
      temp_v9 = *(unsigned int *)(temp_v26 + 0x20) & 1;
      if (temp_v9 == 1) {
        FUN_001d1438(param_2 + 0x2a,temp_v26 + 0xbb6);
      }
      temp_v8 = (unsigned int)(temp_v9 == 1);
      if (temp_v9 < *(unsigned int *)(temp_v26 + 0x20)) {
        do {
          FUN_001d1438((int)puVar6 + temp_v8 * 6 + 0x12,temp_v26 + temp_v8 * 0x2c + 0xbb6);
          FUN_001d1438((int)puVar6 + (temp_v8 + 1) * 6 + 0x12,temp_v26 + (temp_v8 + 1) * 0x2c + 0xbb6)
          ;
          temp_v9 = temp_v9 + 2;
          temp_v8 = temp_v8 + 2;
        } while (temp_v9 < *(unsigned int *)(temp_v26 + 0x20));
      }
    }
    *(unsigned char *)(param_2 + 0x28) = 1;
  }
LAB_00464588:
  *puVar6 = temp_v28;
  *(int *)(param_2 + 0x1c) = temp_v13;
  *(int *)(param_2 + 0x20) = temp_v16;
  *(unsigned int *)(param_2 + 0x24) = temp_v17;
  *(int *)(param_2 + 0x5c) = temp_v15;
  *(unsigned char *)(param_2 + 0x60) = *(unsigned char *)(temp_v26 + 0x51);
  return 1;
}

} /* extern "C" */
