/* NON_MATCHING: first finalizer-registration call is replaced by a NOP without a target relocation. */
#include "common.h"
extern "C" {
extern u8 DAT_0061a404;extern u8 entry;
u8 *_ZN10FloatStateC1Ev(void *object);void FUN_003e329c(void *object);
void emptyStub_002f4370(void *object,void(*destroy)(void*),void *module);
/* Initializes the second module object and registers its finalizer. */
void FUN_0050f964(void *object){_ZN10FloatStateC1Ev(object);u8 *body=_ZN10FloatStateC1Ev(&DAT_0061a404);emptyStub_002f4370(body-1184,FUN_003e329c,&entry);}
}
