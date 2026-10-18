/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bb08` (_code @ 0x10bb08, 0x218 bytes) from smt4.cxi.
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

extern signed char DAT_00464af1; /* 0x464af1 */
extern unsigned char DAT_00464af2; /* 0x464af2 */
extern signed char DAT_00464af4; /* 0x464af4 */
extern int DAT_00464b30; /* 0x464b30 */
extern float DAT_00464b3c; /* 0x464b3c */
extern float DAT_00464b40; /* 0x464b40 */
extern unsigned int DAT_00464b48; /* 0x464b48 */
#ifndef ROMWRIGHT_STORAGE_s________00464b4c_19_1_DEFINED
#define ROMWRIGHT_STORAGE_s________00464b4c_19_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s________00464b4c_19_1 {
    char whole[19];
    unsigned char u1[19];
    signed char s1[19];
};
typedef char romwright_storage_s________00464b4c_19_1_size_check[(sizeof(union romwright_storage_s________00464b4c_19_1) == 19) ? 1 : -1];
typedef char romwright_storage_s________00464b4c_19_1_u1_width_check[(sizeof(((union romwright_storage_s________00464b4c_19_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s________00464b4c_19_1_s1_width_check[(sizeof(((union romwright_storage_s________00464b4c_19_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s________00464b4c_19_1 s________00464b4c; /* 0x464b4c */
extern int DAT_00464b70; /* 0x464b70 */
extern int DAT_00472950; /* 0x472950 */
extern int DAT_00472958; /* 0x472958 */
extern int *DAT_004dae60; /* 0x4dae60 */
extern unsigned int *DAT_004dae64; /* 0x4dae64 */
extern unsigned int *DAT_004dae68; /* 0x4dae68 */
extern unsigned int DAT_004dae6c; /* 0x4dae6c */

/* Supplied declaration required: FUN_0011f7d8. */
extern int FUN_001204a4(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002bd688. */
extern unsigned int FUN_002c31bc(void);


void FUN_0010bb08(unsigned int param_1,unsigned int param_2)

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
  
  if (DAT_00464af1 == '\0') {
    return;
  }
  if (0 < DAT_00464b30) {
    return;
  }
  if (DAT_00464b70 != 0) {
    return;
  }
  temp_v4 = DAT_00464af4 != '\x02';
  DAT_00464b48 = param_1;
  temp_v0 = FUN_002c31bc();
  temp_v8 = 0;
  temp_v12 = 0;
  temp_v5 = DAT_00464b48;
  temp_v9 = 1;
  temp_v7 = param_2 | 0x2000000;
  temp_v11 = ((float)(*(unsigned int *)&s________00464b4c.u1[0]) * DAT_00464b3c) / (DAT_00464b40 - DAT_00464b3c);
  temp_v6 = temp_v5;
  temp_v10 = temp_v4;
  DAT_00464b70 = FUN_001204a4((unsigned int *)&temp_v5,temp_v0);
  temp_v0 = FUN_002c31bc();
  FUN_002bd688(&DAT_00464b70,temp_v0,0);
  temp_v0 = DAT_00464b70;
  temp_v1 = FUN_002c31bc();
  FUN_0011f7d8(temp_v1,temp_v0);
  temp_v2 = DAT_004dae6c & 0x3fffffff;
  if ((int)temp_v2 <= ((int)DAT_004dae68 - (int)DAT_004dae64) >> 2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if ((DAT_004dae6c & 0x3fffffff) < temp_v2) {
      if ((DAT_004dae60 == (int *)0x0) || ((DAT_004dae6c & 0xc0000000) != 0x40000000))
      goto LAB_0010bcd8;
      puVar5 = (unsigned int *)(**(romwright_code **)(*DAT_004dae60 + 8))(DAT_004dae60,temp_v2 << 2,0x20);
      puVar1 = DAT_004dae68;
      temp_v3 = 0;
      puVar6 = DAT_004dae64;
      puVar7 = puVar5;
      if (DAT_004dae64 != DAT_004dae68) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            *puVar7 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar1);
        temp_v3 = ((int)DAT_004dae68 - (int)DAT_004dae64) >> 2;
      }
      if (DAT_004dae64 != (unsigned int *)0x0) {
        (**(romwright_code **)(*DAT_004dae60 + 0xc))();
      }
      DAT_004dae68 = puVar5 + temp_v3;
      DAT_004dae6c = (DAT_004dae6c & 0xc0000000) | temp_v2;
      DAT_004dae64 = puVar5;
    }
  }
  if (DAT_004dae68 != (unsigned int *)0x0) {
    *DAT_004dae68 = temp_v1;
  }
  DAT_004dae68 = DAT_004dae68 + 1;
LAB_0010bcd8:
  if (DAT_00472950 != 0) {
    *(unsigned int *)(DAT_00472950 + 4) = *DAT_004dae64;
  }
  if (DAT_00472958 != 0) {
    *(unsigned int *)(DAT_00472958 + 4) = *DAT_004dae64;
  }
  DAT_00464af2 = 1;
  return;
}
