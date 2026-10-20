/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e03c` (_code @ 0x35e03c, 0x3f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e0798(int);
int FUN_0034a290(void);
int FUN_003df6a4(unsigned short [10], int);
int FUN_003e00bc(int);
int FUN_004bccd0(int, unsigned short [10]);
int FUN_004bd17c(int);
int FUN_004bd3ec(int, int);
int FUN_004cc8d8(int, int);
int FUN_004ccbf0(int);
int SBORROW4(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
} param_4_stack;

extern int DAT_005f15fc; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern unsigned int FUN_0014bef4(unsigned int);
extern int FUN_001801a4(void);
extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_002e0798. */
extern int FUN_002e5c2c(void);
/* Supplied declaration required: FUN_0034a290. */
extern int FUN_003df4a4(void);
/* Supplied declaration required: FUN_003df6a4. */
extern int FUN_003e0044(unsigned int);
/* Supplied declaration required: FUN_003e00bc. */
/* Supplied declaration required: FUN_004bccd0. */
/* Supplied declaration required: FUN_004bd17c. */
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004cc8d8. */
/* Supplied declaration required: FUN_004ccbf0. */


unsigned int FUN_0035e03c(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 goto(s); 10 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned short temp_v12 [10];
  
  temp_v9 = 0;
  temp_v8 = 0;
  if (param_1 < 0) {
    temp_v9 = FUN_001801a4();
  }
  else {
    temp_v8 = FUN_001ab854();
    if (temp_v8 == 0) {
      return 1;
    }
  }
  temp_v10 = 1;
  if (param_4 == 0) {
    if (*(short *)(param_2 + 0x30) != 0xb) {
      if ((!(*(short *)(param_2 + 0x30) != 0xc || param_3 != 0)) &&
         (temp_v4 = FUN_0014bef4(99), 0x18 >= temp_v4)) {
        if (temp_v9 != 0) {
          temp_v2 = *(short *)(temp_v9 + 0x2c);
        }
        else {
          temp_v2 = *(short *)(temp_v8 + 0x2c);
        }
        if (temp_v9 != 0) {
          *(short *)(temp_v9 + 0x2c) = temp_v2 / 2;
        }
        else {
          *(short *)(temp_v8 + 0x2c) = temp_v2 / 2;
        }
        temp_v10 = 0;
      }
    }
    else if ((param_3 == 0) && (temp_v4 = FUN_0014bef4(99), 0x18 >= temp_v4)) {
      if (temp_v9 != 0) {
        FUN_003df6a4(temp_v12,0);
        temp_v3 = FUN_003e0044(5);
      }
      else {
        FUN_004bccd0(temp_v8,temp_v12);
        temp_v3 = FUN_004bd340(temp_v8,5);
      }
      if (temp_v3 == 0) {
        temp_v3 = 0;
        do {
          temp_v4 = (unsigned int)temp_v12[temp_v3];
          FUN_0034a290();
          if ((temp_v4 != 0) && ((*(unsigned int *)(temp_v4 + 0x44) & 0x400000) != 0)) goto LAB_0035e194;
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        if (temp_v9 != 0) {
          FUN_003e00bc(5);
        }
        else {
          FUN_004bd3ec(temp_v8,5);
        }
        temp_v10 = 0;
      }
    }
  }
LAB_0035e194:
  if ((*(short *)(param_2 + 0x48) != 0) &&
     (((temp_v9 != 0 &&
       (temp_v3 = FUN_004ccbf0(*(unsigned short *)(temp_v9 + 0x62)), temp_v3 != *(int *)(temp_v9 + 0x30))) ||
      ((temp_v8 != 0 &&
       (temp_v3 = FUN_004cc8d8(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100)),
       temp_v3 != *(int *)(temp_v8 + 0x30))))))) {
    if (param_4 == 0) {
      if (temp_v9 != 0) {
        temp_v3 = FUN_004ccbf0(*(unsigned short *)(temp_v9 + 0x62));
        *(int *)(temp_v9 + 0x30) =
             (int)((unsigned int)*(unsigned short *)(param_2 + 0x48) * temp_v3) / 100 + *(int *)(temp_v9 + 0x30);
        temp_v4 = FUN_004ccbf0(*(unsigned short *)(temp_v9 + 0x62));
        if (temp_v4 < *(unsigned int *)(temp_v9 + 0x30)) {
          temp_v10 = FUN_004ccbf0(*(unsigned short *)(temp_v9 + 0x62));
          *(unsigned int *)(temp_v9 + 0x30) = temp_v10;
        }
      }
      else if (temp_v8 != 0) {
        temp_v3 = FUN_004cc8d8(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100));
        *(int *)(temp_v8 + 0x30) =
             (int)((unsigned int)*(unsigned short *)(param_2 + 0x48) * temp_v3) / 100 + *(int *)(temp_v8 + 0x30);
        temp_v4 = FUN_004cc8d8(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100));
        if (temp_v4 < *(unsigned int *)(temp_v8 + 0x30)) {
          temp_v10 = FUN_004cc8d8(*(unsigned short *)(temp_v8 + 0x62),*(unsigned short *)(temp_v8 + 100));
          *(unsigned int *)(temp_v8 + 0x30) = temp_v10;
        }
      }
    }
    temp_v10 = 0;
  }
  if ((*(short *)(param_2 + 0x4a) != 0 && temp_v9 != 0) && (temp_v3 = FUN_002e5c2c(), temp_v3 != 9999)) {
    if (param_4 == 0) {
      FUN_002e0798(*(unsigned short *)(param_2 + 0x4a));
    }
    temp_v10 = 0;
  }
  temp_v2 = *(short *)(param_2 + 0x30);
  if (temp_v2 == 0x79f) {
    if (DAT_005f15fc == 0x18) {
      temp_v10 = 0;
    }
    else {
      temp_v10 = 1;
    }
  }
  if (temp_v2 == 0x7af) {
    temp_v10 = 0;
  }
  if (temp_v2 == 0x7b6) {
    temp_v2 = 0x7b6;
    if (temp_v9 != 0) {
      temp_v2 = *(short *)(param_2 + 0x54);
    }
    temp_v10 = 0;
    if ((temp_v9 == 0 || temp_v2 == 0) || (temp_v3 = FUN_003df4a4(), temp_v3 != 0)) {
      temp_v10 = 1;
    }
  }
  if (temp_v8 == 0) {
LAB_0035e408:
    if ((temp_v9 != 0) && ((*(unsigned int *)(param_2 + 0x68) & 1) != 0)) {
      temp_v10 = 0;
    }
    if (param_3 == 0) {
      temp_v10 = 0;
    }
    return temp_v10;
  }
  temp_v3 = 0;
  do {
    temp_v5 = 9;
    while( 1 ) {
      temp_v1 = *(char *)(param_2 + temp_v3 + 0x56);
      if (temp_v1 != '\0') {
        temp_v6 = temp_v8 + temp_v3;
        temp_v7 = (int)*(char *)(temp_v6 + 0x4c);
        temp_v11 = temp_v7 == 0;
        temp_v0 = temp_v7;
        if (0 < temp_v7) {
          temp_v0 = temp_v5 - temp_v7;
          temp_v11 = temp_v5 == temp_v7;
        }
        if (!temp_v11 && temp_v0 < 0 == (0 < temp_v7 && SBORROW4(temp_v5,temp_v7))) {
          temp_v10 = 0;
          if (param_4 != 0) goto LAB_0035e408;
          temp_v1 = *(char *)(temp_v6 + 0x4c) + temp_v1;
          if (temp_v1 <= temp_v5) {
            temp_v5 = (int)temp_v1;
          }
          *(char *)(temp_v6 + 0x4c) = temp_v1;
          *(char *)(temp_v6 + 0x4c) = (char)temp_v5;
          *(unsigned int *)(temp_v8 + 0x44) = 0;
          *(unsigned int *)(temp_v8 + 0x48) = 0;
          FUN_004bd17c(temp_v8);
        }
      }
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 0x12) goto LAB_0035e408;
      if ((temp_v3 != 0xe && temp_v3 != 0xf) && (temp_v3 != 0x10 && temp_v3 != 0x11)) break;
      temp_v5 = 5;
    }
  } while( 1 );
}

} /* extern "C" */
