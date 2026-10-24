/* NON_MATCHING: instructions match (the first __aeabi_atexit is now a NOP); retail's literal pool holds one more word than the built one, so the pool offsets differ. */
#include "common.h"

extern "C" {

extern u8 DAT_0061a404;
extern u8 entry;

u8 *_ZN10FloatStateC1Ev(void *object);
void FUN_003e329c(void *object);
int __aeabi_atexit(void *object, void (*destroy)(void *), void *dso);
void emptyStub_002f4370(void *object, void (*destroy)(void *), void *module);

/* Initializes the two module objects and registers their finalizers (the first registration is removed from retail). */
void FUN_0050f964(void *object)
{
    u8 *first = _ZN10FloatStateC1Ev(object);
    __aeabi_atexit(first - 1184, FUN_003e329c, &entry);
    u8 *body = _ZN10FloatStateC1Ev(&DAT_0061a404);
    emptyStub_002f4370(body - 1184, FUN_003e329c, &entry);
}

} /* extern "C" */
