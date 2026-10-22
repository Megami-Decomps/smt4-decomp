/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102b10` (_code @ 0x102b10, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFontAllocateGlyphSets(int);
int FUN_0010a694(...);
int FUN_0010a770(...);
int scrCommSetQueueRequestCallback(...);
int FUN_0010b390(int);
int FUN_0010b3b0(unsigned char *);
int asdTextRegisterSlot(...);
int FUN_0010bedc(int);
int callbackBindingInstall(...);
int FUN_0010e594(unsigned char *);
int asdTextSetDefaultColor(unsigned int);
int FUN_002c44dc(int);
int FUN_002c450c(int, unsigned char *);
int FUN_002c4904(unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00102c74; /* 0x102c74 */
extern unsigned char LAB_00102c8c; /* 0x102c8c */
extern unsigned char LAB_00102ca4; /* 0x102ca4 */
extern unsigned char LAB_00102cbc; /* 0x102cbc */
extern unsigned char LAB_00102cd4; /* 0x102cd4 */
extern unsigned char LAB_00102cec; /* 0x102cec */
extern int FUN_00108074(...); /* 0x108074 */
extern int scrCommQueueRequest(...); /* 0x108310 */
extern int FUN_0010930c(...); /* 0x10930c */
extern int FUN_00109b08(...); /* 0x109b08 */
extern unsigned char LAB_0010a2f8; /* 0x10a2f8 */
extern int FUN_0010c83c(...); /* 0x10c83c */
extern unsigned char DAT_0043e1b8; /* 0x43e1b8 */
extern unsigned char DAT_0043e1f8; /* 0x43e1f8 */
extern unsigned int DAT_00464d68; /* 0x464d68 */
extern unsigned int uRam004729cc; /* 0x4729cc */

/* Supplied declaration required: asdFontAllocateGlyphSets. */
/* Supplied declaration required: FUN_0010a694. */
/* Supplied declaration required: FUN_0010a770. */
/* Supplied declaration required: scrCommSetQueueRequestCallback. */
/* Supplied declaration required: FUN_0010b390. */
/* Supplied declaration required: FUN_0010b3b0. */
/* Supplied declaration required: asdTextRegisterSlot. */
/* Supplied declaration required: FUN_0010bedc. */
/* Supplied declaration required: callbackBindingInstall. */
/* Supplied declaration required: FUN_0010e594. */
/* Supplied declaration required: asdTextSetDefaultColor. */
/* Supplied declaration required: FUN_002c44dc. */
/* Supplied declaration required: FUN_002c450c. */
/* Supplied declaration required: FUN_002c4904. */


void FUN_00102b10(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned char *puVar1;
  
  asdFontAllocateGlyphSets(6);
  puVar1 = &LAB_00102c74;
  FUN_002c4904(&LAB_00102c74);
  FUN_002c450c(0,puVar1);
  puVar1 = &LAB_00102c8c;
  FUN_002c4904(&LAB_00102c8c);
  FUN_002c450c(1,puVar1);
  puVar1 = &LAB_00102ca4;
  FUN_002c4904(&LAB_00102ca4);
  FUN_002c450c(2,puVar1);
  puVar1 = &LAB_00102cbc;
  FUN_002c4904(&LAB_00102cbc);
  FUN_002c450c(3,puVar1);
  puVar1 = &LAB_00102cd4;
  FUN_002c4904(&LAB_00102cd4);
  FUN_002c450c(4,puVar1);
  puVar1 = &LAB_00102cec;
  FUN_002c4904(&LAB_00102cec);
  FUN_002c450c(5,puVar1);
  FUN_002c44dc(0);
  FUN_002c44dc(1);
  FUN_002c44dc(2);
  FUN_002c44dc(3);
  FUN_002c44dc(4);
  FUN_0010bedc(3);
  FUN_0010b390(5);
  FUN_0010b3b0(&DAT_0043e1b8);
  FUN_0010e594(&DAT_0043e1f8);
  asdTextSetDefaultColor(0xffffff00);
  callbackBindingInstall(&LAB_0010a2f8,FUN_0010c83c);
  FUN_0010a694(0xf87a,1,0);
  FUN_0010a694(0xf87b,4,0);
  scrCommSetQueueRequestCallback(scrCommQueueRequest);
  FUN_0010a770(FUN_00109b08);
  asdTextRegisterSlot(0xf87a,1,FUN_00108074);
  asdTextRegisterSlot(0xf87b,4,FUN_0010930c);
  DAT_00464d68 = 0x8190;
  uRam004729cc = 0x8190;
  return;
}

} /* extern "C" */
