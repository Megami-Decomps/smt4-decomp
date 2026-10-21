/* NON_MATCHING: compiler emits extra explicit zero-return branches. */
#include "common.h"
extern "C" {
u32 FUN_0040ab8c(void *object);
/* Tests whether the held object is ready. */
bool FUN_004d87e4(void **holder) { return *holder != NULL && FUN_0040ab8c(*holder) != 0; }
}
