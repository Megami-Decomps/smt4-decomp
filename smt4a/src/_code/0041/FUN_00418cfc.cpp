/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418cfc` (_code @ 0x418cfc, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00418c3c(int, int);
int FUN_004191f0(unsigned char [256], int, int, int *);
int textureConvertLinearTile(unsigned char [256], unsigned int, int, int *);
int rt_memcpy(...);

typedef int romwright_code(...);
/* stack frame of param_9: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_9_stack;

#ifndef ROMWRIGHT_STORAGE_s__A_A_A_A_A_A_A_A_A_005c143c_37_1_DEFINED
#define ROMWRIGHT_STORAGE_s__A_A_A_A_A_A_A_A_A_005c143c_37_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1 {
    char whole[37];
    unsigned char u1[37];
    signed char s1[37];
};
typedef char romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1_size_check[(sizeof(union romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1) == 37) ? 1 : -1];
typedef char romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1_u1_width_check[(sizeof(((union romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1_s1_width_check[(sizeof(((union romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__A_A_A_A_A_A_A_A_A_005c143c_37_1 s__A_A_A_A_A_A_A_A_A_005c143c; /* 0x5c143c */

/* Supplied declaration required: FUN_00418c3c. */
/* Supplied declaration required: FUN_004191f0. */
/* Supplied declaration required: textureConvertLinearTile. */
extern unsigned long long __aeabi_uidivmod(int, unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned int
FUN_00418cfc(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  romwright_code *pcVar4;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned long long temp_v8;
  unsigned char temp_v9 [256];
  int temp_v10;
  int iStack_4c;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_34;
  unsigned int temp_v16;
  int temp_v17;
  
  if (((param_4 | param_5) & 3) != 0) {
    temp_v0 = 0;
  }
  else {
    temp_v11 = param_4 >> 3;
    uStack_34 = param_5;
    temp_v12 = param_5 >> 3;
    temp_v13 = param_6;
    temp_v14 = param_7;
    temp_v16 = (unsigned int)(param_8 != 0);
    temp_v10 = param_2;
    iStack_4c = param_3;
    temp_v15 = param_4;
    temp_v17 = param_1;
    if (((param_9 != 0) && (param_3 == 0x1401)) &&
       ((pcVar4 = (romwright_code *)(*(unsigned int *)&s__A_A_A_A_A_A_A_A_A_005c143c.u1[0]), param_2 == 0x6752 ||
        (((pcVar4 = (romwright_code *)(*(unsigned int *)&s__A_A_A_A_A_A_A_A_A_005c143c.u1[4]), param_2 == 0x6754 ||
          (pcVar4 = (romwright_code *)(*(unsigned int *)&s__A_A_A_A_A_A_A_A_A_005c143c.u1[8]), param_2 == 0x6758)) ||
         (pcVar4 = (romwright_code *)(*(unsigned int *)&s__A_A_A_A_A_A_A_A_A_005c143c.u1[12]), param_2 != 0x6756)))))) {
      (*pcVar4)(&temp_v10);
    }
    temp_v7 = 0;
    if (temp_v7 < (int)temp_v12) {
      do {
        temp_v6 = 0;
        if (temp_v6 < (int)temp_v11) {
          do {
            temp_v4 = temp_v7 * temp_v11 + temp_v6;
            temp_v8 = __aeabi_uidivmod(temp_v4,temp_v11);
            temp_v1 = FUN_00418c3c(temp_v10,iStack_4c);
            if (temp_v17 != 1) {
              temp_v4 = 0;
              temp_v5 = (temp_v11 * (int)temp_v8 * 0x40 * temp_v1 >> 3) +
                      (((int)((unsigned long long)temp_v8 >> 0x20) * temp_v1) & 0x1fffffff) + temp_v13;
              puVar7 = temp_v9;
              do {
                rt_memcpy(puVar7,temp_v5,temp_v1 & 0x1fffffff);
                temp_v4 = temp_v4 + 1;
                puVar7 = puVar7 + (temp_v1 & 0x1fffffff);
                temp_v5 = temp_v5 + (temp_v15 * temp_v1 >> 3);
              } while (temp_v4 < 8);
            }
            else {
              rt_memcpy(temp_v9,temp_v13 + ((temp_v4 * temp_v1) & 0x3ffffff) * 8,
                        (temp_v1 & 0x3ffffff) << 3);
            }
            temp_v4 = temp_v7 * temp_v11 + temp_v6;
            temp_v8 = __aeabi_uidivmod(temp_v4,temp_v11);
            temp_v3 = (int)((unsigned long long)temp_v8 >> 0x20);
            temp_v5 = (int)temp_v8;
            temp_v2 = FUN_00418c3c(temp_v10,iStack_4c);
            if (temp_v17 != 1) {
              if (temp_v16 != 0) {
                temp_v4 = ((temp_v12 - temp_v5) - 1) * temp_v11 + temp_v3;
              }
              textureConvertLinearTile(temp_v9,temp_v14 + ((temp_v4 * temp_v2) & 0x3ffffffU) * 8,8,&temp_v10);
            }
            else {
              if (temp_v16 != 0) {
                temp_v4 = (((temp_v12 - temp_v5) - 1) * temp_v11 * 0x40 * temp_v2 >> 3) +
                        ((temp_v3 * temp_v2) & 0x1fffffffU);
              }
              else {
                temp_v4 = (temp_v11 * temp_v5 * 0x40 * temp_v2 >> 3) + ((temp_v3 * temp_v2) & 0x1fffffffU);
              }
              FUN_004191f0(temp_v9,temp_v4 + temp_v14,8,&temp_v10);
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < (int)temp_v11);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (int)temp_v12);
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
