/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfc24` (_code @ 0x2bfc24, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002bfda0; /* 0x2bfda0 */
extern unsigned char LAB_002bfdac; /* 0x2bfdac */
extern unsigned char LAB_002bfdb4; /* 0x2bfdb4 */
extern unsigned char DAT_004c5634; /* 0x4c5634 */
extern unsigned char DAT_004c5818; /* 0x4c5818 */
extern unsigned char DAT_004c581a; /* 0x4c581a */
extern unsigned char DAT_004e3c58; /* 0x4e3c58 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: FUN_00126468. */
/* Supplied declaration required: FUN_002b64a0. */
/* Supplied declaration required: FUN_002be624. */
extern unsigned int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c3940. */
extern unsigned int FUN_002c564c(unsigned int);


/* WARNING: Control flow encountered bad instruction data */

unsigned char FUN_002bfc24(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); irregular input(s): in_cr15, in_s10, in_s11, in_s6, in_s7, in_s8, in_s9; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *pbVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int in_cr15;
  unsigned int in_s6;
  unsigned int in_s7;
  unsigned int in_s8;
  unsigned int in_s9;
  unsigned int in_s10;
  unsigned int in_s11;
  unsigned char temp_v3 [64];
  unsigned int temp_v4 [16];
  unsigned char temp_v5 [72];
  
  FUN_002c3940(temp_v3,0x40);
  FUN_002c3940(temp_v4,0x40);
  FUN_002c3940(temp_v5,0x40);
  temp_v0 = FUN_002c564c(1);
  temp_v2 = 0;
  if (temp_v0 == 0) {
    temp_v0 = FUN_002c1d5c();
    temp_v2 = 0;
    if (temp_v0 == 0) {
      temp_v0 = (unsigned int)DAT_004c581a;
      temp_v2 = 0;
      if ((temp_v0 == 0) && (temp_v2 = param_3 == 0, !temp_v2)) {
        FUN_002be624(temp_v4,&LAB_002bfda0);
        FUN_002be624(temp_v5,&LAB_002bfdac,param_2);
        FUN_002b64a0(temp_v4,temp_v5);
        puVar3 = temp_v4;
        FUN_002be624(temp_v3,&LAB_002bfdb4);
        FUN_00126468();
        temp_v1 = 0;
        do {
          pbVar2 = &DAT_004c5634 + temp_v1 * 0x78;
          while( 1 ) {
            temp_v0 = (unsigned int)*pbVar2;
            if (temp_v0 == 0) {
              temp_v2 = temp_v1 == 0xffffffff;
              if (!temp_v2) {
                *puVar3 = in_s6;
                puVar3[1] = in_s7;
                puVar3[2] = in_s8;
                puVar3[3] = in_s9;
                puVar3[4] = in_s10;
                puVar3[5] = in_s11;
                coprocessor_store(0xf,in_cr15,puVar3 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              goto LAB_002bfd8c;
            }
            temp_v1 = temp_v1 + 1;
            temp_v2 = temp_v1 == 4;
            if ((int)temp_v1 >= 4) goto LAB_002bfd8c;
            if (temp_v1 < 4) break;
            pbVar2 = (unsigned char *)0x0;
          }
        } while( 1 );
      }
    }
  }
LAB_002bfd8c:
  if (!temp_v2) {
    return DAT_004c5818;
  }
  if (((param_4 & 1) == 0) && (*(int *)(&DAT_004e3c58 + temp_v0 * 4) == 1)) {
    return 1;
  }
  return 0;
}
