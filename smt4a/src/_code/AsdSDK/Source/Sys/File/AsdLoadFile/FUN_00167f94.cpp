/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167f94` (_code @ 0x167f94, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int refIsNullOrZero(int *);
int FUN_001883b0(unsigned int *, unsigned short [264], int);
int vcallSlot12IfValid(unsigned int);
int sysFatalBreak(void);
int FUN_002e3c44(unsigned short *, unsigned char *, int, int *);
int rt_aeabi_memclr(unsigned char [256], int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern signed char g_asdLoadFileUseRawPaths; /* 0x5b3fe0 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(unsigned char *, unsigned int, unsigned int *);
extern int asdFileHashPackIsOpen(void);
extern int FUN_001860e4(unsigned char *);
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: sysFatalBreak. */
extern int FUN_0019dbb8(unsigned int);
/* Supplied declaration required: FUN_002e3c44. */
/* Supplied declaration required: rt_aeabi_memclr. */


unsigned int FUN_00167f94(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned short *puVar5;
  unsigned char *puVar6;
  unsigned short temp_v2 [264];
  unsigned char temp_v3 [256];
  char temp_v4 [4];
  unsigned int temp_v5 [9];
  int temp_v6;
  unsigned int temp_v7;
  
  puVar5 = temp_v2;
  rt_aeabi_memclr(temp_v3,0x100);
  if ((g_asdLoadFileUseRawPaths != '\0') || (temp_v1 = FUN_0019dbb8(param_1), temp_v1 != 0)) {
    textFormatBuffer(temp_v3,param_1);
  }
  else {
    textFormatBuffer(temp_v3,"rom:/%s",param_1);
  }
  temp_v0 = 0;
  temp_v1 = asdFileHashPackIsOpen();
  if ((temp_v1 != 0) && (temp_v1 = FUN_001860e4(temp_v3), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  temp_v5[0] = 0;
  temp_v5[1] = 0;
  temp_v5[2] = 0;
  temp_v5[3] = 0;
  temp_v5[4] = 0;
  puVar6 = temp_v3;
  puVar4 = temp_v5;
  temp_v4[0] = 'D';
  temp_v4[1] = -0x7f;
  temp_v4[2] = 'U';
  temp_v4[3] = '\0';
  temp_v6 = 0;
  temp_v7 = 0;
  refIsNullOrZero(&temp_v6);
  while ((temp_v1 = FUN_00100836(puVar6,0x105,(unsigned int *)&temp_v6), temp_v1 != 0 &&
         (puVar3 = puVar5, FUN_002e3c44(puVar5,puVar6,temp_v1,&temp_v6), puVar3 != (unsigned short *)0x0)
         )) {
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + temp_v1;
  }
  *puVar5 = 0;
  temp_v5[3] = 0;
  temp_v5[4] = 0;
  temp_v5[1] = 0;
  temp_v5[2] = 0;
  FUN_001883b0(puVar4,temp_v2,1);
  if ((temp_v5[0] & 0xfffffffe) != 0) {
    if ((temp_v5[0] & 1) != 0) {
      sysFatalBreak();
    }
    vcallSlot12IfValid(temp_v5[0] & 0xfffffffe);
    temp_v5[0] = 0;
  }
  if (((int)puVar4 < 0) && (!temp_v0)) {
    if ((temp_v5[0] & 0xfffffffe) != 0) {
      if ((temp_v5[0] & 1) != 0) {
        sysFatalBreak();
      }
      vcallSlot12IfValid(temp_v5[0] & 0xfffffffe);
    }
    return 0;
  }
  if ((temp_v5[0] & 0xfffffffe) != 0) {
    if ((temp_v5[0] & 1) != 0) {
      sysFatalBreak();
    }
    vcallSlot12IfValid(temp_v5[0] & 0xfffffffe);
  }
  return 1;
}

} /* extern "C" */
