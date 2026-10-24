/* NON_MATCHING: compiler uses r1 for the tag copy and delays the child-source argument move. */
#include "common.h"
extern "C" {
struct CopyObject { u8 kind; u8 unk01[7]; u8 child; };
void _ZN16Obj55a87cPayloadC1ERKS_(void *object, const void *source);
/* Copies the outer tag and constructs the embedded object. */
void FUN_00301c66(CopyObject *output, const CopyObject *source, const void *childSource) {
    output->kind = source->kind;
    _ZN16Obj55a87cPayloadC1ERKS_(&output->child, childSource);
}
}
