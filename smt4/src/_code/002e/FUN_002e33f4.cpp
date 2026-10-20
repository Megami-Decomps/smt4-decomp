/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e33f4` (_code @ 0x2e33f4, 0x2e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002485d4(int, unsigned short [8]);
int FUN_0026e61c(int, int);
int FUN_0026e630(void);
int FUN_00283e48(void);
int FUN_00283f30(unsigned short [8], int);
int FUN_00295c60(int, int);
int dataTable9EntryOrZero(int);
int FUN_00334018(int);

typedef struct fn_002e33f4_arg0 fn_002e33f4_arg0;
typedef struct fn_002e33f4_arg1 fn_002e33f4_arg1;
struct fn_002e33f4_arg0 {
    unsigned char pad_0x0[0x2c];
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x2];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x12];
    ushort field_0x46; /* +0x46 */
    byte field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x17];
    unsigned char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x13];
    unsigned char field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x1];
    byte field_0x76; /* +0x76 */
};
struct fn_002e33f4_arg1 {
    unsigned char pad_0x0[0x60];
    ushort field_0x60; /* +0x60 */
    unsigned char pad_0x62[0x12];
    ushort field_0x74; /* +0x74 */
    ushort field_0x76; /* +0x76 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_002485d4. */
/* Supplied declaration required: FUN_0026e61c. */
/* Supplied declaration required: FUN_0026e630. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: FUN_00283f30. */
/* Supplied declaration required: FUN_00295c60. */
extern int FUN_00295cec(void);
extern int FUN_00295d08(unsigned int);
/* Supplied declaration required: dataTable9EntryOrZero. */
extern int flagWordTestBit(int, unsigned int);
extern int gameGetUnitRecord(void);
extern int gameGetPlayerData(void);
extern unsigned int randNextInRange(unsigned int);
/* Supplied declaration required: FUN_00334018. */


unsigned int FUN_002e33f4(fn_002e33f4_arg0 *param_1,fn_002e33f4_arg1 *param_2,int param_3,int param_4)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short temp_v6 [8];
  int temp_v7;
  
  temp_v4 = 0;
  temp_v3 = 0;
  if ((int)param_1 < 0) {
    temp_v4 = gameGetPlayerData();
  }
  else {
    temp_v3 = gameGetUnitRecord();
    if (temp_v3 == 0) {
      return 1;
    }
  }
  temp_v5 = 1;
  if (param_4 == 0) {
    if (param_2->field_0x60 != 0xb) {
      if ((!(param_2->field_0x60 != 0xc || param_3 != 0)) &&
         (temp_v2 = randNextInRange(99), 0x18 >= temp_v2)) {
        if (temp_v4 != 0) {
          temp_v0 = *(short *)(temp_v4 + 0x2c);
        }
        else {
          temp_v0 = *(short *)(temp_v3 + 0x2c);
        }
        if (temp_v4 != 0) {
          *(short *)(temp_v4 + 0x2c) = temp_v0 / 2;
        }
        else {
          *(short *)(temp_v3 + 0x2c) = temp_v0 / 2;
        }
        temp_v5 = 0;
      }
    }
    else if ((param_3 == 0) && (temp_v2 = randNextInRange(99), 0x18 >= temp_v2)) {
      if (temp_v4 != 0) {
        FUN_00283f30(temp_v6,0);
        temp_v1 = FUN_00295d08(5);
      }
      else {
        FUN_002485d4(temp_v3,temp_v6);
        temp_v1 = flagWordTestBit(temp_v3,5);
      }
      if (temp_v1 == 0) {
        temp_v1 = 0;
        temp_v7 = 1;
        do {
          temp_v2 = (unsigned int)temp_v6[temp_v1];
          FUN_00283e48();
          if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 0x38) & 0x1000000) != 0)) goto LAB_002e354c;
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 8);
        if (temp_v7 != 0) {
          if (temp_v4 != 0) {
            FUN_00334018(5);
          }
          else {
            FUN_0026e61c(temp_v3,5);
          }
          temp_v5 = 0;
        }
      }
    }
  }
LAB_002e354c:
  if ((param_2->field_0x74 != 0) &&
     (((temp_v4 != 0 &&
       (temp_v1 = dataTable9EntryOrZero(*(unsigned char *)(temp_v4 + 0x76)), temp_v1 != *(int *)(temp_v4 + 0x30))) ||
      ((temp_v3 != 0 &&
       (temp_v1 = FUN_00295c60(*(unsigned short *)(temp_v3 + 0x46),*(unsigned char *)(temp_v3 + 0x48)),
       temp_v1 != *(int *)(temp_v3 + 0x30))))))) {
    if (param_4 == 0) {
      if (temp_v4 != 0) {
        temp_v3 = dataTable9EntryOrZero(*(unsigned char *)(temp_v4 + 0x76));
        *(int *)(temp_v4 + 0x30) =
             (int)((unsigned int)param_2->field_0x74 * temp_v3) / 100 + *(int *)(temp_v4 + 0x30);
        temp_v2 = dataTable9EntryOrZero(*(unsigned char *)(temp_v4 + 0x76));
        if (temp_v2 < *(unsigned int *)(temp_v4 + 0x30)) {
          temp_v5 = dataTable9EntryOrZero(*(unsigned char *)(temp_v4 + 0x76));
          *(unsigned int *)(temp_v4 + 0x30) = temp_v5;
        }
      }
      else if (temp_v3 != 0) {
        temp_v1 = FUN_00295c60(*(unsigned short *)(temp_v3 + 0x46),*(unsigned char *)(temp_v3 + 0x48));
        *(int *)(temp_v3 + 0x30) =
             *(int *)(temp_v3 + 0x30) + (int)((unsigned int)param_2->field_0x74 * temp_v1) / 100;
        temp_v2 = FUN_00295c60(*(unsigned short *)(temp_v3 + 0x46),*(unsigned char *)(temp_v3 + 0x48));
        if (temp_v2 < *(unsigned int *)(temp_v3 + 0x30)) {
          temp_v5 = FUN_00295c60(*(unsigned short *)(temp_v3 + 0x46),*(unsigned char *)(temp_v3 + 0x48));
          *(unsigned int *)(temp_v3 + 0x30) = temp_v5;
        }
      }
    }
    temp_v5 = 0;
  }
  if ((param_2->field_0x76 != 0 && temp_v4 != 0) && (temp_v4 = FUN_00295cec(), temp_v4 != 9999)) {
    if (param_4 == 0) {
      FUN_0026e630();
    }
    temp_v5 = 0;
  }
  if (param_3 == 0) {
    temp_v5 = 0;
  }
  return temp_v5;
}

} /* extern "C" */
