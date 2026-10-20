/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8c2c` (_code @ 0x3c8c2c, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable5Sub3Lookup(unsigned int *, int);
int dataTable05Sub4GetCount(void);
int FUN_0029f7d4(void);
int devilGetRecord(void);
int FUN_0030abc8(unsigned int, int);
int FUN_0031ed94(unsigned int, int);

/* Supplied declaration required: dataTable5Sub3Lookup. */
/* Supplied declaration required: dataTable05Sub4GetCount. */
/* Supplied declaration required: FUN_0029f7d4. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_0030abc8. */
/* Supplied declaration required: FUN_0031ed94. */


/* WARNING: Type propagation algorithm not settling */

unsigned char FUN_003c8c2c(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  short *psVar3;
  short *psVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v2;
  int temp_v3;
  short *psVar9;
  unsigned char temp_v4;
  
  devilGetRecord();
  devilGetRecord();
  temp_v1 = (unsigned int)*param_3;
  if (*param_2 == temp_v1) {
    return 0;
  }
  psVar9 = (short *)0x0;
  dataTable05Sub4GetCount();
  if (temp_v1 != 0) {
    do {
      psVar4 = psVar9;
      FUN_0029f7d4();
      if (psVar4 != (short *)0x0) {
        temp_v2 = 0;
        temp_v3 = 0xc;
        psVar3 = psVar4;
        do {
          psVar3 = psVar3 + 1;
          if (*psVar3 != 0) {
            temp_v2 = temp_v2 + 1;
          }
          temp_v3 = temp_v3 - 1;
        } while (temp_v3 != 0);
        if (temp_v2 == 2) {
          temp_v0 = *param_2;
          if ((psVar4[1] == temp_v0) && (psVar4[2] == *param_3)) {
            return (unsigned char)5;
          }
          temp_v4 = psVar4[2] == temp_v0;
          if (temp_v4) {
            temp_v0 = *param_3;
          }
          if (temp_v4 && psVar4[1] == temp_v0) {
            return (unsigned char)5;
          }
        }
      }
      psVar4 = (short *)((int)psVar9 + 1);
      psVar9 = (short *)((unsigned int)psVar4 & 0xffff);
      dataTable05Sub4GetCount();
    } while (psVar9 < psVar4);
  }
  temp_v1 = (unsigned int)(unsigned char)param_2[1];
  FUN_0031ed94(temp_v1,(char)param_3[1]);
  if (temp_v1 != 0) {
    return (unsigned char)4;
  }
  puVar5 = (unsigned int *)(unsigned int)(unsigned char)param_2[1];
  dataTable5Sub3Lookup(puVar5,*param_3);
  puVar6 = (unsigned int *)(unsigned int)(unsigned char)param_3[1];
  dataTable5Sub3Lookup(puVar6,*param_2);
  if (puVar5 != (unsigned int *)0x0) {
    temp_v1 = *puVar5;
  }
  else {
    if (puVar6 == (unsigned int *)0x0) {
      temp_v1 = (unsigned int)(unsigned char)param_2[1];
      FUN_0030abc8(temp_v1,(char)param_3[1]);
      return temp_v1 != 0;
    }
    temp_v1 = *puVar6;
  }
  if (temp_v1 >> 0x18 == 1) {
    return (unsigned char)2;
  }
  if (temp_v1 >> 0x18 == 3) {
    return (unsigned char)3;
  }
  temp_v1 = (unsigned int)(unsigned char)param_2[1];
  FUN_0030abc8(temp_v1,(char)param_3[1]);
  return temp_v1 != 0;
}

} /* extern "C" */
