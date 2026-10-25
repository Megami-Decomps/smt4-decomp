/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228220` (_code @ 0x228220, 0x5e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int FUN_0022a690(int);
int btlGetPassiveAffinityOverride(unsigned int, unsigned int);
int btlEntryHasSkillCategory(unsigned int *, unsigned int);
int selectionCopySupportedValue(int, unsigned int [3]);
int FUN_0023ea94(void);
int randRange(int);
int FUN_00246134(...);
int FUN_002463e8(...);
int FUN_00247478(unsigned char [2], unsigned int, unsigned int *);
int btlMainFindEntryByListedId(unsigned int *, unsigned int);
int btlGetMainState(void);
int dataTable40FindById(void);
int VectorSignedToFloat(...);

/* stack frame of param_8: 13 slot(s), 46 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
} param_8_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022a690. */
/* Supplied declaration required: btlGetPassiveAffinityOverride. */
/* Supplied declaration required: btlEntryHasSkillCategory. */
/* Supplied declaration required: selectionCopySupportedValue. */
/* Supplied declaration required: FUN_0023ea94. */
/* Supplied declaration required: randRange. */
/* Supplied declaration required: FUN_00246134. */
/* Supplied declaration required: FUN_002463e8. */
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: dataTable40FindById. */
/* Supplied declaration required: memClear. */


void FUN_00228220(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,int param_7,unsigned char *param_8)

{
/* irregular: 2 unstructured edge(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v5;
  unsigned int *puVar9;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10 [4];
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13 [18];
  unsigned char temp_v14 [2];
  unsigned short temp_v15;
  short temp_v16;
  short temp_v17;
  unsigned int temp_v18 [3];
  int iStack_34;
  unsigned int uStack_30;
  int temp_v19;
  unsigned int temp_v20;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  temp_v19 = param_3;
  temp_v20 = param_4;
  temp_v2 = btlGetMainState();
  *param_8 = 0;
  switch(temp_v19) {
  case 0xb:
    break;
  default:
    if (param_1 != 0xffff) {
      temp_v3 = param_1;
      dataTable40FindById();
      if (param_1 >= 1) {
        if (param_6 != 0) {
          temp_v0 = *(char *)(temp_v3 + 0x23);
          if ((temp_v0 == '\a' || temp_v0 == '\t') || temp_v0 == '\v') {
            return;
          }
          temp_v4 = (*(unsigned int *)(temp_v3 + 0x28) & 0x1ff) >> 5;
          temp_v8 = temp_v4 != 7;
          temp_v9 = temp_v4 != 8;
          if (temp_v8 && temp_v9) {
            temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + 0x2f);
          }
          if ((!temp_v8 || !temp_v9) || temp_v4 == 4) {
            return;
          }
        }
        temp_v0 = *(char *)(temp_v3 + 0x23);
        if (temp_v0 == '\a' || temp_v0 == '\t') {
          break;
        }
        if (temp_v0 == '\v') {
          return;
        }
        if ((*(unsigned short *)(temp_v3 + 0x36) & 0x1000) != 0) {
          return;
        }
        if (*(char *)(temp_v3 + 0x4a) != '\0') {
          return;
        }
        if (*(char *)(temp_v3 + 0x56) != '\0') {
          return;
        }
        if ((*(unsigned short *)(temp_v3 + 0x36) & 0x4000) != 0) {
          return;
        }
        if ((temp_v3 == 0) || ((*(unsigned int *)(temp_v3 + 0x38) & 0x7f0000) == 0)) {
          if ((*(unsigned int *)(temp_v2 + 0x44a8) & 0x100) != 0) {
            return;
          }
        }
      }
      else if ((*(unsigned int *)(temp_v2 + 0x44a8) & 0x100) != 0) {
        return;
      }
      if ((*(unsigned int *)(temp_v2 + 0x44a8) & 0x80) != 0) {
        return;
      }
      puVar6 = (unsigned int *)btlGetMainState();
      btlMainFindEntryByListedId(puVar6,temp_v20);
      puVar7 = (unsigned int *)btlGetMainState();
      btlMainFindEntryByListedId(puVar7,param_5);
      temp_v5 = btlGetMainState();
      FUN_00247478(temp_v14,temp_v5,puVar6);
      temp_v1 = temp_v15;
      if ((param_1 < 1) && (temp_v19 != 1)) {
        return;
      }
      VectorSignedToFloat((int)temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v16 == 3 || temp_v16 == 4) {
        return;
      }
      temp_v4 = param_5;
      FUN_00246134();
      selectionCopySupportedValue(temp_v1,temp_v18);
      puVar9 = puVar6;
      btlEntryHasSkillCategory(puVar6,temp_v18[0] & 0xff);
      if (puVar9 != (unsigned int *)0x0) {
        if ((temp_v4 & 0xd0000) != 0) {
          if (param_7 == 0) {
            *(unsigned int *)(temp_v2 + 0x48b8) = 1;
          }
          *param_8 = 1;
        }
        if ((temp_v4 & 0x20000) != 0) {
          if ((temp_v4 & 0x200000) == 0) {
            return;
          }
          if (param_7 == 0) {
            *puVar7 = *puVar7 | 0x80000000;
            return;
          }
          return;
        }
      }
      else {
        if ((temp_v4 & 0x40000) != 0) {
          return;
        }
        if ((temp_v4 & 0x20000) != 0) {
          if ((temp_v4 & 0x200000) == 0) {
            return;
          }
          if (param_7 == 0) {
            *puVar7 = *puVar7 | 0x80000000;
            return;
          }
          return;
        }
        if ((temp_v4 & 0x10000) != 0) {
          return;
        }
      }
      if (temp_v3 != 0) {
        if (*(char *)(temp_v3 + 0x23) == '\x02') {
          reinterpret_cast<int>(memClear(reinterpret_cast<void*>(temp_v10), 0x48));
          reinterpret_cast<int>(memClear(reinterpret_cast<void*>(temp_v13), 0x48));
          temp_v0 = *(char *)(temp_v3 + 0x2f);
          if (temp_v0 != '\x01') {
            if (!(temp_v0 == '\x13' || temp_v0 == '\x14')) {
              if (temp_v0 != '\x16') {
                temp_v10[0] = FUN_002463e8();
                temp_v2 = 1;
              }
              else {
                temp_v10[0] = FUN_002463e8(5);
                temp_v10[1] = FUN_002463e8(6);
                temp_v10[2] = FUN_002463e8(7);
                temp_v10[3] = FUN_002463e8(8);
                temp_v11 = FUN_002463e8(9);
                temp_v12 = FUN_002463e8(3);
                temp_v2 = 6;
              }
            }
            else {
              temp_v10[0] = FUN_002463e8(5);
              temp_v10[1] = FUN_002463e8(6);
              temp_v10[2] = FUN_002463e8(7);
              temp_v10[3] = FUN_002463e8(8);
              temp_v11 = FUN_002463e8(9);
              temp_v2 = 5;
            }
          }
          else {
            temp_v2 = 1;
            temp_v10[0] = (unsigned int)temp_v15;
          }
          temp_v7 = 0;
          do {
            temp_v4 = param_5;
            FUN_00246134(param_5,temp_v10[temp_v7],*(unsigned char *)(temp_v3 + 0x23),0xffffffff);
            temp_v13[temp_v7] = temp_v4;
            temp_v4 = param_5;
            btlGetPassiveAffinityOverride(param_5,temp_v10[temp_v7]);
            temp_v6 = temp_v13[temp_v7];
            temp_v13[temp_v7] = temp_v4 | temp_v6;
            if (((temp_v4 | temp_v6) & 0x170000) != 0) {
              return;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < temp_v2);
          return;
        }
        if (*(char *)(temp_v3 + 0x23) == '\b') {
          return;
        }
      }
      temp_v1 = *(unsigned short *)((int)puVar7 + 0x1c6);
      if ((temp_v1 & 0x200) != 0) {
        return;
      }
      if ((temp_v1 & 0x80) == 0) {
        if ((temp_v1 & 0x100) != 0) {
          return;
        }
        if ((*(unsigned int *)(temp_v2 + 0xe0) & 0x20000000) == 0) {
          if ((*(unsigned int *)(temp_v2 + 0x44a0) & 0x40000) == 0) {
            VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0022a690(0xb);
            VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0022a690(9);
            VectorSignedToFloat((int)*(short *)((int)puVar6 + 0x1c2) -
                                (int)*(short *)((int)puVar7 + 0x1c2),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)(short)puVar6[0x71] - (int)(short)puVar7[0x71],
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            if ((*puVar6 & 0x10) == 0) {
              FUN_0023ea94();
            }
            randRange(99);
            return;
          }
          return;
        }
        return;
      }
      return;
    }
  case 9:
  case 10:
  case 0xc:
    break;
  case 0xe:
  }
  return;
}

} /* extern "C" */
