/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116d08` (_code @ 0x116d08, 0xf2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringAssign(int, int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(...);
int FUN_002f7830(int, unsigned char [4]);
int FUN_00302f88(int, unsigned int *);

/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00116e34; /* 0x116e34 */
extern unsigned char LAB_00116ebd; /* 0x116ebd */

extern unsigned int *FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: onlineStringAssign. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned int *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f7830. */
extern int FUN_002f7896(int, unsigned char *);
/* Supplied declaration required: FUN_00302f88. */
extern int FUN_00302fce(int);


void FUN_00116d08(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned int temp_v5 [4];
  int temp_v6;
  
  puVar3 = (unsigned int *)&temp_v2;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 == 0) {
    temp_v5[0] = 0x80010004;
    puVar3 = temp_v5;
    puVar3 = (unsigned int *)FUN_002e7908((unsigned int *)&temp_v2,puVar3);
    FUN_00302f88(param_1,puVar3);
    return;
  }
  if (*(char *)(param_1 + 0x90) != '\x02') {
    FUN_002ea41e(&temp_v2);
    FUN_002ea41e(&temp_v2,param_1 + 0x80,temp_v2);
  }
  else {
    temp_v0 = FUN_00302fce(param_1);
    if (temp_v0 != 0) {
      temp_v5[0] = 0x10001;
      puVar3 = temp_v5;
    }
    else {
      temp_v4[0] = 0;
      FUN_002f7830(param_1 + 0xec,temp_v4);
      if (*(char *)(param_1 + 0xf8) != '\0') {
        temp_v5[0] = 0x8005001a;
        puVar3 = temp_v5;
        puVar3 = (unsigned int *)FUN_002e7908((unsigned int *)&temp_v2,puVar3);
        FUN_00302f88(param_1,puVar3);
        return;
      }
      temp_v0 = *(int *)(param_1 + 0xe8);
      if (temp_v0 != 0x133) {
        if (temp_v0 == 0x194) {
          temp_v5[0] = 0x80690004;
          puVar3 = temp_v5;
          puVar3 = (unsigned int *)FUN_002e7908((unsigned int *)&temp_v2,puVar3);
          FUN_00302f88(param_1,puVar3);
          return;
        }
        if ((temp_v0 != 0x199) && (temp_v0 != 500)) {
          temp_v5[0] = 0x8005001a;
          puVar3 = temp_v5;
          puVar3 = (unsigned int *)FUN_002e7908((unsigned int *)&temp_v2,puVar3);
          FUN_00302f88(param_1,puVar3);
          return;
        }
        if (*(unsigned int *)(param_1 + 0xe4) < 3) {
          temp_v1 = FUN_002ea3c0(temp_v5,&LAB_00116ebd,0,&LAB_00116e34);
          FUN_002ea3d0(param_1,temp_v1);
          return;
        }
        temp_v6 = 0x80050019;
      }
      else {
        temp_v3 = param_1 + 0xfc;
        temp_v0 = FUN_002f7896(temp_v3,&LAB_00116e34);
        if ((temp_v0 == 0) && (*(unsigned int *)(param_1 + 0xe4) < 5)) {
          onlineStringAssign(param_1 + 0x70,temp_v3);
          temp_v1 = FUN_002ea3c0(temp_v5,&LAB_00116ebd,0,&LAB_00116e34);
          FUN_002ea3d0(param_1,temp_v1);
          return;
        }
        temp_v6 = 0x8005001a;
      }
      puVar3 = (unsigned int *)&temp_v6;
    }
    puVar3 = (unsigned int *)FUN_002e7908((unsigned int *)&temp_v2,puVar3);
  }
  FUN_00302f88(param_1,puVar3);
  return;
}

} /* extern "C" */
