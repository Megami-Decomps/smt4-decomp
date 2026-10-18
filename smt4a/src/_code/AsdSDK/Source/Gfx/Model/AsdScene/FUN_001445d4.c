/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001445d4` (_code @ 0x1445d4, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp47; /* 0x47: local_47 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

#ifndef ROMWRIGHT_STORAGE_s__c___005b3cd8_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__c___005b3cd8_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__c___005b3cd8_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__c___005b3cd8_9_1_size_check[(sizeof(union romwright_storage_s__c___005b3cd8_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__c___005b3cd8_9_1_u1_width_check[(sizeof(((union romwright_storage_s__c___005b3cd8_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__c___005b3cd8_9_1_s1_width_check[(sizeof(((union romwright_storage_s__c___005b3cd8_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__c___005b3cd8_9_1 s__c___005b3cd8; /* 0x5b3cd8 */

/* Supplied declaration required: FUN_00151c18. */
/* Supplied declaration required: FUN_00152618. */
extern int FUN_0015add8(unsigned char *, unsigned int);
extern int FUN_0015d35c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_001630d4. */
extern unsigned int FUN_00168188(void);
extern unsigned int FUN_001931d8(int);


void FUN_001445d4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  temp_v3 = 0;
  temp_v4 = 0x3e4ccccd;
  temp_v5 = 0x3f800000;
  temp_v7 = 0x3f666666;
  temp_v8 = 0x3dcccccd;
  temp_v6 = 0;
  temp_v9 = 0x3f000000;
  do {
    puVar1 = (unsigned int *)0x100;
    FUN_001630d4(0x100,0x100,0,0xc,1);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xffffffff;
    temp_v0 = FUN_00168188();
    temp_v10 = 1;
    temp_v11 = 1;
    temp_v14 = 1;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v1 = FUN_0015add8(&temp_v10,temp_v0);
    puVar1[1] = temp_v1;
    temp_v1 = *(int *)(temp_v1 + 8);
    puVar1[2] = temp_v1;
    *(unsigned int *)(temp_v1 + 0xb8) = temp_v4;
    *(unsigned int *)(temp_v1 + 0xbc) = temp_v4;
    *(unsigned int *)(temp_v1 + 0xc0) = temp_v4;
    *(unsigned int *)(temp_v1 + 0xc4) = temp_v5;
    temp_v0 = FUN_001931d8(puVar1[2] + 0xb8);
    *(unsigned int *)(puVar1[2] + 200) = temp_v0;
    *(unsigned int **)((*(unsigned int *)&s__c___005b3cd8.u1[0]) + temp_v3 * 4) = puVar1;
    puVar1 = (unsigned int *)0x100;
    FUN_001630d4(0x100,0x100,0,0xc,1);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xffffffff;
    temp_v0 = FUN_00168188();
    temp_v10 = 1;
    temp_v11 = 1;
    temp_v14 = 1;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v1 = FUN_0015d35c(&temp_v10,temp_v0);
    puVar1[1] = temp_v1;
    temp_v1 = *(int *)(temp_v1 + 8);
    puVar1[2] = temp_v1;
    *(unsigned int *)(temp_v1 + 200) = temp_v7;
    *(unsigned int *)(temp_v1 + 0xcc) = temp_v7;
    *(unsigned int *)(temp_v1 + 0xd0) = temp_v5;
    *(unsigned int *)(temp_v1 + 0xd4) = temp_v5;
    temp_v1 = puVar1[2];
    *(unsigned int *)(temp_v1 + 0xb8) = temp_v8;
    *(unsigned int *)(temp_v1 + 0xbc) = temp_v6;
    *(unsigned int *)(temp_v1 + 0xc0) = temp_v6;
    *(unsigned int *)(temp_v1 + 0xc4) = temp_v5;
    temp_v1 = puVar1[2];
    *(unsigned int *)(temp_v1 + 0xd8) = temp_v6;
    *(unsigned int *)(temp_v1 + 0xdc) = temp_v5;
    *(unsigned int *)(temp_v1 + 0xe0) = temp_v6;
    *(unsigned int *)(puVar1[2] + 0xe4) = temp_v9;
    temp_v2 = (*(unsigned int *)&s__c___005b3cd8.u1[0]) + temp_v3 * 4;
    *(unsigned int **)(temp_v2 + 8) = puVar1;
    FUN_00151c18();
    *(int *)((*(unsigned int *)&s__c___005b3cd8.u1[0]) + temp_v3 * 4 + 0x10) = temp_v2;
    FUN_00152618();
    temp_v1 = temp_v3 * 4;
    temp_v3 = temp_v3 + 1;
    *(int *)((*(unsigned int *)&s__c___005b3cd8.u1[0]) + temp_v1 + 0x18) = temp_v2;
  } while (temp_v3 < 2);
  return;
}
