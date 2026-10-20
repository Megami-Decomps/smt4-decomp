/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f55cc` (_code @ 0x2f55cc, 0x304 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002104c8(void);
int fileObjSeekRead(unsigned char **, int, unsigned int, unsigned int);
int FUN_00220438(void);
int fileHandleClose(unsigned char **, int);
int FUN_002cbf90(void);
int FUN_002d5f90(void);
int FUN_002e1458(void);

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

extern unsigned char DAT_00420b20; /* 0x420b20 */
extern unsigned char DAT_004651e8; /* 0x4651e8 */

extern unsigned char *FUN_001ff93c(unsigned char **);
extern unsigned char *FUN_001ffaf0(void);
/* Supplied declaration required: FUN_002104c8. */
/* Supplied declaration required: fileObjSeekRead. */
extern unsigned char *FUN_00220330(unsigned char **);
/* Supplied declaration required: FUN_00220438. */
extern unsigned char *fileOwnerCloseA(unsigned char **);
extern unsigned char *fileOwnerCloseB(unsigned char **);
extern unsigned char *fileOwnerCloseC(unsigned char **);
extern unsigned char *fileOwnerCloseD(void);
extern unsigned char *FUN_0024ab94(unsigned char **, int, unsigned int);
/* Supplied declaration required: fileHandleClose. */
extern unsigned char *FUN_002cbe94(unsigned char **, int, unsigned int);
/* Supplied declaration required: FUN_002cbf90. */
extern unsigned char *FUN_002cbfe8(unsigned char **);
/* Supplied declaration required: FUN_002d5f90. */
extern unsigned char *FUN_002e1380(void);
/* Supplied declaration required: FUN_002e1458. */


unsigned int FUN_002f55cc(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

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
  temp_v0 = &(*(unsigned char *)((unsigned char *)&DAT_00420b20 + 0x58));
  temp_v1 = 0x420bf0;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        puVar1 = puVar5;
        if (param_1 == 3) {
          puVar1 = (unsigned char *)FUN_001ffaf0();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_002cbfe8(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_001ff93c(&temp_v0);
    }
  }
  else {
    puVar1 = (unsigned char *)FUN_0024ab94(&temp_v0,param_2,1);
  }
  if ((((((unsigned int)puVar1 & 0x3fc00) == 0x4400) && (((unsigned int)puVar1 & 0x3ff) >= 100)) &&
      (((unsigned int)puVar1 & 0x3ff) < 0xb4)) || ((int)puVar1 < 0)) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        puVar1 = puVar5;
        if (param_1 == 2) {
          puVar1 = (unsigned char *)FUN_002e1380();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_00220330(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_002cbe94(&temp_v0,param_2,param_4);
    }
    if ((int)puVar1 < 0) {
      if (param_2 != 0) {
        if (param_1 != 0) {
          if (param_1 != 1) {
            if (param_1 == 2) {
              FUN_002e1458();
            }
          }
          else {
            FUN_00220438();
          }
        }
        else {
          FUN_002cbf90();
        }
      }
      else {
        (*(unsigned int *)((unsigned char *)&DAT_004651e8 + 0x10)) = 0xc8804464;
      }
      if (param_1 != 0) {
        if (param_1 != 1) {
          puVar1 = puVar5;
          if (param_1 == 2) {
            puVar1 = (unsigned char *)FUN_002e1380();
          }
        }
        else {
          puVar1 = (unsigned char *)FUN_00220330(&temp_v0);
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_002cbe94(&temp_v0,param_2,param_4);
      }
    }
  }
  if (-1 < (int)puVar1) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        ppuVar3 = (unsigned char **)puVar5;
        if (param_1 == 2) {
          FUN_002d5f90();
          ppuVar3 = ppuVar2;
        }
      }
      else {
        FUN_002104c8();
        ppuVar3 = ppuVar4;
      }
    }
    else {
      fileObjSeekRead(&temp_v0,0,param_3,param_4);
    }
    if (-1 < (int)ppuVar3) {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              puVar5 = (unsigned char *)fileOwnerCloseD();
            }
          }
          else {
            puVar5 = (unsigned char *)fileOwnerCloseA(&temp_v0);
          }
        }
        else {
          puVar5 = (unsigned char *)fileOwnerCloseB(&temp_v0);
        }
      }
      else {
        puVar5 = (unsigned char *)fileOwnerCloseC(&temp_v0);
      }
      if (-1 < (int)puVar5) {
        fileHandleClose(&temp_v0,0);
        return 1;
      }
    }
  }
  fileHandleClose(&temp_v0,0);
  return 0;
}

} /* extern "C" */
