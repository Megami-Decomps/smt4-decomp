/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3570` (_code @ 0x3a3570, 0x488 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_003a3998; /* 0x3a3998 */
extern unsigned char LAB_003a39a4; /* 0x3a39a4 */
extern unsigned char LAB_003a39b4; /* 0x3a39b4 */

/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_0022e8d4. */
/* Supplied declaration required: FUN_0022e9ac. */
/* Supplied declaration required: FUN_0022ebcc. */
/* Supplied declaration required: FUN_0022fe4c. */
/* Supplied declaration required: FUN_002303c8. */
/* Supplied declaration required: FUN_0023046c. */
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002333d4. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
extern int FUN_0029111c(void);
extern int FUN_00291140(void);
extern int FUN_00291154(void);
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029f10c. */
extern unsigned int FUN_002bef70(unsigned int *);
extern unsigned int FUN_002bef7c(unsigned int *);
/* Supplied declaration required: FUN_002bf9f0. */


void FUN_003a3570(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v0 = param_1[2];
  temp_v4 = param_4;
  if (temp_v0 == 0) {
    if ((*param_1 & 4) != 0) {
      temp_v1 = FUN_00291018(param_1[0x58],&LAB_003a3998);
      FUN_002971e4(param_1[0x5a],temp_v1);
    }
    else if (*(char *)((int)param_1 + 0x1d) != '\0') {
      temp_v1 = FUN_00291018(param_1[0x58],&LAB_003a39a4);
      FUN_002971e4(param_1[0x5a],temp_v1);
    }
    else {
      temp_v1 = FUN_00291018(param_1[0x58],&LAB_003a39b4);
      FUN_002971e4(param_1[0x5a],temp_v1);
    }
    FUN_0019dfbc(param_1[0x5a]);
    *param_1 = *param_1 | 4;
    FUN_0022e9ac(param_1,0);
    FUN_0022e8d4(param_1,0);
    FUN_002333d4(param_1 + 0xea,1);
    param_1[2] = 1;
    return;
  }
  puVar5 = param_1 + 0x115;
  if (temp_v0 != 1) {
    if (temp_v0 == 3 || temp_v0 == 4) {
      FUN_0019dfbc(param_1[0x5a]);
      FUN_0019dfbc(param_1[0x5b]);
      FUN_002bf9f0(puVar5);
      temp_v1 = FUN_002bef70(puVar5);
      temp_v2 = FUN_002bef7c(puVar5);
      FUN_002313d4(param_1 + 0xe0,temp_v2,temp_v1);
      if (*(char *)((int)param_1 + 0x4de) != '\0') {
        temp_v3 = FUN_00291154();
        if (temp_v3 != 0) {
          temp_v3 = FUN_00291140();
          temp_v3 = FUN_0022ebcc(&temp_v4,param_1[temp_v3 + 0x574b] + 4);
          FUN_0029f10c(temp_v3 + 0x40,0x323232ff);
        }
        temp_v3 = FUN_0029111c();
        if (temp_v3 != 0) {
          FUN_00297128();
          FUN_0029f10c(0,0x323232ff);
          temp_v3 = FUN_00297674();
          if (temp_v3 != -1) {
            param_1[0x218] = param_1[temp_v3 + 0x574b];
            FUN_0023046c(param_1,1);
            param_1[2] = 0;
            param_1[1] = 4;
            FUN_00297128();
            FUN_002303c8(param_1);
            return;
          }
          if (param_1[2] == 3) {
            param_1[0x5758] = 0;
          }
          else {
            param_1[0x5758] = 1;
          }
          FUN_0022e9ac(param_1,0);
          FUN_0022e8d4(param_1,0);
          param_1[2] = 1;
          return;
        }
      }
    }
  }
  else {
    FUN_0019dfbc(param_1[0x5a]);
    FUN_0019dfbc(param_1[0x5b]);
    FUN_002bf9f0(puVar5);
    temp_v1 = FUN_002bef70(puVar5);
    temp_v2 = FUN_002bef7c(puVar5);
    FUN_002313d4(param_1 + 0xe0,temp_v2,temp_v1);
    if (*(char *)((int)param_1 + 0x4de) != '\0') {
      *param_1 = *param_1 & 0xfffff0ff;
      temp_v3 = FUN_00291154();
      if (temp_v3 != 0) {
        temp_v3 = FUN_00291140();
        temp_v3 = FUN_0022ebcc(&temp_v4,param_1[temp_v3 + 0x574b]);
        FUN_0029f10c(temp_v3 + 0x40,0x323232ff);
      }
      temp_v3 = FUN_0029111c();
      if (temp_v3 != 0) {
        FUN_00297128();
        FUN_0029f10c(0,0x323232ff);
        temp_v3 = FUN_00297674();
        if (temp_v3 != -1) {
          temp_v0 = param_1[temp_v3 + 0x574b];
          if (temp_v0 != 0) {
            if (temp_v0 != 1) {
              if (temp_v0 == 2) {
                param_1[0x218] = 7;
                FUN_0023046c(param_1,1);
                param_1[1] = 4;
                param_1[2] = 0;
                FUN_00297128();
                return;
              }
              if (temp_v0 != 3) {
                return;
              }
              param_1[0x218] = 8;
              FUN_0022fe4c(param_1,1);
              param_1[1] = 4;
              param_1[2] = 0;
              FUN_00297128();
              return;
            }
            FUN_0022e9ac(param_1,2);
            if ((int)param_1[0x574f] >= 2) {
              puVar5 = param_1 + 0x5759;
              *(unsigned char *)puVar5 = 1;
              FUN_0022e8d4(param_1,2);
              param_1[2] = 4;
              *(unsigned char *)puVar5 = 0;
              return;
            }
          }
          else {
            FUN_0022e9ac(param_1,1);
            if ((int)param_1[0x574f] >= 2) {
              puVar5 = (unsigned int *)((int)param_1 + 0x15d65);
              *(unsigned char *)puVar5 = 1;
              FUN_0022e8d4(param_1,1);
              param_1[2] = 3;
              *(unsigned char *)puVar5 = 0;
              return;
            }
          }
          param_1[0x218] = param_1[0x574b];
          FUN_0023046c(param_1,1);
          param_1[2] = 0;
          param_1[1] = 4;
          FUN_00297128();
          FUN_002303c8(param_1);
          return;
        }
        FUN_0029cee4(1);
        param_1[1] = 0xc;
        param_1[2] = 0;
      }
    }
  }
  return;
}
