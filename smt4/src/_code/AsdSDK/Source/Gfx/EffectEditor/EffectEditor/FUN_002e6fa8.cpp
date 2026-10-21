/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6fa8` (_code @ 0x2e6fa8, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effMenuNodeCreate(void);
int textFormatBuffer(unsigned char [100], unsigned char *, unsigned char *, unsigned char [50]);
int libc_strcpy(unsigned char *, unsigned char [50]);
int FUN_002e70e0(unsigned int *, unsigned char [50]);
int FUN_002f2aa8(void);
int namedObjectFormatName(unsigned int *, unsigned char [50]);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
} void_stack;

extern unsigned char LAB_002e70b8; /* 0x2e70b8 */
extern unsigned char LAB_002e70c8; /* 0x2e70c8 */
extern unsigned char LAB_002e70d4; /* 0x2e70d4 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int *DAT_0044eac8; /* 0x44eac8 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */

/* Supplied declaration required: effMenuNodeCreate. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002e70e0. */
/* Supplied declaration required: FUN_002f2aa8. */
/* Supplied declaration required: namedObjectFormatName. */


/* WARNING: Removing unreachable block (ram,0x002e7044) */

unsigned char * FUN_002e6fa8(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [50];
  unsigned char temp_v1 [50];
  int temp_v2;
  unsigned char temp_v3 [100];
  
  puVar2 = &DAT_00400001;
  if (DAT_0044eac8 != (unsigned int *)0x0) {
    FUN_002f2aa8();
    FUN_002e70e0(DAT_0044eac8,temp_v0);
    namedObjectFormatName(DAT_0044eac8,temp_v1);
    temp_v2 = DAT_0044eac8[2];
    if (temp_v2 == 1) {
      return puVar2;
    }
  }
  else {
    puVar1 = (unsigned int *)&LAB_002e70c8;
    effMenuNodeCreate();
    DAT_0044eac8 = puVar1;
    *puVar1 = 0xb6;
    puVar1[1] = 100;
  }
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if ((temp_v2 == 1) && (DAT_0044ea94 != 0)) {
    libc_strcpy(&DAT_004d8bd0,temp_v1);
    textFormatBuffer(temp_v3,&LAB_002e70d4,&LAB_002e70b8,temp_v0);
    puVar2 = &DAT_00400002;
  }
  return puVar2;
}

} /* extern "C" */
