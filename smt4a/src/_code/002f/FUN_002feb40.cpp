/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002feb40` (_code @ 0x2feb40, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [100], unsigned char *, unsigned char *, unsigned char [50]);
int FUN_00362768(unsigned int *, unsigned char [50]);
int FUN_00375ec8(void);
int FUN_003762a8(unsigned int *, unsigned char [50]);
int effMenuNodeCreate(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
} void_stack;

extern unsigned char LAB_002fec44; /* 0x2fec44 */
extern unsigned char LAB_002fec58; /* 0x2fec58 */
extern unsigned char LAB_002fec5c; /* 0x2fec5c */
extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400002; /* 0x400002 */
extern int DAT_0059dbfc; /* 0x59dbfc */
extern unsigned int *DAT_0059dc28; /* 0x59dc28 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00362768. */
/* Supplied declaration required: FUN_00375ec8. */
/* Supplied declaration required: FUN_003762a8. */
/* Supplied declaration required: effMenuNodeCreate. */


/* WARNING: Removing unreachable block (ram,0x002febdc) */

unsigned char * FUN_002feb40(void)

{
/* irregular: 6 native warning(s); review required */
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
    FUN_003762a8(DAT_0059dc28,temp_v1);
    temp_v2 = DAT_0059dc28[2];
    if (temp_v2 == 1) {
      return puVar2;
    }
  }
  else {
    puVar1 = (unsigned int *)&LAB_002fec58;
    effMenuNodeCreate();
    DAT_0059dc28 = puVar1;
    *puVar1 = 0xb6;
    puVar1[1] = 100;
  }
  if (temp_v2 == 2) {
    puVar2 = (unsigned char *)0x400000;
  }
  else if ((temp_v2 == 1) && (DAT_0059dbfc != 0)) {
    textFormatBuffer(temp_v3,&LAB_002fec5c,&LAB_002fec44,temp_v0);
    puVar2 = &LAB_00400002;
  }
  return puVar2;
}

} /* extern "C" */
