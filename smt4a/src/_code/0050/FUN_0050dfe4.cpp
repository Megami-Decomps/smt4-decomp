/* NON_MATCHING: compiler folds owner recovery into field offsets and omits retail pointer moves. */
#include "common.h"
struct GlobalState {u8 unk00[8];u8 body[52];u32 state;u8 active;};
extern "C" {
u8 *FUN_0043907c();extern u8 entry;
void FUN_003f2c5c(void *object);
void emptyStub_002f4370(void *object,void (*destroy)(void *),void *module);
/* Initializes the global object's state and registers its finalizer. */
void FUN_0050dfe4(){u8 *body=FUN_0043907c();GlobalState *object=(GlobalState *)(body-8);object->state=0;object->active=1;emptyStub_002f4370(object,FUN_003f2c5c,&entry);}
}
