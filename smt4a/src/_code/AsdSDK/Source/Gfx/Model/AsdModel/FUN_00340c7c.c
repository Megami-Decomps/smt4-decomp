/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340c7c` (_code @ 0x340c7c, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 8 slot(s), 23 byte(s) */
typedef struct {
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern signed char DAT_005b3bf5; /* 0x5b3bf5 */
extern unsigned char DAT_005b3bf6; /* 0x5b3bf6 */
extern signed char DAT_005b3bf8; /* 0x5b3bf8 */
extern int DAT_005b3c34; /* 0x5b3c34 */
extern float DAT_005b3c40; /* 0x5b3c40 */
extern float DAT_005b3c44; /* 0x5b3c44 */
extern unsigned int DAT_005b3c4c; /* 0x5b3c4c */
#ifndef ROMWRIGHT_STORAGE_s________005b3c50_19_1_DEFINED
#define ROMWRIGHT_STORAGE_s________005b3c50_19_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s________005b3c50_19_1 {
    char whole[19];
    unsigned char u1[19];
    signed char s1[19];
};
typedef char romwright_storage_s________005b3c50_19_1_size_check[(sizeof(union romwright_storage_s________005b3c50_19_1) == 19) ? 1 : -1];
typedef char romwright_storage_s________005b3c50_19_1_u1_width_check[(sizeof(((union romwright_storage_s________005b3c50_19_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s________005b3c50_19_1_s1_width_check[(sizeof(((union romwright_storage_s________005b3c50_19_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s________005b3c50_19_1 s________005b3c50; /* 0x5b3c50 */
extern int DAT_005b3c74; /* 0x5b3c74 */
extern int DAT_005c1430; /* 0x5c1430 */
extern int DAT_005c1438; /* 0x5c1438 */
extern int *DAT_00636ee0; /* 0x636ee0 */
extern unsigned int *DAT_00636ee4; /* 0x636ee4 */
extern unsigned int *DAT_00636ee8; /* 0x636ee8 */
extern unsigned int DAT_00636eec; /* 0x636eec */

/* Supplied declaration required: FUN_0015d8e0. */
extern unsigned int FUN_00168188(void);
/* Supplied declaration required: FUN_0044582c. */
extern int FUN_00451394(unsigned int *, unsigned int);


void FUN_00340c7c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  float temp_v11;
  unsigned char temp_v12;
  
  if (DAT_005b3bf5 == '\0') {
    return;
  }
  if (0 < DAT_005b3c34) {
    return;
  }
  if (DAT_005b3c74 != 0) {
    return;
  }
  temp_v4 = DAT_005b3bf8 != '\x02';
  DAT_005b3c4c = param_1;
  temp_v0 = FUN_00168188();
  temp_v8 = 0;
  temp_v12 = 0;
  temp_v5 = DAT_005b3c4c;
  temp_v9 = 1;
  temp_v7 = param_2 | 0x2000000;
  temp_v11 = ((float)(*(unsigned int *)&s________005b3c50.u1[0]) * DAT_005b3c40) / (DAT_005b3c44 - DAT_005b3c40);
  temp_v6 = temp_v5;
  temp_v10 = temp_v4;
  DAT_005b3c74 = FUN_00451394((unsigned int *)&temp_v5,temp_v0);
  temp_v0 = FUN_00168188();
  FUN_0015d8e0(&DAT_005b3c74,temp_v0,0);
  temp_v0 = DAT_005b3c74;
  temp_v1 = FUN_00168188();
  FUN_0044582c(temp_v1,temp_v0);
  temp_v2 = DAT_00636eec & 0x3fffffff;
  if ((int)temp_v2 <= ((int)DAT_00636ee8 - (int)DAT_00636ee4) >> 2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if ((DAT_00636eec & 0x3fffffff) < temp_v2) {
      if (((DAT_00636ee0 == (int *)0x0) || ((DAT_00636eec & 0xc0000000) != 0x40000000)) ||
         (puVar5 = (unsigned int *)(**(romwright_code **)(*DAT_00636ee0 + 8))(DAT_00636ee0,temp_v2 << 2,0x20),
         puVar1 = DAT_00636ee8, puVar5 == (unsigned int *)0x0)) goto LAB_00340e54;
      temp_v3 = 0;
      puVar6 = DAT_00636ee4;
      puVar7 = puVar5;
      if (DAT_00636ee4 != DAT_00636ee8) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar1);
        temp_v3 = ((int)DAT_00636ee8 - (int)DAT_00636ee4) >> 2;
      }
      if (DAT_00636ee4 != (unsigned int *)0x0) {
        DAT_00636ee8 = DAT_00636ee4;
        (**(romwright_code **)(*DAT_00636ee0 + 0xc))();
      }
      DAT_00636ee8 = puVar5 + temp_v3;
      DAT_00636eec = (DAT_00636eec & 0xc0000000) | temp_v2;
      DAT_00636ee4 = puVar5;
    }
  }
  if (DAT_00636ee8 != (unsigned int *)0x0) {
    *DAT_00636ee8 = temp_v1;
  }
  DAT_00636ee8 = DAT_00636ee8 + 1;
LAB_00340e54:
  if (DAT_005c1430 != 0) {
    *(unsigned int *)(DAT_005c1430 + 4) = *DAT_00636ee4;
  }
  if (DAT_005c1438 != 0) {
    *(unsigned int *)(DAT_005c1438 + 4) = *DAT_00636ee4;
  }
  DAT_005b3bf6 = 1;
  return;
}
