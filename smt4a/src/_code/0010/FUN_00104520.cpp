/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104520` (_code @ 0x104520, 0x106 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002ea214(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea43c(int);
int FUN_002ea4d2(void);
int FUN_002ea5b8(void);
int FUN_004422bc(int);
int rt_memcpy(unsigned int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00104630; /* 0x104630 */

extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea43c. */
extern unsigned long long FUN_002ea4bc(void);
/* Supplied declaration required: FUN_002ea4d2. */
extern unsigned int FUN_002ea594(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ea5b8. */
/* Supplied declaration required: FUN_004422bc. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00104520(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned long long temp_v3;
  unsigned int temp_v4 [2];
  unsigned char temp_v5 [4];
  unsigned int temp_v6 [3];
  unsigned char temp_v7 [12];
  int temp_v8;
  unsigned int *puVar4;
  
  puVar5 = temp_v4;
  puVar4 = temp_v4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0xe0));
  if (temp_v0 == 0) {
    FUN_002ea43c(param_1);
    return;
  }
  temp_v3 = FUN_002ea4bc();
  if (*(char *)((int)temp_v3 + 0x30) == '\0') {
    temp_v1 = FUN_002ea594(param_1 + 0x118,(int)((unsigned long long)temp_v3 >> 0x20),0,0);
    if (temp_v1 != 0) {
      FUN_002ea5b8();
      if ((int)temp_v1 < 0) {
        if ((temp_v1 & 0x3ff) != 0x104) {
          if ((temp_v1 & 0x3ff) != 0x105) {
            temp_v4[0] = 0x80680003;
            puVar5 = temp_v4;
          }
          else {
            temp_v4[0] = 0x80680005;
            puVar5 = temp_v4;
          }
        }
        else {
          temp_v4[0] = 0x80680004;
        }
      }
      else {
        FUN_004422bc(param_1 + 0x120);
        *(unsigned int *)(*(int *)(param_1 + 0xe8) + 300) = *(unsigned int *)(param_1 + 0x124);
        *(unsigned int *)(*(int *)(param_1 + 0xe8) + 0x128) = *(unsigned int *)(param_1 + 0x120);
        if ((*(int *)(param_1 + 0x124) == 200) && (*(int *)(param_1 + 0x120) == 7)) {
          rt_memcpy(*(unsigned int *)(param_1 + 0xf4),param_1 + 0x1a8,0x100);
          *(unsigned char *)(*(int *)(param_1 + 0xf4) + 0xff) = 0;
          temp_v2 = FUN_002ea3c0(temp_v5,0x10406d,0,&LAB_00104630);
          FUN_002ea3d0(param_1,temp_v2);
          return;
        }
        *(int *)(*(int *)(param_1 + 0xe8) + 0x128) = *(int *)(param_1 + 0x120) + 4000;
        temp_v8 = 0x80680001;
        puVar5 = (unsigned int *)&temp_v8;
      }
      puVar4 = (unsigned int *)temp_v7;
      temp_v2 = FUN_002e7908(puVar4,puVar5);
      FUN_002ea214(param_1,temp_v2);
      return;
    }
    temp_v0 = param_1;
    FUN_002ea4d2();
    if (temp_v0 != 0) {
      return;
    }
  }
  puVar5 = temp_v6;
  temp_v6[0] = 0x8001000b;
  temp_v2 = FUN_002e7908(puVar4,puVar5);
  FUN_002ea214(param_1,temp_v2);
  return;
}

} /* extern "C" */
