/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022899c` (_code @ 0x22899c, 0x6e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int btlGetPassiveAffinityOverride(...);
int btlEntryHasSkillCategory(unsigned int *, unsigned int);
int selectionCopySupportedValue(unsigned int, unsigned int *);
int FUN_0022abe0(...);
int FUN_00246134(unsigned int, unsigned int, int, unsigned int);
int FUN_002463e8(...);
int FUN_00247478(...);
int FUN_0027da30(unsigned int *, unsigned int);
int btlMainFindEntryByListedId(...);
int passiveSkillLookupRecord(void);
int btlGetMainState(void);
int dataTable40FindById(void);
int dataTable08Sub1GetRecord(void);
int SBORROW4(...);
int VectorSignedToFloat(...);

typedef struct fn_0022899c_arg2 fn_0022899c_arg2;
struct fn_0022899c_arg2 {
    unsigned char pad_0x0[0x64];
    ushort field_0x64; /* +0x64 */
    ushort field_0x66; /* +0x66 */
    byte field_0x68; /* +0x68 */
    byte field_0x69; /* +0x69 */
    byte field_0x6a; /* +0x6a */
};

/* stack frame of param_6: 18 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned short spF0; /* 0xf0: local_f0 */
    unsigned short spFA; /* 0xfa: local_fa */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: btlGetPassiveAffinityOverride. */
/* Supplied declaration required: btlEntryHasSkillCategory. */
/* Supplied declaration required: selectionCopySupportedValue. */
/* Supplied declaration required: FUN_0022abe0. */
extern int randRange(unsigned int);
extern unsigned short FUN_00245cc0(unsigned int);
/* Supplied declaration required: FUN_00246134. */
/* Supplied declaration required: FUN_002463e8. */
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: passiveSkillLookupRecord. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: dataTable40FindById. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
/* Supplied declaration required: memClear. */


unsigned int
FUN_0022899c(int param_1,unsigned int param_2,fn_0022899c_arg2 *param_3,unsigned int param_4,
            unsigned int param_5,int param_6)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [2];
  short temp_v23;
  short temp_v24;
  unsigned int temp_v25 [19];
  unsigned int *temp_v26;
  unsigned int *temp_v27;
  unsigned short temp_v28 [10];
  unsigned int *temp_v29;
  int temp_v30;
  int iStack_34;
  unsigned int uStack_30;
  fn_0022899c_arg2 *pfStack_2c;
  unsigned int temp_v31;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  pfStack_2c = param_3;
  temp_v31 = param_4;
  temp_v27 = (unsigned int *)btlGetMainState();
  temp_v30 = 0;
  dataTable40FindById();
  if (param_1 != 0) {
    switch(*(unsigned char *)(param_1 + 0x23)) {
    case 0:
      temp_v30 = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
      return 0;
    }
  }
  dataTable08Sub1GetRecord();
  if (param_3 != (fn_0022899c_arg2 *)0x0) {
    temp_v2 = param_3->field_0x64;
    temp_v12 = temp_v2 == 0;
    if (temp_v12) {
      temp_v2 = param_3->field_0x66;
    }
    if (!temp_v12 || temp_v2 != 0) {
      return 0;
    }
    temp_v0 = param_3->field_0x68;
    temp_v12 = temp_v0 == 0;
    if (temp_v12) {
      temp_v0 = param_3->field_0x69;
    }
    if (!temp_v12 || temp_v0 != 0) {
      return 0;
    }
    if ((param_3->field_0x6a & 0x7f) != 0) {
      return 0;
    }
  }
  puVar5 = temp_v27;
  FUN_0027da30(temp_v27,temp_v31);
  puVar6 = temp_v27;
  temp_v29 = puVar5;
  FUN_0027da30(temp_v27,param_5);
  puVar5 = temp_v27;
  btlMainFindEntryByListedId(temp_v27,temp_v31);
  puVar7 = temp_v27;
  temp_v26 = puVar5;
  btlMainFindEntryByListedId(temp_v27,param_5);
  temp_v5 = temp_v31;
  temp_v4 = btlGetMainState();
  btlMainFindEntryByListedId(temp_v4,temp_v5);
  temp_v5 = btlGetMainState();
  FUN_00247478(&temp_v16,temp_v5,temp_v4);
  temp_v9 = temp_v16 >> 0x10;
  if (temp_v9 < 2) {
    temp_v30 = 1;
  }
  temp_v6 = param_5;
  FUN_00246134(param_5,temp_v9,(int)(short)temp_v17,0xffffffff);
  if (((temp_v6 & 0x80000000) != 0) && ((*(unsigned short *)((int)puVar6 + 0xfa) & 0x10) == 0)) {
    btlGetMainState();
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0;
    temp_v20 = 0;
    FUN_0022abe0(puVar7,&temp_v16);
    temp_v10 = 0;
    do {
      temp_v7 = (unsigned int)*(unsigned short *)((int)&temp_v16 + temp_v10 * 2);
      if (temp_v7 != 0) {
        passiveSkillLookupRecord();
        temp_v1 = '\0';
        if (temp_v7 != 0) {
          temp_v1 = *(char *)(temp_v7 + 0x33);
        }
        if (temp_v7 != 0 && temp_v1 != '\0') {
          if (*(short *)((int)puVar7 + 0x1c6) != 0) {
            return 2;
          }
          selectionCopySupportedValue(temp_v9,&temp_v16);
          puVar5 = temp_v26;
          btlEntryHasSkillCategory(temp_v26,temp_v16 & 0xff);
          if (puVar5 != (unsigned int *)0x0) {
            return 2;
          }
          break;
        }
      }
      temp_v10 = temp_v10 + 1;
      if (temp_v10 >= 9) {
        return 2;
      }
    } while( 1 );
  }
  if (param_1 != 0) {
    temp_v0 = *(unsigned char *)(param_1 + 0x23);
    if (temp_v0 >= 2) {
      if (temp_v0 == 2) {
        reinterpret_cast<int>(memClear(reinterpret_cast<void*>(&temp_v16), 0x48));
        reinterpret_cast<int>(memClear(reinterpret_cast<void*>(temp_v25), 0x48));
        temp_v1 = *(char *)(param_1 + 0x2f);
        if (temp_v1 == '\x01') {
          temp_v16 = temp_v9;
          temp_v10 = 1;
        }
        else if (!(temp_v1 == '\x13' || temp_v1 == '\x14')) {
          if (temp_v1 != '\x16') {
            temp_v16 = FUN_002463e8();
            temp_v10 = 1;
          }
          else {
            temp_v16 = FUN_002463e8(5);
            temp_v17 = FUN_002463e8(6);
            temp_v18 = FUN_002463e8(7);
            temp_v19 = FUN_002463e8(8);
            temp_v20 = FUN_002463e8(3);
            temp_v10 = 5;
          }
        }
        else {
          temp_v16 = FUN_002463e8(5);
          temp_v17 = FUN_002463e8(6);
          temp_v18 = FUN_002463e8(7);
          temp_v19 = FUN_002463e8(8);
          temp_v20 = FUN_002463e8(9);
          temp_v10 = 5;
        }
        temp_v8 = 0;
LAB_00228c48:
        temp_v9 = param_5;
        FUN_00246134(param_5,(&temp_v16)[temp_v8],*(unsigned char *)(param_1 + 0x23),0xffffffff);
        temp_v25[temp_v8] = temp_v9;
        temp_v9 = param_5;
        btlGetPassiveAffinityOverride(param_5,(&temp_v16)[temp_v8]);
        temp_v7 = temp_v25[temp_v8];
        temp_v25[temp_v8] = temp_v9 | temp_v7;
        if ((((temp_v9 | temp_v7) & 0x80000000) != 0) &&
           ((*(unsigned short *)((int)puVar6 + 0xfa) & 0x10) == 0)) {
          btlGetMainState();
          temp_v28[0] = 0;
          temp_v28[1] = 0;
          temp_v28[2] = 0;
          temp_v28[3] = 0;
          temp_v28[4] = 0;
          temp_v28[5] = 0;
          temp_v28[6] = 0;
          temp_v28[7] = 0;
          temp_v28[8] = 0;
          temp_v28[9] = 0;
          FUN_0022abe0(puVar7,temp_v28);
          temp_v11 = 0;
          do {
            temp_v9 = (unsigned int)temp_v28[temp_v11];
            if (temp_v9 != 0) {
              passiveSkillLookupRecord();
              temp_v1 = '\0';
              if (temp_v9 != 0) {
                temp_v1 = *(char *)(temp_v9 + 0x33);
              }
              if (temp_v9 != 0 && temp_v1 != '\0') goto LAB_00228d78;
            }
            temp_v11 = temp_v11 + 1;
            if (temp_v11 >= 9) {
              return 2;
            }
          } while( 1 );
        }
        goto LAB_00228da0;
      }
      if (((temp_v0 == 8) &&
          (temp_v10 = randRange(99), temp_v10 < (int)(unsigned int)*(unsigned char *)((int)puVar6 + 0x14a))) &&
         (((1 << *(signed char *)(param_1 + 0x44)) & 0xffffU & (unsigned int)*(unsigned short *)((int)puVar6 + 0xfa)) != 0
         )) {
        return 5;
      }
    }
    else if (*(short *)(param_1 + 0x36) < 0) {
      return 2;
    }
  }
LAB_00228de4:
  puVar5 = temp_v27;
  btlMainFindEntryByListedId(temp_v27,temp_v31);
  if ((*puVar5 & 0x1000) == 0) {
    if ((temp_v27[0x38] & 0x20000000) != 0) {
      if (((temp_v6 & 0x400000) != 0) && (param_6 == 0)) {
        *puVar7 = *puVar7 | 0x40000000;
      }
    }
    else if ((temp_v27[0x1128] & 0x40000) != 0) {
      if (((temp_v6 & 0x400000) != 0) && (param_6 == 0)) {
        *puVar7 = *puVar7 | 0x40000000;
      }
    }
    else {
      if (temp_v30 != 0) {
        FUN_00247478(temp_v22,temp_v27,temp_v26);
        temp_v5 = temp_v31;
        temp_v14 = (float)VectorSignedToFloat((int)(short)temp_v29[0x3e] - (int)(short)puVar6[0x3e],
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (int)temp_v24 + (int)(temp_v14 * 0.25f) + 1;
        if (temp_v10 < 1) {
          temp_v10 = 1;
        }
        else if (temp_v10 >= 100) {
          temp_v10 = 99;
        }
        temp_v15 = 0x3f800000;
        temp_v8 = btlGetMainState();
        btlMainFindEntryByListedId(temp_v8,temp_v5);
        temp_v14 = (float)temp_v15;
        if (temp_v8 != 0) {
          temp_v17 = 0;
          temp_v18 = 0;
          temp_v19 = 0;
          temp_v20 = 0;
          temp_v21 = 0;
          FUN_0022abe0();
          temp_v11 = 0;
          temp_v8 = 0;
          do {
            temp_v9 = (unsigned int)*(unsigned short *)((int)&temp_v17 + temp_v8 * 2);
            if ((temp_v9 != 0) && (passiveSkillLookupRecord(), temp_v9 != 0)) {
              temp_v11 = temp_v11 + (unsigned int)*(unsigned char *)(temp_v9 + 0x30);
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 9);
          temp_v14 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (float)temp_v15 + temp_v14 * 0.01f;
        }
        temp_v10 = (temp_v10 * (int)(temp_v14 * 100.0f)) / 100;
        if ((*(unsigned short *)((int)temp_v29 + 0xfa) & 0x10) != 0) {
          if ((*(unsigned short *)((int)puVar6 + 0xfa) & 0x10) == 0) {
            if ((short)temp_v29[0x53] == 1) {
              if (temp_v23 != 1) {
                temp_v13 = SBORROW4(temp_v10,0x5f);
                temp_v8 = temp_v10 - 0x5f;
                temp_v12 = temp_v10 == 0x5f;
                if (temp_v10 < 0x5f) {
                  temp_v10 = 0x5f;
                }
                else {
                  temp_v13 = SBORROW4(temp_v10,99);
                  temp_v8 = temp_v10 - 99;
                  temp_v12 = temp_v10 == 99;
                }
                if (!temp_v12 && temp_v8 < 0 == temp_v13) {
                  temp_v10 = 99;
                }
              }
              else {
                temp_v13 = SBORROW4(temp_v10,0x46);
                temp_v8 = temp_v10 - 0x46;
                temp_v12 = temp_v10 == 0x46;
                if (temp_v10 < 0x46) {
                  temp_v10 = 0x46;
                }
                else {
                  temp_v13 = SBORROW4(temp_v10,99);
                  temp_v8 = temp_v10 - 99;
                  temp_v12 = temp_v10 == 99;
                }
                if (!temp_v12 && temp_v8 < 0 == temp_v13) {
                  temp_v10 = 99;
                }
              }
            }
          }
          else {
            temp_v10 = -1;
          }
        }
        else if ((*(unsigned short *)((int)puVar6 + 0xfa) & 0x10) != 0) {
          temp_v10 = -1;
        }
        temp_v8 = randRange(99);
        temp_v5 = temp_v31;
        if (temp_v8 <= temp_v10) {
          temp_v5 = 1;
          return temp_v5;
        }
        temp_v3 = FUN_00245cc0(0x1a);
        temp_v10 = btlGetMainState();
        btlMainFindEntryByListedId(temp_v10,temp_v5);
        if (temp_v10 != 0) {
          *(unsigned short *)(temp_v10 + 0xa6) = temp_v3;
        }
      }
      if (((temp_v6 & 0x400000) != 0) && (param_6 == 0)) {
        *puVar7 = *puVar7 | 0x40000000;
      }
    }
    temp_v5 = 0;
    if ((temp_v6 & 0x80000) != 0) {
      temp_v5 = 3;
    }
  }
  else {
    temp_v5 = 1;
  }
  return temp_v5;
LAB_00228d78:
  if (*(short *)((int)puVar7 + 0x1c6) != 0) {
    return 2;
  }
LAB_00228da0:
  temp_v8 = temp_v8 + 1;
  if (temp_v10 <= temp_v8) goto LAB_00228de4;
  goto LAB_00228c48;
}

} /* extern "C" */
