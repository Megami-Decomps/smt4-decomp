/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00362584` (_code @ 0x362584, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [100], unsigned char *, unsigned char *, unsigned char [50]);
int libc_strcpy(unsigned char *, unsigned char [50]);
int FUN_00362768(unsigned int *, unsigned char [50]);
int FUN_00375ec8(void);
int namedObjectFormatName(unsigned int *, unsigned char [50]);
int effMenuNodeCreate(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
} void_stack;

extern unsigned char LAB_00362694; /* 0x362694 */
extern unsigned char LAB_003626a4; /* 0x3626a4 */
extern unsigned char LAB_003626b0; /* 0x3626b0 */
extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400002; /* 0x400002 */
extern int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int *DAT_0059dc28; /* 0x59dc28 */
extern unsigned char DAT_00634c50; /* 0x634c50 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_00362768. */
/* Supplied declaration required: FUN_00375ec8. */
/* Supplied declaration required: namedObjectFormatName. */
/* Supplied declaration required: effMenuNodeCreate. */


/* WARNING: Removing unreachable block (ram,0x00362620) */

unsigned char * FUN_00362584(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [50];
  unsigned char temp_v1 [50];
  int temp_v2;
  unsigned char temp_v3 [100];
  
  puVar2 = &LAB_00400001;
  if (DAT_0059dc28 != (unsigned int *)0x0) {
    FUN_00375ec8();
    FUN_00362768(DAT_0059dc28,temp_v0);
    namedObjectFormatName(DAT_0059dc28,temp_v1);
    temp_v2 = DAT_0059dc28[2];
    if (temp_v2 == 1) {
      return puVar2;
    }
  }
  else {
    puVar1 = (unsigned int *)&LAB_003626a4;
    effMenuNodeCreate();
    DAT_0059dc28 = puVar1;
    *puVar1 = 0xb6;
    puVar1[1] = 100;
  }
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if ((temp_v2 == 1) && (DAT_0059dbf4 != 0)) {
    libc_strcpy(&DAT_00634c50,temp_v1);
    textFormatBuffer(temp_v3,&LAB_003626b0,&LAB_00362694,temp_v0);
    puVar2 = &LAB_00400002;
  }
  return puVar2;
}

} /* extern "C" */
