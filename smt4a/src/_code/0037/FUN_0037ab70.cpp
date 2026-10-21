/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ab70` (_code @ 0x37ab70, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

int fileHandleClose(unsigned char **, int);
int FUN_002beec4(void);
int FUN_002e0a6c(unsigned char **, int, unsigned int, unsigned int);
int holderReleaseObject(...);
int FUN_002e0fac(void);
int taggedOwnerRelease(unsigned char **);
int taggedOwnerRelease2(...);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_00558024; /* 0x558024 */

/* Supplied declaration required: fileHandleClose. */
extern unsigned char *FUN_002bee0c(unsigned char **);
/* Supplied declaration required: FUN_002beec4. */
extern unsigned char *FUN_002befc0(void);
extern unsigned char *FUN_002e09b4(unsigned char **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e0a6c. */
/* Supplied declaration required: holderReleaseObject. */
/* Supplied declaration required: FUN_002e0fac. */
/* Supplied declaration required: taggedOwnerRelease. */
extern unsigned char *FUN_0032cab4(unsigned char **);
/* Supplied declaration required: taggedOwnerRelease2. */


unsigned int FUN_0037ab70(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char **ppuVar2;
  unsigned char **ppuVar3;
  unsigned char *puVar4;
  unsigned char *temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  ppuVar2 = &temp_v0;
  ppuVar3 = &temp_v0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  puVar4 = (unsigned char *)0xe7e3ffff;
  temp_v0 = &DAT_00558024;
  temp_v1 = 0x55809c;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        puVar1 = puVar4;
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
    puVar1 = (unsigned char *)FUN_002e09b4(&temp_v0,param_2,2);
  }
  if (-1 < (int)puVar1) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        ppuVar2 = (unsigned char **)puVar4;
        if ((param_1 != 2) && (param_1 == 3)) {
          ppuVar2 = (unsigned char **)FUN_002bf040((PositionedStream *)&temp_v0,0,(void *)param_3,param_4);
        }
      }
      else {
        FUN_002beec4();
        ppuVar2 = ppuVar3;
      }
    }
    else {
      FUN_002e0a6c(&temp_v0,0,param_3,param_4);
    }
    if ((int)ppuVar2 < 0) {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              FUN_002e0fac();
            }
          }
          else {
            taggedOwnerRelease2();
          }
        }
        else {
          holderReleaseObject();
        }
      }
      else {
        taggedOwnerRelease(&temp_v0);
      }
    }
    else {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              puVar4 = (unsigned char *)FUN_002e0fac();
            }
          }
          else {
            puVar4 = (unsigned char *)taggedOwnerRelease2(&temp_v0);
          }
        }
        else {
          puVar4 = (unsigned char *)holderReleaseObject(&temp_v0);
        }
      }
      else {
        puVar4 = (unsigned char *)taggedOwnerRelease(&temp_v0);
      }
      if (-1 < (int)puVar4) {
        fileHandleClose(&temp_v0,0);
        return 1;
      }
    }
  }
  fileHandleClose(&temp_v0,0);
  return 0;
}

} /* extern "C" */
