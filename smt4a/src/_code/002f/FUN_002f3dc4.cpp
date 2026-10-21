/* NON_MATCHING: compiler reserves copied-triple storage with sub sp rather than saved argument registers. */
#include "common.h"
extern "C" {
struct Triple { u32 first, second, third; };
void FUN_002e9b30(void *object, u32 mode, const Triple *value, u32 enabled);
/* Forwards a triple using insertion mode two. */
void FUN_002f3dc4(void *object, const Triple *value) {
    Triple copy = *value;
    FUN_002e9b30(object, 2, &copy, 1);
}
}
