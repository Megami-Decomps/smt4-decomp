#include "classes/Obj558b24.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112a0c` (_code @ 0x112a0c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00112910(void);
int FUN_00132584(int);
int onlineSockAddrSetHost(int, unsigned char *);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateDone(int);
int FUN_002ea704(void);
int FUN_002ec738(int);
int _ZN9Obj55afc44stopEv(int);
int FUN_002fa18c(int);
int FUN_002fa434(unsigned char [12], unsigned int);
int FUN_002fd784(unsigned int, unsigned char [12]);

/* stack frame of param_1: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned short sp2C; /* 0x2c: local_2c */
} param_1_stack;

extern unsigned char LAB_00112b2c; /* 0x112b2c */
#ifndef ROMWRIGHT_STORAGE_s__V_V_V_V_00594eb4_17_1_DEFINED
#define ROMWRIGHT_STORAGE_s__V_V_V_V_00594eb4_17_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__V_V_V_V_00594eb4_17_1 {
    char whole[17];
    unsigned char u1[17];
    signed char s1[17];
};
typedef char romwright_storage_s__V_V_V_V_00594eb4_17_1_size_check[(sizeof(union romwright_storage_s__V_V_V_V_00594eb4_17_1) == 17) ? 1 : -1];
typedef char romwright_storage_s__V_V_V_V_00594eb4_17_1_u1_width_check[(sizeof(((union romwright_storage_s__V_V_V_V_00594eb4_17_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__V_V_V_V_00594eb4_17_1_s1_width_check[(sizeof(((union romwright_storage_s__V_V_V_V_00594eb4_17_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__V_V_V_V_00594eb4_17_1 s__V_V_V_V_00594eb4; /* 0x594eb4 */

extern int FUN_00112770(int);
/* Supplied declaration required: FUN_00112910. */
/* Supplied declaration required: FUN_00132584. */
/* Supplied declaration required: onlineSockAddrSetHost. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: FUN_002ec738. */
/* Supplied declaration required: _ZN9Obj55afc44stopEv. */
/* Supplied declaration required: FUN_002fa18c. */
/* Supplied declaration required: FUN_002fa434. */
/* Supplied declaration required: FUN_002fd784. */


void FUN_00112a0c(int param_1)

{
/* irregular: 13 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  unsigned short temp_v5;
  unsigned short temp_v6;
  
  temp_v1 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_1 + 0x1f0));
  if (temp_v1 == 0) {
    onlineJobSetStateDone(param_1);
    return;
  }
  temp_v2 = FUN_002ea704();
  if (temp_v2 != 0) {
    _ZN9Obj55afc44stopEv(param_1 + 0x1ac);
    temp_v0 = *(char *)(param_1 + 0x198);
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          FUN_002fa18c(temp_v1);
          onlineJobSetStateDone(param_1);
          return;
        }
        if (*(char *)(param_1 + 0x3ac) == '\0') {
          temp_v3 = FUN_002ea704();
          FUN_002fa434(temp_v4,temp_v3);
          temp_v6 = (unsigned short)*(unsigned int *)(param_1 + 0x374);
          temp_v5 = (*(unsigned short *)(param_1 + 0x13e) << 8) | (*(unsigned short *)(param_1 + 0x13e) >> 8);
          temp_v3 = FUN_002ea704();
          FUN_002fd784(temp_v3,temp_v4);
          (((Obj558b24 *)(temp_v4))->Obj558b24::~Obj558b24(), (int)(temp_v4));
        }
      }
      else {
        if (*(char *)(param_1 + 0x321) != '\0') {
          FUN_00132584(param_1 + 0x120);
          onlineSockAddrSetHost(param_1 + 0x138,&LAB_00112b2c);
          *(unsigned short *)(param_1 + 0x13e) = 0;
          *(unsigned int *)(param_1 + 0x2c8) = 0;
          *(unsigned int *)(param_1 + 0x2cc) = 0;
          *(unsigned int *)(param_1 + 0x2d0) = 0;
          temp_v3 = (*(unsigned int *)&s__V_V_V_V_00594eb4.u1[0]);
          *(unsigned int *)(param_1 + 0x2d4) = (*(unsigned int *)&s__V_V_V_V_00594eb4.u1[0]);
          *(unsigned int *)(param_1 + 0x2d8) = temp_v3;
          *(unsigned int *)(param_1 + 0x2e0) = 0;
          *(unsigned int *)(param_1 + 0x2e4) = 0;
          *(unsigned int *)(param_1 + 0x2e8) = 0;
          *(unsigned int *)(param_1 + 0x2ec) = 0;
          *(unsigned char *)(param_1 + 0x321) = 0;
          temp_v3 = FUN_002ea3c0(temp_v4,0x1123a1,0,&LAB_00112b2c);
          FUN_002ea3d0(param_1,temp_v3);
          return;
        }
        temp_v2 = FUN_00112770(param_1);
        if (temp_v2 == 0) {
          FUN_002fa18c(temp_v1);
          onlineJobSetStateDone(param_1);
          return;
        }
      }
    }
    else {
      temp_v2 = param_1;
      FUN_00112910();
      if (temp_v2 == 0) {
        FUN_002fa18c(temp_v1);
        onlineJobSetStateDone(param_1);
        return;
      }
    }
    FUN_002ec738(temp_v1);
  }
  else {
    FUN_002fa18c(temp_v1);
  }
  onlineJobSetStateDone(param_1);
  return;
}

} /* extern "C" */
