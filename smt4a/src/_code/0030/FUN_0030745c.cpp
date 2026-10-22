/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030745c` (_code @ 0x30745c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001340c6(int *, int, int, unsigned int);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int onlineStringSetFromRaw(...);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(unsigned char [4]);
int FUN_002ee818(unsigned char [4], unsigned int);
int FUN_002f76ca(...);
int FUN_0030edec(int *, int, int);
int vectorCount8_0030fcf6(int *);
int FUN_00430f5c(void);

/* stack frame of param_2: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp22C; /* 0x22c: local_22c */
    unsigned int sp234; /* 0x234: local_234 */
    unsigned char sp235; /* 0x235: local_235 */
} param_2_stack;

extern unsigned char LAB_00307540; /* 0x307540 */
extern unsigned char LAB_00307544; /* 0x307544 */

/* Supplied declaration required: FUN_001340c6. */
extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned char *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: onlineStringSetFromRaw. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
/* Supplied declaration required: FUN_002ee818. */
extern unsigned int inlineBufferReset(unsigned char *);
/* Supplied declaration required: FUN_002f76ca. */
/* Supplied declaration required: FUN_0030edec. */
/* Supplied declaration required: vectorCount8_0030fcf6. */
extern int FUN_00426684(unsigned char *);
/* Supplied declaration required: FUN_00430f5c. */
extern int lookupTable5B47D0(unsigned int);
extern int lookupTable5B44A4(unsigned int);
extern unsigned int FUN_0043126c(void);


void FUN_0030745c(unsigned int param_1,int *param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [11];
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  unsigned char temp_v9 [8];
  
  temp_v6 = _ZN9Obj55aff4C1EPKc(temp_v9,&LAB_00307540);
  temp_v0 = vectorCount8_0030fcf6(param_2);
  if (temp_v0 < 6) {
    temp_v3 = param_2[1];
    temp_v1 = vectorCount8_0030fcf6(param_2);
    FUN_001340c6(param_2,temp_v3,6 - temp_v1,temp_v6);
  }
  else {
    temp_v0 = vectorCount8_0030fcf6(param_2);
    if (temp_v0 >= 7) {
      FUN_0030edec(param_2,*param_2 + 0x30,param_2[1]);
    }
  }
  _ZN9Obj55aff4D1Ev(temp_v9);
  FUN_002f76ca(*param_2,&LAB_00307544);
  FUN_002ea2e8(temp_v7);
  temp_v2 = FUN_0043126c();
  FUN_002ee818(temp_v7,temp_v2);
  FUN_002f76ca(*param_2 + 8,temp_v8);
  temp_v1 = lookupTable5B47D0(temp_v2);
  if (temp_v1 != 0) {
    onlineStringSetFromRaw(*param_2 + 0x10);
  }
  temp_v2 = inlineBufferReset(temp_v7);
  FUN_00430f5c();
  FUN_002ee818(temp_v7,temp_v2);
  FUN_002f76ca(*param_2 + 0x18,temp_v8);
  temp_v1 = lookupTable5B44A4(temp_v2);
  if (temp_v1 != 0) {
    onlineStringSetFromRaw(*param_2 + 0x20);
  }
  temp_v1 = FUN_00426684(temp_v4);
  if (-1 < temp_v1) {
    temp_v5 = 0;
    onlineStringSetFromRaw(*param_2 + 0x28,temp_v4);
  }
  FUN_002ea3a8(temp_v7);
  return;
}

} /* extern "C" */
