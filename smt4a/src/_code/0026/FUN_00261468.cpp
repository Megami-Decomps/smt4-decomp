/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00261468` (_code @ 0x261468, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned short sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_002b2b24; /* 0x2b2b24 */
extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


unsigned short * FUN_00261468(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [52];
  
  if (param_1 >= 0x6a) {
    puVar1 = (unsigned short *)0x0;
  }
  else {
    if (param_1 == 0x3e) {
      return (unsigned short *)(DAT_0057f69c + 0x22220);
    }
    if (param_1 == 0x55) {
      puVar1 = (unsigned short *)0x2615b8;
    }
    else if (param_1 == 0x56) {
      puVar1 = (unsigned short *)0x2615d8;
    }
    else if (param_1 == 0x57) {
      puVar1 = (unsigned short *)0x2615f8;
    }
    else if (param_1 == 0x58) {
      puVar1 = (unsigned short *)0x261618;
    }
    else if (param_1 == 0x5a) {
      puVar1 = (unsigned short *)0x261638;
    }
    else if (param_1 == 0x5b) {
      puVar1 = (unsigned short *)0x261658;
    }
    else if (param_1 == 0x5c) {
      puVar1 = (unsigned short *)0x261678;
    }
    else if (param_1 == 0x5d) {
      puVar1 = (unsigned short *)0x261698;
    }
    else if (param_1 == 0x5e) {
      puVar1 = (unsigned short *)0x2616b8;
    }
    else if (param_1 == 0x5f) {
      puVar1 = (unsigned short *)0x2616d8;
    }
    else if (param_1 == 0x60) {
      puVar1 = (unsigned short *)0x2616f8;
    }
    else if (param_1 == 0x61) {
      puVar1 = (unsigned short *)0x261718;
    }
    else if (param_1 == 0x62) {
      puVar1 = (unsigned short *)0x261738;
    }
    else if (param_1 == 99) {
      puVar1 = (unsigned short *)0x261758;
    }
    else if (param_1 == 100) {
      puVar1 = (unsigned short *)0x261778;
    }
    else if (param_1 == 0x65) {
      puVar1 = (unsigned short *)0x261798;
    }
    else if (param_1 == 0x66) {
      puVar1 = (unsigned short *)0x2617b8;
    }
    else if (param_1 == 0x67) {
      puVar1 = (unsigned short *)0x2617d8;
    }
    else if (param_1 == 0x68) {
      puVar1 = (unsigned short *)0x2617f8;
    }
    else {
      temp_v0 = dataTableGet(0x38,0);
      temp_v1 = dataTableGetEntries();
      temp_v0 = dataTableGetCount(temp_v0);
      puVar1 = temp_v2;
      temp_v2[0] = (unsigned short)param_1;
      libc_bsearch(puVar1,temp_v1,temp_v0,0x68,&LAB_002b2b24);
      puVar1 = puVar1 + 1;
    }
  }
  return puVar1;
}

} /* extern "C" */
