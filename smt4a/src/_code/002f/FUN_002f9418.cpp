/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9418` (_code @ 0x2f9418, 0x8a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int sysPlaySe(...);
int FUN_00184310(void);
int dataTable00FindById(void);
int FUN_0021a6c8(int);
int FUN_002a7324(...);
int FUN_002c7e24(void);
int FUN_002c982c(...);
int FUN_002f0420(...);
int FUN_0032d0c8(...);
int statusDisplayBindUnitRecord(...);
int FUN_003343f0(...);
int FUN_0036d318(...);
int FUN_00371edc(...);
int FUN_0037e09c(int);
int FUN_0038e4cc(...);

/* stack frame of param_1: 11 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned short sp120; /* 0x120: local_120 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned short sp154; /* 0x154: local_154 */
    unsigned short sp156; /* 0x156: local_156 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int FUN_001643a0(void);
extern unsigned short FUN_001643b4(unsigned int, unsigned int);
extern int FUN_00165070(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_0021a6c8. */
extern int FUN_0023b3d0(void);
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002a7410(void);
/* Supplied declaration required: FUN_002c7e24. */
/* Supplied declaration required: FUN_002c982c. */
extern int ifTouchGetActiveCounter(void);
/* Supplied declaration required: FUN_002f0420. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: FUN_003343f0. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0036d318. */
/* Supplied declaration required: FUN_00371edc. */
/* Supplied declaration required: FUN_0037e09c. */
/* Supplied declaration required: FUN_0038e4cc. */


void FUN_002f9418(int param_1)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short *puVar7;
  short *psVar8;
  unsigned short *puVar9;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar13;
  unsigned char *puVar14;
  unsigned int *puVar15;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11 [42];
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned short temp_v18;
  int *temp_v19;
  unsigned char *temp_v20;
  unsigned int *temp_v21;
  int temp_v22;
  
  temp_v8 = 0;
  do {
    temp_v2 = FUN_00165070();
    if (temp_v2 == *(short *)(param_1 + temp_v8 * 2 + 0x480e)) goto LAB_002f9458;
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 0x20);
  temp_v8 = -1;
LAB_002f9458:
  puVar15 = (unsigned int *)(param_1 + 0x4ad8);
  temp_v21 = (unsigned int *)(param_1 + 0x4ae0);
  temp_v20 = (unsigned char *)(param_1 + 0x4ae4);
  temp_v19 = (int *)(param_1 + 0x4adc);
  puVar13 = (unsigned int *)(param_1 + 0x4850);
  switch(*puVar15) {
  case 1:
    FUN_0021a6c8(param_1);
    FUN_0038e4cc(param_1,0);
    temp_v8 = FUN_00163aa4(param_1 + 0x11a0);
    if (temp_v8 != 0) {
      *puVar15 = 2;
      *temp_v19 = 0;
      temp_v1 = FUN_001643b4(0xd,0x1b3);
      *(unsigned short *)(param_1 + 0x4830) = temp_v1;
      temp_v0 = 0;
      temp_v6 = 0;
      *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
      temp_v8 = 0;
      if ((int)*puVar13 < 1) {
        temp_v3 = 0x35;
      }
      else {
        do {
          temp_v2 = param_1 + temp_v8 * 0x40;
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4858);
          dataTable00FindById();
          if ((*(unsigned short *)(temp_v5 + 2) & 0x8000) != 0) {
            temp_v0 = 1;
            if (*(char *)(param_1 + 0x4857) != '\0') {
              temp_v1 = FUN_001643b4(0xd,0x1a0);
              *(unsigned short *)(param_1 + temp_v8 * 2 + 0x4832) = temp_v1;
            }
            else {
              temp_v5 = *(int *)(temp_v2 + 0x488c) - 0x14a;
              temp_v10 = temp_v5 >= 4;
              temp_v9 = temp_v5 == 4;
              if (temp_v5 >= 5) {
                temp_v5 = *(int *)(temp_v2 + 0x488c) - 0x165;
                temp_v10 = temp_v5 >= 3;
                temp_v9 = temp_v5 == 3;
              }
              if (!(temp_v10 && !temp_v9)) {
                temp_v1 = FUN_001643b4(0xd,0x19f);
                *(unsigned short *)(param_1 + temp_v8 * 2 + 0x4832) = temp_v1;
              }
              else {
                temp_v1 = FUN_001643b4(0xd,0x19e);
                *(unsigned short *)(param_1 + temp_v8 * 2 + 0x4832) = temp_v1;
              }
            }
          }
          else {
            temp_v1 = FUN_001643b4(0xd,*(unsigned int *)(temp_v2 + 0x488c));
            *(unsigned short *)(param_1 + temp_v8 * 2 + 0x4832) = temp_v1;
            if (*(char *)(temp_v2 + 0x4894) != '\0') {
              temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4858);
            }
          }
          temp_v8 = temp_v8 + 1;
          *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
        } while (temp_v8 < (int)*puVar13);
        sysPlaySe(0x35);
        temp_v5 = 0;
        if (temp_v6 != 0) {
          FUN_00184310();
          temp_v5 = temp_v6;
        }
        if ((!temp_v0) && ((temp_v5 == 0 || ((*(unsigned char *)(temp_v5 + 0xb3) & 2) == 0)))) break;
        temp_v3 = 0x11b;
      }
      sysPlaySe(temp_v3);
    }
    break;
  case 2:
    temp_v2 = FUN_00163aa4(param_1 + 0x12b8);
    if (temp_v2 == 0) break;
    FUN_0038e4cc(param_1,0);
    temp_v2 = FUN_0023b3d0();
    if (temp_v2 == 0) break;
    psVar8 = (short *)FUN_002c7e24();
    temp_v2 = 0;
    if (0 < (int)*puVar13) {
      do {
        if (*(char *)(param_1 + temp_v2 * 0x40 + 0x4894) != '\0') {
          temp_v2 = param_1 + temp_v2 * 0x40;
          temp_v22 = temp_v2;
          if (((int)*psVar8 != (unsigned int)*(unsigned short *)(temp_v2 + 0x4858)) ||
             (psVar8[0xe] != *(short *)(temp_v2 + 0x485e))) {
            FUN_0036d318(*(unsigned short *)(temp_v2 + 0x4858),temp_v11);
            puVar9 = (unsigned short *)FUN_002c7e24();
            temp_v6 = (unsigned int)*puVar9;
            dataTable00FindById();
            psVar8 = (short *)FUN_002c7e24();
            if ((*psVar8 < 1) || ((temp_v6 == 0 || ((*(unsigned short *)(temp_v6 + 0x16) & 1) != 0)))) {
              temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4858);
              dataTable00FindById();
              if ((temp_v6 != 0) && ((*(unsigned short *)(temp_v6 + 0x16) & 1) == 0)) {
                temp_v14 = 0;
                temp_v15 = 0;
                temp_v16 = 0;
                temp_v17 = 0;
              }
            }
            else {
              temp_v14 = 0;
              temp_v15 = 0;
              temp_v16 = 0;
              temp_v17 = 0;
            }
            temp_v12 = *(unsigned short *)(temp_v2 + 0x485a);
            temp_v13 = *(unsigned short *)(temp_v2 + 0x485c);
            temp_v18 = *(unsigned short *)(temp_v2 + 0x485e);
            statusDisplayBindUnitRecord(temp_v11,1,0,temp_v22 + 0x4871);
            FUN_0037e09c(1);
            FUN_002a7324(1);
            *temp_v21 = 0;
            temp_v4 = FUN_0026264c(*(unsigned short *)(temp_v2 + 0x4858));
            if (temp_v4 != 0) {
              FUN_0032d0c8(0,1,*(unsigned short *)(temp_v2 + 0x4858),0);
            }
            else {
              FUN_0032d0c8(0,2,*(unsigned short *)(temp_v2 + 0x4858),0);
            }
          }
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)*puVar13);
    }
    FUN_002c982c(param_1);
    *(unsigned char *)(param_1 + 0x4855) = 0;
    temp_v2 = FUN_002a7410();
    if (temp_v2 != 0) {
      FUN_00371edc(1);
      *puVar15 = 3;
      *temp_v20 = 0;
      temp_v8 = FUN_0035db94();
      if (temp_v8 < 0) {
        FUN_0038e4cc(param_1,10);
      }
      else {
        temp_v8 = FUN_0035db94();
        if (0 < temp_v8) {
          FUN_0038e4cc(param_1,9);
        }
      }
      break;
    }
    if (*(char *)(param_1 + 0x38b0) != '\0') break;
    puVar14 = (unsigned char *)(param_1 + 0x3894);
    if (temp_v8 >= 0) {
      temp_v2 = FUN_001643a0();
      if ((temp_v2 != 1) && (temp_v2 = FUN_001643a0(), temp_v2 != 2)) {
        temp_v2 = FUN_001643a0();
        if (temp_v2 != 6) goto LAB_002f9924;
        if (temp_v8 != 0x11) {
          *puVar14 = 0;
        }
      }
      else if (temp_v8 != 0x11) {
        if (*(char *)(param_1 + 0x4854) == '\0') {
          temp_v6 = *puVar13;
          if (0 < (int)temp_v6) {
            temp_v5 = temp_v6 & 1;
            if (temp_v5 == 1) {
              *(unsigned char *)(param_1 + 0x4894) = 0;
            }
            temp_v7 = (unsigned int)(temp_v5 == 1);
            if ((int)temp_v5 < (int)temp_v6) {
              do {
                *(unsigned char *)(param_1 + temp_v7 * 0x40 + 0x4894) = 0;
                *(unsigned char *)(param_1 + (temp_v7 + 1) * 0x40 + 0x4894) = 0;
                temp_v5 = temp_v5 + 2;
                temp_v7 = temp_v7 + 2;
              } while ((int)temp_v5 < (int)*puVar13);
            }
          }
          temp_v2 = param_1 + temp_v8 * 0x40;
          if (*(char *)(temp_v2 + 0x43f0) != '\0') {
            *(unsigned char *)(temp_v2 + 0x4414) = 1;
            *(unsigned char *)(param_1 + 0x4855) = 1;
          }
        }
      }
      else {
        *puVar14 = 1;
        *puVar15 = 4;
        FUN_003343f0();
      }
      temp_v2 = FUN_001643a0();
      if (((temp_v2 == 1) && (temp_v2 = ifTouchGetActiveCounter(), temp_v2 < 1)) && (temp_v8 != 0x11)) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
    }
    else {
LAB_002f9924:
      temp_v8 = 0;
      FUN_001517b4(0,1);
      if (temp_v8 != 0) {
        *puVar14 = 0;
      }
      else {
        temp_v8 = 1;
        FUN_001517b4(1,1);
        if (temp_v8 != 0) {
          *puVar14 = 1;
          *puVar15 = 4;
          FUN_003343f0(1);
        }
      }
    }
    break;
  case 3:
    FUN_00163aa4(param_1 + 0x12b8);
    FUN_002c982c(param_1);
    temp_v8 = FUN_002a7410();
    if (temp_v8 != 0) {
      temp_v2 = 0;
      temp_v8 = 0;
      if (temp_v2 < (int)*puVar13) {
        do {
          temp_v8 = temp_v2;
          if (*(char *)(param_1 + temp_v2 * 0x40 + 0x4894) != '\0') break;
          temp_v2 = temp_v2 + 1;
          temp_v8 = 0;
        } while (temp_v2 < (int)*puVar13);
      }
      psVar8 = (short *)FUN_002c7e24();
      param_1 = param_1 + temp_v8 * 0x40;
      if ((int)*psVar8 != (unsigned int)*(unsigned short *)(param_1 + 0x4858)) {
        FUN_0036d318((unsigned int)*(unsigned short *)(param_1 + 0x4858),temp_v11);
        puVar9 = (unsigned short *)FUN_002c7e24();
        temp_v6 = (unsigned int)*puVar9;
        dataTable00FindById();
        if ((temp_v6 != 0) && ((*(unsigned short *)(temp_v6 + 0x16) & 1) == 0)) {
          temp_v14 = 0;
          temp_v15 = 0;
          temp_v16 = 0;
          temp_v17 = 0;
        }
        temp_v12 = *(unsigned short *)(param_1 + 0x485a);
        temp_v13 = *(unsigned short *)(param_1 + 0x485c);
        temp_v18 = *(unsigned short *)(param_1 + 0x485e);
        statusDisplayBindUnitRecord(temp_v11,1,0,param_1 + 0x4871);
        FUN_002f0420(0);
        FUN_002a7324(1);
        *temp_v21 = 0;
        *temp_v20 = 0;
      }
    }
    else {
      FUN_00371edc(0);
      *puVar15 = 2;
      temp_v8 = FUN_0035db94();
      if (temp_v8 < 0) {
        FUN_0038e4cc(param_1,0xb);
      }
      else {
        temp_v8 = FUN_0035db94();
        if (0 < temp_v8) {
          FUN_0038e4cc(param_1,0xc);
        }
      }
      puVar7 = (unsigned short *)FUN_002c7e24();
      puVar9 = (unsigned short *)FUN_002c7e24();
      temp_v6 = (unsigned int)*puVar9;
      FUN_00184310();
      sysPlaySe(0x35);
      if ((*(unsigned char *)(temp_v6 + 0xb3) & 2) != 0) {
        sysPlaySe(0x11b);
      }
      temp_v8 = FUN_0026264c(*puVar7);
      if (temp_v8 != 0) {
        FUN_0032d0c8(0,1,*puVar7,0);
      }
      else {
        FUN_0032d0c8(0,2,*puVar7,0);
      }
    }
  }
  *temp_v19 = *temp_v19 + 1;
  return;
}

} /* extern "C" */
