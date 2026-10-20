/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f07c2` (_code @ 0x2f07c2, 0x15a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010acde(unsigned int, unsigned int, int);
int FUN_0010aef6(int, unsigned int);
int FUN_002eb164(unsigned char [8], int);
int constructObj00559344(...);
int arrayElementAddress_002eee88(...);
int FUN_002eefc4(...);
int FUN_002ef8f8(...);
int FUN_002efcb8(...);
int FUN_002efcc4(int, unsigned int, int);
int FUN_002efcf2(...);
int FUN_002efcfc(int *, unsigned int);
int FUN_002efd12(...);
int mapIteratorNext2(...);
int FUN_002efdb4(...);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

/* Supplied declaration required: FUN_0010acde. */
/* Supplied declaration required: FUN_0010aef6. */
/* Supplied declaration required: FUN_002eb164. */
/* Supplied declaration required: constructObj00559344. */
/* Supplied declaration required: arrayElementAddress_002eee88. */
/* Supplied declaration required: FUN_002eefc4. */
extern unsigned int FUN_002ef00c(unsigned char *, unsigned int);
extern int FUN_002ef01c(unsigned int);
/* Supplied declaration required: FUN_002ef8f8. */
/* Supplied declaration required: FUN_002efcb8. */
/* Supplied declaration required: FUN_002efcc4. */
/* Supplied declaration required: FUN_002efcf2. */
/* Supplied declaration required: FUN_002efcfc. */
/* Supplied declaration required: FUN_002efd12. */
extern unsigned int seq16Diff(unsigned int, unsigned int);
extern int seq16IsGreater(unsigned char *, unsigned char *);
extern int FUN_002efd4a(unsigned char *, unsigned char *);
/* Supplied declaration required: mapIteratorNext2. */
/* Supplied declaration required: FUN_002efdb4. */


void FUN_002f07c2(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 14 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [8];
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [12];
  int iStack_24;
  unsigned int temp_v15;
  unsigned int uStack_1c;
  unsigned int temp_v16;
  
  iStack_24 = param_1;
  temp_v15 = param_2;
  uStack_1c = param_3;
  temp_v16 = param_4;
  temp_v1 = FUN_002ef00c(temp_v7,param_3);
  temp_v2 = param_1 + 0x9c;
  piVar4 = (int *)arrayElementAddress_002eee88(temp_v2,temp_v16);
  temp_v3 = *piVar4;
  FUN_0010aef6(temp_v3,temp_v1);
  if ((temp_v3 != 0) && (temp_v4 = FUN_002efcb8(param_1,temp_v3), temp_v4 != 0)) {
    temp_v0 = *(unsigned short *)(temp_v3 + 0x120);
    temp_v4 = FUN_002ef01c(*(unsigned int *)(param_1 + 4));
    if ((unsigned int)temp_v0 < *(unsigned int *)(temp_v4 + 0x94)) {
      FUN_002efcc4(param_1,temp_v15,temp_v3);
    }
    FUN_002efcf2(temp_v9,temp_v3);
    temp_v1 = FUN_002ef00c(temp_v8,param_3);
    puVar7 = (unsigned int *)arrayElementAddress_002eee88(temp_v2,temp_v16);
    FUN_0010acde(*puVar7,temp_v1,param_1 + 0x340);
    puVar7 = (unsigned int *)arrayElementAddress_002eee88(temp_v2,temp_v16);
    FUN_002efcfc(&temp_v6,*puVar7);
    temp_v11 = temp_v6;
    piVar4 = (int *)arrayElementAddress_002eee88(temp_v2,temp_v16);
    temp_v3 = *piVar4;
    FUN_002efd12(temp_v3,&temp_v11);
    temp_v1 = constructObj00559344(temp_v8,2);
    temp_v1 = seq16Diff(param_3,temp_v1);
    constructObj00559344(temp_v10,temp_v1);
    temp_v4 = 0;
    do {
      if (temp_v3 == 0) break;
      FUN_002eb164(temp_v13,temp_v3);
      temp_v5 = seq16IsGreater(temp_v13,temp_v10);
      if (temp_v5 != 0) break;
      if (temp_v3 != 0) {
        FUN_002efcf2(temp_v14,temp_v3);
        temp_v5 = FUN_002efd4a(temp_v14,temp_v9);
        if ((temp_v5 != 0) && (*(unsigned short *)(temp_v3 + 0x120) < 5)) {
          FUN_002efcb8(param_1,temp_v3);
          FUN_002ef8f8(param_1,temp_v3);
          temp_v4 = temp_v4 + 1;
        }
      }
      mapIteratorNext2(&temp_v6);
      temp_v12 = temp_v6;
      piVar4 = (int *)arrayElementAddress_002eee88(temp_v2,temp_v16);
      temp_v3 = *piVar4;
      FUN_002efd12(temp_v3,&temp_v12);
    } while (temp_v4 < 2);
    puVar7 = (unsigned int *)arrayElementAddress_002eee88(temp_v2,temp_v16);
    FUN_002efdb4(*puVar7);
    FUN_002eefc4(param_1,temp_v16);
  }
  else {
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + 1;
  }
  return;
}

} /* extern "C" */
