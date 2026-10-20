/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d5cc` (_code @ 0x10d5cc, 0xf6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d6d4(unsigned char [12], int, int);
int FUN_002e9598(int, int);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(unsigned char [12]);
int FUN_002f7830(int, unsigned char [4]);
int FUN_002f7850(int, unsigned char *);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_1_stack;

extern unsigned char LAB_0010d6d0; /* 0x10d6d0 */
extern unsigned char LAB_0010db69; /* 0x10db69 */

/* Supplied declaration required: FUN_0010d6d4. */
extern int FUN_0010da40(int);
extern unsigned char *FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9598. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f7830. */
/* Supplied declaration required: FUN_002f7850. */
extern int FUN_002f7896(int, unsigned char *);


void FUN_0010d5cc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int *puVar5;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  int temp_v6;
  int temp_v7;
  unsigned char *puVar4;
  
  puVar4 = temp_v2;
  puVar3 = temp_v2;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 == 0) {
    temp_v1 = 0x80010004;
    puVar5 = (unsigned int *)&temp_v3;
    temp_v3 = temp_v1;
    puVar3 = (unsigned char *)FUN_002e7908(puVar4,puVar5);
    FUN_002f7850(param_1,puVar3);
    return;
  }
  if (*(char *)(param_1 + 0xb0) != '\x02') {
    FUN_002ea41e(temp_v2);
    puVar3 = temp_v2;
  }
  else {
    temp_v0 = FUN_0010da40(param_1);
    if (temp_v0 != 0) {
      FUN_0010d6d4(temp_v2,param_1,param_1 + 0x10c);
    }
    else {
      temp_v4[0] = 0;
      FUN_002f7830(param_1 + 0x10c,temp_v4);
      temp_v1 = 0x8005000b;
      if ((*(char *)(param_1 + 0x118) != '\0') ||
         (temp_v0 = *(int *)(param_1 + 0x108), temp_v0 == 0x19d)) {
        puVar5 = (unsigned int *)&temp_v3;
        temp_v3 = temp_v1;
      }
      else {
        if (temp_v0 < 0x19e) {
          if (temp_v0 != 0x133) {
            if ((temp_v0 != 400) && (temp_v0 != 0x193)) {
              temp_v1 = 0x8005001a;
            }
            puVar5 = (unsigned int *)&temp_v3;
            temp_v3 = temp_v1;
            puVar3 = (unsigned char *)FUN_002e7908(puVar4,puVar5);
            FUN_002f7850(param_1,puVar3);
            return;
          }
          temp_v6 = param_1 + 0x11c;
          temp_v0 = FUN_002f7896(temp_v6,&LAB_0010d6d0);
          if ((temp_v0 == 0) && (*(unsigned int *)(param_1 + 0x104) < 5)) {
            FUN_002e9598(param_1 + 0x70,temp_v6);
            temp_v1 = FUN_002ea3c0(temp_v2,&LAB_0010db69,0,&LAB_0010d6d0);
            FUN_002ea3d0(param_1,temp_v1);
            return;
          }
        }
        else {
          if (temp_v0 != 500) {
            if (temp_v0 != 0x1f7) {
              temp_v1 = 0x8005001a;
            }
            else {
              temp_v1 = 0x8005001b;
            }
            puVar5 = (unsigned int *)&temp_v3;
            temp_v3 = temp_v1;
            puVar3 = (unsigned char *)FUN_002e7908(puVar4,puVar5);
            FUN_002f7850(param_1,puVar3);
            return;
          }
          if (*(int *)(param_1 + 0x104) == 0) {
            temp_v1 = FUN_002ea3c0(temp_v2,&LAB_0010db69,0,&LAB_0010d6d0);
            FUN_002ea3d0(param_1,temp_v1);
            return;
          }
        }
        puVar5 = (unsigned int *)&temp_v7;
        puVar4 = temp_v5;
        temp_v7 = 0x80050019;
      }
      puVar3 = (unsigned char *)FUN_002e7908(puVar4,puVar5);
    }
  }
  FUN_002f7850(param_1,puVar3);
  return;
}

} /* extern "C" */
