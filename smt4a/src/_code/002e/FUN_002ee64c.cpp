/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee64c` (_code @ 0x2ee64c, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int onlineStringDestroy(unsigned char [8]);
int FUN_002ee938(...);
int FUN_002ee978(...);
int FUN_002fe1b8(int, unsigned int);
int mapIteratorNext6(int *);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: onlineStringDestroy. */
extern int wordRefsDiffer_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002ee978. */
/* Supplied declaration required: FUN_002fe1b8. */
/* Supplied declaration required: mapIteratorNext6. */
extern int wordRefsDiffer_002fe38c(int *, unsigned int *);


unsigned char FUN_002ee64c(int param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  unsigned int *temp_v4;
  int temp_v5;
  unsigned char temp_v6 [8];
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [8];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v3,temp_v0 + 0x58);
  temp_v0 = param_1 + 0x50;
  FUN_002fe1b8(temp_v0,param_2);
  if (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x78) == -1;
    _ZN9Obj55b28cD1Ev(temp_v3);
  }
  else {
    temp_v0 = param_1 + 0x34;
    FUN_002fe1b8(temp_v0,param_2);
    if (temp_v0 == 0) {
      temp_v4 = *(unsigned int **)(param_1 + 0x2c);
      do {
        temp_v4 = (unsigned int *)*temp_v4;
        temp_v7 = *(unsigned int *)(param_1 + 0x2c);
        temp_v0 = wordRefsDiffer_002ee774(&temp_v4,(unsigned int *)&temp_v7);
        if (temp_v0 == 0) {
          temp_v5 = *(int *)(*(int *)(param_1 + 0x104) + 8);
          goto LAB_002ee75a;
        }
        FUN_002ee938(temp_v9,param_2);
        FUN_002ee938(temp_v6,temp_v4 + 2);
        temp_v0 = FUN_002ee96a(temp_v6,temp_v9);
        if (temp_v0 != 0) {
          temp_v0 = FUN_002ee978(temp_v4 + 2);
          temp_v1 = FUN_002ee978(param_2);
          if (temp_v0 != temp_v1) {
            temp_v2 = 0;
          }
          else {
            temp_v2 = 1;
          }
        }
        else {
          temp_v2 = 0;
        }
        onlineStringDestroy(temp_v6);
        onlineStringDestroy(temp_v9);
      } while (!temp_v2);
    }
    _ZN9Obj55b28cD1Ev(temp_v3);
    temp_v2 = 0;
  }
  return temp_v2;
LAB_002ee75a:
  temp_v8 = *(unsigned int *)(param_1 + 0x104);
  temp_v0 = wordRefsDiffer_002fe38c(&temp_v5,(unsigned int *)&temp_v8);
  if (temp_v0 == 0) {
    _ZN9Obj55b28cD1Ev(temp_v3);
    return 1;
  }
  temp_v1 = temp_v5 + 0x20;
  FUN_002ee938(temp_v9,param_2);
  FUN_002ee938(temp_v6,temp_v1);
  temp_v0 = FUN_002ee96a(temp_v6,temp_v9);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002ee978(temp_v1);
    temp_v1 = FUN_002ee978(param_2);
    if (temp_v0 != temp_v1) {
      temp_v2 = 0;
    }
    else {
      temp_v2 = 1;
    }
  }
  else {
    temp_v2 = 0;
  }
  onlineStringDestroy(temp_v6);
  onlineStringDestroy(temp_v9);
  if (temp_v2) {
    _ZN9Obj55b28cD1Ev(temp_v3);
    temp_v2 = 0;
    return temp_v2;
  }
  mapIteratorNext6(&temp_v5);
  goto LAB_002ee75a;
}

} /* extern "C" */
