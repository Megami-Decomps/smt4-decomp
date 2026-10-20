/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037adac` (_code @ 0x37adac, 0x304 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188374(unsigned char **, int);
int FUN_002e0c80(void);
int FUN_00317c98(unsigned char **, int, unsigned int, unsigned int);
int FUN_00317e50(void);
int FUN_0032c9fc(void);
int FUN_00341824(void);
int FUN_003596e0(void);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_00558024; /* 0x558024 */
extern unsigned int DAT_005b40c4; /* 0x5b40c4 */

/* Supplied declaration required: FUN_00188374. */
extern unsigned char *FUN_002bee0c(unsigned char **);
extern unsigned char *FUN_002befc0(void);
extern unsigned char *FUN_002e09b4(unsigned char **, int, unsigned int);
extern unsigned char *FUN_002e0c48(unsigned char **);
/* Supplied declaration required: FUN_002e0c80. */
extern unsigned char *FUN_002e0fac(void);
extern unsigned char *FUN_00317c60(unsigned char **);
/* Supplied declaration required: FUN_00317c98. */
extern unsigned char *FUN_00317d48(unsigned char **);
/* Supplied declaration required: FUN_00317e50. */
extern unsigned char *FUN_0032c900(unsigned char **, int, unsigned int);
/* Supplied declaration required: FUN_0032c9fc. */
extern unsigned char *FUN_0032cab4(unsigned char **);
extern unsigned char *FUN_003417ec(unsigned char **);
/* Supplied declaration required: FUN_00341824. */
extern unsigned char *FUN_00359608(void);
/* Supplied declaration required: FUN_003596e0. */


unsigned int FUN_0037adac(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char **ppuVar2;
  unsigned char **ppuVar3;
  unsigned char **ppuVar4;
  unsigned char *puVar5;
  unsigned char *temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  ppuVar3 = &temp_v0;
  ppuVar4 = &temp_v0;
  ppuVar2 = &temp_v0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  puVar5 = (unsigned char *)0xe7e3ffff;
  temp_v0 = &DAT_00558024;
  temp_v1 = 0x55809c;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        puVar1 = puVar5;
        if (param_1 == 3) {
          puVar1 = (unsigned char *)FUN_002befc0();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_0032cab4(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_002bee0c(&temp_v0);
    }
  }
  else {
    puVar1 = (unsigned char *)FUN_002e09b4(&temp_v0,param_2,1);
  }
  if ((((((unsigned int)puVar1 & 0x3fc00) == 0x4400) && (((unsigned int)puVar1 & 0x3ff) >= 100)) &&
      (((unsigned int)puVar1 & 0x3ff) < 0xb4)) || ((int)puVar1 < 0)) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        puVar1 = puVar5;
        if (param_1 == 2) {
          puVar1 = (unsigned char *)FUN_00359608();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_00317d48(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_0032c900(&temp_v0,param_2,param_4);
    }
    if ((int)puVar1 < 0) {
      if (param_2 != 0) {
        if (param_1 != 0) {
          if (param_1 != 1) {
            if (param_1 == 2) {
              FUN_003596e0();
            }
          }
          else {
            FUN_00317e50();
          }
        }
        else {
          FUN_0032c9fc();
        }
      }
      else {
        DAT_005b40c4 = 0xc8804464;
      }
      if (param_1 != 0) {
        if (param_1 != 1) {
          puVar1 = puVar5;
          if (param_1 == 2) {
            puVar1 = (unsigned char *)FUN_00359608();
          }
        }
        else {
          puVar1 = (unsigned char *)FUN_00317d48(&temp_v0);
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_0032c900(&temp_v0,param_2,param_4);
      }
    }
  }
  if (-1 < (int)puVar1) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        ppuVar3 = (unsigned char **)puVar5;
        if (param_1 == 2) {
          FUN_00341824();
          ppuVar3 = ppuVar2;
        }
      }
      else {
        FUN_002e0c80();
        ppuVar3 = ppuVar4;
      }
    }
    else {
      FUN_00317c98(&temp_v0,0,param_3,param_4);
    }
    if (-1 < (int)ppuVar3) {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              puVar5 = (unsigned char *)FUN_002e0fac();
            }
          }
          else {
            puVar5 = (unsigned char *)FUN_003417ec(&temp_v0);
          }
        }
        else {
          puVar5 = (unsigned char *)FUN_002e0c48(&temp_v0);
        }
      }
      else {
        puVar5 = (unsigned char *)FUN_00317c60(&temp_v0);
      }
      if (-1 < (int)puVar5) {
        FUN_00188374(&temp_v0,0);
        return 1;
      }
    }
  }
  FUN_00188374(&temp_v0,0);
  return 0;
}

} /* extern "C" */
