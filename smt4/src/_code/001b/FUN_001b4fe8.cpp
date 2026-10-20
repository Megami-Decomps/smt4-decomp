/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4fe8` (_code @ 0x1b4fec, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e974(void);
int buttonHelpTexturesUnref(void);
int FUN_002898e4(void);
int buttonHelpCreate(void);
int FUN_0028d9b0(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00296fec(void);
int soundChannelStopAll(int);
int FUN_002a03d8(...);
int asdMemFreeNonNull(void);
int asdOperatorNew(void);
int FUN_002c5700(void);
int asdSequenceRequest(int, int *);
int FUN_00392e74(unsigned int);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0027e974. */
/* Supplied declaration required: buttonHelpTexturesUnref. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
/* Supplied declaration required: FUN_00296fec. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_002c5700. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: FUN_00392e74. */
extern unsigned int FUN_00393340(void);


unsigned int FUN_001b4fe8(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 15 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = *param_1;
  temp_v0 = *(char *)(temp_v3 + 0x1a);
  temp_v4 = param_4;
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          return 0xffffffff;
        }
      }
      else {
        if (*(char *)(temp_v3 + 0x19) != '\0') {
          FUN_002a03d8(0,1);
          FUN_002a03d8(1);
          soundChannelStopAll(0xf);
        }
        else {
          temp_v4 = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),1);
          asdSequenceRequest(1,&temp_v4);
        }
        *(unsigned char *)(temp_v3 + 0x1a) = 3;
        *(unsigned char *)(temp_v3 + 0x18) = 1;
        if ((*(int *)(temp_v3 + 0x1c) != 0) && (FUN_002c5700(), *(int *)(temp_v3 + 0x1c) != 0)) {
          FUN_0027e974();
          asdMemFreeNonNull();
          *(unsigned int *)(temp_v3 + 0x1c) = 0;
        }
        buttonHelpRelease();
        buttonHelpTexturesUnref();
        uiFadeRelease();
      }
    }
    else {
      FUN_00392e74(*(unsigned int *)(temp_v3 + 0x1c));
      if ((**(unsigned int **)(temp_v3 + 0x1c) & 1) != 0) {
        *(unsigned char *)(temp_v3 + 0x1a) = 2;
      }
    }
  }
  else {
    FUN_002898e4();
    FUN_0028d9b0();
    buttonHelpCreate();
    temp_v1 = 0x2434;
    asdOperatorNew();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_00393340();
    }
    *(unsigned int *)(temp_v3 + 0x1c) = temp_v2;
    FUN_00296fec();
    *(unsigned char *)(temp_v3 + 0x1a) = 1;
  }
  return 0;
}

} /* extern "C" */
