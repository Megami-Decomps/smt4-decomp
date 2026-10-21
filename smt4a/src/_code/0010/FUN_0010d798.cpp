/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d798` (_code @ 0x10d798, 0x252 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strInit(unsigned char [32]);
int onlineStringConstruct(...);
int onlineStringDestroy(...);
int onlineStringCopyConstruct(...);
int _ZN9Obj55aff4C1Ev(...);
int FUN_002ea2e8(...);
int FUN_002ea3a8(...);
int FUN_002ec70c(...);
int destroyObj0055ae64(...);
int strDestroy(...);
int FUN_002ee818(...);
int onlineFormatWideString(...);
int FUN_002f79dc(void);
int FUN_002f7a28(unsigned char [176]);
int FUN_002f7a3c(unsigned char [8], unsigned int);
int FUN_002f7a5c(...);
int FUN_002f7ac4(unsigned char [176], unsigned int);
int FUN_002f7af2(...);
int FUN_002f7b34(...);
int FUN_002f7b60(...);
int FUN_002f7b80(...);
int FUN_002f7b9c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2CC; /* 0x2cc: local_2cc */
} param_1_stack;

extern unsigned char LAB_0010d9ec; /* 0x10d9ec */
extern unsigned char LAB_0010d9f0; /* 0x10d9f0 */
extern unsigned char LAB_0010d9f8; /* 0x10d9f8 */
extern unsigned char LAB_0010d9fc; /* 0x10d9fc */
extern unsigned char LAB_0010da08; /* 0x10da08 */
extern unsigned char LAB_0010da10; /* 0x10da10 */
extern unsigned char LAB_0010da18; /* 0x10da18 */
extern unsigned char LAB_0010da24; /* 0x10da24 */
extern unsigned char LAB_0010da30; /* 0x10da30 */

/* Supplied declaration required: strInit. */
/* Supplied declaration required: onlineStringConstruct. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineStringCopyConstruct. */
/* Supplied declaration required: _ZN9Obj55aff4C1Ev. */
extern unsigned int FUN_002ea100(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
/* Supplied declaration required: FUN_002ec70c. */
/* Supplied declaration required: destroyObj0055ae64. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ee818. */
extern unsigned int FUN_002eea7c(unsigned char *);
/* Supplied declaration required: onlineFormatWideString. */
/* Supplied declaration required: FUN_002f79dc. */
/* Supplied declaration required: FUN_002f7a28. */
/* Supplied declaration required: FUN_002f7a3c. */
/* Supplied declaration required: FUN_002f7a5c. */
/* Supplied declaration required: FUN_002f7ac4. */
/* Supplied declaration required: FUN_002f7af2. */
/* Supplied declaration required: FUN_002f7b34. */
/* Supplied declaration required: FUN_002f7b60. */
/* Supplied declaration required: FUN_002f7b80. */
/* Supplied declaration required: FUN_002f7b9c. */


void FUN_0010d798(int param_1)

{
/* irregular: 22 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  unsigned int temp_v5;
  unsigned char temp_v6 [176];
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [16];
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [320];
  unsigned char temp_v11 [32];
  unsigned char temp_v12 [32];
  unsigned char temp_v13 [24];
  unsigned char temp_v14 [8];
  unsigned char temp_v15 [8];
  unsigned char temp_v16 [8];
  unsigned char temp_v17 [8];
  unsigned char temp_v18 [24];
  unsigned char temp_v19 [8];
  unsigned char temp_v20 [12];
  
  temp_v0 = param_1 + 0x158;
  FUN_002f79dc();
  strInit(temp_v11);
  FUN_002f7a28(temp_v6);
  onlineStringCopyConstruct(temp_v7,param_1 + 0x134);
  while (temp_v1 = FUN_002eea7c(temp_v7), temp_v1 < 0x10) {
    temp_v2 = onlineStringConstruct(temp_v4,&LAB_0010d9ec);
    FUN_002f7a3c(temp_v7,temp_v2);
    onlineStringDestroy(temp_v4);
  }
  temp_v2 = FUN_002f7a5c(temp_v8,temp_v7);
  FUN_002f7ac4(temp_v6,temp_v2);
  destroyObj0055ae64(temp_v8);
  FUN_002f7af2(temp_v6,param_1 + 0x7c,temp_v11);
  onlineStringDestroy(temp_v7);
  FUN_002ec70c(temp_v6);
  strInit(temp_v12);
  FUN_002f7a28(temp_v6);
  onlineStringCopyConstruct(temp_v9);
  while (temp_v1 = FUN_002eea7c(temp_v9), temp_v1 < 0x10) {
    temp_v2 = onlineStringConstruct(temp_v10,&LAB_0010d9ec);
    FUN_002f7a3c(temp_v9,temp_v2);
    onlineStringDestroy(temp_v10);
  }
  temp_v2 = FUN_002f7a5c(temp_v7,param_1 + 0x14c);
  FUN_002f7ac4(temp_v6,temp_v2);
  destroyObj0055ae64(temp_v7);
  FUN_002f7af2(temp_v6,param_1 + 0x7c,temp_v12);
  onlineStringDestroy(temp_v9);
  FUN_002ec70c(temp_v6);
  _ZN9Obj55aff4C1Ev(temp_v17);
  onlineFormatWideString(temp_v17,&LAB_0010d9f0,*(unsigned int *)(param_1 + 0x128));
  temp_v2 = FUN_002ea100(temp_v16,&LAB_0010d9f8);
  temp_v2 = FUN_002f7b34(temp_v13,temp_v2,temp_v17);
  FUN_002f7b60(temp_v0,temp_v2);
  FUN_002f7b80(temp_v13);
  onlineStringDestroy(temp_v16);
  temp_v2 = FUN_002ea100(temp_v14,&LAB_0010d9fc);
  temp_v3 = FUN_002ea100(temp_v16,&LAB_0010da08);
  temp_v2 = FUN_002f7b34(temp_v13,temp_v3,temp_v2);
  FUN_002f7b60(temp_v0,temp_v2);
  FUN_002f7b80(temp_v13);
  onlineStringDestroy(temp_v16);
  onlineStringDestroy(temp_v14);
  temp_v2 = FUN_002ea100(temp_v14,&LAB_0010da10);
  temp_v2 = FUN_002f7b34(temp_v13,temp_v2,param_1 + 0x144);
  FUN_002f7b60(temp_v0,temp_v2);
  FUN_002f7b80(temp_v13);
  onlineStringDestroy(temp_v14);
  FUN_002f7b9c(temp_v15,temp_v11);
  temp_v2 = FUN_002ea100(temp_v14,&LAB_0010da18);
  temp_v2 = FUN_002f7b34(temp_v13,temp_v2,temp_v15);
  FUN_002f7b60(temp_v0,temp_v2);
  FUN_002f7b80(temp_v13);
  onlineStringDestroy(temp_v14);
  onlineStringDestroy(temp_v15);
  FUN_002f7b9c(temp_v15,temp_v12);
  temp_v2 = FUN_002ea100(temp_v14,&LAB_0010da24);
  temp_v2 = FUN_002f7b34(temp_v13,temp_v2,temp_v15);
  FUN_002f7b60(temp_v0,temp_v2);
  FUN_002f7b80(temp_v13);
  onlineStringDestroy(temp_v14);
  onlineStringDestroy(temp_v15);
  if (*(char *)(param_1 + 0x17c) != '\0') {
    FUN_002ea2e8(temp_v4);
    FUN_002ee818(temp_v4,*(unsigned char *)(param_1 + 0x17c));
    temp_v2 = onlineStringConstruct(temp_v20,temp_v5);
    temp_v3 = FUN_002ea100(temp_v19,&LAB_0010da30);
    temp_v2 = FUN_002f7b34(temp_v18,temp_v3,temp_v2);
    FUN_002f7b60(temp_v0,temp_v2);
    FUN_002f7b80(temp_v18);
    onlineStringDestroy(temp_v19);
    onlineStringDestroy(temp_v20);
    FUN_002ea3a8(temp_v4);
  }
  onlineStringDestroy(temp_v17);
  strDestroy(temp_v12);
  strDestroy(temp_v11);
  return;
}

} /* extern "C" */
