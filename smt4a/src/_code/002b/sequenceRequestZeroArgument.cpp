#include "common.h"
extern "C" {
s32 asdSequenceRequest(s32 sequence,const void *data,s32 size);
/* Request sequence twenty-one with its zero-valued argument. */
void sequenceRequestZeroArgument(void) { u32 argument=0; asdSequenceRequest(21,&argument,4); }
}
