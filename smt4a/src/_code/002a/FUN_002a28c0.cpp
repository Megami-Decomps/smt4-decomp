/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a28c0` (_code @ 0x2a28c0, 0x3b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int svcSleepThread(...);
int FUN_002804b0(unsigned char *, int *, int);
int FUN_002a4664(int *);
int FUN_002a469c(void);
int FUN_002bf520(void);
int FUN_002c0b10(unsigned short [2]);
int FUN_002c0b5c(void);
int btlTalkBustUpCreate(void);
int rt_aeabi_memclr(int, int);
int cecProcessCall2(void);
int FUN_0032e25c(...);
int FUN_00333bfc(void);
int ownerSetName(unsigned int, unsigned int);
int FUN_0035a074(unsigned int, int, unsigned int, unsigned int);
int FUN_00387edc(void);
int loadSlotEnsureLoaded(int);

typedef struct fn_002a28c0_arg0 fn_002a28c0_arg0;
struct fn_002a28c0_arg0 {
    unsigned char pad_0x0[0x8];
    uint field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x33c];
    int field_0x348; /* +0x348 */
    int field_0x34c; /* +0x34c */
    int field_0x350; /* +0x350 */
    int field_0x354; /* +0x354 */
    unsigned char pad_0x358[0x8c];
    char field_0x3e4; /* +0x3e4 */
    unsigned char pad_0x3e5[0x3f0];
    byte field_0x7d5; /* +0x7d5 */
    unsigned char pad_0x7d6[0x1a];
    byte field_0x7f0; /* +0x7f0 */
    unsigned char pad_0x7f1[0x3];
    int field_0x7f4; /* +0x7f4 */
};

/* stack frame of param_1: 3 slot(s), 8 byte(s) */
typedef struct {
    unsigned short sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned short sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_002a2c10; /* 0x2a2c10 */
extern unsigned char LAB_002a2c28; /* 0x2a2c28 */
extern unsigned char LAB_002a2c40; /* 0x2a2c40 */
extern unsigned char LAB_002a2c54; /* 0x2a2c54 */

/* Supplied declaration required: svcSleepThread. */
extern unsigned char FUN_002391e0(void);
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_002840ac(void);
extern int FUN_002a2cf0(void);
/* Supplied declaration required: FUN_002a4664. */
/* Supplied declaration required: FUN_002a469c. */
extern unsigned char FUN_002a46b8(void);
extern unsigned char FUN_002a46d8(void);
/* Supplied declaration required: FUN_002bf520. */
/* Supplied declaration required: FUN_002c0b10. */
/* Supplied declaration required: FUN_002c0b5c. */
/* Supplied declaration required: btlTalkBustUpCreate. */
/* Supplied declaration required: rt_aeabi_memclr. */
extern int rt_memcmp(unsigned char *, int, unsigned int);
/* Supplied declaration required: cecProcessCall2. */
extern unsigned char FUN_0031cee0(void);
/* Supplied declaration required: FUN_0032e25c. */
extern unsigned int gameDataBlocksGetWord27E8C(void);
/* Supplied declaration required: FUN_00333bfc. */
/* Supplied declaration required: ownerSetName. */
extern int FUN_00345388(unsigned int);
/* Supplied declaration required: FUN_0035a074. */
/* Supplied declaration required: FUN_00387edc. */
/* Supplied declaration required: loadSlotEnsureLoaded. */


void FUN_002a28c0(fn_002a28c0_arg0 *param_1)

{
/* irregular: 16 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned short temp_v6 [2];
  int temp_v7;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned short temp_v8;
  unsigned char temp_v9 [20];
  
  while (param_1->field_0x7f0 == 0) {
    if (param_1->field_0x7f4 != 0) {
      if ((param_1->field_0x7f4 == 1) && (param_1->field_0x348 != 0)) {
        temp_v5 = param_1->field_0x34c != 0;
        temp_v4 = 0;
        if (temp_v5) {
          temp_v4 = param_1->field_0x350;
        }
        if ((temp_v5 && temp_v4 != 0) && (param_1->field_0x354 != 0)) {
          param_1->field_0x7f4 = 2;
        }
      }
    }
    else {
      loadSlotEnsureLoaded(0x25);
      btlTalkBustUpCreate();
      FUN_002804b0(&LAB_002a2c10,&param_1->field_0x348,0);
      FUN_002804b0(&LAB_002a2c28,&param_1->field_0x34c,0);
      FUN_002804b0(&LAB_002a2c40,&param_1->field_0x350,0);
      FUN_002804b0(&LAB_002a2c54,&param_1->field_0x354,0);
      FUN_002bf520();
      FUN_00387edc();
      temp_v0 = FUN_0031cee0();
      temp_v4 = FUN_002bf520();
      *(unsigned char *)(temp_v4 + 0x21) = temp_v0;
      temp_v0 = FUN_002391e0();
      temp_v4 = FUN_002bf520();
      *(unsigned char *)(temp_v4 + 0x22) = temp_v0;
      temp_v0 = FUN_002a46d8();
      temp_v4 = FUN_002bf520();
      *(unsigned char *)(temp_v4 + 0x23) = temp_v0;
      temp_v1 = FUN_002840ac();
      temp_v2 = FUN_002bf520();
      ownerSetName(temp_v2,temp_v1);
      FUN_002a4664(&temp_v7);
      temp_v1 = FUN_002bf520();
      temp_v6[0] = temp_v8;
      FUN_0035a074(temp_v1,temp_v7,uStack_78,uStack_74);
      temp_v0 = FUN_002a46b8();
      temp_v4 = FUN_002bf520();
      *(unsigned char *)(temp_v4 + 0x42) = temp_v0;
      temp_v1 = FUN_002a469c();
      temp_v2 = FUN_002bf520();
      FUN_0032e25c(temp_v2,temp_v1);
      temp_v1 = gameDataBlocksGetWord27E8C();
      temp_v4 = FUN_002bf520();
      *(unsigned int *)(temp_v4 + 0x24) = temp_v1;
      temp_v4 = FUN_002a469c();
      if (temp_v4 == 0) {
        temp_v4 = FUN_002bf520();
        rt_aeabi_memclr(temp_v4 + 0x50,0x14);
      }
      temp_v3 = (unsigned int)param_1->field_0x7d5;
      if (temp_v3 != 1) {
        temp_v4 = FUN_002a2cf0();
        param_1->field_0x3e4 = (char)temp_v4;
        if ((temp_v4 != 0) && (temp_v4 = FUN_00345388(0x20), temp_v4 != 0)) {
          FUN_002c0b10(temp_v6);
          temp_v4 = FUN_002bf520();
          temp_v4 = rt_memcmp(temp_v9,temp_v4 + 0x50,0x14);
          if (temp_v4 != 0) {
            temp_v4 = FUN_002bf520();
            if (*(short *)(temp_v4 + 0x60) != 0) {
              cecProcessCall2();
              FUN_002bf520();
              FUN_002c0b5c();
            }
            else {
              temp_v1 = FUN_002bf520();
              FUN_0032e25c(temp_v1,0);
              cecProcessCall2();
              FUN_002bf520();
              FUN_002c0b5c();
              temp_v4 = FUN_002bf520();
              rt_aeabi_memclr(temp_v4 + 0x50,0x14);
            }
          }
        }
      }
      else {
        FUN_00333bfc();
        param_1->field_0x8 = temp_v3;
      }
      param_1->field_0x7f4 = param_1->field_0x7f4 + 1;
    }
    svcSleepThread(10000000,0);
  }
  return;
}

} /* extern "C" */
