/* NON_MATCHING: tag dispatch and intrusive-list allocation/zero lifetimes differ; all successful copies return 1 and allocation failure returns 0. */
#include "gfx/Variant.h"

extern "C" {
void *FUN_004387f0(void *allocator, u32 units);
void FUN_004387bc(void *allocator, void *block, u32 units);

// Copy a tagged value, including owned child values, using the supplied replacement token.
u32 FUN_005153f0(Variant *destination, const Variant *source, const u32 *token, void *allocator)
{
    if (source->type == 1) {
        destination->type = 1;
        destination->value = *token;
    } else if (source->type == 2) {
        u16 argument = source->halfArg;
        u32 value = *token;
        destination->type = 2;
        destination->halfArg = argument;
        destination->value = value;
    } else if (source->type == 3) {
        destination->type = 3;
        destination->value = *token;
        destination->allocator = allocator;
        VariantChildNode *sentinel = reinterpret_cast<VariantChildNode *>(&destination->children);
        if (allocator != NULL) {
            VariantChildNode *child = destination->children.next;
            while (child != sentinel) {
                VariantChildNode *next = child->next;
                FUN_004387bc(destination->allocator, child, 1);
                child = next;
            }
            destination->allocator = NULL;
            destination->children.previous = sentinel;
            destination->children.next = sentinel;
        }
        destination->allocator = source->allocator;
        const VariantChildNode *sourceSentinel = reinterpret_cast<const VariantChildNode *>(&source->children);
        for (const VariantChildNode *child = source->children.next; child != sourceSentinel; child = child->next) {
            VariantChildNode *copy = (VariantChildNode *)FUN_004387f0(destination->allocator, 1);
            if (copy == NULL)
                return 0;
            copy->previous = destination->children.previous;
            copy->next = sentinel;
            destination->children.previous = copy;
            copy->previous->next = copy;
            copy->value = child->value;
        }
    } else if (source->type == 4) {
        u8 argument = source->byteArg;
        u32 value = *token;
        destination->type = 4;
        destination->byteArg = argument;
        destination->value = value;
    }
    return 1;
}
}
