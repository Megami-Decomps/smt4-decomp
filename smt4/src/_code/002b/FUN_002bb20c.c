/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb20c` (_code @ 0x2bb20c, 0x62 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam00000000; /* 0x0 */
extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern unsigned char DAT_0044e458; /* 0x44e458 */
extern unsigned char DAT_0044e459; /* 0x44e459 */
#ifndef ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0044e45a_2_2 {
    unsigned short whole;
    unsigned char u1[2];
    signed char s1[2];
    unsigned short u2[1];
    short s2[1];
};
typedef char romwright_storage_DAT_0044e45a_2_2_size_check[(sizeof(union romwright_storage_DAT_0044e45a_2_2) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0044e45a_2_2 DAT_0044e45a; /* 0x44e45a */
extern unsigned int DAT_0044e460; /* 0x44e460 */
extern unsigned int DAT_0044e46c; /* 0x44e46c */
extern unsigned int DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdec; /* 0x4efdec */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_002bfefc(unsigned int *);
extern int FUN_002c1850(unsigned int);
extern int FUN_0031c658(unsigned int, unsigned int);
extern unsigned int nn_dsp_CTR_DSP_UnloadComponent(unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bc580) */

unsigned int FUN_002bb20c(unsigned int param_1,unsigned int param_2,unsigned char *param_3,int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr14, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s0, in_s2, in_s4, in_s5, in_stack_0000014c, in_stack_00000150; 12 native warning(s); review required */
  unsigned char temp_v0;
  romwright_code *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar6;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  unsigned int in_cr9;
  unsigned int in_cr10;
  unsigned int in_cr13;
  unsigned int in_cr14;
  unsigned int in_s0;
  float in_s2;
  float in_s4;
  float in_s5;
  unsigned int in_stack_0000014c;
  unsigned int in_stack_00000150;
  unsigned char temp_v6 [4];
  int iStack_6c;
  unsigned int uStack_68;
  unsigned char *puStack_64;
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char *puStack_40;
  unsigned int *puStack_3c;
  
  if ((DAT_0044e459 & ~(unsigned char)DAT_0044e45a.whole) == 0) {
    DAT_0044e45a.whole = 0;
    return 0;
  }
  temp_v3 = 0;
  do {
    pcVar2 = *(romwright_code **)(temp_v3 * 4 + 0x4c6464);
    if (pcVar2 != (romwright_code *)0x0) {
      (*pcVar2)();
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 8);
  if (DAT_0044e459 != 0) {
    temp_v1 = nn_dsp_CTR_DSP_UnloadComponent(DAT_0044e460);
    if ((temp_v1 & 1) != 0) {
LAB_002bb9f0:
      temp_v5 = ((param_4 >> 0x1f) & 1U) != 0;
      while( 1 ) {
        if (temp_v5) {
          puVar6 = (unsigned char *)0x0;
        }
        else {
          puVar6 = &DAT_0044e458 + temp_v3 * 0x78;
        }
        temp_v2 = FUN_002c1850(*(unsigned int *)(puVar6 + 0x48));
        if (temp_v2 != 0) break;
        temp_v3 = temp_v3 + 1;
        if ((int)temp_v3 >= 4) {
          return 0;
        }
        temp_v5 = temp_v3 >= 4;
      }
      if (puVar6 == (unsigned char *)0x0) {
        return 0;
      }
      return 1;
    }
    temp_v4 = 0x2bbe50;
    temp_v2 = FUN_002bfefc(&DAT_00476638);
    if (temp_v2 == 0) goto LAB_002bb9f0;
    puStack_60 = &DAT_004efdac;
    DAT_004efd9c = 0x3f800000;
    DAT_004efda0 = 0;
    DAT_004efda4 = 0;
    DAT_004efda8 = 0;
    DAT_004efdac = 0;
    DAT_004efdb0 = 0x3f800000;
    uStack_48 = 0x44e4;
    puStack_40 = &DAT_0044e458;
    uStack_44 = 0x4c6464;
    *param_3 = (char)param_3;
    iStack_6c = (int)param_3 << 1;
    uStack_68 = 0x4c6464;
    puStack_64 = param_3;
    puStack_5c = puStack_60;
    uStack_58 = temp_v4;
    puStack_3c = puStack_60;
    FUN_002b9024();
    if (param_3 != (unsigned char *)0x0) {
      temp_v0 = param_3[2];
      temp_v2 = FUN_0031c658(DAT_00433158,(unsigned int)temp_v0);
      if (temp_v2 == 0) {
        FUN_002bd420((unsigned int)temp_v0 << 1);
        uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,temp_v6,in_cr1,in_cr10);
    in_s4 = DAT_004efdec;
  }
  else {
    DAT_0044e470 = in_stack_0000014c;
    DAT_0044e474 = in_stack_00000150;
    coprocessor_store(1,in_cr14,0x44e5f8);
    uRam00000000 = 0;
    DAT_0044e46c = in_s0;
  }
  VectorSignedToFloat(in_s4 - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
  coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
  halt_baddata();
}
